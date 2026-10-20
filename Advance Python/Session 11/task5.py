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
        UPDATE playlists
        SET name = %s
        WHERE name = %s
    """, ("Chill Hits", "Chill Vibes"))

    connection.commit()

    if cursor.rowcount > 0:
        print("Playlist updated successfully!")
    else:
        print("Playlist not found or name unchanged.")

except pymysql.MySQLError as e:
    print("Database error:", e)

finally:
    if connection and connection.open:
        connection.close()
        print("Connection closed")