# -random letter generator-
import string
var1 = string.ascii_letters
list = ''
import random
for i in range(14):
    var2 = random.choice(string.ascii_letters)
    list += var2
   # print(var2)

print(list)