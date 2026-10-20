class InvalidCouponCodeError(Exception):
    pass


def apply_coupon(coupon_code):
    valid_codes = ["SAVE50", "FOOD20", "ZOMATO10"]

    if coupon_code not in valid_codes:
        raise InvalidCouponCodeError("Invalid coupon code!")

    print("Coupon applied successfully!")


try:
    coupon = input("Enter coupon code: ")
    apply_coupon(coupon)

except InvalidCouponCodeError as e:
    print(e)