#!/usr/bin/python3


def handling_excetions():
    try:
        user_num = int(input("Write a number: "))

        result = 100 / user_num
        print(f"result of 100 / {user_num} =  {result}")
    except ValueError:
        print("Input must be a number!!")
    except ZeroDivisionError:
        print("Can not divide by 0!!")



if __name__ == "__main__":
    handling_excetions()
