from django.shortcuts import render
from . forms import ContactForm

# Create your views here.

def froms(request):
    print(request.POST)
    # if request.method == 'POST':
    #     name=request.POST.get('username')
    #     email=request.POST.get('useremail')
    #     select=request.POST.get('select')
    #     return render(request, 'from.html', {'name':name, 'email':email,select:'select'})
    return render(request, 'from.html')

def django_forms(request):
    if request.method == 'POST':    
        forms=ContactForm(request.POST,request.FILES)
        if forms.is_valid():
            file=forms.cleaned_data['files']
            with open('./firstapp/upload/'+file.name,'wb+') as f:
                for i in file.chunks():
                    f.write(i)

            print(forms.cleaned_data)
            return render(request, 'django_forms.html',{'forms':forms})
    else:
        forms=ContactForm()
        return render(request, 'django_forms.html',{'forms':forms})