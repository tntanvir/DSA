from django.shortcuts import render,redirect
from . forms import UserRegisterForm,UserUpdateForm
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm
from django.contrib.auth import authenticate,login,logout,update_session_auth_hash
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from posts.models import PostsModel
# Create your views here.
def registation(request):
    if request.method =='POST' :
        forms=UserRegisterForm(request.POST)
        print(forms)
        if forms.is_valid():
            forms.save()
            messages.success(request, "Registration successful")
            return redirect('registation')
    else:
        forms=UserRegisterForm()
    return render(request, 'author.html',{'data': forms,'type': 'login'})


def user_Login(request):
    
    if request.method =='POST' :
        form=AuthenticationForm(request,request.POST)
        if form.is_valid():
            username=form.cleaned_data.get('username')
            password=form.cleaned_data.get('password')
            user=authenticate(username=username,password=password)
            if user is not None:
                login(request,user)
                messages.info(request, f"You are now logged in as {username}")
                return redirect('profile')
            else:
                messages.error(request, "login information is not correct.")
                return render('registation')
    else:
        forms=AuthenticationForm()
    return render(request, 'author.html',{'data': forms,'type': 'login'})
def userLogout(request):
    logout(request)
    return redirect('login')

@login_required
def UpdateUser(request):
    if request.method =='POST' :
        forms=UserUpdateForm(request.POST,instance=request.user)
        print(forms)
        if forms.is_valid():
            forms.save()
            messages.success(request, "Update Profile successful")
            return redirect('profile')
    else:
        forms=UserUpdateForm(instance=request.user)
    return render(request, 'Editprofile.html',{'data': forms})


def passChange(request):
    if request.method =='POST' :
        forms=PasswordChangeForm(request.user,request.POST)
        print(forms)
        if forms.is_valid():
            forms.save()
            messages.success(request, "Update Password successful")
            update_session_auth_hash(request,forms.user)
            return redirect('profile')
    else:
        forms=PasswordChangeForm(request.user)
    return render(request, 'changePassword.html',{'data': forms})

def profile(request):
    data=PostsModel.objects.filter(author = request.user)

    return render(request, 'profile.html',{'data': data})