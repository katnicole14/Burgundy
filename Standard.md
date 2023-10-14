Coding standards Diagrams 
Naming standard 
•	camelCase
•	Tab Indentation 
•	Skip a line after defining variables 
•	Operators, space on both sides 
•	Skip a line for return 
•	Use: int* var 
•	Doxgen multiline commenting 
•	All variables are defined at the top 
•	Function format :
Function(   ){
}

Git standards :
Four possible branches 
	Main 
	Develop
	Feature 
	Hotfix
How it works :
•	A develop branch is created from main
•	A release branch is created from develop
•	Feature branches are created from develop
•	When a feature is complete it is merged into the develop branch
•	When the release branch is done it is merged into develop and main
•	If an issue in main is detected a hotfix branch is created from main
•	Once the hotfix is complete it is merged to both develop and main

References :
Gitflow Workflow | Atlassian Git Tutorial
