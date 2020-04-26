# test function
def test_case(func, arr, y):
    print(arr, y, func(arr) == y)








# # get the POE index
# def get_POE(arr):
#     arr_size = len(arr)

#     if not arr or arr_size < 2 or arr[0] < 0:
#         return -1
#     else:
#         for i in range(1, arr_size - 2):
#             if sum(arr[ : i]) == sum(arr[i + 1 : ]):
#                 return i
        
#         return -1

# # test cases
# case_1 = [1, 8, 3, 7, 10, 2]  # 3
# case_2 = [1,5,3,1,1,1,1,1,1]  # 2
# case_3 = [2,1,1,1,2,1,7]      # 5
# case_4 = [1,2,3]              # -1
# case_5 = [3,4,5,10]           # -1

# test_case(get_POE, case_1, 3)
# test_case(get_POE, case_2, 2)
# test_case(get_POE, case_3, 5)
# test_case(get_POE, case_4, -1)
# test_case(get_POE, case_5, -1)





# # returns second largest
# def get_second_largest(arr):
#     arr = list(set(arr))
#     arr_size = len(arr)

#     if not arr or arr_size < 2 or arr[0] < 0:
#         return -1
#     else:
#         return arr[arr_size - 2]

# # test cases
# case_1 = [1,2,3,4]  # 3
# case_2 = [4,1,2,3]  # 3
# case_3 = [1,1,2,2]  # 1
# case_4 = [1]        # -1 
# case_5 = []         # -1

# test_case(get_second_largest,case_1, 3)
# test_case(get_second_largest,case_2, 3)
# test_case(get_second_largest,case_3, 1)
# test_case(get_second_largest,case_4, -1)
# test_case(get_second_largest,case_5, -1)


    


# # centered array
# def is_centered_array(arr):
#     arr_size = len(arr)

#     if not (arr_size % 2 == 1) or (arr_size < 1):
        
#         return 0
#     else:
#         center_el = (arr_size + 1) // 2

#         if min(arr[ : center_el - 1]) > arr[center_el - 1] and min(arr[center_el : ]) > arr[center_el - 1]:
            
#             return 1
#         else:
#             return 0


# # testcases
# case_1 = [1,2,3,4,5]  # 0
# case_2 = [3,2,1,4,5]  # 1
# case_3 = [3,2,1,4,1]  # 0
# case_4 = [1,2,3,4]    # 0
# case_5 = []           # 0
# case_6 = [10]         # 1

# test_case(case_1)
# test_case(case_2)
# test_case(case_3)
# test_case(case_4)
