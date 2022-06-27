#!/usr/bin/python3
weight = 80
#TODO: IN CASE THAT THER MUST BE INPUTED VALUE FROM THE USER
#weight = int(input())
height = 1.71
#TODO: IN CASE THAT THER MUST BE INPUTED VALUE FROM THE USER
#height = int(input())
bmi = (weight/height**2)
if bmi < 24.9:
    print('you rock')
else:
    print('more training, less eating')
