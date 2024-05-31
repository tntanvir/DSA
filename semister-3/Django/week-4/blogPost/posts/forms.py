from django import forms
from . models import PostsModel

class Post(forms.ModelForm):
    class Meta:
        model=PostsModel
        fields = '__all__'

    
