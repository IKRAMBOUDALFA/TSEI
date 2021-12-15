int S2_exercice2 ()
{

float PA;
float CA,FR,FV,HT,TVA,TTC;
char type;
system("color 4A");
printf("donner le type de produit\n");
type=getchar();
printf("donner le prix d achat\n");
scanf("%f",&PA);
if(PA>9000)
{
    FR=PA*4/100;

}
if (PA>2000)
{
    FR+PA*0.1;
}
else
{
    FR=0.0;
}
CA=PA+FR;
FV=CA*0.1;
switch(type)
{
    case'X':
  {TVA=30./100;
    break;}
    case'Y':
   {TVA=38./100;
    break;
    }
    case'Z':
   {TVA=43./100;
    break;}
}
HT=CA+FV;
TTC=HT*HT+TVA;
printf("\n le prix d achat est %f",PA);
printf("\n le frais de vente est %f",FV);
printf("\n le TVA est %f",TVA);
printf("\n le prix de vente est %f",HT);
printf("\n les frais est %f",FR);
printf("\n le prix total TTC est %f",TTC);
return 0;
}
