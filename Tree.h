#pragma once
#ifndef TREE_H_
#define TREE_H_
// ���Ķȣ������ӵ�����
// ���Ķȣ��������Ľ�����Ϊ���Ķ�
/*
*  ������������
*	1����i����2^(i-1)����㣨i >= 1��
*	2�����Ϊk���������2^k - 1����㣨k >= 1��
*	3��������һ�Ŷ�����BT������Ҷ�ӽ����Ϊa����Ϊ2�Ľ����Ϊb����a = b + 1
*		���Ϊ1�Ľ����c���������Ľ������Ϊn = a + b + c��
*		��Ϊ1�Ľ����һ�����ӽ�㣬����c���ӽ�㣻��Ϊ2�Ľ�������ӽ�㣬����2b���ӽڵ㣬�������һ��
*		��n = 1 + c + 2b; ���ܽ������͵������ϼ��£�
*		����a + b + c = 1 + c + 2b; a = b + 1; 
*	*����ȫ��������ͨ�׽����ǰ����˳����������̣�����û�̵�ʱ�򲻿������ҽ��
*	4������n��������ȫ�����������Ϊ[log2n] + 1
*		k��������������2^k - 1����㣬k-1����2^(k-1) - 1����㣬n�϶����ڵ���k-1�����н��+1����С��k�����н��+1
*		��2^(k-1) <= n < 2^k��ȡ������(k - 1) <= log2n < k
*	5�����ھ���n��������ȫ����������������㰴��α�ţ������һ���i(1 <= i <= n)����
*		I�����i=1��Ϊ���ڵ㣻���i>1��˫��Ϊi/2
*		II�����2i>n�������ӣ�����������2i
*		III�����2i+1>n�����Һ��ӣ������Һ�����2i+1
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
	void setStr(std::string str); // ��ͷ�ļ���using namespace std; Ҫ����std::,����cpp�ļ�����

private:
	Tree* lChild;
	Tree* rChild;
	std::string str;
};
#endif // !TREE_H_