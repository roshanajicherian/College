import calendar
def showCal(year,mont):
    print(calendar.month(year,month))
year = int(input("Year : "))
month = int(input("Month : "))
showCal(year,month)