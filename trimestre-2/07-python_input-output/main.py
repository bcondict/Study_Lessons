def stdio_function ():
    name = input("Enter your name: ")


    print(f"Your name is {name}")

def io_read():
    file = open("example.txt", "r" )
    print(f"file \n{file.read()}")
    file.close()


def io_read_with():
    with open("example.txt", "r") as file:
        # print(f"file\n{file.readline()}")

        # for _ in range(2):
        #     line = file.readline()
        #     print(f"line {line}")

        lines = file.readlines()
        for line in lines:
            print(f"line {line}")


def io_write_with():
    with open("example.txt", "w") as file:
        # file.write("Hola Jesus como estas")

        file.writelines(["Hola Mafe como estas\n", "Hola Carlos como estas\n"])
def io_append_with():
    with open("example.txt", "a") as file:
        file.writelines("Hola Jesus como estas\n")

def io_write_binary_with():
    with open("examplebinary.bin", "wb") as file:
        file.write(b"this is a binary file")

def io_read_binary_with():
    with open("examplebinary.bin", "rb") as file:
        print(file.read())

# io_append_with()
# io_write_binary_with()
io_read_binary_with()

