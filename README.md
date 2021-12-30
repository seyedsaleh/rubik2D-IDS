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

  <h3 align="center">rubik2D-IDS</h3>

  <p align="center">
    A Rubik's Cube solver implementation with optimal algorithms (e.g. DLS, IDS) ❓
    <br />
    <a href="https://github.com/seyedsaleh/rubik2D-IDS"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://colab.research.google.com/drive/1T7FZd5krcsOHAki55z0GL2jeNbS7GuTq?usp=sharing">Demo Music Generation (Google Colab)</a>
    ·
    <a href="https://colab.research.google.com/drive/1bxy2XzbMsUhgLSDcQH_ElKL7K-dGGjD-?usp=sharing">Demo Multi-Instrument Music Generation (Google Colab)</a>
    .
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

<p> <img src="https://user-images.githubusercontent.com/47852354/147794273-16f201e0-8438-4aee-b4ee-18e171393d0d.png" width="300"> </p>  Generative adversarial networks have been proposed as a way of efficiently training deep generative neural networks. We propose a generative adversarial model that works on continuous sequential data, and apply it by training it on a collection of classical music. We conclude that it generates music that sounds better and better as the model is trained, report statistics on generated music, and let the reader judge the quality by downloading the generated songs.

Recently, generative neural networks have taken the stage for artistic pursuits, such as image generation and photo retouching. Another area where these deep learning networks are beginning to leave a mark is in music generation. In this project, our goal is to explore the use of **LSTM** and **GAN neural networks** to generate music that seems as if it were human-made.
By treating the notes and chords within **MIDI** files as discrete sequential data, we were able to train these two models and use them to generate completely new MIDI files. 

Listen to our results! :smile:

<p align="right">(<a href="#top">back to top</a>)</p>


### Built With

Major frameworks/libraries used to this project:

* [C++](https://www.cplusplus.com/)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- PARTS -->
## Parts

**MIDI format**
an acronym for Musical Instrument Digital Interface, a technical standard that describes a communications protocol, digital interface, and electrical connectors that connect a wide variety of electronic musical instruments, computers.


**Music21** is a powerful library in python whose tools are very helpful for creating, analysis and processing of audio files like songs, melodies and etc..
In this project, we have used this library for our purposes of converting the MIDI files into notes, categorizing of notes for preparing the training data, and choosing the playing instruments for the output of our GAN and converting it back to MIDI.


**MIDI Class:**
- Parser
- sequence preparation
- MIDI creation

**Parsing MIDI file and preparing the training data and preparing data for C-RNN-GAN network**
<p> <img src="https://user-images.githubusercontent.com/47852354/141293958-b829dce5-64e2-439b-b45b-4667608d13b6.png" width="650"> </p> 

**Model Class:**
- Discriminator
- Generator
- Train
- Plot loss function
- Save model

**Generative Adversarial Network (GAN) vs. LSTM**
<p> <img src="https://user-images.githubusercontent.com/47852354/141293644-9504c1c3-1713-4533-a91d-8e4637edd961.png" width="350">
<img src="https://user-images.githubusercontent.com/47852354/141293667-67f8be01-d6ad-4a91-8058-bb928048a771.png" width="250"> </p> 

**C-RNN-GAN Network Structure**
<p> <img src="https://user-images.githubusercontent.com/47852354/141293801-1402eb14-6e05-4ff4-a2eb-5af0abcbf239.png" width="400"> </p> 


The project has been done with aid of GPU Computing and the use of NVIDIA cuDNN and NVIDIA CUDA Toolkit. It helped us to use Tensorflow with GPU support for computing and learning with more compatibility.
The model has been trained on an **NVIDIA GeForce GTX 1080Ti GPU**.
**CUDA** is a parallel computing platform interface that allows software developers to use GPUs for ML computing.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- RESULTS -->
## Results
<p> <img src="https://user-images.githubusercontent.com/47852354/141289514-87b11009-2835-407f-8cf3-dc99ed860811.png" width="300"> </p> 

https://user-images.githubusercontent.com/47852354/141285440-be56d13f-abb4-4956-9ae3-c6845ed1fd12.mov

https://user-images.githubusercontent.com/47852354/141285431-a525b350-857f-470a-9465-7935a80a06d6.mov


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

- [x] Multi-instrument by partitioning and joining each part (Music21 Instrument package)
- [ ] Use offset, duration, velocity with pyPianoroll package
- [ ] UI mobile and desktop application to create music
- [ ] using CGANs network to avoid falchs

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

