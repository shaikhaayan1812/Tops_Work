import re

order_ids = ["ORD1234", "ORD5678", "ORD9999", "ORD0001"]

pattern = r"ORD[0-9]*[02468]"

for order_id in order_ids:
    if re.match(pattern, order_id) and re.fullmatch(pattern, order_id):
        print(order_id)