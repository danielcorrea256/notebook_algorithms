int trie[WMAX][26];
int node_count;

/** Adds a new word into the trie. */

void insert(string word) {

	// Node 0 has 26 children - a through z.

	int node = 0;

	for (char c : word) {

		// If a node with the current char doesn't exist create one.

		if (trie[node][c - 'a'] == 0) { 
      trie[node][c - 'a'] = ++node_count;
    }

		// Move down the path in the trie.

		node = trie[node][c - 'a'];

	}
  
}
