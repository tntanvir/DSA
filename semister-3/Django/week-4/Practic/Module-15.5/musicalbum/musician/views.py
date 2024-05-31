from django.shortcuts import render,redirect
from .   import forms
from musician import models
from django.http import HttpResponse
# Create your views here.
def musician(request):
    if request.method =='POST':
        form = forms.Musician(request.POST)
        if form.is_valid():
            form.save()
            return redirect('home')
    else:
        form = forms.Musician()
    return render(request,'musician.html',{'form':form})
def edit(request,id):
    # return HttpResponse(id)
    data = models.MusicianForm.objects.get(pk=id)
    print(data)
    form = forms.Musician(instance=data)
    if request.method =='POST':
        form = forms.Musician(request.POST,instance=data)
        if form.is_valid():
            form.save()
            return redirect('home')
    return render(request,'musician.html',{'form':form})


def delete(request,id):
    data = models.MusicianForm.objects.get(pk=id)
    data.delete()
    return redirect('home')