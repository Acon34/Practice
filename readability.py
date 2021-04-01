import cs50

# get input
text = cs50.get_string('Text: ')

# variables
words = x = l = s = 0

# loop entire string
for x in range(len(text)):
    # count letters
    if text[x].isalnum():
        l += 1
    # count words
    if text[x].isspace():
        words += 1
    # count sentences
    if text[x] in ['.', '?', '!']:
        s += 1

words += 1
L = l * 100 / words
S = s * 100 / words
grade = 0.0588 * L - 0.296 * S - 15.8

if grade >= 16:
    print('Grade 16+')
    
elif grade < 1:
    print('Before Grade 1')
        
else:
    print(f'Grade {round(grade)}')