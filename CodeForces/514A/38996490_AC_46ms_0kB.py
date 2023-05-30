x = input()
x = [int(i) for i in x]
for i in range(len(x)):
	if x[i] > 4 and not(i == 0 and x[i] == 9):
		x[i] = str(9 - x[i])
	else:
		x[i] = str(x[i])
 
print("".join(x))