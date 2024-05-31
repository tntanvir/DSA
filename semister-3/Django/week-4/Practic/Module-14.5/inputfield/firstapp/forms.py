from django import forms
from . models import user_model


class UserForm(forms.Form):
    name = forms.CharField(label='Enter Name', max_length=100)
    email = forms.EmailField(label='Enter Email')
    password = forms.CharField(widget = forms.PasswordInput())
    roll_number = forms.IntegerField( 
                     help_text = "Enter 6 digit roll number"
                     ) 
    comment = forms.CharField(widget=forms.Textarea(attrs={
        'rows': 5,
        'cols': 50,
    }))
    birth_date = forms.DateField(widget=forms.DateInput(attrs={'type': 'date'}))
    BIRTH_YEAR_CHOICES = ['1980', '1981', '1982']
    birth_year = forms.DateField(widget=forms.SelectDateWidget(years=BIRTH_YEAR_CHOICES))
    value = forms.DecimalField()
    FAVORITE_COLORS_CHOICES = [
    ('blue', 'Blue'),
    ('green', 'Green'),
    ('black', 'Black'),
    ]
    favorite_color = forms.ChoiceField(choices=FAVORITE_COLORS_CHOICES)
    agree = forms.BooleanField()
    FAVORITE_COLORS_CHOICES = [
    ('blue', 'Blue'),
    ('green', 'Green'),
    ('black', 'Black'),
    ]
    favorite_colors = forms.MultipleChoiceField(widget=forms.CheckboxSelectMultiple,choices=FAVORITE_COLORS_CHOICES,)
    favorite_color = forms.ChoiceField(widget=forms.RadioSelect, choices=FAVORITE_COLORS_CHOICES)


class UserFormModel(forms.ModelForm):
    class Meta:
        model = user_model
        fields = '__all__'
        labels={
            'name':'username',
            'email_field':'email',

        }
        widgets  = {
            'name' : forms.TextInput(),
            'date_field': forms.DateInput(),
            'date_time_field': forms.DateTimeInput(),
            'email_field': forms.EmailInput(),
        }
        help_texts = {
            'name': 'Enter your name',
            'email_field': 'Enter your email',

        }
        error_messages = {
            'name': {'required' : 'Your name is required'},
            'email_field': {'required' : 'Your name is required'}
            }


