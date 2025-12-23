sandwich_orders=['A','pastrami','BLT', 'grilled cheese','pastrami', 'reuben', 'panini', 'sub', 'pastrami']
print(sandwich_orders)

for sandwich_order in sandwich_orders:
    if sandwich_order=="pastrami":
       print("The deli is out of pastrami")

finished_sandwiches=[]
for sandwich_order in sandwich_orders:
    print(f"I made your{sandwich_order.title} sandwich")

while sandwich_orders:
    finished=sandwich_orders.pop()

    while 'pastrami' in finished_sandwiches:
        finished_sandwiches.remove('pastrami')

    print(f"Finished:{finished_sandwiches}")
    finished_sandwiches.append(finished)