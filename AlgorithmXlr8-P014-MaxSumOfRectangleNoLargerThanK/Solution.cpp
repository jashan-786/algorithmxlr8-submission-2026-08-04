#include <bits/stdc++.h>
using namespace std;





int maxSumSubmatrix(vector<vector<int>>& matrix, long long k) {
  int rows = matrix.size();
        int cols = matrix[0].size();

//         vector<vector<int>> prefix(
//             rows+1,
//             vector<int>(cols+1 , 0)
//         );


      
// for (int i = 1; i <= rows; i++) {

//     for (int j = 1; j <= cols; j++) {

//         prefix[i][j] =
//             matrix[i-1][j-1]
//             + prefix[i-1][j]
//             + prefix[i][j-1]
//             - prefix[i-1][j-1];
//     }
// }

//         int maxS= -1;

//         for( int i =1 ; i <= rows; i++){

//             for( int j=1 ; j <= cols; j++){
//                 if(prefix[i][j] <= k ){

//                     maxS= max(maxS, prefix[i][j]);
//                 }
//             }
//         }

//         return maxS;


if(rows > cols){

vector<vector<int>> temp(cols,
                vector<int>(rows));


                for(int i=0; i < rows; i++){

                    for(int j=0; j < cols; j++){
                        temp[j][i]= matrix[i][j];
                    }
                }

                matrix= temp;
    rows= matrix.size();
    cols= matrix[0].size();


}

    int ans= INT_MIN;
    for(int topT =0; topT < rows ; topT++){
              vector<int> colSum(cols);
        
        for( int topB=topT;   topB < rows ; topB++  ){


            for(int col=0; col < cols; col++){

                colSum[col]+= matrix[topB][col];
            }

            
            set<int> st;
            st.insert(0);

            
            int prefix = 0;

            for (int col = 0; col < cols; col++) {

                prefix+=colSum[col];

                auto it=st.lower_bound(prefix - k );

                if (it != st.end()) {
                        ans = max(ans, prefix - *it);
                    }

                st.insert(prefix);
        }

    }

        
    }

    return ans;
}

int main() {
    int rows, cols;
    long long k;
    cin >> rows >> cols >> k;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    int ans = maxSumSubmatrix(matrix , k);

    cout << ans << "";

    return 0;
}


