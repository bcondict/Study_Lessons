
def copy_src_to_dest():
    src_content = ""
    with open("source.txt", "r") as file:
        src_content = file.read()
    with open("destination.txt", "w") as file:
        print(f"\t{src_content}\nContent copied from source.txt to destionation.txt")
        file.write(src_content)

if __name__ == "__main__":
    copy_src_to_dest()
