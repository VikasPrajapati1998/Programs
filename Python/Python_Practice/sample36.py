# generator
# ---------------------------------------------------------------------------
def generate_primes():
    try:
        num = 1
        while True:
            if isprime(num):
                yield num
            num += 1
    except Exception as e:
        print("Exception in generate_primes() function.", e)


# ----------------------------------------------------------------------------
def isprime(num):
    try:
        if num > 1:
            if num == 2:
                return True
            if num % 2 == 0:
                return False
            for i in range(2, num//2):
                if num % i == 0:
                    return False
            else:
                return True
        else:
            return False
    except Exception as e:
        print("Exception in isprime() function.", e)


# ----------------------------------------------------------------------------
def main():
    try:
        total = 0
        for next_prime in generate_primes():
            if next_prime < 300000:
                total += next_prime
            else:
                print(total)
                exit()

    except Exception as e:
        print("Exception in main() function.", e)


if __name__ == '__main__':
    main()
