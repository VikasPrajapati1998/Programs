#include <iostream>
using namespace std;

// Date class
class Date{
    private:
        int day, mon, year;
    public:
        Date(int d=0, int m=0, int y=0){
            day=d;
            mon=m;
            year=y;
        }
        int operator>(Date dt){
            if(year>dt.year)
                return 1;
            if(year==dt.year && mon>dt.mon)
                return 1;
            if(year==dt.year && mon==dt.mon && day>dt.day)
                return 1;
            return 0;
        }
        friend ostream& operator<<(ostream &o, Date &dt);
};
// friend function definition of operator<<
ostream& operator<<(ostream &o, Date &dt){
                o<<dt.day<<'/'<<dt.mon<<'/'<<dt.year;
                return o;
}
// template class selectionSort
template<class T>
void selectionSort(T a[], int size){
                T temp;
                for(int i=0; i<size; i++){
                    for(int j=i+1; j<size; j++){
                        if(a[i]>a[j]){
                            temp = a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
}
// int main() function                
int main(int argc, char *argv[])
{
	int arr[] = {-12, 23, 14, 0, 245, 78, 66, -9};
	Date dtarr[]={
	                            Date(17, 11, 68), Date(23, 12, 65),
	                            Date(12, 12, 78), Date(23, 10, 69)
	};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, size);
	for(int i=0; i<size; i++)
	    cout<<arr[i]<<endl;
	
	cout<<endl<<endl;
	selectionSort(dtarr, 4);
	for(int i=0; i<4; i++)
	    cout<<dtarr[i]<<endl;
	    
	return 0;
}