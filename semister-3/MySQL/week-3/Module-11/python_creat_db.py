import mysql.connector as connector

db=connector.connect(
    host= "localhost",
    user= "root",
    passwd="tanvir"


)
print(db)

cursor=db.cursor()

db_name="python_test_db"
sql_query = "CREATE DATABASE "+db_name

cursor.execute(sql_query)