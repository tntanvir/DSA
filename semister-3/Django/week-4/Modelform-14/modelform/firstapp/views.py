from django.shortcuts import render,redirect
from . import models

# Create your views here.
def home(request):
    student = models.Student.objects.all()
    return render(request,'home.html',{'student':student})
def delete(request,roll):
    student = models.Student.objects.get(roll=roll).delete()
    return redirect('/')
