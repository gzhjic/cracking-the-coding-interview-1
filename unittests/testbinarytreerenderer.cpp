#include "testbinarytreerenderer.h"

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <math.h>

#include "testbinarytree.h"

#include "lib/utils/Utils.h"
#include "lib/utils/SampleBinaryTrees.h"
#include "lib/utils/BinaryTreeRenderer.h"

using namespace std;

void testBinaryTreeRenderer()
{
    BinaryTree<int>* pFull = new BinaryTree<int>(1);
    buildFullBinaryTree(pFull, 1, 5);

    FILE* pStream = fopen("binaryTree.dot", "w");

    bst_print_dot(pFull, pStream);

    cout << "binary tree renderer tested!" << endl;
}
