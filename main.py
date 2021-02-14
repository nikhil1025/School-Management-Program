# New School Management System
import os
import time

students = [["Raj Ratan", 5, 67],
            ["Mohini Chauhan", 3, 82],
            ["Rohit Kumar", 6, 74]]
teachers = [["Amrendra Pradhan", "Maths", 70000],
            ["Rohini Patnayak", "Biology", 70000],
            ["Richa Mishra", "Physics", 65000]]
staffs = [["Deepak Singh", "Watchman", 15000],
          ["James Willy", "Peon", 20000],
          ["Nidhi Krishnann", "Consultant", 25000]]


def header_info():
    os.system("cls")
    print("*****************************************************\n"
          "*         Welcome To Oxford Public School           *\n"
          "*****************************************************\n"
          "*         School Management System v0.0.1           *\n"
          "*****************************************************\n\n\n")


def main_menu():
    header_info()
    print("Select your portal: -\n\n"
          "1. (Student's Section)\n"
          "2. (Teacher's Section)\n"
          "3. (Staff's Section)\n"
          "4. (New Entry)\n"
          "5. (Exit)\n\n")
    my_option = choice("Enter your choice...  ")

    if int(my_option) == 1:
        student_menu()
    elif int(my_option) == 2:
        teacher_menu()
    elif int(my_option) == 3:
        staff_menu()
    elif int(my_option) == 4:
        new_entry()
    elif int(my_option) == 5:
        header_info()
        good_bye_message()
        exit()
    else:
        print("\nWrong Choice\nRefreshing...")
        time.sleep(3)
        os.system("cls")
        main_menu()


def new_entry():
    os.system("cls")
    header_info()
    entry_type = choice("Enter type\n"
                        "1. Teacher\n"
                        "2. Student\n"
                        "3. Staff\n"
                        "4. Main menu\n\n"
                        "=> ")
    if int(entry_type) == 1:
        name = choice("Name =")
        salary = choice("Subject =")
        subject = choice("Salary =")
        teachers.append([name, salary, subject])
        print("Success: Added!!!\n Returning back to main menu...")
        choice("Press Enter <--")
        main_menu()

    elif int(entry_type) == 2:
        name = choice("Name =")
        roll = choice("Roll No. =")
        marks = choice("Marks =")
        students.append([name, roll, marks])
        print("Success: Added!!!\n Returning back to main menu...")
        choice("Press Enter <--")
        main_menu()

    elif int(entry_type) == 3:
        name = choice("Name =")
        salary = choice("Post =")
        post = choice("Salary =")
        staffs.append([name, salary, post])
        print("Success: Added!!!\n Returning back to main menu...")
        choice("Press Enter <--")
        main_menu()

    else:
        print("Error: Wrong Choice!!!\n Returning back to main menu...")
        choice("Press Enter <--")
        main_menu()


def student_info(index):
    header_info()
    print("Name ", students[index][0], sep="= ")
    print("Roll No. ", students[index][1], sep="= ")
    print("Marks ", students[index][2], sep="= ")
    print("\n\n")
    no_do = choice("Press Enter to Return to Student menu...")
    student_menu()


def teacher_info(index):
    header_info()
    print("Name ", teachers[index][0], sep="= ")
    print("Subject ", teachers[index][1], sep="= ")
    print("Salary ", teachers[index][2], sep="= ")
    print("\n\n")
    no_do = choice("Press Enter to Return to Teacher menu...")
    teacher_menu()


def staff_info(index):
    header_info()
    print("Name ", staffs[index][0], sep="= ")
    print("Post ", staffs[index][1], sep="= ")
    print("Salary ", staffs[index][2], sep="= ")
    print("\n\n")
    no_do = choice("Press Enter to Return to Staff menu...")
    staff_menu()


def choice(message):
    return input(message)


def student_menu():
    total_students = len(students)
    i = 1
    header_info()
    while total_students != 0:
        print(i, students[i-1][0], sep=". ")
        total_students -= 1
        i += 1

    print(i, ". Main Menu\n", sep="")
    print("Enter the student number to get his/her Information: -")
    student_index = choice("")
    total_students = len(students)

    if student_index.isdigit():
        student_index = int(student_index)

        if 0 < student_index <= total_students:
            student_info(student_index-1)
        elif student_index == i:
            main_menu()
        else:
            print("Error: No such student here!!!\n Returning to previous menu...")
            choice("Press Enter <--")
            student_menu()
    else:
        print("Error: Wrong Choice!!!\n Returning to previous menu...")
        choice("Press Enter <--")
        student_menu()


def teacher_menu():
    total_teachers = len(teachers)
    i = 1
    while total_teachers != 0:
        print(i, teachers[i-1][0], sep=". ")
        total_teachers -= 1
        i += 1

    print(i, ". Main Menu\n", sep="")
    print("Enter the Teacher number to get his/her Information: -")
    teacher_index = choice("")
    total_teachers = len(teachers)

    if teacher_index.isdigit():
        teacher_index = int(teacher_index)
        if 0 < teacher_index <= total_teachers:
            teacher_info(teacher_index-1)
        elif teacher_index == i:
            main_menu()
        else:
            print("Error: No such Teacher here!!!\n Returning to previous menu...")
            choice("Press Enter <--")
            teacher_menu()
    else:
        print("Error: Wrong Choice!!!\n Returning to previous menu...")
        choice("Press Enter <--")
        teacher_menu()


def staff_menu():
    total_staffs = len(staffs)
    i = 1
    while total_staffs != 0:
        print(i, staffs[i-1][0], sep=". ")
        total_staffs -= 1
        i += 1

    print(i, ". Main Menu\n", sep="")
    print("Enter the Staff number to get his/her Information: -")
    staff_index = choice("")
    total_staffs = len(staffs)

    if staff_index.isdigit():
        staff_index = int(staff_index)
        if 0 < staff_index <= total_staffs:
            staff_info(staff_index-1)
        elif staff_index == i:
            main_menu()
        else:
            print("Error: No such Staff here!!!\n Returning to previous menu...")
            choice("Press Enter <--")
            staff_menu()
    else:
        print("Error: Wrong Choice!!!\n Returning to previous menu...")
        choice("Press Enter <--")
        staff_menu()


def good_bye_message():
    header_info()
    print("          ^^^^^^^^^^^^^^^^^^^            ")
    print("              GOOD BYE :)                ")
    print("          ^^^^^^^^^^^^^^^^^^^            ")
    time.sleep(3)


main_menu()
