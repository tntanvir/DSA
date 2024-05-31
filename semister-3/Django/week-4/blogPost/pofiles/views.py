from django.shortcuts import render,redirect
from . forms import ProfileForm
# Create your views here.
def pofiles(request):
    if request.method =='POST':
        forms=ProfileForm(request.POST)
        if forms.is_valid():
            forms.save()
            redirect('pofiles')

    else:
        forms=ProfileForm()
    return render(request, 'profiles.html',{'forms':forms})