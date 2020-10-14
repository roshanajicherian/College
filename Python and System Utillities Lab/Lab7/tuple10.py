tuple1 = (int(input()) for i in range(20))
l = []
for i in tuple1:
    if i % 2 == 0:
        l.append(i)
tuple2 = tuple(l)
print(tuple2)
