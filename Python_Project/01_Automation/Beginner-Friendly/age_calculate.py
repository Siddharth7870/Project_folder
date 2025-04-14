def age_calculate():
    birth = int(input("Enter your birth years : "))
    current_years = 2025
    your_age = current_years - birth

    if (your_age<0 or your_age>100):
        print("enter value wrong!")
    else:
        print(f"Your age : {your_age} years!")

    
age_calculate()