def main():
    import keyword
    count = 1
    for k in keyword.kwlist:
        print(k, end=", ")
        if count % 10 == 0:
            print()
        count += 1


if __name__ == "__main__":
    main()
