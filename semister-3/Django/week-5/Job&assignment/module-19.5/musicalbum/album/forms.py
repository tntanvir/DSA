from django import forms
from . models import Album

class AlbumForm(forms.ModelForm):
    class Meta:
        model = Album
        fields = "__all__"
        widgets = {
            'release_date':forms.DateInput(format="%Y-%m-%d", attrs={"type": "date"}),
            'albumName':forms.TextInput(attrs={'placeholder':'Enter your album name'}),
            
        }