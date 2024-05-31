from django.shortcuts import render
from task.models import TaskModel

# Create your views here.
def task(request):
    task = TaskModel.objects.all()
    return render(request, 'task.html', {'task': task})