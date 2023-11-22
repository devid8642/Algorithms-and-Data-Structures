""" Tests for the sorting algorithms implementation """
import unittest
import random
import string


class TestSortAlgorithms(unittest.TestCase):
    def setUp(self) -> None:
        self.sort_function = sorted

    def test_with_empty_array(self) -> None:
        self.assertTrue(self.sort_function([]) == sorted([]))

    def test_with_random_int(self) -> None:
        array = random.sample(range(-50, 50), 100)
        self.assertTrue(self.sort_function(array) == sorted(array))

    def test_with_random_float(self) -> None:
        array = []
        for i in range(100):
            array.append(random.uniform(1, 100))
        self.assertTrue(self.sort_function(array) == sorted(array))

    def test_with_random_strings(self) -> None:
        array = random.choices(string.ascii_letters + string.digits, k=100)
        self.assertTrue(self.sort_function(array) == sorted(array))


if __name__ == '__main__':
    unittest.main()
