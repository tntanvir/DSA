from django.http import HttpResponse
from django.shortcuts import render


def home(request):
    di={"author":"Tanvir","age":20}
    return render(request, 'home.html',di)

