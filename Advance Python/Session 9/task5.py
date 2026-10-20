import re

def is_valid_pnr(pnr):
    return re.fullmatch(r"[0-9]{10}", pnr) is not None


pnr = input("Enter your 10-digit PNR number: ")

if is_valid_pnr(pnr):
    print("Valid PNR format")
else:
    print("Invalid PNR format")