# Christofer Jones
# Proj07Runner

def run(str,index):

    my_name = 'Christofer Jones'

    print('I certify that this program is my own work')
    print('and is not the work of others. I agree not')
    print('to share my solution with others.')
    print(my_name+'\n')

    print(str)
    print(index)

    strBreak = str[0:index]
    strBreak2 = str[index-1:len(str)]

    myList = [strBreak, strBreak2]

    return myList
  
