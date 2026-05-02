menu = {
    1: ("Apple",  0.50),
    2: ("Banana", 0.30),
    3: ("Milk",   1.20),
    4: ("Bread",  2.00),
}

inventory = {}
total = 0.0


print("""--- Shop Menu ---
1. Apple    $0.50
2. Banana   $0.30
3. Milk     $1.20
4. Bread    $2.00
5. Done""")


while True:
    choice = int(input("Enter the item number to buy (or 5 to checkout): "))

    if choice == 5:
        print("Proceeding to checkout...")
        break

    if choice in menu:
        total += menu[choice][1]
        if menu[choice][0] in inventory:
            inventory[menu[choice][0]] += 1
        else:
            inventory[menu[choice][0]] = 1

        print(f"Added {menu[choice][0]}. Total: ${total:.2f}")
    else:
        print("Invalid item number. Please try again.")


print("--- RECEIPT ---")
for item_name in inventory:
    price_per_item = None
    for menu_key in menu:
        if menu[menu_key][0] == item_name:
            price_per_item = menu[menu_key][1]
            break

    quantity = inventory[item_name]
    print(f"{item_name}   x{quantity}   ${price_per_item:.2f}")
print("-------------")
print(f"Total: ${total:.2f}")
print("Thank You!")
