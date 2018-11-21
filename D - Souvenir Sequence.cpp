#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int total_1(vector<int> a);
int total_2(vector<int> a);
int total_3(vector<int> a);

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, k, ans;
    vector<int> a;

    cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(k == 1){
        ans = total_1(a);
    }
    else if(k == 2){
        ans = total_2(a);
    }
    else if(k == 3){
        ans = total_3(a);
    }

    cout << ans << "\n";

    return 0;
}

int total_1(vector<int> a){
    int retval = 0;
    for(int i = 0; i < a.size(); i++){
        retval += a[i];
    }

    return retval;
}

int total_2(vector<int> a){
    int left = 0, right = 0, max = 0, retval = INT_MAX;
    for(int i = 1; i < a.size() - 1; i++){
        left = 0, right = 0, max = 0;
        for (int j = 0; j < i; j++)
        {
            left += a[j];
        }
        for(int j = i; j < a.size(); j++){
            right += a[j];
        }
        max = (max < std::max(left, right)) ? std::max(left, right) : max;
        if(max < retval){
            retval = max;
        }
    }

    return retval;
}

int total_3(vector<int> a){
    int retval = 0;
    return retval;
}