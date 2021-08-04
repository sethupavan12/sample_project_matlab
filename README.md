# sample_project_matlab

CI with Jenkins trial 1

Got a plugin called GitHub pull req builder which triggers the build whenever it recieves a POST from github webhook. So I linked my github to the Jenkis plugin and made a webhook. Since I got my Jenkins on localhost thats not accessible to the public on internet I got a small CLI application called socketxp which converts the localhost to publicly accessible link. I used this to create a webhook and redirect it to Jenkins. But, it sends the requests but Jenkins plugin is not able to catch the sent POSTs
