int EXERCICE7(){float a ;float b ;float N2;float c; float grand ;
printf("entrer 3 nombres");
scanf("%f%f%f",&a,&b,&c);
grand=a;
if(grand<b)
    grand=b;
 if (grand<c)
    grand=c;
printf("le plus grand nombre est %f:\n",grand);
}

