#include <vector>

using std::vector;

template <class T>
int bsearch(vector<T> *v, T const &dataToSearch, int start, int end) {
    int mid = (start + end)/2;
    if (end < start) return -1;
    if (dataToSearch == (*v)[mid]) {
        return mid;
    } else if (dataToSearch < (*v)[mid]) {
        return bsearch(v, dataToSearch, start, mid);
    } else {
        return bsearch(v, dataToSearch, mid + 1, end);
    }
}