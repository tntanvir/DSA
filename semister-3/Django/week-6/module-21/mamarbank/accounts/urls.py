from django.urls import path
from .views import UserRegistrationView,UserLoginForm,UserLogoutForm,UserBankAccountUpdateView

urlpatterns = [
    path('register/',UserRegistrationView.as_view(),name='register' ),
    path('login/',UserLoginForm.as_view(),name='login' ),
    path('logout/',UserLogoutForm.as_view(),name='logout' ),
    path('profile/',UserBankAccountUpdateView.as_view(),name='profile' ),
]