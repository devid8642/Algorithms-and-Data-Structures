'''
Implementation of an linear array in Python similar to the array in languages like C.
'''
import unittest

class Array:
    def __init__(self, size):
        self.__arr = []
        self.__size = size
    
    def get_size(self):
        return self.__size
    
    def get_array(self):
        return self.__arr

    def is_empty(self):
        if len(self.__arr) == 0:
            return True
        return False
    
    def insert(self, element, position=None):
        """
        Inserts an element into a valid position in the array. 
        If the operation fails, the method returns -1.
        """
        if position is None:
            position = len(self.__arr)
        if position < 0 or position > self.__size - 1:
            return -1
        elif len(self.__arr) > self.__size:
            return -1
        
        self.__arr.insert(position, element)
    
    def remove(self, position):
        """
        Remove an element from a position. 
        If the operation fails, the method returns -1.
        """
        if position < 0 or position > self.__size - 1:
            return -1
        self.__arr.pop(position)

    def search(self, element):
        """
        Performs a linear search on the array. 
        If the element is not found, the method returns -1.
        """
        for i in range(len(self.__arr)):
            if self.__arr[i] == element:
                return i
        return -1


class TestArray(unittest.TestCase):
    def setUp(self):
        self.arr = Array(10)
    
    def test_get_size(self):
        self.assertEqual(self.arr.get_size(), 10)
    
    def test_get_array(self):
        self.assertListEqual(self.arr.get_array(), [])
    
    def test_is_empty(self):
        self.assertTrue(self.arr.is_empty())
    
    def test_insert(self):
        self.arr.insert(1)
        self.arr.insert(2)
        self.arr.insert(3)
        self.arr.insert(4, 1)

        self.assertListEqual(self.arr.get_array(), [1, 4, 2, 3])
        self.assertEqual(self.arr.insert(1, 10), -1)

        for i in range(6):
            self.arr.insert(i)
        
        self.assertEqual(self.arr.insert(1), -1)
    
    def test_remove(self):
        self.arr.insert(1)

        self.arr.remove(0)

        self.assertTrue(self.arr.is_empty())
        self.assertEqual(self.arr.remove(10), -1)

    def test_search(self):
        for i in range(10):
            self.arr.insert(i)

        self.assertEqual(self.arr.search(9), 9)
        self.assertEqual(self.arr.search(10), -1)


if __name__ == '__main__':
    unittest.main()
