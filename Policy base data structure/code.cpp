#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

int main() {

    ordered_set st;

    st.insert(1);
    st.insert(2);
    st.insert(5);
    st.insert(10);
    
    // returns the lower_bound index of given element
    cout << st.order_of_key(200) << endl;

    // returns the index element
    cout << *st.find_by_order(2) << endl;
    
    return 0;
}
