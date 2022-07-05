# Christofer Jones
# Proj09Runner

import re

def run(myTuple, myWord):

    my_name = 'Christofer Jones'

    print('I certify that this program is my own work')
    print('and is not the work of others. I agree not')
    print('to share my solution with others.')
    print(my_name + '\n')

    print(myWord)
    print(myTuple)

    joeStr = re.compile(myWord)
    myList = filter(lambda myWord : joeStr.search(myWord), myTuple)

    return myList
  
