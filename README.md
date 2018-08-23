# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
* gcc/g++ >= 5.4
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

# The P, I, D component 

P component establish a linear relationship with the problem, the larger the P, the faster the system responds.

I component used to eliminate steady state error.

D component can prevent fluctuations .

# how I chose the final hyperparameters 

At the beginning,I used Twiddle Algorithm to find the hyperparameters,but I find uWebSockets is asynchronous.This will cause my Twiddle Algorithm confusion.So I decide manual tuning .

| hyperparameters | Cumulative error(one circle) |
| --------------- | ---------------------------- |
| 0.23, 0.0, 3.0  | 1117                         |
| 0.25, 0.0, 3.0  | 890                          |
| 0.27, 0.0, 3.0  | 900                          |
| 0.25, 0.0, 2.8  | 967                          |
| 0.25, 0.0, 3.0  | 907                          |
| 0.25, 0.0, 3.2  | 874                          |
| 0.25, 0.0, 3.4  | 850                          |
| 0.25, 0.0, 3.5  | 848                          |
| 0.25, 0.0, 3.6  | 852                          |
| 0.25, 0.0, 4.0  | 829                          |

I chose the final hyperparameters is [0.25, 0.0, 4.0]