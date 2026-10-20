import pymysql

connection = None

try:
    connection = pymysql.connect(
        host="127.0.0.1",
        port=3306,
        user="root",
        password=""
    )

    cursor = connection.cursor()

    cursor.execute("CREATE DATABASE IF NOT EXISTS music_stream")

    print("Database created successfully")

except pymysql.MySQLError as e:
    print("Error:", e)

finally:
    if connection and connection.open:
        connection.close()