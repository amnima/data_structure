import sys
import threading


def compute_height(n, parents):
    nodes = []
    for i in range(n):
        nodes.append(i)
    height = 0
    for child_index in range(n-1):
        height += 1
        parent_index = parents[child_index]
        if parent_index == -1:
            root = child_index
        else:
            nodes.append(child_index)
    return height


def main():
    n = int(input())
    parents = list(map(int, input().split()))
    print(compute_height(n, parents))

sys.setrecursionlimit(10**7)  # max depth of recursion
threading.stack_size(2**27)   # new thread will get stack of such size
threading.Thread(target=main).start()