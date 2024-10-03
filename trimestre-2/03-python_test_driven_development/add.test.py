import unittest

class TestMyFunction(unittest.TestCase):
    def setUp(self):
        add = __import__('add').add
    def test_case1(self):
        self.assertEqual(add(2, 3), 5)
    def test_case2(self):
        self.assertEqual(add(0, 3), 3)

if __name__ == "__main__":
    unittest.TestMyFunction()
