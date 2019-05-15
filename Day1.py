'''Good morning! Here's your coding interview problem for today.

This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?'''

def checkFunction(inputList, k):
    '''Naive solution simply checks for existence, can we do optimisation and if so what savings could be expected. Missing the bonus point here.
    '''

    newlist = []

    for x in inputList:
        newlist.append(k-x)

    for y in newlist:
        if y in inputList:
            return True

    return False

def test():
    inputList = [10, 15, 3, 7]
    k = [17,10,81,0,-5,1]
    for each in k:
        print(str(checkFunction(inputList, each)))

test()
