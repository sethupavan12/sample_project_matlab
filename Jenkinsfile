pipeline {
  agent any
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