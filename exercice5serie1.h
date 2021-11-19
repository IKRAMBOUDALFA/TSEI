int EXERCICE5(){int somme;
int b_100,b_50,b_10,b_5,b_1;
int reste;
printf("donner la somme de argent\n");
scanf("%d",&somme);
b_100=somme/100;
reste=somme%100;
b_50=reste/50;
reste=reste%50;
b_10=reste/10;
reste=reste%10;
b_5=reste/5;
reste=reste%5;
b_1=reste;
printf("le repartition des billets est les suivantes %d de 100dh ,%d de 50dh,%d de 10dh ,%d de 5dh et %d de 1dh ",b_100,b_50,b_10,b_5,b_1);
}
