

fav_apps = ("Instagram", "Zomato", "Spotify", "WhatsApp", "Flipkart")


try:
    fav_apps[0] = "YouTube"
except TypeError as error:
    print(error)
