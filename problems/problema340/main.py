def generate_multiple_5(x):
    while x % 5 != 0:
        x += 1
    return x

def gradingStudents(grades):
    new_grade = []
    for grade in grades:
        if grade < 38:
            new_grade.append(grade)
            continue
        next_multiple_5 = generate_multiple_5(grade)
        if next_multiple_5 - grade < 3:
            new_grade.append(next_multiple_5)
        else:
            new_grade.append(grade)
    return new_grade

if __name__ == '__main__':
    n = int(input())
    grades = []
    for c in range(n):
        grade = int(input())
        grades.append(grade)
    new_grade = gradingStudents(grades)
    for grade in new_grade:
        print(grade)
    