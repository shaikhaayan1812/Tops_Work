class Payment:
    def pay(self, amount):
        print("Paying", amount)


class UPI(Payment):
    def pay(self, amount):
        print("Paying", amount, "via UPI")


payment1 = Payment()
payment2 = UPI()

payment1.pay(500)
payment2.pay(500)