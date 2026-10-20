import pymysql

connection = None

try:
    connection = pymysql.connect(
        host="127.0.0.1",
        port=3306,
        user="root",
        password="",
        database="music_stream"
    )

    cursor = connection.cursor()

    cursor.execute("""
        SELECT name, song_count
        FROM playlists
        WHERE song_count > 10
    """)

    playlists = cursor.fetchall()

    print("Playlists with more than 10 songs:")

    for playlist in playlists:
        print("Name:", playlist[0], "| Songs:", playlist[1])

except pymysql.MySQLError as e:
    print("Database error:", e)

finally:
    if connection and connection.open:
        connection.close()
        print("Connection closed")