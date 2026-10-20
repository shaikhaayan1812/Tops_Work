# # NameError: name 'InvalidSeatNumberError' is not defined


# # What does this error mean?
# # Python is trying to raise InvalidSeatNumberError, but that exception class has not been defined before it is used.
# # The problem is not the negative seat number itself. The problem is that Python does not know what InvalidSeatNumberError refers to.


# class InvalidSeatNumberError(Exception):
#     pass


# def book_ticket(movie_name, seat_number):
#     if seat_number <= 0:
#         raise InvalidSeatNumberError("Seat number must be positive")

#     print("Ticket booked successfully for", movie_name)


# try:
#     book_ticket("Avengers", -2)

# except InvalidSeatNumberError as e:
#     print("Error:", e)