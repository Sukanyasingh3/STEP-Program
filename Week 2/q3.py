Users=['Alice', 'Bob']
PurchaseHistory=['Phone']

''' if str(input("Are u a new user?"))=="Yes":
    name=str(input("Enter your name"))
    Users.append(name)'
'''

name=str(input("Enter customer name: "))

item = str(input("Enter purchased item: "))
PurchaseHistory.append(item)

print("Updated Purchase History: ", PurchaseHistory)

Recommendations= {"Laptop":"Laptop Case", "Phone":"Charger"}

print("Recommended Product:",Recommendations[item])









