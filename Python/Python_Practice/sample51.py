import json


# Exception Handling
# --------------------------------------------------------------------
class StudentError(Exception):
    def __init__(self, error):
        print(error)

# --------------------------------------------------------------------


# --------------------------------------------------------------------
class Student:
    __countStudent = 0

    def __init__(self, roll=0, name=None, marks=0):
        self.__roll = roll
        self.__name = name
        self.__marks = marks
        Student.__countStudent += 1

    def setData(self, roll=None, name=None, marks=None):
        self.__roll = roll
        self.__name = name
        self.__marks = marks

    def getData(self):
        return self.__roll, self.__name, self.__marks

    def showData(self):
        print("Roll No.: ", self.__roll)
        print("Name: ", self.__name)
        print("Marks: ", self.__marks)
        print()

    @classmethod
    def totalStudent(cls):
        print("Total Student : ", cls.__countStudent)


# --------------------------------------------------------------------

# --------------------------------------------------------------------
def encode_student(s):
    if isinstance(s, Student):
        return s.getData()
    else:
        raise StudentError('Student object is not JSON serializable.')


def decode_student(student_dct):
    if '__Student__' in student_dct:
        return Student(student_dct['roll'], student_dct['name'], student_dct['marks'])


# --------------------------------------------------------------------

# ====================================================================
def main():
    try:
        # create Student object
        s1 = Student(1, "Amit Singh", 180)
        s2 = Student()
        s2.setData(2, "Ankur Verma", 180)
        s3 = Student(3, 'Arun Yadav', 200)
        s4 = Student(4, 'Brijesh Kumar', 220)
        s5 = Student(5, 'Chitra Prajapati', 150)
        s6 = Student(6, 'Charu Rathor', 143)
        s7 = Student(7, 'Dhiraj Yadav',178)
        s8 = Student(8, 'Elvish Yadav', 180)
        s9 = Student(9, 'Ganesh Prajapati', 190)
        s10 = Student(10, 'Hrithik Prajapati', 260)
        # s11 = complex(5, 7)
        lst_s = [s1, s2, s3, s4, s5, s6, s7, s8, s9, s10]

        # count total no of student
        Student.totalStudent()

        # dump the user define object
        with open("Files/data", 'w+') as file:
            json.dump(lst_s, file, default=encode_student)
            file.seek(0)
            load_s_data = json.load(file, object_hook=decode_student)
            for s in load_s_data:
                print(s)

    except StudentError as se:
        print(se)

    except Exception as e:
        print(e)

# ====================================================================


if __name__ == "__main__":
    main()
