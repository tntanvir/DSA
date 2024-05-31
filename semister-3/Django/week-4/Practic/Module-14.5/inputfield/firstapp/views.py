from django.shortcuts import render
from . forms import UserForm,UserFormModel

# Create your views here.
def home(request):
    if request.method =='POST':
        forms=UserForm(request.POST)
        if forms.is_valid():
            print(forms.cleaned_data)
    else:
        forms=UserForm()
    return render(request, 'forms.html',{'forms':forms})



def modelForms(request):
    if request.method =='POST':
        forms=UserFormModel(request.POST)
        if forms.is_valid():
            print(forms.cleaned_data)
    else:
        forms=UserFormModel()
    return render(request, 'modelForms.html',{'forms':forms})