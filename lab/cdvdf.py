import random
import csv

# Number of rows
rows = 10

# Number of columns
cols = 5

# Generate a list of random numbers
data = [[random.randint(0, 100) for _ in range(cols)] for _ in range(rows)]

# Write the data to a CSV file
with open("random.csv", "w", newline="") as f:
    writer = csv.writer(f)
    writer.writerows(data)
