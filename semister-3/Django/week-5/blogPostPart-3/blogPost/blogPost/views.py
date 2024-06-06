from django.shortcuts import render
from posts.models import PostsModel



# Create your views here.
def home(request):
    data=PostsModel.objects.all()
    # print(data)
    return render(request, 'home.html',{'data':data})