from django.forms import BaseModelForm
from django.http import HttpResponse
from django.shortcuts import render,redirect
from . forms import AlbumForm
from . import models

from django.views.generic import CreateView,UpdateView
from django.urls import reverse_lazy

# Create your views here.
# def album(request):
#     if request.method =='POST':
#         form = AlbumForm(request.POST)
#         if form.is_valid():
#             form.save()
#             return redirect('home')
#     else:
#         form = AlbumForm()
#     return render(request, 'album.html', {'form':form})
class album(CreateView):
    model = models.Album
    form_class = AlbumForm
    template_name = 'album.html'
    success_url = reverse_lazy('home')
    def form_valid(self, form) :
        form.instance.author = self.request.user
        return super().form_valid(form)



# def edit(request,id):

#     post=models.Album.objects.get(id=id)
#     form=AlbumForm(instance=post)
#     print(post)

#     if request.method =='POST':
#         form = AlbumForm(request.POST)
#         if form.is_valid():
#             form.save()
#             return redirect('home')
  
#     return render(request, 'album.html', {'form':form})

class edit(UpdateView):
    model = models.Album
    form_class = AlbumForm
    template_name = 'album.html'
    pk_url_kwarg='id'
    success_url = reverse_lazy('home')


