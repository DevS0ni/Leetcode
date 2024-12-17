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
       if (!node) return nullptr;
        unordered_map<Node*, Node*> node_map;
        return dfs(node, node_map);
    }

private:
    Node* dfs(Node* node, unordered_map<Node*, Node*>& node_map) {
        if (node_map.find(node) != node_map.end()) {
            return node_map[node];
        }

        Node* clone_node = new Node(node->val);
        node_map[node] = clone_node;
        
        for (Node* neighbor : node->neighbors) {
            clone_node->neighbors.push_back(dfs(neighbor, node_map));
        }

        return clone_node;
    } 
};