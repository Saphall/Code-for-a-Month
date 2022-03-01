'''
Sends email to a single user.
'''
import os
import yagmail
from pathlib import Path
from dotenv import load_dotenv


env_path = PATH = Path(".") / ".env"
load_dotenv(dotenv_path=env_path)

sender = os.environ['SENDER_MAIL']
receiver = os.environ['RECEIVER_MAIL']

subject = 'Email Automation'

contents = """
Hi!
Here is the content of the automated email!
(: Automation :)
"""
yag = yagmail.SMTP(user=sender, password=os.environ['APP_PASSWORD'])
yag.send(to=receiver, subject=subject, contents=contents)
print('[+] Email Sent!')
