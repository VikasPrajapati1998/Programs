def main():
    try:
        s1 = "Arjun"
        s2 = "Romi"
        s = ""
        for n, m in zip(s1, s2):
            s = s+n+m
        print(s, "\n")

        # --------------------------------
        for n, m in enumerate(s1):
            print(n, m)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
