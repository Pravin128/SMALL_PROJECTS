print("WELCOME TO MY COMPUTER QUIZ!")
playing=input("do tou want to play? ")
if playing.lower() != "yes":   #'.lower' for  converting string to lower case
    quit()   #ends the quiz if you do not want to play

print("okay! lets play :)")

score=0  #new variable to count score
score1=0  #to calculate number of incorrect questions

answer=input("what is full form of CPU? ")   #this question no.1
if answer.lower()=="central processing unit":  #check wheather answer is correct by if else
    print("correct!")
    score+=1    #add one mark in score
else:
    print("incorrect!")
    score1+=1


answer=input("what does WHO stands for? ")   #this question no.2
if answer.lower()=="world health organisation":
    print("correct!")
    score+=1   #add one mark in score
else:
    print("incorrect!")
    score1+=1


answer=input("GPU stands for? ")   #this question no.3
if answer.lower()=="graphics processing unit":
    print("correct!")
    score+=1  #add one mark in score
else:
    print("incorrect!")
    score1+=1



answer=input("what is the full form of HTML? ")   #this question no.4
if answer.lower()=="hyper text markup language":
    print("correct!")
    score+=1  #add one mark in score
else:
    print("incorrect!")
    score1+=1


answer=input("what does HTTP stands for? ")  #this question no.5
if answer.lower()=="hyper text transfer protocol":
    print("correct!")
    score+=1   #add one mark in score
else:
    print("incorrect!")
    score1+=1


print(f"you got {str(score)} questions correct!!!")  #print total number of correct questions
print(f"tou got {str(score1)} questions incorrect!!!")  #print number of incorrect questions
print(f"you got {str((score/5)*100)} %")  #print percentage user got
