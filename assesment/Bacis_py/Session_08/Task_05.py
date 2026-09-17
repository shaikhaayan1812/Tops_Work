def mask_phone_number(phone):
    return "******" + phone[-4:]

print(mask_phone_number("9876541234"))
