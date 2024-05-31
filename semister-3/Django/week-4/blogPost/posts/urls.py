from django.urls import path
from . import views

urlpatterns = [
    path('add/',views.posts, name='posts'),
    path('edit/<int:id>',views.editposts, name='edit'),
    path('delete/<int:id>',views.deletepost, name='delete'),
   
]