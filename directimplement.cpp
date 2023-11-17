#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
/* we can use ordered set, ordered multiset, and change order of sorting also.
------ All changes to use multiple forms of pbds will be done in declaration part only ----------------
1.Ordered_Set of integer or any data type in dscending order use this
typedef tree<data_type, null_type, greater<data_type>, rb_tree_tag, tree_order_statistics_node_update> pbds;
2. Ordered_Multi_Set of any data type in ascending order use this
typedef tree<data_type, null_type, less_equal<data_type>, rb_tree_tag, tree_order_statistics_node_update> pbds;
3. Ordered_Multi_set of any data type in dscending order use this
typedef tree<data_type, null_type, greater_equal<data_type>, rb_tree_tag, tree_order_statistics_node_update> pbds;
*/
// this declaration is for O_set of int 
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
