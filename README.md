# sample_project_matlab

CI with Jenkins trial 1

Got a plugin called GitHub pull req builder which triggers the build whenever it recieves a POST from github webhook. So I linked my github to the Jenkis plugin and made a webhook. Since I got my Jenkins on localhost thats not accessible to the public on internet I got a small CLI application called socketxp which converts the localhost to publicly accessible link. I used this to create a webhook and redirect it to Jenkins. But, it sends the requests but Jenkins plugin is not able to catch the sent POSTs


# Github Workflow 

 We follow [Github Flow](https://guides.github.com/introduction/flow/index.html) using branches for new work and pull requests for verifying the work.
 
 
 The steps for a new piece of work can be summarised as follows:
   1. Push up or create an issue 
   2. Create a branch from master using the naming convention described at *Naming Branches*
   3. Do the work and commit changes to the newly created branch. On commit, the pre-commit framework will run, it will check all your changes for formatting, linting, and perform static code analysis. 
   4. Push the branch regularly to GitHub to make sure no work is accidentally lost.
   5. When you are finished with the work, ensure that all of the unit tests, documentation tests and system tests if necessary pass on your own machine
   6. Open a pull request (Pull Requests) from the GitHub branches page
   7. This will check with the buildservers for cross-platform compatibility
   8. If any issues come up, continue working on your branch and push to GitHub - the pull request will update automatically
 
