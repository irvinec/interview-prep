import unittest
from string_rotate import is_rotation


class MyTestCase(unittest.TestCase):
    def test_is_rotate_empty_string(self):
        self.assertEqual(True, is_rotation("", ""))

    def test_is_rotate_single_char(self):
        self.assertEqual(True, is_rotation('a', 'a'))
        self.assertEqual(False, is_rotation('a', 'b'))

    def test_is_rotate_not_rotation(self):
        self.assertEqual(False, is_rotation('water', 'lands'))
        self.assertEqual(False, is_rotation('water', 'waters'))

    def test_is_rotate_rotations(self):
        self.assertEqual(True, is_rotation('water', 'terwa'))


if __name__ == '__main__':
    unittest.main()
