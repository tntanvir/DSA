from django.shortcuts import render,redirect
from . forms import Post
from . import models
# Create your views here.
def posts(request):
    if request.method =='POST':
        forms=Post(request.POST)
        if forms.is_valid():
            forms.save()
            return redirect('home')
    else:
        forms=Post()
    return render(request,'posts.html',{'forms':forms})
def editposts(request,id):
    post=models.PostsModel.objects.get(id=id)
    forms=Post(instance=post)

    if request.method =='POST':
        forms=Post(request.POST,instance=post)
        if forms.is_valid():
            forms.save()
            return redirect('home')
   
    return render(request,'posts.html',{'forms':forms})

def deletepost(request,id):
    models.PostsModel.objects.get(id=id).delete()
    return redirect('home')
