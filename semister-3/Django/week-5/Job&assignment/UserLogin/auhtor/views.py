from django.shortcuts import render,redirect
from .forms import MakeUser,UserDetails
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm,SetPasswordForm
from django.contrib.auth import authenticate,login,logout,update_session_auth_hash
from django.contrib.auth.decorators import login_required


# Create your views here.
def registerUser(request):
    if request.method=='POST':
        form=MakeUser(request.POST)
        if form.is_valid():
            form.save()
            return redirect('loginUser')

        else:
            messages.error(request,form.errors)
    else:
        form=MakeUser()
    return render(request,'register.html',{'form':form , 'type':'REGISTER'})


def loginUser(request):
    if request.method=='POST':
        form=AuthenticationForm(request,request.POST)
        if form.is_valid():
            name=form.cleaned_data.get('username')
            user_password=form.cleaned_data.get('password')
            user=authenticate(username=name,password=user_password)
            if user is not None:
                login(request,user)
            return redirect('profile')
    else:
        form=AuthenticationForm()
    return render(request,'register.html',{'form':form,'type':"LOGIN"} )
def logoutUser(request):
    logout(request)
    return redirect('loginUser')

@login_required
def profile(request):
    if request.method=='POST':
        form=UserDetails(request.POST,instance=request.user)
        if form.is_valid():
            form.save()
            return redirect('profile')
    else:
        form=UserDetails(instance=request.user)
    return render(request,'profile.html',{'form':form})

@login_required
def witholdpass(request):
    if request.method == 'POST':
        form=PasswordChangeForm(request.user, request.POST)
        if form.is_valid():
            form.save()
            update_session_auth_hash(request, form.user)
            return redirect('profile')
    else:
        form=PasswordChangeForm(request.user)
  
    return render(request,'passchange.html',{'form':form})

@login_required
def withoutoldpass(request):
    if request.method == 'POST':
        form=SetPasswordForm(request.user, request.POST)
        if form.is_valid():
            form.save()
            update_session_auth_hash(request, form.user)
            return redirect('profile')
    else:
        form=SetPasswordForm(request.user)
    return render(request,'passchange.html',{'form':form})
