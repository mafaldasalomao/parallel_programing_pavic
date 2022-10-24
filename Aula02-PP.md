# Aula 02 04/10/2022

# Memory

Multiprocessamento de memoria compartilhada
multiplos processadores conectados entre si e à uma memoria


## Multiprocessadores simétricos

> Tensorflow work on vectores

## Multithreads coocurrents
core
    - Parallel instructions
        - Types
          - Static :book: :warning:
          - Dinamic

> Pipeline ask... execute .. usa memory .. write


# Thread
:key: **Note**: Thread is a process. :warning: every function has a different time of execution.
> Every people has a different code. Because there is many ways to preak the process.

# interconection
  - **Statics:**  
  - **Dinamics:**
  the performance from dinamic's memories is equal to static's memories
  The processors and caches and bus(barramentos) and memories are very importants

for image processing exists process by regions. If don't has order to process, the image loss informations

:question:**Question:**  We've a problem. A image how break to processing? We can think, how concatenate the image outputs?

:clock3: **Task:** Install Visual studio with desktop C++!!

In Pratice...
    we iterate in width*height of image to change the values of pixels
    high cost

:warning: A big problem is the shared memory, because the data need to be actualized in all cpu's
:hammer_and_wrench:

Image Filters: 
  - Exposure and contrast
    - Contrast
    - Brightness
    - Dynamic Range
    - Motion blur
    - Roling Shutter: motion
    - Rolling Shutter: Partial
    - Exposure
  - Texture
    - Sharpness
  - Noise
    - what is the frequence? what noise?
    - Fourier with filter and Inverse Fourier
  - Flash
  - Zoom
  - Bokeh
    - Segmentation erros
    - Joggies
    - Uneven Blur
    - Incorrect Depth

>❓**Question**  Images as Numbers
>
>    matrix of numbers of [0 255] exp 2^8 
>    1080x1080x3 for RGB image

## Format Image PPM

**image without compression**

- create a image without compression....
- format PPM (Portable Pixel Map)
- [netbpm](https://en.wikipedia.org/wiki/Netpbm) to create a image

🛠️ Create a file .PPM and read ... 
