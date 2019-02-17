############################################################INTRO##############################################################

def Start():
    print("Skeleton thingy game")
    print()

def Character():
    print("You're a skeleton standing in an open coffin that's laying")
    print("in a freshly opened grave, before you lies a dark gloomy")
    print("forest with only one discernable path forward")
    print()
    
def Intro():
    print("You walk forward along the path but begin to hear and see starnge things")
    print("but press onward till you see a large old gothic style mansion with a dark aura")
    print("you walk up to a large door and feel compelled to enter and so you do and find ")
    print("yourself in a large entryway with a hallway before you")
    print()

#########################################################GAME START#############################################################
def HALL1():
    print("As you go forward you encounter two rooms near the start of the hallway, one left")
    CHOICE1=input("and one right, do you choose left(L), right(R), or proceed forward(F)")
    if CHOICE1==("L"):
        LEFTRM1()
    elif CHOICE1==("R"):
        RIGHTRM1()
    elif CHOICE1==("F"):
        HALL1JUNC()
    else:
        HALL1()
    print()

def HALL1REPEAT():
    print("You are back in the 1st hallway, do you choose the left room(L), do you")
    CHOICE1=input("choose the right room(R), or proceed forward down the hall(F)")
    if CHOICE1==("L"):
        LEFTRM1()
    elif CHOICE1==("R"):
        RIGHTRM1()
    elif CHOICE1==("F"):
        HALL1JUNC()
    else:
        HALL1REPEAT()
    print()

def LEFTRM1():
    print("1st left room")
    HALL1REPEAT()
    print()

def RIGHTRM1():
    print("1st right room")
    HALL1REPEAT()
    print()

def HALL1JUNC():
    print("Before you are two hallways one to the left and one to the right which hallway")
    CHOICE2=input("do you choose left(L) or Right(R) or back down the current hallway(B)")
    if CHOICE2==("L"):
        LEFTHALL1()
    elif CHOICE2==("R"):
        RIGHTHALL1()
    elif CHOICE2==("B"):
        HALL1REPEAT2()
    else:
        HALL1JUNC()
    print()

def HALL1REPEAT2():
    print("You are back in the 1st hallway, do you choose the left room(L), do you")
    CHOICE1=input("choose the right room(R), or proceed back down the hall to the junction(B)")
    if CHOICE1==("L"):
        LEFTRM1()
    elif CHOICE1==("R"):
        RIGHTRM1()
    elif CHOICE1==("B"):
        HALL1JUNC()
    else:
        HALL1REPEAT2()
    print()

################################################################2nd Section###########################################################

def LEFTHALL1():
    print("As you go forward you encounter two rooms near the start of the hallway, one left")
    CHOICE3=input("and one right, do you choose left(L), right(R), or proceed forward(F) or backward(B)")
    if CHOICE3==("L"):
          LEFTRM2()
    elif CHOICE3==("R"):
          RIGHTRM2()
    elif CHOICE3==("F"):
          LEFTHALL1()
    elif CHOICE3==("B"):
          HALL1JUNC()
    else:
          LEFTHALL1()
          
    print()

def LEFTRM2():
    print("2nd left room")
    HALL1REPEAT()
    print()

def RIGHTRM2():
    print("2nd right room")
    HALL1REPEAT()
    print()

def LEFTHALL1REPEAT():
    print("You are back in the 1st left hallway, do you choose the left room(L), do you choose the right room(R),")
    CHOICE3=input("or do you proceed forward down the hall(F), or back down the hall to the junction(B)")
    if CHOICE3==("L"):
          LEFTRM1()
    elif CHOICE3==("R"):
          RIGHTRM1()
    elif CHOICE3==("F"):
          LEFTHALL1REPEAT()
    elif CHOICE1==("B"):
          HALL1JUNCREPEATLEFT()
    else:
          LEFTHALL1REPEAT()
    print()

def HALL1JUNCREPEATLEFT():
    print("You are back in the 1st junction with the 1st right hallway forward, the entry hallway to the right")
    CHOICE2=input("do you choose to go forward(F), right(R), or back down your current hallway(B)")
    if CHOICE2==("F"):
          RIGHTHALL1()
    elif CHOICE2==("R"):
          HALL1REPEAT2()
    elif CHOICE2==("B"):
          LEFTHALL1REPEAT2()
    else:
          HALL1JUNCREPEATLEFT()
    print()

def LEFTHALL1REPEAT2():
    print("You are back in the 1st left hallway, do you choose the left room(L), do you")
    CHOICE3=input("choose the right room(R), or proceed forward down the hall(F) or back down the hall to the junction(B)")
    if CHOICE3==("L"):
          LEFTRM1()
    elif CHOICE3==("R"):
          RIGHTRM1()
    elif CHOICE3==("F"):
          LEFTHALL1REPEAT()
    elif CHOICE3==("B"):
          HALL1JUNCREPEATLEFT()
    else:
          LEFTHALL1REPEAT2()
    print()

##################################################################3rd Section##############################################################

def RIGHTHALL1():
    print("As you go forward you encounter two rooms near the start of the hallway, one left")
    CHOICE1=input("and one right, do you choose left(L), right(R), or proceed forward(F) or backward(B)")
    if CHOICE4==("L"):
          LEFTRM3()
    elif CHOICE4==("R"):
          RIGHTRM3()
    elif CHOICE4==("F"):
          RIGHTHALL1()
    elif CHOICE4==("B"):
          HALL1JUNC()
    else:
          RIGHTHALL1()
    print()

def LEFTRM3():
    print("3rd left room")
    HALL1REPEAT()
    print()

def RIGHTRM3():
    print("3rd right room")
    HALL1REPEAT()
    print()

def RIGHTHALL1REPEAT():
    print("You are back in the 1st hallway, do you choose the left room(L), do you")
    CHOICE1=input("choose the right room(R), or proceed forward down the hall(F)")
    if CHOICE1==("L"):
          LEFTRM1()
    elif CHOICE1==("R"):
          RIGHTRM1()
    elif CHOICE1==("F"):
          HALL1JUNC()
    else:
          RIGHTHALL1REPEAT()
    print()

def RIGHTHALL1REPEAT2():
    print("You are back in the 1st hallway, do you choose the left room(L), do you")
    CHOICE1=input("choose the right room(R), or proceed back down the hall to the junction(F)")
    if CHOICE1==("L"):
          LEFTRM1()
    elif CHOICE1==("R"):
          RIGHTRM1()
    elif CHOICE1==("F"):
          HALL1JUNC()
    else:
          RIGHTHALL1REPEAT2()
    print()

#############################################################################Start###################################################################

Start()
Character()
Intro()
HALL1()
