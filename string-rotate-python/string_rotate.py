# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.

def is_rotation(s1:str, s2:str):
    # Must be the same length
    if len(s1) != len(s2):
        return False

    return s2 in (s1 + s1)
