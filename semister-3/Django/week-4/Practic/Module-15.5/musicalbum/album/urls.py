from django.urls import path
from . import views

urlpatterns = [
    path('from/',views.album,name='album'),
    path('from/<int:id>',views.edit,name='albumEdit'),
]