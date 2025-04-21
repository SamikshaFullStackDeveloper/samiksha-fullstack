from datetime import datetime

day = datetime.today().weekday()

if day == 5 or day == 6:
    print ("Today is a saturday or sunday")

else: 
    print("Today is a weekday")