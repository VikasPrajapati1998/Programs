class Bird:
    pass

def main():
    try:
        b = Bird()
        # create attributes dynamically
        b.name = "Sparrow"
        b.weight = 500
        b.color = "Light Brown"

        # display values
        print(b.name, b.weight, b.color)

        # modify attributes dynamically
        b.weight = 450
        b.color = "Red"

        # display
        print(b.name, b.weight, b.color)

        # delete attributes dynamically
        del b.color

        # display
        print(b.name, b.weight)
        # print(b.color)   # error

    except Exception as e:
        print(e)

if __name__ == "__main__":
    main()

