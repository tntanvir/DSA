from django.urls import path,include
from . import views

urlpatterns = [
    path('',views.author,name='author'),
    path('login/',views.loginUser,name='loginUser'),
   
]
