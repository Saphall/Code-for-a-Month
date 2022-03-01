'''
Sends email to multiple users listed in .csv file.
'''
import os
import pandas
import yagmail
from pathlib import Path
from dotenv import load_dotenv


env_path = PATH = Path(".") / ".env"
load_dotenv(dotenv_path=env_path)

sender = os.environ['SENDER_MAIL']
yag = yagmail.SMTP(user=sender, password=os.environ['APP_PASSWORD'])

subject = '~Email Automation~'
df_contacts = pandas.read_csv('./files/contacts.csv')
for index, row in df_contacts.iterrows():
    contents = f"""
                Hi {row['name']} !
                Here is the content of the automated email!
                (: Automation :)
            """
    yag.send(to=row['email'], subject=subject, contents=contents)
    print(f"[+] Email sent to {row['name']}!")
