
import string # Importing the string modules.The module gives us the option ot manipulate strings.
import random # define the random module
from random import randint # importing randint from random module in order to create a random lenght of string.
S = randint(0,40 )  # number of characters in the string.
# call random.choices() string module to find the string in Uppercase + numeric data.
random_string = ''.join(random.choices(string.ascii_uppercase + string.digits + string.ascii_lowercase+ string.punctuation, k = S))
print(str(random_string)) # print the random data
alphabet= 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
counter_letters = 0
counter_numbers = 0
counter_punctuation = 0 
for i in random_string:
    if i in  alphabet or i in alphabet.lower(): # check if there are some letters in the string
        counter_letters += 1                    # if there are add one to the counter 
    elif i in string.digits:                    # check if there eny numbers in the string 
        counter_numbers += 1
    elif i in string.punctuation:               # check if there are some punctiation symbols
        counter_punctuation += 1 

print(f'Numbers: {counter_numbers}')
print(f'Letters: {counter_letters}')
print(f'Punctuation: {counter_punctuation}')
print(f'Length of the string: {len(random_string)}')