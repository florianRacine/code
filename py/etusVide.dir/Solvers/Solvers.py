"""Search (Chapters 3-4)

The way to use this code is to subclass Problem to create a class of problems,
then create problem instances and solve them with calls to the various search
functions."""

from __future__ import generators
from Utile.utils import *
import math, random, sys, time, bisect, string

import time
import random
import chess
import chess.svg
from IPython.core.display import SVG
from IPython.core.display import display
from IPython.display import clear_output

class Node:
    def __init__(self, state, parent=None, action=None, path_cost=0):
        "Create a search tree Node, derived from a parent by an action."
        update(self, state=state, parent=parent, action=action,
               path_cost=path_cost, depth=0)
        if parent:
            self.depth = parent.depth + 1

    def __repr__(self):
        return "<Node %s>" % (self.state,)

    def path(self):
        "Create a list of nodes from the root to this node."
        x, result = self, [self]
        while x.parent:
            result.append(x.parent)
            x = x.parent
        return result

    def solution(self):
        return None

    def expand(self, problem):
        "Return a list of nodes reachable from this node. [Fig. 3.8]"
        return [ Node(s, self, a, problem.path_cost(self.path_cost, self.state, a, s) )  for (a,s) in problem.successor(self.state)]
      
      
#______________________________________________________________________________
## Uninformed Search algorithms

def tree_search(problem, fringe):
    
    fringe.append(Node(problem.initial))
    while fringe:
      n = fringe.pop()
      if (problem.goal_test(n.state)):
        return n
      else:
        fringe.extend(n.expand(problem))
    return None
  
def breadth_first_tree_search(problem):
    "Search the shallowest nodes in the search tree first. [p 74]"
    return tree_search(problem, FIFOQueue())
  
  

def depth_first_tree_search(problem):
    "Search the deepest nodes in the search tree first. [p 74]"
    return tree_search(problem,  Stack()) 

  #############


def tree_search2(problem, fringe):
    N_explored=0
    fringe.append(Node(problem.initial))
    while fringe:
      n = fringe.pop()
      N_explored +=1
      if (problem.goal_test(n.state)):
        n.N_explored = N_explored
        return n
      else:
        fringe.extend(n.expand(problem))
    return None
  
def breadth_first_tree_search2(problem):
    "Search the shallowest nodes in the search tree first. [p 74]"
    return tree_search2(problem, FIFOQueue())
  
  

def depth_first_tree_search2(problem):
    "Search the deepest nodes in the search tree first. [p 74]"
    return tree_search2(problem,  Stack()) 


############ 
  
def graph_search(problem, fringe):
    fringe.append(Node(problem.initial))
    closed = {}
    while fringe:
      n = fringe.pop()      
      if (problem.goal_test(n.state)):
        return n
      if not (hash(str(n.state)) in closed.keys()):
        fringe.extend(n.expand(problem))    
        closed[hash(str(n.state))] = True
    return None
  
def breadth_first_graph_search(problem):    
    return graph_search(problem, FIFOQueue())

def depth_first_graph_search(problem):
    return graph_search(problem,  Stack()) 
  

#################
  

def depth_limited_search(problem, limit=50):
    "[Fig. 3.12]"

    return True

def iterative_deepening_search(problem):
    "[Fig. 3.13]"
    return True

#______________________________________________________________________________
# Informed (Heuristic) Search _ mines

def astar2(problem, h=None):
    """Search the nodes with the lowest f scores first.
    You specify the function f(node) that you want to minimize; for example,
    if f is a heuristic estimate to the goal, then we have greedy best
    first search; if f is node.depth then we have depth-first search."""

    return True

#______________________________________________________________________________
# Informed (Heuristic) Search _ AIMA

def best_first_graph_search(problem, f):
    """Search the nodes with the lowest f scores first.
    You specify the function f(node) that you want to minimize; for example,
    if f is a heuristic estimate to the goal, then we have greedy best
    first search; if f is node.depth then we have depth-first search.
    There is a subtlety: the line "f = memoize(f, 'f')" means that the f
    values will be cached on the nodes as they are computed. So after doing
    a best first search you can examine the f values of the path returned."""

    return True
