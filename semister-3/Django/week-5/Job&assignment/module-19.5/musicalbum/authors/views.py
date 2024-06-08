from django.shortcuts import render,redirect
from .forms import MakeUserForm
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth import login,logout

# Create your views here.
def author(request):
    if request.method =='POST':
        forms=MakeUserForm(request.POST)
        if forms.is_valid():
            forms.save()
            return redirect('home')
    else:
        forms=MakeUserForm()
    return render(request, 'author.html',{'forms':forms,type:"SINGUP"})


def loginUser(request):
    if request.method =='POST':
        forms=AuthenticationForm(request,request.POST)
        if forms.is_valid():
            user=forms.get_user()
            login(request,user)
            return redirect('home')
    else:
        forms=AuthenticationForm()
    return render(request, 'author.html',{'forms':forms,type:"SINGIN"})
