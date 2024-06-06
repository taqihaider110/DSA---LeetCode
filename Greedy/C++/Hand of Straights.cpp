class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) {
            return false;
        }

        map<int, int> cardCount;
        for (int card : hand) {
            cardCount[card]++;
        }

        while (!cardCount.empty()) {
            int startCard = cardCount.begin()->first;

            for (int i = 0; i < groupSize; ++i) {
                int card = startCard + i;
                if (cardCount[card] == 0) {
                    return false;
                }
                cardCount[card]--;
                if (cardCount[card] == 0) {
                    cardCount.erase(card);
                }
            }
        }

        return true;
    }
};