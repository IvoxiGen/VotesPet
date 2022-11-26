
#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "ABC"
#define CANDIDATE2 "XYZ"
int votescount1=0, votescount2=0, votescount3=0;
void castvote(){
    int choice;
   printf("\n### Please choose your Candidate ####\n");
   printf("\n1. %s", CANDIDATE1);
   printf("\n2. %s", CANDIDATE2);
   printf("\n4. %s", "None of These");
   printf("\nInput your choice (1 - 2) : \n");
   scanf("%d",&choice);
   switch(choice){
      case 1: votescount1++; break;
      case 2: votescount2++; break;
      default: printf("Error: Wrong Choice !! Please retry\n");
      //hold the screen
      getchar();
   }
   printf("thanks for vote !!\n");
}
void votesCount(){
    printf("\n##### Voting Statics ####\n");
    if(votescount1 < votescount2){
        printf("XYZ wins\n\n");
    }else if (votescount1 > votescount2){
        printf("ABC wins\n\n");
    }
    printf("%s - %d \n", CANDIDATE1, votescount1);
    printf("%s - %d \n", CANDIDATE2, votescount2);

    
}
int main(){
   int i;
   int choice;
   do{
      printf("\n\n###### Welcome to Election/Voting 2019 #####\n");
      printf("\n1. Cast the Vote\n");
      printf("2. Find Vote Count\n");
      printf("0. Exit\n");
      printf("Please enter your choice : \n");
      scanf("%d", &choice);
      switch(choice){
         case 1: castvote();break;
         case 2: votesCount();break;
          case 0: printf("Bye\n");break;
         default: printf("Error: Invalid Choice\n");
      }
   }while(choice!=0);
   //hold the screen
   getchar();
   return 0;
}
