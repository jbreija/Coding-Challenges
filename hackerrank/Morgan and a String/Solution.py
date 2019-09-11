# https://www.hackerrank.com/challenges/a-very-big-sum/problem
# https://github.com/jbreija
# By Jason Breijak

num_cases = int(input())
results = []
for each_case in range(num_cases):
    s1 = input()
    s2 = input()
    i = 0
    j = 0
    temp_results = []
    while j < len(s2):
        while i < len(s1):
            if ord(s1[i]) <= ord(s2[j]):
                temp_results.append(s1[i])
                i += 1
            else:
                temp_results.append(s2[j])
                j += 1
        temp_results.append(s2[j])
        j += 1
    results.append(temp_results)

for each_case in range(num_cases):
    results_to_string = ""
    for each_char in range(len(results[each_case])):
        results_to_string = f"{results_to_string}{results[each_case][each_char]}"
    print(results_to_string.split()[0])
