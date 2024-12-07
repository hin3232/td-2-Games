import random 
computer_number=random.randint(1,100)
print ('Hello to game of Number Guessing Game :\n')
while True :
    user_number=int (input ('choose a Number between 1 to100!!!!\n '))
    if user_number==computer_number :
            print (f"YOU WON IT IS  {user_number}")
            break
    elif user_number>computer_number:
        print ("the guess is too high \n guess again\n")
    else :
        print("the guess is too low \n guess again\n")
