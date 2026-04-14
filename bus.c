#include<stdio.h>

int main(){

    int seats[10] = {0};
    int seat;

    while(1){

        printf("\n--- Bus Reservation ---\n");
        printf("1. View Seats\n");
        printf("2. Book Seat\n");
        printf("3. Exit\n");

        int choice;
        scanf("%d",&choice);

        if(choice==1){

            for(int i=0;i<10;i++){
                printf("Seat %d : %s\n",i+1,seats[i]==0?"Empty":"Booked");
            }

        }else if(choice==2){

            printf("Enter seat number (1-10): ");
            scanf("%d",&seat);

            if(seats[seat-1]==0){
                seats[seat-1]=1;
                printf("Seat Booked\n");
            }else{
                printf("Seat Already Booked\n");
            }

        }else{
            break;
        }
    }
}