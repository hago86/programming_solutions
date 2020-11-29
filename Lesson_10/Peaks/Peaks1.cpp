// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    // first find all the possible peaks 
    // and store them in a vector

    vector<int> peaksfound;
    int Peak;
    if (A.size() < 3) // The input array should contain at least 3 elements else return 0
        return 0;
     // Find the list of peaks and store them in a vector
    for (Peak = 1; Peak < A.size()-1; Peak++) {
        if (A[Peak] > A[Peak-1] && A[Peak] > A[Peak+1])
            peaksfound.push_back(Peak);
    }
    unsigned int len = A.size(), numBlks;
    //Start from the largest block ie divide the array into 1 single block first. 
    for (numBlks = len; numBlks >= 1; numBlks--) {

        if (len % numBlks == 0) {
            int blkSize = len/numBlks;
            int peakscount = 0;
            // test all the peaks
            // if a peak is found in the ith block
            // then, go to the (i+1)th block
            for (int pkIdx : peaksfound) {
                if (pkIdx/blkSize == peakscount) // peak in the ith block
                    peakscount++; // go to check (i+1)th block
            }
            if(peakscount == numBlks)
                return numBlks;
        }
    }
    return 0;
}
