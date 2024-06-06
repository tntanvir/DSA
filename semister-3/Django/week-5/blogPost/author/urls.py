from django.urls import path
from . import views

urlpatterns = [
    path('',views.registation, name='registation'),
    path('login/',views.user_Login, name='login'),
    path('logout/',views.userLogout, name='userLogout'),
    path('profile/',views.profile, name='profile'),
    path('profile/edit/',views.UpdateUser, name='profileEdit'),
    path('profile/edit/changepassword/',views.passChange, name='changepassword'),
   
]