def main():
    try:
        tpl = (3, 6, 9, 7, 3, 5, 6, 4, 7, 6)
        print(tpl)
        print(tpl.count(6))
        print(tpl.count(7))
        print(tpl.index(9))

        print(sorted(tpl))
        print(reversed(tpl))
        print(any(tpl))
        print(all(tpl))

        print(len(tpl))
        print(max(tpl))
        print(min(tpl))
        print(sum(tpl))

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
