from django.shortcuts import render
from album.models import Album
from musician.models import MusicianForm

def home(request):
    albums = Album.objects.all()
    # musician
    return render(request, 'home.html', {'data': albums})