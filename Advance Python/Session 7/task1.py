class InstaStory:
    def share(self):
        print("Sharing an image story")


class WhatsAppStory(InstaStory):
    def share(self):
        print("Sharing a text status")


story1 = InstaStory()
story2 = WhatsAppStory()

story1.share()
story2.share()