from django.shortcuts import render,redirect
from . forms import Authorfrom
# Create your views here.
def author(request):
    if request.method =='POST' :
        forms=Authorfrom(request.POST)
        print(forms)
        if forms.is_valid():
            forms.save()
            return redirect('author')
    else:
        forms=Authorfrom()
    return render(request, 'author.html',{'data': forms})