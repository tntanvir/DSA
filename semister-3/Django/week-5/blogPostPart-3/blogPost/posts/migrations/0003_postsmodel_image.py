# Generated by Django 5.0.6 on 2024-06-06 08:18

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('posts', '0002_alter_postsmodel_author'),
    ]

    operations = [
        migrations.AddField(
            model_name='postsmodel',
            name='image',
            field=models.ImageField(blank=True, null=True, upload_to='posts/media/images/'),
        ),
    ]