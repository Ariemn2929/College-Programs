#package amount(PCKAMT),discount(DIS),total amount(TA),
#discount display(DISD),package price(PP)
PP=(99)
PCAMT=float(input("How many packages did you purchase? "))
if PCAMT >= 10 and PCAMT <= 19:
        DIS=(1.20)
        DISD=(int(20))
elif PCAMT >= 20 and PCAMT <= 49:
        DIS=(1.30)
        DISD=(int(30))
elif PCAMT >= 50 and PCAMT <= 99:
        DIS=(1.40)
        DISD=(int(40))
elif PCAMT >= 100:
        DIS=(1.50)
        DISD=(int(50))
else:
        DIS=(1)
TA=(PCAMT*PP)*DIS
print()
print("You got",format(PCAMT,','),"packages at $",(PP))
if DIS == 1:
        print("No discount applicable")
else:
        print("Discount of",(DISD),"% applied")
print("Your total purchase price is $",format(TA,',.2f'))
