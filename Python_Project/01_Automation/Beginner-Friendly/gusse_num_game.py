import random

def guess_game():
    number = random.randrange(1, 10)
    guess = 0

    while guess != number:
        guess = int(input("Guess a number between 1 and 10: "))
        if guess == number:
            print("🎉 Sahi Pakde Ho! You guessed it right.")
        else:
            print("❌ Galat! Dubara try karo.")

guess_game()
