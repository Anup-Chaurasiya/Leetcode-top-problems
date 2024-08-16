/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL) return NULL;

        // Map to store the original node to its clone
        unordered_map<Node*, Node*> cloneMap;
        queue<Node*> q;
        
        // Start BFS
        q.push(node);
        cloneMap[node] = new Node(node->val);
        
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            
            for (Node* neighbor : current->neighbors) {
                if (cloneMap.find(neighbor) == cloneMap.end()) {
                    // Clone the neighbor and add to the map
                    cloneMap[neighbor] = new Node(neighbor->val);
                    q.push(neighbor);
                }
                
                // Add the cloned neighbor to the current node's clone
                cloneMap[current]->neighbors.push_back(cloneMap[neighbor]);
            }
        }
        
        return cloneMap[node];
    }
};
