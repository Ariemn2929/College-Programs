# This program will display the steps necessary
# to start a car
def main():
    start()
    input("Press Enter to see Step 1.")
    step1()
    input("Press Enter to see Step 2.")
    step2()
    input("Press Enter to see Step 3.")
    step3()
    input("Press Enter to see Step 4.")
    step4()

def start():
    print("This program will display the steps")
    print("neccessary to start a car.")
    print("There are 4 steps in the process.")
    print()

def step1():
    print("The first step is to get your keys")
    print("and unlock the doors and get into the")
    print("driver seat.")
    print()

def step2():
    print("The next step is to put the keys ")
    print("into the ignition.")
    print()

def step3():
    print("The third step is to turn the key")
    print("to the starter postion for 1-3 seconds")
    print("then let the key turn to rest position")
    print()

def step4():
    print("If the engine didn't start then repeat")
    print("step 3, if it did start then proceed to")
    print("put the car into gear and drive.")

main()
