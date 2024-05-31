from django import forms

class ContactForm(forms.Form):
    name = forms.CharField(max_length=100)
    files = forms.FileField()
    email = forms.EmailField(max_length=100)
    age = forms.IntegerField()
    weight=forms.FloatField()
    banace=forms.DecimalField()
    chack=forms.BooleanField()
    birthday=forms.DateField(widget=forms.DateInput(attrs={'type': 'date'}))
    dateTime=forms.DateTimeField(widget=forms.DateInput(attrs={'type': 'datetime-local'}))
    size=[('s','small'), ('m','medium'),('l','large')]
    select=forms.ChoiceField(choices=size,widget=forms.RadioSelect)
    meal=[('beaf','beaf'),('rice','rice'),('poteto','poteto')]
    selectmeal=forms.MultipleChoiceField(choices=meal,widget=forms.CheckboxSelectMultiple)