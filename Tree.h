#pragma once
#ifndef TREE_H_
#define TREE_H_
// 结点的度：结点的子的数量
// 树的度：树中最大的结点度数为数的度
/*
*  二叉树的性质
*	1、第i层有2^(i-1)个结点（i >= 1）
*	2、深度为k的树最多有2^k - 1个结点（k >= 1）
*	3、对任意一颗二叉树BT，若其叶子结点数为a，度为2的结点数为b，则a = b + 1
*		设度为1的结点有c个，则树的结点总数为n = a + b + c；
*		度为1的结点有一个孩子结点，共有c个子结点；度为2的结点有俩子结点，共有2b个子节点，根结点有一个
*		则n = 1 + c + 2b; （总结点个数就倒着往上加呗）
*		所以a + b + c = 1 + c + 2b; a = b + 1; 
*	*、完全二叉树，通俗讲就是按层次顺序从左往右铺，左结点没铺的时候不可以有右结点
*	4、具有n个结点的完全二叉树的深度为[log2n] + 1
*		k层满二叉树共有2^k - 1个结点，k-1层有2^(k-1) - 1个结点，n肯定大于等于k-1层所有结点+1，且小于k层所有结点+1
*		即2^(k-1) <= n < 2^k，取对数得(k - 1) <= log2n < k
*	5、对于具有n个结点的完全二叉树，如果对其结点按层次编号，则对任一结点i(1 <= i <= n)都有
*		I、如果i=1，为根节点；如果i>1，双亲为i/2
*		II、如果2i>n，无左孩子；否则左孩子是2i
*		III、如果2i+1>n，无右孩子，否则右孩子是2i+1
*/
class Tree
{
public:
	Tree();
	~Tree();

	void init();
	Tree* create(int n);
	void preOrder(Tree* tree);
	void inOrder(Tree* tree);
	void postOrder(Tree* tree);
	void clear();
	int isEmpry(Tree* tree);

	Tree* getParent(Tree* root);
	Tree* getLChild(Tree* node);
	Tree* getRChild(Tree* node);
	void setStr(std::string str); // 若头文件无using namespace std; 要加上std::,否则cpp文件报错

private:
	Tree* lChild;
	Tree* rChild;
	std::string str;
};
#endif // !TREE_H_