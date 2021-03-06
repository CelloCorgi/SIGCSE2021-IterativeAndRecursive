# SIGCSE2021-IterativeAndRecursive

This repository contains the materials relating to the paper: An Analysis of Iterative and Recursive Problem Performance, pulished in SIGCSE 2021.

## Paper Abstract

Iteration and recursion are fundamental programming constructs in introductory computer science. Understanding the relationship between contextual factors, such as problem formulation or student background, that relate to performance on iteration and recursion problems can help inform pedagogy. 
We present the results of a study of 162 undergraduate participants tasked with comprehending iterative, recursive, and tail-recursive versions of CS1 functions. First, we carry out a task-specific analysis, finding that students perform significantly better on the iterative framings of two problems with non-branching numerical computation and significantly better on the recursive framing of another that involves array classification (p <= 0.036). 

Second, we investigate differences in the most common student mistakes by program framing. We find that students were more likely to produce wrong answers with incorrect types or structures for recursive and tail-recursive program versions.

Finally, we investigated correlations between programming performance and background factors including experience, gender, ethnicity, affluence, and spatial ability. We find that the factors relevant to explaining performance are similar for both iterative and recursive problems. While programming experience is the most significant factor, we find that spatial ability, gender, and ethnicity were more relevant for explaining performance than affluence. 

## Paper Authors
* [Madeline Endres](https://www.madelineendres.com/), University of Michigan, endremad@umich.edu
* [Westley Weimer](https://web.eecs.umich.edu/~weimerw/), University of Michigan, weimerw@umich.edu
* [Amir Kamil](https://web.eecs.umich.edu/~akamil/), University of Michigan, akamil@umich.edu

## Paper Link
https://github.com/CelloCorgi/SIGCSE2021-IterativeAndRecursive/blob/main/paper_endres_sigcse2021.pdf

## Presentation Slides Link
https://docs.google.com/presentation/d/1R9eEqEl6P7-P6YzBqSD3QHMUsBLj4TSBAYevprGQR_s/edit?usp=sharing

## Repository Contents
* `qualtrics`: Contains a pdf of the survey used in our experiment along with a qualtrics-formatted project file
* `code`: Contains text versions of the program stimuli. Variable names and formatting were modified between this text version and the final qualtrics version shown to participants (see `qualtrics` folder)
* `data`: contains anonymized data analyzed for the paper. `all_participants_raw.csv` contains all data recorded by qualtrics (including incomplete study attempts) and `valid_participants_scores.csv` contains just the 162 participants who completed the study.


