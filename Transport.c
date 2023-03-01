#include<stdio.h>
#include<string.h>

typedef struct geographical_DISTANCE{

	char state[20];
	float distanceByTrain;
	float distanceByFlight;
	float distanceByBus;
}gd;



void transport(){

	//welcome message to greet user.
	printf("Welcome to transport facility!");
	printf("\n");

	//user's state extraction
    
	printf("In which state do you live?:");
	char locationOfUser[20];
	scanf("%s",&locationOfUser);

	// if(strcmp("punjab",locationOfUser)==0){
	// 	printf("same");
	// }
	// else{
	// 	printf("none");
	// }


	//DATABASE:

	gd pb={2100,1607.01,2031.47};
	gd wb={400,470.69,556.68};
	gd assam={1000,970.43,1353.00};
	gd goa={1693.20,1364.58,1640.79};
	gd mp={1000,837.31,1119.64};
	gd andhrap={750,810.57,929.48};
	gd arunachalp={2600,1216.48,1811.39};
	gd bihar={700,548.18,705.19};
	gd chattisgarh={500,446.07,553.61};
	gd delhi={1800,1273.43,1635.87};
	gd guj={1600,1486.29,1780.50};
	gd haryana={1900,1383.22,1753.86};
	gd jharkhand={300,388.22,511.70};
	gd karnataka={1500,1229.73,1474.75};
	gd kerala={2300,1483.10,1824.72};
	gd maharashtra={1400,1031.70,1292.42};
	gd manipur={2400,988.91,1399.35};
	gd meghalaya={1800,809.26,1185.38};
	gd mizoram={2400,800.23,1384.59};
	gd nagaland={2400,1095.89,1626.07};
	gd rajasthan={1700,1400.05,1833.09};
	gd tamilnadu={1700,1306.26,1580.21};
	gd telangana={1000,759.46,1001.71};
	gd tripura={2200,758.22,1005.45};
	gd up={1100,932.26,1206.90};
	gd uk={1100,1291.25,1729.47};
	gd hp={1596,1551.33,2134.09};
    gd sikkim={,873.36,1139.14};

gd locationState={pb,wb,assam,goa,mp,andhrap,arunachalp,bihar,chattisgarh,delhi,guj,haryana,jharkhand,karnataka,kerala,maharashtra,manipur,,meghalaya,mizoram,nagaland,rajasthan,tamilnadu,telangana,tripura,up,uk,hp,sikkim}























	// if(strcmp(locationOfUser,"punjab")==0){
	// 	//distance of punjab from bbs:
	// 	distance=2099 ;
	// 	printf("distance is %f",distance);
	// }

}




int main(){

// printf("%d",strcmp("dog","dog"));

transport();




return 0;
}