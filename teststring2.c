// #include<stdio.h>
// #include<string.h>
// int main(){


// char array1[30]="soubhik gon";
// char array2[30];

// fgets(array2,30,stdin);
// array2[strcspn(array2,"\n")] = '\0';

// printf("%d",strcmp(array1, array2));

// return 0;
// }


#include <stdio.h>
#include <string.h>
#include <ctype.h>

//**********Structure for defining states and their distances from College.**********

typedef struct geographical_DISTANCE
{
    char state[20];
    // char stateCode[5];
    float distanceByTrain;
    float distanceByFlight;
    float distanceByBus;
} gd;

//*************Function Call**********************************
void transport()
{

    //*****************************Greeting Message*******************.

    printf("Welcome to transport facility!");
    printf("\n");

    //************************User state extraction****************************
    char stateOfUser[20];
    printf("In which state do you live?:");
    fgets(stateOfUser, 100, stdin);

    stateOfUser[strcspn(stateOfUser, "\n")] = '\0';

    //---> why if using fgets the code fails but when using SCANF, the code works.

    //**********************DATABASE********************************

    gd pb = {"punjab", 2100, 1607.01, 2031.47};
    gd wb = {"west bengal", 400, 470.69, 556.68};
    gd assam = {"assam", 1000, 970.43, 1353.00};
    gd goa = {"goa", 1693.20, 1364.58, 1640.79};
    gd mp = {"madhya pradesh", 1000, 837.31, 1119.64};
    gd andhrap = {"andhra pradesh", 750, 810.57, 929.48};
    gd arunachalp = {"arunachal pradesh", 2600, 1216.48, 1811.39};
    gd bihar = {"bihar", 700, 548.18, 705.19};
    gd chattisgarh = {"chattisgarh", 500, 446.07, 553.61};
    gd delhi = {"delhi", 1800, 1273.43, 1635.87};
    gd guj = {"gujarat", 1600, 1486.29, 1780.50};
    gd haryana = {"haryana", 1900, 1383.22, 1753.86};
    gd jharkhand = {"jharkhand", 300, 388.22, 511.70};
    gd karnataka = {"karnataka", 1500, 1229.73, 1474.75};
    gd kerala = {"kerala", 2300, 1483.10, 1824.72};
    gd maharashtra = {"maharashtra", 1400, 1031.70, 1292.42};
    gd manipur = {"manipur", 2400, 988.91, 1399.35};
    gd meghalaya = {"meghalaya", 1800, 809.26, 1185.38};
    gd mizoram = {"mizoram", 2400, 800.23, 1384.59};
    gd nagaland = {"nagaland", 2400, 1095.89, 1626.07};
    gd rajasthan = {"rajasthan", 1700, 1400.05, 1833.09};
    gd tamilnadu = {"tamilnadu", 1700, 1306.26, 1580.21};
    gd telangana = {"telangana", 1000, 759.46, 1001.71};
    gd tripura = {"tripura", 2200, 758.22, 1005.45};
    gd up = {"uttar pradesh", 1100, 932.26, 1206.90};
    gd uk = {"uttarakhand", 1100, 1291.25, 1729.47};
    gd hp = {"himachal pradesh", 1596, 1551.33, 2134.09};
    // gd sikkim = {, 873.36, 1139.14};

    //*************************GEOGRAPHICAL_DIST ARRAY INIT*******************
    gd locationState[28] = {pb, wb, assam, goa, mp, andhrap, arunachalp, bihar, chattisgarh, delhi, guj, haryana, jharkhand, karnataka, kerala, maharashtra, manipur, meghalaya, mizoram, nagaland, rajasthan, tamilnadu, telangana, tripura, up, uk, hp};
 

//fix:
for(int i=0;i<27;i++){
    printf("for %s=%d\n ",locationState[i].state,strcmp(stateOfUser,locationState[i].state));

}
    







    //**********************Iterating through locationState to find stateOfUser and tap into hte data.
    // for (int i = 0; i < 28; i++)
    // {
    //     if (!strcmp(locationState[i].state, stateOfUser))
    //     {

    //         printf("How far are you from the main capital of %s?:\n", locationState[i].state);
    //         scanf("%f", &extra_kilometers);
    //         printf("Which mode of travel you want to have?:\n1)By Train\n2)By Bus\n3)By Flight\n");
    //         scanf("%d", &userchoice);

    //         //*********************Distance Logic using Pointers.***************************|
    //         float userdistbytrain = locationState[i].distanceByTrain + extra_kilometers;
    //         float userdistbyflight = locationState[i].distanceByFlight + extra_kilometers;
    //         float userdistbybus = locationState[i].distanceByBus + extra_kilometers;
    //         (traindistpointer) = &(userdistbytrain);
    //         (flightdistpointer) = &(userdistbyflight);
    //         (busdistpointer) = &(userdistbybus);
    //     }
    // }

    // float distanceOfuser_BYTRAIN = *traindistpointer;
    // float distanceOfuser_BYFLIGHT = *flightdistpointer;
    // float distanceOfuser_BYBUS = *busdistpointer;
    // int trainChoice, flightChoice, busChoice;
    // printf("The distance between your current location and IIIT-BBS through Train Route is %.2f \n", distanceOfuser_BYTRAIN);
    // printf("The distance between your current location and IIIT-BBS through Flight Route is %.2f \n", distanceOfuser_BYFLIGHT);
    // printf("The distance between your current location and IIIT-BBS through Bus Route is %.2f \n", distanceOfuser_BYBUS);
}

void main(void){
    transport();

}

















