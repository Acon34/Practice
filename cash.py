import cs50

#Get number
while True:
    cash = cs50.get_float("Change owed: ")
    if (cash > 0):
        break

cash = cash * 100
count = 0

#Count coins
while cash >= 25:
    cash = cash - 25
    count += 1

while cash >= 10:
    cash = cash - 10
    count += 1

while cash >= 5:
    cash = cash - 5
    count += 1
    
while cash >= 1:
    cash = cash- 1
    count += 1
  
#Output count 
print(count)
