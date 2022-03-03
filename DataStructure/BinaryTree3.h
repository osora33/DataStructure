#pragma once
#ifndef __	BINARY_TREE3_H__
#define __	BINARY_TREE3_H__

typedef int BTData;

typedef struct _bTreeNode {
	BTData data;
	struct _bTreeNode* left;
	struct _bTreeNode* right;
}BTreeNode;

BTreeNode* MakeBTreeNode();
BTData getData(BTreeNode* bt);
void sortData(BTreeNode* bt, BTData data);

BTreeNode* GetLeftSubTree(BTreeNode* gt);
BTreeNode* GetRightSubTree(BTreeNode* gt);

void MakeLeftSubTree(BTreeNode* by, VisitFuncPtr action);
void MakeRightSubTree(BTreeNode* by, VisitFuncPtr action);

typedef void (*VisitFuncPtr)(BTData data);

void PreorderTraverse(BTreeNode* bt, VisitFuncPtr action);
void InorderTraverse(BTreeNode* bt, VisitFuncPtr action);
void PostorderTraverse(BTreeNode* bt, VisitFuncPtr action);

BTreeNode* RemoveLeftSubTree(BTreeNode* bt);
BTreeNode* RemoveRightSubTree(BTreeNode* bt);
void ChangeLeftSubTree(BTreeNode* bt, BTreeNode* sub);
void ChangeRightSubTree(BTreeNode* bt, BTreeNode* sub);

#endif