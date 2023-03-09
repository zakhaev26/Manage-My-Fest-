char temp[40]="naba@gmail.com";
    char temp2[11]="9437380952";
    char u[40],username[40];
    int i;
    for(i=0;temp[i]!='@';i++){
        username[i]=temp[i];
    }
    for(int j=0;j<2;j++){
         u[j]=temp2[j];
    }
    strcat(username,u);
    printf("%s\n",username);
    