from django.shortcuts import render,redirect
from . forms import AlbumForm
from . import models
# Create your views here.
def album(request):
    if request.method =='POST':
        form = AlbumForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('home')
    else:
        form = AlbumForm()
    return render(request, 'album.html', {'form':form})
def edit(request,id):

    post=models.Album.objects.get(id=id)
    form=AlbumForm(instance=post)
    print(post)

    if request.method =='POST':
        form = AlbumForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('home')
  
    return render(request, 'album.html', {'form':form})