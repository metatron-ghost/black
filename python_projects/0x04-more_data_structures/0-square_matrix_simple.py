#!/usr/bin/env python
def square_matrix_simple(matrix=[]):
    import copy
    new_matrix = copy.deepcopy(matrix)
    for i in range(len(new_matrix)):
        for j in range(len(new_matrix[i])):
            new_matrix[i][j] = new_matrix[i][j] ** 2
    return new_matrix
