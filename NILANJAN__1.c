int coin_collect(int a[][100], int n){
int i,j, coins[100][100];
coins[0][0] = a[0][0]; //initial cell
for (i=1; i<n; i++) //first row
coins[0][i] = coins[0][i-1] + a[0][i];
for (i=1; i<n; i++) //first column
coins[i][0] = coins[i-1][0] + a[i][0];
for (i=1; i<n; i++) //filling up the rest of the array
for (j=1; j<n; j++)
coins[i][j] = max(coins[i-1][j], coins[i][j-1])
+ a[i][j];
return coins[n-1][n-1]; //value of last cell
}
int max(int a, int b){
if (a>b) return a;
else return b;
}
int main(){
int m[100][100],i,j,n;
scanf("%d", &n);
for (i=0; i<n; i++)
for (j=0; j<n; j++)
scanf("%d", &m[i][j]);
printf("%d\n", coin_collect(m,n));
return 0;
}
