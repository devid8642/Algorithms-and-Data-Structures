""" Tests for the sorting algorithms implementation """
import unittest


class TestSortAlgorithms(unittest.TestCase):
    def setUp(self) -> None:
        self.sort_function = sorted

    def test_with_empty_array(self) -> None:
        self.assertListEqual(self.sort_function([]), sorted([]))

    def test_with_random_int(self) -> None:
        array = [-16, -12, 47, 20, 25, 30, -21, -7, -33, 24, 31, -18, -31, 6, -26, 18]
        self.assertListEqual(self.sort_function(array), sorted(array))

    def test_with_random_float(self) -> None:
        array = [40.404241799118076, 18.896869984254682, 4.8619246726356105, 36.56765352093546, 31.865390802747264]
        self.assertListEqual(self.sort_function(array), sorted(array))

    def test_with_random_strings(self) -> None:
        array = ['5', 'E', 'N', 'T', 'n', 'N', 'n', 'I', 'r', 'd', 'J', 'w', 'e', '1', 'm']
        self.assertListEqual(self.sort_function(array), sorted(array))


if __name__ == '__main__':
    unittest.main()
