#include<stdio.h>
#include<math.h>


//The function to check the elements in the array is Prime Or not
int isPrime(int num)
   {
   
  //i is the loop count and flag is used to flag even and odd number
  int i;
  int flag=0;
 //for loop used to check each element by element is that prime or not  
 for(int i=2;i<=num/2;i++)
	    {
	      if(num%i==0)
			  {
			    flag=1;
				break;
			  }
	   }
		  if(flag==1)
			  {
			    return 0;
			  }
		  else{
			    return 1;
			  }	      
    }

//A function to find  the maximum and minimum element of the array parameters are an array and length of the array

int getMaxAndMin(int arr[], int n){
 
   //Intialing min and max with first element of the array
   int min=arr[0],max=arr[0];
   
   //Looping through each element
   for (int i=0; i<n; i++){
    
	   // If the element value is greater  max assigning the new value
      if (arr[i] > max)
	  
	   
         max = arr[i];
		   
	   // If the element value is less than min assigning the new value
      else if(arr[i] < min)
         min = arr[i];
	  
	  
   }
  
       printf(" Min %d",min);
	   printf(" Max %d",max);
   }
   
 

int main()
{

    //loop is the loop counter and sum is used to store the sum of the elements
	int loop,sum=0;
	
	//double storage is used to store the average of the elements
	double average=0; 
	
	//declaring array with prime and not prime numbers
	 int arr[10]={78,29,11,74,27,96,47,43,64,50};
	 
	//calculate length of the array
	int len = sizeof(arr)/sizeof(arr[0]);
	
	//Print the heading of each column
      printf("Sr.\t""Number\t""Prime\t""Odd/Even\t""Min/Max \n");
	  

	for(loop=0; loop<len; loop++)
	{ 
	    printf("%d",loop+1);
   	    printf("\t%d",arr[loop]);
		
		//Here the isPrime function is called
		printf((isPrime(arr[loop])?"\tYes":"\tNo"));
		
		//Using if-else selection statement to find even and odd numbers 
	   if(arr[loop]%2 ==0){
           printf("\tEven\n");}
       else{printf("\tOdd\n");}
	   
	 
	   
		 //Adding each element to the sum variable when it loop each time
		   sum=sum+arr[loop];
		  //Mathematical operation to find average
	       average=(double)sum/len;
	}
	
	
	printf("\n");
	 
	printf("Sum:%d \n",sum);
	printf("average %f \n",average);
	
	//Calling getMaxAndMin function to get the maximum and element of the defined array
	getMaxAndMin (arr,len);

	
	
	return 0;	
}

	   
	   

