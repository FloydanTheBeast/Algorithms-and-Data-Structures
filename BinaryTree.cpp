#include <iostream>
using namespace std;

struct node {
	int keyValue;
	node *pLeft;
	node *pRight;
};

node* insert(node *pTree, int key) {
	if(pTree == NULL) {
		node* pNewTree = new node;
		pNewTree->pLeft = NULL;
		pNewTree->pRight = NULL;
		pNewTree->keyValue = key;
		return pNewTree;
	}
	
	if (key < pTree->keyValue) pTree->pLeft = insert(pTree->pLeft, key);
	else pTree->pRight = insert(pTree->pRight, key);
	
	return pTree;
}

node *search(node *pTree, int key) {
	if(pTree == NULL) return NULL;
	else if(pTree->keyValue == key) return pTree;
	else if(pTree->keyValue > key) return search(pTree->pLeft, key);
	else return search(pTree->pRight, key);
}

int findMax(node *pTree) {
	while (pTree->pRight != NULL) 
		return findMax(pTree->pRight);
}

void destroyTree(node *pTree) {
	if(pTree != NULL) {
		destroyTree(pTree->pLeft);
		destroyTree(pTree->pRight);
		delete pTree;
	}
}

int main(int argc, char *argv[]) {
	node *binTree = new node;
	binTree->keyValue = 0;
	binTree->pLeft = NULL;
	binTree->pRight = NULL;
	if (search(binTree, 5) == NULL)
		cout << "NO";
}











