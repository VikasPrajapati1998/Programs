import sys


def solution(input_from_question):
    # Split the input string into different values
    values = input_from_question.split()

    # Check if there is at least one value in the input
    if len(values) > 0:
        # Get the first value from the input (Excel column heading)
        column_heading = values[0]

        # Function to calculate the equivalent column number
        def excel_column_number(s):
            result = 0
            for char in s:
                result = result * 26 + (ord(char) - ord('A') + 1)
            return result

        # Calculate and return the equivalent column number for the given Excel column heading
        return excel_column_number(column_heading)
    else:
        # Return an error message or any appropriate value when there is no input
        return "Invalid input"


input_from_question = input()
print(solution(input_from_question))
