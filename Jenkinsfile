pipeline {
  agent any
  environment {
     //  PATH = "C:\\Program Files\\MATLAB\\R2021a\\bin;${PATH}"   // Windows agent
     PATH="/opt/modules-common/software/MATLAB/R2020b/bin:${PATH}"   // Linux agent
    // PATH = "/Applications/MATLAB_R2021a.app/bin:${PATH}"   // macOS agent    
   }
  stages {
    stage('Run matlab tests') {
      steps {
        runMATLABTests(codeCoverageCobertura: 'matlabTestArtifacts/cobertura.xml', testResultsJUnit: 'matlabTestArtifacts/junittestresults.xml')
      }
    }

    stage('C++ Code') {
      steps {
        runMATLABCommand 'codegen quadraticSolver.prj'
      }
    }

  }
}
