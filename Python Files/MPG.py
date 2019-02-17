#get the amount in tank
#get the miles traveled
#compute miles per gallon
#print out the mpg for user

Miles=float(input("How many miles did you get on the tank? "))
Gal=float(input("How many gallons does your tank hold? "))
MPG=Miles/Gal
print()
print("Your MPG is",format(MPG,',.1f'))
