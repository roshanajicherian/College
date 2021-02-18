car1 = {
    'model': 'Mustang',
    'make': 'Ford',
    'year': 2019
}
print("The dictionary is : ", car1)
print("type(d) : ", type(car1))
car1['year'] = 2020
print("The dictionary afer modification is : ", car1)
car2 = {
    'model': 'Mustang',
    'make': 'Ford',
    'year': 2019
}
print(car1 == car2)
s1 = str(car1)
print(s1)
print("The keys of the dictionary is : ", car1.keys())
print("The values of the dcitionary is : ", car2.values())
k = {1, 2, 3, 'a'}
d1 = dict.fromkeys(k, 100)
print(d1)
k2 = {1, 2, 3, 4, 5}
values = [1, 2, 23, 4, 5]
d2 = dict(zip(k2, values))
print(d2)
d3 = {1: 100, 2: 200, 3: 300, 4: 400}
d3.get(3, "N")
d3.pop(2)
print(d3)
