range_low = int(input())
range_high = int(input())
for i in range(range_low, range_high):
    if i % 5 == 0 and i % 7 == 0:
        print(i)
