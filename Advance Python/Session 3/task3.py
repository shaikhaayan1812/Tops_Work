def book_movie_ticket():
    wallet_balance = 1000

    try:
        tickets = int(input("Enter number of tickets: "))

        price_per_ticket = wallet_balance / tickets

        print("Price per ticket:", price_per_ticket)

    except ZeroDivisionError:
        print("Error: Number of tickets cannot be zero!")

    except ValueError:
        print("Error: Please enter a valid number!")


book_movie_ticket()