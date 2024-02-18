#include <iostream>
#include <vector>

using namespace std;

class SegmentTree {
public:
    SegmentTree(const vector<int>& arr, int M) : n(arr.size()), M(M) {
        tree.resize(4 * n);
        build(arr, 0, 0, n - 1);
    }

    int query(int l, int r) {
        return queryUtil(l, r, 0, 0, n - 1);
    }

private:
    int n, M;
    vector<int> tree;

    void build(const vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start] % M;
            return;
        }
        int mid = (start + end) / 2;
        build(arr, 2 * node + 1, start, mid);
        build(arr, 2 * node + 2, mid + 1, end);
        tree[node] = (tree[2 * node + 1] + tree[2 * node + 2]) % M; // Addition instead of multiplication
    }

    int queryUtil(int l, int r, int node, int start, int end) {
        if (start > r || end < l) {
            return 0; // Identity for addition (empty range)
        }
        if (l <= start && end <= r) {
            return tree[node];
        }
        int mid = (start + end) / 2;
        int leftRes = queryUtil(l, min(r, mid), 2 * node + 1, start, mid);
        int rightRes = queryUtil(max(l, mid + 1), r, 2 * node + 2, mid + 1, end);
        return (leftRes + rightRes) % M; // Addition instead of multiplication
    }
};

int main() {
    vector<int> arr = {2, 3, 4, 5, 6};
    int M = 10;
    SegmentTree segTree(arr, M);

    int sum = segTree.query(1, 3);
    cout << "Sum of elements from index 1 to 3: " << sum << endl;

    return 0;
}
