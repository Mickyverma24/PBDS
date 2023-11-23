#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
// more generic code
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
{
    ordered_set<int>s;
    auto iter = s.find_by_order(any_index);// finds element on index o(log n) // return an iterator
    int less_than = s.order_of_key(any key);// return number of elements smaller than given key
}
