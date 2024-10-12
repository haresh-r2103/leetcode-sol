// class Solution {
// public:
//     int minGroups(vector<vector<int>>& intervals) {
//         // Find the maximum endpoint in the intervals
//         int ms = -1;
//         for (int i = 0; i < intervals.size(); i++) {
//             ms = max(ms, intervals[i][1]);
//         }
        
//         // Create an array to track the number of intervals overlapping at each point
//         vector<int> l(ms + 1, 0);
        
//         // Increment counts for the range covered by each interval
//         for (int i = 0; i < intervals.size(); i++) {
//             int si = intervals[i][0];
//             int ei = intervals[i][1];
            
//             // Mark the range between si and ei inclusive
//             for (int j = si; j <= ei; j++) {
//                 l[j] += 1;
//             }
//         }
        
//         // Return the maximum overlap at any point
//         return *max_element(l.begin(), l.end());
//     }
// };

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        // Create a vector to store start and end events
        vector<pair<int, int>> events;
        
        // For each interval, mark its start (+1) and end (+1 since end is inclusive)
        for (auto& interval : intervals) {
            events.push_back({interval[0], 1});  // Start of an interval
            events.push_back({interval[1] + 1, -1}); // End of an interval, +1 since end is inclusive
        }
        
        // Sort the events based on time
        sort(events.begin(), events.end());
        
        int maxGroups = 0;
        int currentGroups = 0;
        
        // Traverse through the sorted events
        for (auto& event : events) {
            currentGroups += event.second; // Add or subtract based on the event type (+1 for start, -1 for end)
            maxGroups = max(maxGroups, currentGroups); // Keep track of the maximum number of overlapping intervals
        }
        
        return maxGroups;
    }
};

