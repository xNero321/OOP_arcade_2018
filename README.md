# OOP_arcade_2018

**A retro Platform**

![forthebadge](https://forthebadge.com/images/badges/built-with-grammas-recipe.svg)![forthebadge](https://forthebadge.com/images/badges/60-percent-of-the-time-works-every-time.svg)
![shields.io](https://img.shields.io/badge/docker-v18.06.1-blue.svg?style=for-the-badge)![shields.io](https://img.shields.io/badge/docker--compose-v1.22.0-blue.svg?style=for-the-badge)

## Requirement

- GNU Make 4.2.1
- A web browser (Google Chrome, Mozilla Firefox, ...)
- Docker version 18.01 or greater version

## Usage
	USAGE: ./arcade <library_path>
        library_path    is the choice of the library you want to use to start the program
## Codacy analysis

This project use Codacy analysis, to see the project analysis

## CI/CD Implementation [:WIP]

This project use CircleCI as integration software, every stages is located
in the `.circleci/config.yml` file composed of 3 stages/jobs.

PIPELINE:

- Build of the source code using EPITECH docker image
- Code coverage using unittest
- SonarQube analysis using Sonar-scanner docker image
