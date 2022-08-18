'''
author : @ AmirZoyber
language : Python 3.*
'''
import collections
k = int(input())                               # Tedad charkhane ha.
passW = [int(a) for a in input()]              # K digits password.
wheels=[];counter=0 

for _ in range(k):
    wheels.append([int(a) for a in input()])   # Tartib charkhane ha

for wheel in range(len(wheels)):
    deque = collections.deque(wheels[wheel])   # Estefade az sakhtare saf! Deque

    if (wheels[wheel].index(passW[wheel])<=4):
        while(list(deque)[0]!=passW[wheel]):
            deque.rotate(-1)
            counter+=1
    elif(wheels[wheel].index(passW[wheel])>=5):
        while(list(deque)[0]!=passW[wheel]):
            deque.rotate(1)
            counter+=1
print(counter)