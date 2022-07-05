#Christofer Jones
#Proj05Runner

def run(str, subStr):

    str_range = 3

    if subStr in str:
        str_mod = str[str.index(subStr)-str_range : str.index(subStr) + len(subStr) + str_range]
        return 'I certify that this program is my own work\nand is not the work of others. I agree not\nto share my solution with others.\nChristofer Jones\n'+'\n'+str+'\n'+subStr+'\n'+str_mod

    else:
        return
