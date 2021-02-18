range_low = int(input("Start : "))
range_high = int(input("Stop : "))
for i in range(range_low, range_high+1):
    if i % 5 == 0 and i % 7 == 0:
        print(i)
