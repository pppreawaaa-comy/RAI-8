import itertools
import csv
states = [0, 1, 2]
combinations = list(itertools.product(states, repeat=8))
print("Total combinations =", len(combinations))
with open("texture_units.csv", "w", newline="") as f:
    writer = csv.writer(f)
    for combo in combinations:
        writer.writerow(combo)