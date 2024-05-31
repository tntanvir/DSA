from django.urls import path
from . import views

urlpatterns = [
    path('froms',views.froms,name='froms'),
    path('django_forms',views.django_forms,name='django_forms'),
]