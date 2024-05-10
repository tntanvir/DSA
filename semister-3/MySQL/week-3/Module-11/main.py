import mysql.connector as connector

db=connector.connect(
    host="localhost",
    user="root",
    password="tanvir"
    # database="cadastro"
)
print(db)