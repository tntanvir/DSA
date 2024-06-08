from django.shortcuts import render
from .forms import ModelForm

# Create your views here.
def carBrand(request):
    if request.method=='POST':
        forms=ModelForm(request.POST)
        if forms.is_valid():
            forms.save()
    else:
        forms=ModelForm()
    return render(request, 'carBrand.html', {'forms':forms})