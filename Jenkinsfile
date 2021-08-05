pipeline {
  agent any
  stages {
    stage('') {
      steps {
        runMATLABTests(codeCoverageCobertura: 'matlabTestArtifacts/cobertura.xml', testResultsJUnit: 'matlabTestArtifacts/junittestresults.xml')
      }
    }

  }
}