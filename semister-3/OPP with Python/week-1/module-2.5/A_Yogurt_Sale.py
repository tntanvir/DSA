t = int(input())

for _ in range(t):
    n, a, b = map(int, input().split())
    cost_scenario_1 = n * a
    num_pairs = n // 2
    cost_scenario_2 = num_pairs * b + (n % 2) * a

    print(min(cost_scenario_1, cost_scenario_2))
