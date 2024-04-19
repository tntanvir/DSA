try:
    result=19/0
    print(result)
except Exception as e:
    print(e)
finally:
    print("finally")