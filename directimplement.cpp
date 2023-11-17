#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int main(){
{
    pbds s;
    // this is ordered set of integers which contians unique values in ascending order
    // All the methods are same as set container of stl
    // two extra useful methods are
    auto iter = s.find_by_order(any_index);// finds element on index o(log n) // return an iterator
    int less_than = s.order_of_key(any key);// return number of elements smaller than given key
}
