import cs50
# Keep asking user for inpt until it meets the condition
while True:
    print("Enter the Height of the Pyramid ", end="")
    n = cs50.get_int()
    if n > 0 and n < 23:
        break

# Loop for printing the entire pyramid
for i in range(n):
    # Loop for printing spaces - LEFT side
    for j in range(n - (i+1)):
        print(" ", end="")
    # Loop for printing hash-tag - LEFT side
    for k in range(i + 1):
        print("#", end="")
    # Print middle space - fixed
    print(" ", end="")
    # Loop for printing hash-tag - RIGHT side
    for l in range(i + 1):
        print("#", end="")
    #Loop for printing spaces - RIGHT side
    for m in range(n - (i +1)):
        print(" ", end="")
    print()
