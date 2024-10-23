#!/usr/bin/python3

class Animal:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def sound(self):
        return "..."

class Dog(Animal):
    def __init__(self, name, age, ownersName):
        super().__init__(name, age)
        self.__ownersName = ownersName
    def sound(self):
        return "bark"

    @property
    def ownersName(self):
        return self.__ownersName

    @ownersName.setter
    def ownersName(self, ownersName):
        self.__ownersName = ownersName
        return self.__ownersName

if __name__ == "__main__":
    myDog = Dog("zeus", 12, "Jesus")

    print(f"dogs name: {myDog.name}")
    print(f"dogs age: {myDog.age}")
    print(f"dogs owner: {myDog.ownersName}")
    myDog.ownersName = "Carlos"
    print(f"dogs owner: {myDog.ownersName}")
    print(f"sound: {myDog.sound()}")
