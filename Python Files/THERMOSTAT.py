print("This program will control a thermostat")
print()
TEMP=float(input("What is the current temperature: "))
print()
TEMPSET=float(input("What would you like to set the temperature to: "))
if TEMPSET==TEMP:
    TEMP=TEMPSET
elif TEMPSET==(TEMP+2):
    TEMP=TEMPSET
elif TEMPSET==(TEMP-2):
    TEMP=TEMPSET
