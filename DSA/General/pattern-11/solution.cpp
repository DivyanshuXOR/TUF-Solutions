class Solution {
public:
    void pattern11(int n) {
        for(int i= 1; i<=n; i++){
            int start = (i%2 ==0)?0 : 1 ;
            for(int j=1; j<=i; j++){
                cout << start <<(j==i?"":" ");
                start = 1 - start;
            }
            cout << endl;
        }
    }
};