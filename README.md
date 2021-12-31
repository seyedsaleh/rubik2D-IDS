<div id="top"></div>


<!-- PROJECT SHIELDS -->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]




<!-- PROJECT LOGO -->
<br />
<div align="center">
  <i align="center"> In The Name Of God </i>
 
  <h3 align="center">rubik2D-IDS</h3>

  <p align="center">
    A Rubik's Cube solver implementation with optimal algorithms (e.g. DLS, IDS) ❓
    <br />
    <a href="https://github.com/seyedsaleh/rubik2D-IDS"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/seyedsaleh/rubik2D-IDS/issues">Report Bug & Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary> 
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li><a href="#parts">Parts</a></li>
    <li><a href="#results">Results</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#refereces">Refereces</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
  </ol>
</details>


<!-- ABOUT THE PROJECT -->
## About The Project

<p> <img src="https://user-images.githubusercontent.com/47852354/147794273-16f201e0-8438-4aee-b4ee-18e171393d0d.png" width="300"> </p>  
In this project, I have done two simple tasks: **simulating and solving 2x2 Rubik's games!** :smile:
The game is made up of two parts, Graphics and Algorithms, in which the graphic demands the use of C++ and terminal, and for the Search Algorithm, the DLS algorithm (which is an uninformed search algorithm) and the IDS algorithm in Artificial Intelligence and Algorithms. 

<p align="right">(<a href="#top">back to top</a>)</p>


### Built With

Major frameworks/libraries used to this project:

* [C++](https://www.cplusplus.com/)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- PARTS -->
## Parts
### Algorithms

**Depth Limited Search Algorithm (DLS Algorithm)**

In AI we have 2 main methods of searching: **Informed and Uninformed searching**. In an Uninformed search, we don’t know how far or close are we to the goal, so with checking of reach a goal or not, we continue our move in all possible directions, but in Informed search, we know where our goal is and how far or close we are to the goal, so we define a heuristic which determines which move to choose.

The **DLS** search algorithm is one of the uninformed search methods in Artificial Intelligence so that the goal is not clear and we must reach the goal through uninformed moves of the target.

Every state of the agent (cube in this example) is called a node. Each of these nodes can produce a new node (they are called parent nodes which produce child nodes) by moving to its next state, so all possible modes are available. These newly made nodes would be a new parent node to new nodes that could be produced by them.

The DLS algorithm determines the depth to extend in various nodes and determines how deep the initial node goes. The final non-goal solution returns to the previous state that it can be checked. This algorithm is graphical as follows:

<p> <img src="https://user-images.githubusercontent.com/47852354/147795209-a0e981ac-1659-4079-946b-d27003b527b4.png" width="400"> </p>

If the desired solution is reached, the algorithm will ignore the rest of the nodes returns the answer.The pseudo-code of this method (DLS) will be as the following.

<p> <img src="https://user-images.githubusercontent.com/47852354/147795210-73aef91f-ac6c-433e-96bd-72757de971b6.png" width="450"> </p> 

*DLS will equal Depth-First-Search (DFS) if we set depth to infinity.*

**Iterative Deepening Depth-First Search Algorithm (IDS Algorithm)**

**IDS** is a graph search strategy in which a depth-limited version of depth-first search is run repeatedly with increasing depth limits until the goal is found. IDS, or more specifically **IDDFS** is **optimal** like breadth-first search but uses much less memory; at each iteration, it visits the nodes in the search tree in the same order as depth-first search, but the cumulative order in which nodes are first visited is effectively breadth-first.

*In this project, I have implemented both algorithms to find the optimal solutions.*


### Graphic

I named the surface colors as:

1.  Orange
2.  Green
3.  White
4.  Blue
5.  Red
6.  Yellow

For printing stuff, I stated the number of the cube and the round and movement.

The initial state of the cube is taken from the input as follows in the order of the number of surfaces mentioned above, the colors of surfaces is shown by numbers as 1 to 6. 
For example, for the following figure, the input would be as follows:

<p> <img src="https://user-images.githubusercontent.com/47852354/147795211-dae51534-0e29-4e55-be2a-dd629f501b46.png" width="400"> </p> 


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- RESULT -->
## Result

Once you get the solution of Rubik's solver, the program display number of expanded nodes (procedure) and also displays the depth in which the program found the result (number of steps to achieve the answer).

<p> <img src="https://user-images.githubusercontent.com/47852354/141289514-87b11009-2835-407f-8cf3-dc99ed860811.png" width="300"> </p> 


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- REFERENCES -->
## Refereces

[1] *Russell, Stuart J. (Stuart Jonathan). Artificial Intelligence : a Modern Approach. Upper Saddle River, N.J. :Prentice Hall, 2010. (Chapter3 - Solving Problems by Searching)* 

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Seyedmohammadsaleh Mirzatabatabaei - [@seyedsaleh](https://github.com/seyedsaleh) - seyedsaleh.edu@gmail.com

Project Link: [https://github.com/seyedsaleh/rubik2D-IDS](https://github.com/seyedsaleh/rubik2D-IDS)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [x] Simulating and solving 2x2 Rubik's games with DLS and IDS!
- [ ] Bidirectional Search method and solve this question with it.
- [ ] GUI implemented using Qt.

See the [open issues](https://github.com/seyedsaleh/rubik2D-IDS/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#top">back to top</a>)</p>


---
<div align="center">
<p>
 <img src="https://user-images.githubusercontent.com/47852354/138564509-b5dffb4e-f48b-4db5-b8a4-1385ef2b22c8.png" width="110">
 <img src="https://user-images.githubusercontent.com/47852354/138607395-e18bfc7a-204c-495a-914f-bd5cf8436ca4.jpg" width="70">
</p>
</div>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/seyedsaleh/rubik2D-IDS.svg?style=for-the-badge
[contributors-url]: https://github.com/seyedsaleh/rubik2D-IDS/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/seyedsaleh/rubik2D-IDS.svg?style=for-the-badge
[forks-url]: https://github.com/seyedsaleh/rubik2D-IDS/network/members
[stars-shield]: https://img.shields.io/github/stars/seyedsaleh/rubik2D-IDS.svg?style=for-the-badge
[stars-url]: https://github.com/seyedsaleh/rubik2D-IDS/stargazers
[issues-shield]: https://img.shields.io/github/issues/seyedsaleh/rubik2D-IDS.svg?style=for-the-badge
[issues-url]: https://github.com/seyedsaleh/rubik2D-IDS/issues
[license-shield]: https://img.shields.io/github/license/seyedsaleh/rubik2D-IDS.svg?style=for-the-badge
[license-url]: https://github.com/seyedsaleh/rubik2D-IDS/blob/master/LICENSE.txt

