# Christofer Jones
# Proj10Runner

import dbm.dumb

my_name = 'Christofer Jones'

print('I certify that this program is my own work')
print('and is not the work of others. I agree not')
print('to share my solution with others.')
print(my_name,'\n')

def populateIt(myKeys, myValues, databaseName):

    db = dbm.open('database', 'c')

    for i in range(len(myKeys)):
        db[myKeys[i]] = myValues[i]

    db.close()

def printIt(myKeys, myValues, databaseName):

    db = dbm.open('database', 'r')
    
    for i in db:
        print("key:", i, "value:", db[i])
   
    db.close()
