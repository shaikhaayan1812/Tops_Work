class Notification:
    def send(self):
        print("Sending a notification")


class EmailNotification(Notification):
    def send(self):
        print("Sending an email notification")


class SMSNotification(Notification):
    def send(self):
        print("Sending an SMS notification")


notification1 = Notification()
notification2 = EmailNotification()
notification3 = SMSNotification()

notification1.send()
notification2.send()
notification3.send()