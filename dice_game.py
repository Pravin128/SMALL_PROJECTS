print("""this is the dice game
lets see in how many attempts tou can catch the number!!!""")
import random
a=1
rand=0
num=0
count=0
while a!=0:
    num=int(input("enter number: "))
    for i in range(7):
        rand=random.randint(0,6)
    print(rand)
    if num>6:
        print("please enter number less than 7")
    elif num==rand:
        print("you got it!!!")
        break
    else:
        count+=1
    a+=1
print(f"You Got It In {count} chances")

