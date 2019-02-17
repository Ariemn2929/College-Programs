#purchase amount
#state and county tax:.02 and .04
#display; purchase amount(PA)//state tax(SST)//county tax(CST)//total tax(TST)//
#total sale amount(TSA)

PA=float(input("What is your purchase amount? "))
SST=.02*PA
CST=.04*PA
TST=SST+CST
TSA=PA+TST
print("Your purchase amount is $",format(PA,',.2f'))
print("The state sales tax is $",format(SST,'.2f'))
print("The county sales tax is $",format(CST,'.2f'))
print("The total sales tax is $",format(TST,'.2f'))
print()
print("Your total sale amount is $",format(TSA,',.2f'))
