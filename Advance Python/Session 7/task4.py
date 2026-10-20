class Content:
    def display(self, title):
        print("Title:", title)


class Movie(Content):
    def display(self, title, year):
        print("Title:", title)
        print("Year:", year)


movie1 = Movie()
movie1.display("Jawan", 2023)