#ifndef DEBUG

/*
 * main.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: Hyeongkyeong Seo
 */

#define ARRAYLIST_TEST		0
#define BINARYTREE_TEST		1
#define LINKEDLIST_TEST		0
#define MAP_TEST			0
#define QUEUE_TEST			0

int main(void){

#if (ARRAYLIST_TEST==1)
	extern void ArrayList_test(void);
	ArrayList_test();
#endif // (ARRAYLIST_TEST==1)
#if (LINKEDLIST_TEST==1)
	extern void LinkedList_test(void);
	LinkedList_test();
#endif /* (LINKEDLIST_TEST==1) */
#if (QUEUE_TEST==1)
	extern void Queue_test(void);
	Queue_test();
#endif /* (QUEUE_TEST==1) */
#if (MAP_TEST==1)
	Map_test();
#endif /* (MAP_TEST==1) */
#if (BINARYTREE_TEST==1)
	extern void BinaryTree_test(void);
	BinaryTree_test();
#endif /* (BINARYTREE_TEST==1) */


}

#endif /* DEBUG */
