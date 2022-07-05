# Christofer Jones
# Proj08Runner

def run(myListA, char):

    myName = 'Christofer Jones'

    print('I certify that this program is my own work')
    print('and is not the work of others. I agree not ')
    print('to share my solution with others.')
    print(myName)

    print(char)
    print(myListA)

    myListB = []

    for word in myListA:
        if char not in word:
            myListB.append(word)

    return myListB
