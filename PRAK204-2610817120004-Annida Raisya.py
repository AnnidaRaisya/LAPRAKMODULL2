phi = 22 / 7

for k in range(2):
    print("Input")
    jari = float(input())
    tinggi = float(input())

    volume = phi * jari * jari * tinggi
    luas = 2 * phi * jari * (jari + tinggi)
    keliling = 2 * phi * jari

    print("\nOutput")
    print(f"Volume = {volume:.2f}")
    print(f"Luas = {luas:.2f}")
    print(f"Keliling = {keliling:.2f}\n")