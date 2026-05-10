import random

secret = random.randint(1, 10)
guesses = 0

while True:
    try:
        guess = int(input("Guess a number between 1 and 10: "))
        guesses += 1
        if guess == secret:
            print(f"Congratulations! You got it in {guesses} guesses.")
            break
        elif guess < secret:
            print("Too low!")
        else:
            print("Too high!")
    except ValueError:
        print("Please enter a valid number.")
