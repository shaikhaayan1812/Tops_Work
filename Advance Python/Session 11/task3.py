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
        CREATE TABLE IF NOT EXISTS playlists (
            id INT PRIMARY KEY AUTO_INCREMENT,
            name VARCHAR(100),
            song_count INT
        )
    """)

    playlists = [
        ("Chill Vibes", 15),
        ("Workout Mix", 20),
        ("Late Night Songs", 8)
    ]

    cursor.executemany(
        "INSERT INTO playlists (name, song_count) VALUES (%s, %s)",
        playlists
    )

    connection.commit()

    print("Table created successfully")
    print("Three playlists inserted successfully")

except pymysql.MySQLError as e:
    print("Error:", e)

finally:
    if connection and connection.open:
        connection.close()
        print("Connection closed")