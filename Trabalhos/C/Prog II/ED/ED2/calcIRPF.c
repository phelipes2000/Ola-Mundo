#include <stdio.h>
int main(){
//-----------VARIAVEIS------------
    float salario,taxa,redu,ali,aliefe,ir;
    int nmrfilhos,faixa;
//--------------------------------
//-------ENTRADA-DE-DADOS---------
    printf("\n Salario bruto mensal: ");
    scanf("%f",&salario);
    printf(" Numeros de filhos: ");
    scanf("%d",&nmrfilhos);
//--------------------------------
//---DESCONTO-PELOS-DEPENDENTES---
//--------------------------------
    if (nmrfilhos > 5){
        redu = 1000;}
    else{
        redu = nmrfilhos*200;
        }
//--------------------------------
//------ENCONTRAR-A-TAXA---inicio
//--------------------------------
    if (salario <= 2000){
    //FAIXA1
        taxa = 0;
        faixa = 1;
        ali = 0;
    }
    else if (salario <= 2900){
    //FAIXA2
        taxa = 7.5;
        faixa = 2;
        ali = 142.80;
    }
    else if (salario <= 3800){
    //FAIXA3
        taxa = 15;
        faixa = 3;
        ali = 354.80;
    }
    else if (salario <= 4700){
    //FAIXA4
        taxa = 22.5;
        faixa = 4;
        ali = 636.13;
    }
    else if (salario > 4700){
    //FAIXA5
        taxa = 27.5;
        faixa = 5;
        ali = 869.36;
    }
ir = ((salario*taxa)/100) - ali - redu;
if (ir < 0)
    ir = 0;
aliefe = (ir/salario)*100;
//------ENCONTRAR-A-TAXA----fim
//-----------------------------
//------------SAIDA------------
    printf("\n---------------------------------------------------------");
    printf("\n Contribuinte, seu salario bruto mensal eh: %.2f reais\n",salario);
    printf(" Voce esta na FAIXA %d com aliquota de %.2f%%\n",faixa,taxa);
    printf(" Voce possui %d dependentes.\n",nmrfilhos);
    printf(" O Valor de IRPF que deve ser pago eh: %.2f reais.\n",ir);
    printf(" Sendo assim, sua aliquota efetiva eh: %.2f%%",aliefe);
    printf("\n---------------------------------------------------------");
}
//------------------------------------
//phelipes2000
