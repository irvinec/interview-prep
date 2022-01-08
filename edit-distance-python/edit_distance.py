import numpy as np

def edit_distance_dp(s1, s2):
    # for convenience make s1 the longest of the 2 strings
    if len(s1) < len(s2):
        s1, s2 = s2, s1

    # edit distance to an empty string will be the length of the other string
    if len(s2) == 0:
        return len(s1)

    # fill a row with the edit distance for empty s1 (length of s2) .
    previous_row = range(len(s2) + 1)
    for s1_index, s1_char in enumerate(s1):
        # start with the first entry in the current row
        current_row = [s1_index + 1]
        for s2_index, s2_char in enumerate(s2):
            insertion_cost = previous_row[s2_index + 1] + 1
            deletion_cost = current_row[s2_index] + 1
            substitution_cost = previous_row[s2_index] + (s1_char != s2_char)
            # add entries to the current row as you calculate them
            current_row.append(min(insertion_cost, deletion_cost, substitution_cost))
        print(f'Previous Row: {previous_row}')
        print(f'Current Row: {current_row}')
        previous_row = current_row

    return previous_row[-1]

def edit_distance_np(s1, s2):
    # for convenience make s1 the longest of the 2 strings
    if len(s1) < len(s2):
        s1, s2 = s2, s1

    # edit distance to an empty string will be the length of the other string
    if len(s2) == 0:
        return len(s1)

    s1 = np.array(tuple(s1))
    s2 = np.array(tuple(s2))

    previous_row = np.arange(s2.size + 1)
    for s1_char in s1:
        # insert
        current_row = previous_row + 1

        # delete
        current_row[1:] = np.minimum(current_row[1:], current_row[:-1] + 1)

        # substitution
        current_row[1:] = np.minimum(current_row[1:], np.add(previous_row[:-1], s2 != s1_char))

        previous_row = current_row

    return previous_row[-1]
