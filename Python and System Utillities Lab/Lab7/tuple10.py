l = []
for i in range(20):
    x = int(input())
    l.append(x)
tuple1 = tuple(l)
l = []
for i in tuple1:
    if i % 2 == 0:
        l.append(i)
tuple2 = tuple(l)
print(tuple2)
