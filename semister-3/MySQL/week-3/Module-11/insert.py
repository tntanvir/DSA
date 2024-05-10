import mysql.connector as connector

db_name="python_test_db"
db=connector.connect(
    host= "localhost",
    user= "root",
    passwd="tanvir",
    database=db_name

)
print(db)

cursor=db.cursor()

sql_query = """
        INSERT INTO STUDENT(NAME,ROLL) VALUES ("TANVIR",1)
"""
cursor.execute(sql_query)
db.commit()