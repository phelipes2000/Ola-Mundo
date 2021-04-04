def main(saldo=0):
    print("--------------------")
    print("1 - [Deposito]")
    print("2 - [Saque]")
    print("3 - [Ver saldo]")
    print("4 - [SAIR]")
    print("--------------------")
    print(" ")
    o = int(input("Escolha uma opcao: "))
    if o == 1:
        print(" ")
        d = float(input("Digite quando vai depositar: "))
        if d < 0:
            print(" ")
            print("Nao eh possivel fazer um deposito negativo ! ! !")
        else:
            print(" ")
            print("Deposito realizado com sucesso!")
            saldo += d
            main(saldo)
    if o == 2:
        d = float(input("Digite o quanto deseja sacar: "))
        s = saldo - d
        if s < 0:
            print("Nao eh possivel sacar, pois o saldo fica negativo ! ! !")
        else:
            print("Saque feito com sucesso ! ! !")
            saldo -= d
            main(saldo)
    if o == 3:
        print(" ")
        print(f'Seu saldo eh R${saldo:.2f}')
    if o == 4:
        print(" ")
        print("Saindo do programa . . .")
    if o <= 0 or o >=5:
        print("")
        print("Opcao invalida.")


main()
#~~phelipes2000