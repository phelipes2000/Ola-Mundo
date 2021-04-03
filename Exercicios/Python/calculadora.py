def so(a,b):
    return a+b

def su(a,b):
    return a-b

def m(a,b):
    return a*b

def d(a,b):
    return a/b

def main():
    print("----------------------")
    print("1 | [Soma]")
    print("2 | [Subtracao]")
    print("3 | [Divisao]")
    print("4 | [Multiplicacao]")
    print("5 | [Sair do programa]")
    print("----------------------")
    print
    i = int(input("Escolha uma opção:"))
    if i <=0 or i >=6:
        print("")
        print("Opcao invalida. Tente novamente!")
        print("")
    elif i == 5:
        print("")
        print("Voce escolheu sair do programa . . .")
        print("")
    else:
        print("")
        x = int(input("Digite um numero: "))
        y = int(input("Digite outro numero: "))
        if i == 1:
            r = so(x,y)
        if i == 2:
            r = su(x,y)
        if i == 3:
            r = d(x,y)
        if i == 4:
            r = m(x,y)
        print(" ")
        print("-----------------")
        print(f'O resultado eh: {r}')
        o = input("Tecle [ENTER]")
        main()

main()
//~~phelipes2000