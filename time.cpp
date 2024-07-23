    #include<bits/stdc++.h>
    using namespace std;

    int main () {

        vector<vector<int>> arr = {{0,30}, {5,10}, {15,20}};
        sort (arr.begin(), arr.end());
        int end_pos = arr[0].size() - 1;
        int shuti_time, class_time, flag = 0; 
        for (int i = 1 ; i < arr.size();i++) {
            shuti_time = arr[i-1][end_pos];
            class_time = arr[i][0];
            if (shuti_time > class_time) {
                cout << "false";
                break;
            }

        }
        if (flag == 0)
        cout << "true";

    /*
        for(int i = 0; i < arr.size(); i++) {
            for (int j =0 ; j < arr[0].size();j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    */
    }