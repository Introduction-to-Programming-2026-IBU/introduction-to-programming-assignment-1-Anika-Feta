q = input("Convert: (1) Celsius → Fahrenheit  (2) Fahrenheit → Celsius: ")

if q == "1":
    c = float(input("Enter temperature in Celsius: "))
    f = (c * 9/5) + 32
    print(f"{c}°C = {f}°F")
elif q == "2":
    f = float(input("Enter temperature in Fahrenheit: "))
    c = (f - 32) * 5/9
    print(f"{f}°F = {c}°C")
else:
    print("Try another input please.")
