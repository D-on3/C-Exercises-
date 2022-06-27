#!/usr/bin/python3

import string
import random # define the random module
from random import randint # importing randint from random module in order to create a random lenght of string.
S = randint(0,22)  # number of characters in the string.
# call random.choices() string module to find the string in Uppercase + numeric data.
ran = ''.join(random.choices(string.ascii_uppercase + string.digits, k = S))
print(str(ran)) # print the random data
alphabet= 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
counter_letters = 0
counter_numbers = 0
for i in ran:
    if i in  alphabet or i in alphabet.lower():
        counter_letters += 1
    elif i in '1' or i in '2' or i in '3' or i in '4' or i in '5' or i in '6' or i in '7' or i in '8' or i in '9' or i in '0':
        counter_numbers += 1

print(f'Numbers: {counter_numbers}')
print(f'Letters: {counter_letters}')
print(f'Length the string: {len(ran)}')
