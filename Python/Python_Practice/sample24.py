# containership
class Engine:
    def set_engine(self):
        self.__no_piston = int(input("Enter number of piston : "))
        self.__fuel_type = input("Enter fuel type : ")
        self.__chassis_no = input("Enter chassis no. : ")

    def display(self):
        print("Number of Piston = ", self.__no_piston)
        print("Fuel Type = ", self.__fuel_type)
        print("Chassis No = ", self.__chassis_no)

class Car:
    def design_car(self):
        self.__company = input("Enter the name of Company : ")
        self.__model = int(input("Enter the model : "))
        self.__car_engine = Engine()
        self.__car_engine.set_engine()

    def show_car(self):
        print("Company = ", self.__company)
        print("Model = ", self.__model)
        self.__car_engine.display()


def main():
    try:
        c1 = Car()
        c1.design_car()
        c1.show_car()

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()


