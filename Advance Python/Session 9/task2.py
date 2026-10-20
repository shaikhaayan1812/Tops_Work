import re

text = "Customer review: Food was great! Contact: 9106983722. Delivery was fast."

pattern = r"\b[0-9]{10}\b"

result = re.search(pattern, text)

if result:
    print("Mobile number:", result.group())
else:
    print("No mobile number found")