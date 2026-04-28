grades = []

for x in range(5):
    s = float(input(f"Enter score {x + 1}: "))
    grades.append(s)

avg = sum(grades) / len(grades)

print(f"Average: {avg}")

if avg >= 90:
    print("Grade: A")
elif avg >= 80:
    print("Grade: B")
elif avg >= 70:
    print("Grade: C")
elif avg >= 60:
    print("Grade: D")
else:
    print("Grade: F")
