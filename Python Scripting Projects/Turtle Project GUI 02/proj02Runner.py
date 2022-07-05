# Christofer Jones
# Proj02Runner

print('I certify that this program is my own work')
print('and is not the work of others. I agree not')
print('to share my solution with others.')
print('Christofer Jones\n')
print('I certify that this program is my own work')
print('and is not the work of others. I agree not')
print('to share my solution with others.')
print('Christofer Jones')

import turtle

# Define the Classes and Modules

class Runner():

    my_name = 'Christofer Jones'
    
    def __init__(self, new_value):
        
        self.value = new_value

    def run(self):
        aTurtle = turtle.Turtle()
        aTurtle.shape('turtle')
        aTurtle.pensize(5)

        aTuple = (self.value, aTurtle, self.my_name)

        return(aTuple)

