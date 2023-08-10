no1 = input("Enter First Number :")
operator = input("Enter Operator : +,-,*,/ ---> ")
no2 = input("Enter Second Number :")

no1 = int(no1)
no2 = int(no2)

if operator == "+":
    print(no1 + no2)
elif operator == "-":
    print(no1 - no2)
elif operator == "*":
    print(no1 * no2)
elif operator == "/":
    print(no1 / no2)
else:
    print("I can't Define")