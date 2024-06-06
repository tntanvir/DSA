from django.shortcuts import render,redirect
from . forms import Post
from . import models

from django.views.generic import CreateView
from django.urls import reverse_lazy
# Create your views here.

# def posts(request):
#     if request.method =='POST':
#         forms=Post(request.POST)
#         if forms.is_valid():
#             forms.instance.author = request.user
#             forms.save()
#             return redirect('home')
#     else:
#         forms=Post()
#     return render(request,'posts.html',{'forms':forms})

def posts(request):
    if request.method == 'POST': 
        post_form = Post(request.POST) 
        if post_form.is_valid(): 
            
            post_form.instance.author = request.user
            post_form.save() 
            # return redirect('') 
    else: 
        post_form = Post()
    return render(request, 'posts.html', {'form' : post_form})


# class addPost(CreateView):
#     model=models.PostsModel
#     template_name="posts.html"
#     form_class=Post
#     success_url=reverse_lazy('home')
#     def form_valid(self, form):
#         form.instance.author = self.request.user
#         return super().form_valid(form)


def editposts(request,id):
    post=models.PostsModel.objects.get(id=id)
    forms=Post(instance=post)

    if request.method =='POST':
        forms=Post(request.POST,instance=post)
        if forms.is_valid():
            forms.instance.author = request.user

            forms.save()
            return redirect('home')
   
    return render(request,'posts.html',{'forms':forms})

def deletepost(request,id):
    models.PostsModel.objects.get(id=id).delete()
    return redirect('home')

def postDetails(request,id):
    data=models.PostsModel.objects.get(id=id)
    return render(request,'postDetails.html',{'data':data})
