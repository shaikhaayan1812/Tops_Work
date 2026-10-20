import pymysql

connection = None

try:
    connection = pymysql.connect(
        host="127.0.0.1",
        port=3306,
        user="root",
        password=""
    )

    print("Connection successful")

except pymysql.MySQLError as e:
    print("Connection failed:", e)

finally:
    if connection and connection.open:
        connection.close()
        print("Connection closed")