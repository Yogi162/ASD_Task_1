#include <iostream>

using namespace std;

void view_arr(int arr[100]);

void exercise_1() {
    /**
     TODO:  Write an algorithm which will prints all
            such numbers which are divisible by 7
            but are not a multiple of 5,
            between 100 and 200 (both included)
    */
    int n;
    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;
    for (n=100;n<201;n++)
    {
        if ((n%7==0) && (n%5!=0))
            cout<<n<<", ";
    }




    // ===========================
}

void exercise_2(int n, int p) {
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */
    int x;
    int i;
    x=n;
    for (i=1;i<p;i++)
    {
        x=x*n;
    }
    cout<<x<<endl;






    // ===========================
}

void exercise_3(int s1, int s2, int s3) {
    /**
         TODO:  Write a procedure algorithm that determines
                the type of a Triangle
                (isosceles, equilateral, or scalene)
                given the size of the three sides
        */

    if ((s1==s2) && (s1==s3))
    {
            cout<<"equilateral"<<endl;
    }
    else if ((s1==s2) || (s1==s3) || (s2==s3))
    {
            cout<<"isosceles"<<endl;
    }
    else
    {
        cout<<"scalene"<<endl;
    }






    // ===========================
}


void exercise_4() {
    /**
         TODO:  Write a procedure algorithm to continuously
                receive a numerical input from user
                and add it into an array of integer
                until user inputs number 0
        */
    int i;
    int x;
    int arr[100];
    for (i=0;i<101;i++)
    {

        cin>>x;
        arr[i]=x;
        if (x==0)
        {
            break;
        }

    }






    // ===========================
    cout<<"array result: ";
    view_arr(arr);
}

int exercise_5(int arr[],int f) {
    /**
         TODO:  Write a function algorithm to find a number
                inside an unsorted array of integer,
                and outputs its index; algorithm will
                outputs -1 if such number is not found
        */
    int i;
    for (i=0;i<8;i++)
    {
        if (arr[i]==f)
        {
            return i;
        }
    }






    // ===========================
    return -1;
}

void exercise_6(int arr[],int x) {
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */
    int i;
    int j;
    int temp1;
    int temp2;
    temp1=-1;
    for (i=0;i<100;i++)
    {
        if (arr[i]==x)
        {
            for (j=i-1;j<100;j++)
            {
            temp2=arr[j];
            arr[j]=temp1;
            temp1=temp2;
            }
            break;

        }
    }





    // ===========================
}


void view_arr(int arr[100]) {
    /** Function Helper */
    int i=0;
    while(arr[i]!=0) {
        cout<<arr[i]<<", ";
        i++;
    }
}

