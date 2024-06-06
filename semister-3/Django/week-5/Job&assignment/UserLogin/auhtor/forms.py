from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm,UserChangeForm
from django import forms



class MakeUser(UserCreationForm):
    email = forms.CharField(widget=forms.TextInput(attrs={'id':'required'}))
    first_name = forms.CharField(widget=forms.TextInput(attrs={'id':'required'}))
    last_name = forms.CharField(widget=forms.TextInput(attrs={'id':'required'}))
    class Meta:
        model = User
        fields=['username','email','first_name','last_name']


class UserDetails(UserChangeForm):
    password=None
    class Meta:
        model = User
        fields=['username','email','first_name','last_name']

