limit = int(input())
speed = int(input())
tmp = speed-limit
if tmp >= 1 and tmp <=20:
    print("You are speeding and your fine is $100.")
elif tmp >= 21 and tmp <=30:
    print("You are speeding and your fine is $270.")
elif tmp >= 31:
    print("You are speeding and your fine is $500.")
else:
    print("Congratulations, you are within the speed limit!")