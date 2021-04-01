import cs50

#Get number
while True:
    x = cs50.get_int("Height: ")
    if not(x < 1):
        break

#Print Pyramid
height = x
for x in range(1,x + 1):
    print(' ' * (height - x) + '#' * x + '  ' + '#' * x)