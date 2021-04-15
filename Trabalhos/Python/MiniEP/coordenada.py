def coord(x,y):
    if x > 0 and y > 0:
        i = "I"
    elif x > 0 and y < 0:
        i = "IV"
    elif x < 0 and y < 0:
        i = "III"
    elif x < 0 and y > 0:
        i = "II"
    print(f"O ponto ({x:.0f}, {y:.0f}) pertence ao quadrante: {i}")
    print(" ")

def main():
    a = float(input("Digite um valor para x: "))
    b = float(input("Digite um valor para y: "))
    print("")
    coord(a,b)
main()
#--------------
#~~phelipes2000