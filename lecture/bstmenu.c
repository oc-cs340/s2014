#include <stdio.h>
#include <stdlib.h>


struct bst {
    int data;
    struct bst *left, *right;
};


void quit();
void addNode(struct bst **root, int value);
void preorder(struct bst *root);
void inorder(struct bst *root);
void postorder(struct bst *root);


int main() {
    int menu = -1;
    int value;
    struct bst *root = NULL;

    while(menu) {
        printf("1. Add Node\n");
        printf("2. Print Preorder\n");
        printf("3. Print Inorder\n");
        printf("4. Print Postorder\n\n");
        printf("Enter 1-4 (0 to quit): ");
        scanf("%d", &menu);
        
        if(menu == 0) {
            quit();
        }
        else if(menu == 1) {
            value = 0;
            while(value < 1) {
                printf("Please enter a positive integer: ");
                scanf("%d", &value);
            }
            addNode(&root, value);
        }
        else if(menu == 2) {
            printf("Print preorder\n");
            preorder(root);
        }
        else if(menu == 3) {
            printf("Print inorder\n");
            inorder(root);
        }
        else if(menu == 4) {
            printf("Print postorder\n");
            postorder(root);
        }
        else
            printf("%d is not a menu choice!\n", menu);
    }

    return 0;
}


void addNode(struct bst **root, int value) {
    printf("Add Node called with %d\n", value);
}


void preorder(struct bst *root) {
    while(root != NULL) {
        printf("%d\n", root -> data);
        preorder(root -> left);
        preorder(root -> right);
    }
}


void inorder(struct bst *root) {
    while(root != NULL) {
        inorder(root -> left);
        printf("%d\n", root -> data);
        inorder(root -> right);
    }
}


void postorder(struct bst *root) {
    while(root != NULL) {
        postorder(root -> left);
        postorder(root -> right);
        printf("%d\n", root -> data);
    }
}


void quit() {
    printf("Goodbye.\n");
}
