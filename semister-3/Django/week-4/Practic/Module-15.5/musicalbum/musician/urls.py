from django.urls import path
from musician import views

urlpatterns = [
    path('from/',views.musician,name='musician'),
    path('from/<int:id>',views.edit,name='musicianedit'),
    path('from/delete/<int:id>',views.delete,name='musiciandelete'),
]