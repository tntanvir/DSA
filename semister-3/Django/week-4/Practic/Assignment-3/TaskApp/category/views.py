from django.shortcuts import render,redirect
from .forms import CategoryModelForm

# Create your views here.
def addCategory(request):
    if request.method == 'POST':
        form = CategoryModelForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('home')
    else:
        form = CategoryModelForm()
    return render(request,'addCategory.html',{'form':form})