#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/

    double area[n] , p;
    int i;
    for(i = 0; i<n ; i++){
        p = (tr[i].a+tr[i].b+tr[i].c) / 2.0;

        area[i] = sqrt(p*(p - tr[i].a)*(p - tr[i].b)*(p - tr[i].c) );
    }

int j,k;
double tempArea;
struct triangle temp;

for(k=0;k<n;k++){
    for(j=0;j<n-k-1;j++){

        if(area[j]  > area[j+1]){
            temp = tr[j+1];
            tr[j+1] =tr[j];
            tr[j] = temp;

              tempArea = area[j];
                area[j] = area[j + 1];
                area[j + 1] = tempArea; 



        }
    }
}



}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
