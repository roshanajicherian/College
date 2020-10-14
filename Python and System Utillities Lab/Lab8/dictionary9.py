d = {'1': 1, '2': 2, '3': None}
print(d)
d = {key: value for (key, value) in d.items() if value is not None}
print(d)
