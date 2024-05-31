from django import forms
from . models import MusicianForm

class Musician(forms.ModelForm):
    class Meta:
        model = MusicianForm
        fields='__all__'
        widgets={
            'first_name': forms.TextInput(attrs={'placeholder':"Enter your first name"}),
            'last_name': forms.TextInput(attrs={'placeholder':"Enter your last name"}),
            'email': forms.TextInput(attrs={'placeholder':"Enter your email"}),
            'phone_number': forms.TextInput(attrs={'placeholder':"Enter your phone number"}),
            'instrument_type': forms.TextInput(attrs={'placeholder':"Enter your instrument type"}),
        }