int S2_exercice1 ()
{int somme;
int b_200,b_100,b_50,b_20,b_10,b_5,b_1;
int reste;
printf("donner la somme de argent\n");
scanf("%d",&somme);
b_200=somme/200;
reste=somme%200;
b_100=reste/100;
reste=reste%100;
b_50=reste/50;
reste=reste%50;
b_20=reste/20;
reste=reste%20;
b_10=reste/10;
reste=reste%10;
b_5=reste/5;
b_1=reste%5;
printf("le repartition des billets est les suivantes  %d de 200dh %d de 100dh ,%d de 50dh,%d de 20dh ,%d de 10dh , %d de 5dh et %d de 1dh ",b_200,b_100,b_50,b_20,b_10,b_5,b_1);}
