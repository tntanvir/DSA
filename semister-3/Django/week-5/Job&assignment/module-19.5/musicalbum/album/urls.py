from django.urls import path
from . import views

urlpatterns = [
    path('from/',views.album.as_view(),name='album'),
    path('from/<int:id>',views.edit.as_view(),name='albumEdit'),
]