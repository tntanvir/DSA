from django.urls import path
from .views import registerUser,loginUser,logoutUser,profile,witholdpass,withoutoldpass

urlpatterns = [
    path('register/',registerUser,name='registerUser'  ),
    path('login/',loginUser,name='loginUser'  ),
    path('logout/',logoutUser,name='logoutUser'  ),
    path('profile/',profile,name='profile'  ),
    path('profile/edit/pass/witholdpass',witholdpass,name='witholdpass'  ),
    path('profile/edit/pass/withoutoldpass',withoutoldpass,name='withoutoldpass'  ),
]
