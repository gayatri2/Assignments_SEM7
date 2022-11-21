import heapq
class node:
    def __init__(self, freq, symbol, left=None, right=None):
        self.freq = freq
        self.symbol = symbol
        self.left = left
        self.right = right
        self.huff=''
    def __lt__(self, nxt):
        self.freq < nxt.freq
    
def printNodes(node, val=''):
    newval = val + str(node.huff)

    if node.left:
        printNodes(node.left, newval)
    if node.right:
        printNodes(node.right, newval)
    if not node.left and not node.right:
        print(f"{node.symbol}->{newval}")
        
char=['a', 'b', 'c', 'd', 'e', 'f']
freq=[5, 1, 12, 13, 16, 45]
nodes=[]

for x in range(len(char)):
    heapq.heappush(nodes,node(freq[x], char[x]))
while len(nodes) > 1:
    left = heapq.heappop(nodes)
    right = heapq.heappop(nodes)

    left.huff=0
    right.huff=1

    newNode=node(left.freq+right.freq, left.symbol+right.symbol, left, right)
    heapq.heappush(nodes,newNode)

printNodes(nodes[0])
