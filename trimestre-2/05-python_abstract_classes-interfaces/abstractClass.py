from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self, raze):
        self.raze = raze

    @abstractmethod
    def make_sound(self):
        pass

class Dog(Animal):
    def __init__(self, name, raze):
        super().__init__(raze)
        self.name = name

    def make_sound(self):
        return "Bark"

class Cat(Animal):
    def make_sound(self):
        return "Meow"

newDog = Dog("Cristo", "Pomeranian")
newCat = Cat("esfinge")

print(newDog.make_sound())
print(f"my dog's name is {newDog.name}")
print(f"my dog's raze is {newDog.raze}")

print(newCat.make_sound())
print(f"my cats's raze is {newCat.raze}")

