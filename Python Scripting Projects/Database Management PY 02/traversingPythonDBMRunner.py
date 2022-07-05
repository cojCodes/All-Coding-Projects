
import dbm.dumb

def run(keys,values,dbName):

    print("I certify that this program is my own work")
    print("and is not the work of others. I agree not")
    print("to share my solution with others.")
    print("Christofer Jones")

    db = dbm.open(dbName, 'c')

    #populate the database
    for i in range(len(keys)):
        db[keys[i]] = values[i]

    db.close()
