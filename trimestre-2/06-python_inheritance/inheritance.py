class Vehicle:
    def __init__(self, brand):
        self.brand = brand

    def start(self):
        return f"{self.brand} vehicle is starting."

class Car(Vehicle):
    def __init__(self, brand, size):
        super().__init__(brand)
        self.size = size

    def drive(self):
        return f"{self.brand} car is driving"

    def start(self):
        return "The car is here"



newCar = Car("mercedez", "5 meters")
print(newCar.drive())
print(newCar.start())
