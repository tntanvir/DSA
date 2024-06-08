from django.urls import path
from musician import views

urlpatterns = [
    path('from/',views.musician.as_view(),name='musician'),
    path('from/<int:id>',views.edit.as_view(),name='musicianedit'),
    path('from/delete/<int:id>',views.delete,name='musiciandelete'),
]