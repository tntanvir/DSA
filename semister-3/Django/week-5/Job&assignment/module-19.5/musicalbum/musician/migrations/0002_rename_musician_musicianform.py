# Generated by Django 5.0.6 on 2024-05-31 14:54

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('album', '0004_alter_album_num_stars'),
        ('musician', '0001_initial'),
    ]

    operations = [
        migrations.RenameModel(
            old_name='Musician',
            new_name='MusicianForm',
        ),
    ]
