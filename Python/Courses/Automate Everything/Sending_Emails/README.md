## Gmail App Password

We wil be sending emails with Python. There are a few requirements for this:

1. You need a Gmail account.

2. You need to create an **"App Password"** for your Gmail account. The normal password may also work but sometimes it does not for security reasons. To create an app password follow these steps:

   - Turn on the 2-Step Verification option for your Gmail account on this the [Google Account security page](https://myaccount.google.com/security).

   - After turning on the 2-step verification, again on the **security page**, click over **App Passwords** and create an app and copy the password that will show on the screen after the app is created.

   - Keep that password ready to use in the scripts.

With that, Google gives the green light to your app so your app can log in to your Gmail account and send out emails successfully.

## Requirements

The requirements are listed in **[requirements.txt](./requirements.txt)** file. Install it using command :

```Python
pip install -r requirements.txt
```

## Environments Variables

Sensitive info should be kept in environment variables. For this, create `.env` file in the folder and see **[.env.example](./.env.example)** file on how to assign the required values.
