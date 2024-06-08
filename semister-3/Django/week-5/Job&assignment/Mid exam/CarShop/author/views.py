from django.shortcuts import render,redirect
from .forms import CreateUserForm,UpdateUserForm
from django.contrib.auth import login,logout
from django.contrib.auth.forms import AuthenticationForm
from car.models import OderCar
# Create your views here.
def singup(request):
    if request.method =="POST":
        form = CreateUserForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('home')
    else:
        form = CreateUserForm()
    return render(request,'auth.html',{'forms':form,type:'singup'})


def singin(request):
    if request.method =="POST":
        form = AuthenticationForm(data=request.POST)
        if form.is_valid():
            user = form.get_user()
            login(request,user)
            return redirect('profile')
    else:
        form = AuthenticationForm()
    return render(request,'auth.html',{'forms':form,type:'singin'})
def profile(request):
    order=OderCar.objects.filter(user=request.user)
    return render(request,'profile.html',{'order':order})

def profileEdit(request):
    if request.method =="POST":
        form = UpdateUserForm(request.POST,instance=request.user)
        if form.is_valid():
            form.save()
            return redirect('profile')
    else:
        form = UpdateUserForm(instance=request.user)
    return render(request,'profileEdit.html',{'forms':form})


def logoutUser(request):
    logout(request)
    return redirect('singin')