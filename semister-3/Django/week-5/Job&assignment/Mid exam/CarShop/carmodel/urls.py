from django.urls import path
from . import views

urlpatterns = [
    path('', views.carBrand,name='carBrand'),
]