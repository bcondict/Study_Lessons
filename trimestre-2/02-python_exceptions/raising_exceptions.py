#!/usr/bin/python3


class NegativeNumberError(Exception):
    def __init__(self, message="Number cannot be negative"):
        self.message = message
        super().__init__(self.message)


def checkNegativeNumber(num):
    print(f"number is {num}")
    if (num < 0):
        # raise NegativeNumberError()
        raise NegativeNumberError("Number is negative, and that's not possible!!")



if __name__ == "__main__":
    try:
        checkNegativeNumber(5)
        checkNegativeNumber(-5)
    except NegativeNumberError as e:
        print("There's a negative number\n", e)
