Items = {'Burger':5, 'Pizza':8, 'Coffee':3}
Order=[]
Quantity=[]

n = int(input("No. of itmes in order: "))
Total = int(0); 
for i in range(n):         
    a= str(input ("Enter item name: "))
    Order.append(a)

    b= int(input ("Enter quantity: "))
    Quantity.append(b)

    Total+=Total+ (b * Items[a])

    print()

print("Bill Summary")

for i in range(n):
    print(Order[i],'x',Quantity[i])

print("Total Bill: $", Total)


