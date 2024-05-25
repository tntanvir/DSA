from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def home(request):
    return render(request, 'page/page.html')
def about(request):
    return render(request, 'page/about.html')
def contect(request):
    return render(request, 'page/contect.html')