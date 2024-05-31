from django.shortcuts import render,redirect
from . forms import CategoriesForm
# Create your views here.
def categories(request):
    if request.method =='POST':
        forms=CategoriesForm(request.POST)
        if forms.is_valid():
            print(forms.cleaned_data)
            forms.save()
            redirect('categories')
    else:
        forms=CategoriesForm()
    return render(request, 'categories.html', {'form':forms})