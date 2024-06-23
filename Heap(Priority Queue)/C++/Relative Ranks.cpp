class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
    //     vector<pair<int, int>> scores_with_indices;
    //     for (int i = 0; i < score.size(); i++) {
    //         scores_with_indices.push_back({score[i], i});
    //     }

    //     sort(scores_with_indices.begin(), scores_with_indices.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    //         return a.first > b.first; 
    //     });

    //     vector<string> answer(score.size());

    //     for (int i = 0; i < scores_with_indices.size(); i++) {
    //         int index = scores_with_indices[i].second; 
    //         if (i == 0) {
    //             answer[index] = "Gold Medal";
    //         } else if (i == 1) {
    //             answer[index] = "Silver Medal";
    //         } else if (i == 2) {
    //             answer[index] = "Bronze Medal";
    //         } else {
    //             answer[index] = to_string(i + 1); 
    //         }
    //     }

    //     return answer;
    // }
    map<int, int> score_map;
        vector<int> sorted_scores;
        
        for (int i = 0; i < score.size(); i++) {
            score_map[score[i]] = i; 
            sorted_scores.push_back(score[i]);
        }

        sort(sorted_scores.begin(), sorted_scores.end(), greater<int>());

        vector<string> answer(score.size());
        
        for (int i = 0; i < sorted_scores.size(); i++) {
            int original_index = score_map[sorted_scores[i]]; 
            if (i == 0) {
                answer[original_index] = "Gold Medal";
            } else if (i == 1) {
                answer[original_index] = "Silver Medal";
            } else if (i == 2) {
                answer[original_index] = "Bronze Medal";
            } else {
                answer[original_index] = to_string(i + 1); 
            }
        }

        return answer;
    }
// };
};