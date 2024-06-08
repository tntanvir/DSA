from django.shortcuts import render,redirect
from .   import forms
from musician import models
from django.http import HttpResponse
from django.views.generic import CreateView,UpdateView
from django.urls import reverse_lazy
# Create your views here.
# def musician(request):
#     if request.method =='POST':
#         form = forms.Musician(request.POST)
#         if form.is_valid():
#             form.save()
#             return redirect('home')
#     else:
#         form = forms.Musician()
#     return render(request,'musician.html',{'form':form})

class musician(CreateView):
    model = models.MusicianForm
    form_class = forms.Musician
    template_name ='musician.html'
    success_url = reverse_lazy('home')

    def is_valid(self, form):
        return super().is_valid(form)


# def edit(request,id):
#     # return HttpResponse(id)
#     data = models.MusicianForm.objects.get(pk=id)
#     print(data)
#     form = forms.Musician(instance=data)
#     if request.method =='POST':
#         form = forms.Musician(request.POST,instance=data)
#         if form.is_valid():
#             form.save()
#             return redirect('home')
#     return render(request,'musician.html',{'form':form})
class edit(UpdateView):
    model = models.MusicianForm
    form_class = forms.Musician
    template_name ='musician.html'
    pk_url_kwarg='id'
    success_url = reverse_lazy('home')

def delete(request,id):
    data = models.MusicianForm.objects.get(pk=id)
    data.delete()
    return redirect('home')