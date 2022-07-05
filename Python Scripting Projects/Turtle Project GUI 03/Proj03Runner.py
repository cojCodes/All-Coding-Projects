#Christofer Jones
#Proj03Runner

print('I certify that this program is my own work')
print('and is not the work of others. I agree not')
print('to share my solution with others.')
print('Christofer Jones\n')
print('I certify that this program is my own work')
print('and is not the work of others. I agree not')
print('to share my solution with others.')
print('Christofer Jones')
      
import turtle

class Runner:

    my_name = 'Christofer Jones'

    random_store = []

    def __init__(self, new_value):

        self.random_store.append(new_value)

    def run(self):

        aTurtle = turtle.Turtle()
        aTurtle.shape('turtle')
        aTurtle.pensize(5)

        aTuple = (self.random_store[1], aTurtle, self.my_name)

        return(aTuple)
