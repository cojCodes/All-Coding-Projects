#Define Class and Function

print('I certify that this program is my own work')
print('and is not the work of others. I agree not')
print('to share my solution with others.')
print('Christofer Jones')
class Runner():

    def run(aTuple):

        #Customize Turtles

        #format = name[index].attribute(specifics)

        # Turtle index 0 (turtle 1)
        aTuple[0].pensize(2)
        aTuple[0].color('red')
        aTuple[0].shape('turtle')

        # Turtle index 1 (turtle 2)
        aTuple[1].pensize(3)
        aTuple[1].color('green')
        aTuple[1].shape('circle')

        # Turtle index 2 (turtle 3)
        aTuple[2].pensize(4)
        aTuple[2].color('blue')
        aTuple[2].shape('arrow')


        #return statements/assignments
        alist = list(aTuple)
        alist.append('Christofer Jones')
        return(alist)
