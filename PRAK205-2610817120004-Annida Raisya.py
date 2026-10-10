import math

for k in range(2):
    print("Input")
    A = int(input())
    B = int(input())

    alas = int(math.sqrt(B**2 - A**2))
    tinggi = A
    keliling = alas + tinggi + B
    luas = int(0.5 * alas * tinggi)

    print("\nOutput")
    print(f"Alas = {alas} cm")
    print(f"Tinggi = {tinggi} cm")
    print(f"Keliling = {keliling} cm")
    print(f"Luas = {luas} cm^2\n")