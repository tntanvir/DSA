from django.urls import path
from .  import views

urlpatterns = [
    path('',views.AddTask,name='AddTask'),
    path('edit/<int:id>',views.TaskEdit,name='TaskEdit'),
    path('delete/<int:id>',views.TaskDelete,name='TaskDelete'),
]