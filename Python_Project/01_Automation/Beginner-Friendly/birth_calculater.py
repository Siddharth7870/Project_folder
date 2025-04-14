
def birth_calculate():
    age = int(input("Enter your age : "))
    current_year = 2025
    your_birth = current_year - age

    if (age < 0):
        print("Enter your birth wrong!")
    else:
        print(f"Your birth years : {your_birth} years!")


birth_calculate() # function call