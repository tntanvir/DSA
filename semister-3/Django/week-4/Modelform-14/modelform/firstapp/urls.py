from django.urls import path
from . import views

urlpatterns = [

    path('',views.home),
    path('delete/<int:roll>', views.delete,name='delete'),
]