'''
Sending SMS using Twilio.
'''
import os
from pathlib import Path
from dotenv import load_dotenv
from twilio.rest import Client

env_path = PATH = Path(".") / ".env"
load_dotenv(dotenv_path=env_path)

account_sid = os.environ['TWILIO_ACCOUNT_SID']
auth_token = os.environ['TWILIO_AUTH_TOKEN']
client = Client(account_sid, auth_token)

message = client.messages \
                .create(
                    body="----------------- Hello, This is SMS Automation Test !",
                    from_=os.environ['TWILIO_NUMBER'],
                    to=os.environ['MOBILE_NUMBER']
                )

print('[+] SMS sent successfully!')
