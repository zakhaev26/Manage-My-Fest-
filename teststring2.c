// //**********************ITERATING THROUGH THE locationState[].state to tap into its details**********************
//     int found = 0; // to keep track if the state is found in the database
//     for (int i = 0; i < 28; i++)
//     {
//         if (strcmp(locationState[i].state, stateOfUser)==0)
//         {
//             found = 1; // state found
//             printf("How far are you from the main capital of %s?:\n", locationState[i].state);
//             scanf("%f", &extra_kilometers);
//             printf("Which mode of travel you want to have?:\n1)By Train\n2)By Bus\n3)By Flight\n");
//             scanf("%d", &userchoice);

//             //*********************DISTANCE LOGIC USING POINTERS.***************************|
//             //NOTE:USED POINTERS TO TAKE THE DATA OUT OF LOCAL SCOPE FOR PROPER USAGE.
//             switch (userchoice)
//             {
//                 case 1:
//                     traindistpointer = &locationState[i].distanceByTrain;
//                     printf("You will have to travel a total of %0.2f kilometers\n", *traindistpointer + extra_kilometers);
//                     break;
//                 case 2:
//                     busdistpointer = &locationState[i].distanceByBus;
//                     printf("You will have to travel a total of %0.2f kilometers\n", *busdistpointer + extra_kilometers);
//                     break;
//                 case 3:
//                     flightdistpointer = &locationState[i].distanceByFlight;
//                     printf("You will have to travel a total of %0.2f kilometers\n", *flightdistpointer + extra_kilometers);
//                     break;
//                 default:
//                     printf("Invalid choice! Try again.\n");
//             }
//             break; // exit the loop once the state is found and processed
//         }
//     }

//     // handle the case where the state is not found
//     if (!found) {
//         printf("Sorry, we don't have information about the state you entered.\n");
//     }
//     //***************************THANKING MESSAGE**********************************
//     printf("\nThank you for using our services.");











input:
    printf("Which mode of travel do you want to have?:\n1)By Train\n2)By Bus\n3)By Flight\n");
    if(scanf("%d", &userchoice) != 1) {
        printf("Invalid input, please enter a number.\n");
        goto input; // go back to input label
    }

    if(userchoice < 1 || userchoice > 3) {
        printf("Invalid input, please enter a number between 1 and 3.\n");
        goto input; // go back to input label
    }
    