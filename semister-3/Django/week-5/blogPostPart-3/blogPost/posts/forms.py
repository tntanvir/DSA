from django import forms
from . models import PostsModel

class Post(forms.ModelForm):
    class Meta:
        model=PostsModel
        exclude=['author']
        # fields = '__all__'
        

    
