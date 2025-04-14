

print("=================== Babasaheb Bhimrao Ambedkar university Lucknow ===================")

students = { }

students_num = int(input("Enter number of students : "))

for i in range(students_num):
    name = input("Enter your name : ")
    s1 = int(input("Enter your sessional_1 marks(out of 10) : "))
    s2 = int(input("Enter your sessional_2 marks(out of 10) : "))
    assign = int(input("Enter your assignment marks(out of 10) : "))
    endsem = int(input("Enter your endsemester marks(out of 70) : "))
    total_marks = s1 + s2 + assign + endsem

    students[name] =[ s1 , s2 ,assign , endsem ,total_marks]
    print()

# printing the result table
print("=================== Babasaheb Bhimrao Ambedkar university Lucknow ===================")
print("\n{:<14} {:>5} {:>5} {:>8} {:>8} {:>10}".format("student name","S1","S2","Assign","End_sem","Tatal_marks"))
print("="*50)
for name, marks in students.items():
    print("{:<14} {:>5} {:>5} {:>8} {:>8} {:>10}".format(name, marks[0], marks[1], marks[2], marks[3], marks[4]))
