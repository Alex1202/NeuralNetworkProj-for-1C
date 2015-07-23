========================================================================
    CONSOLE APPLICATION : Perceptron Project Overview
========================================================================

AppWizard has created this Perceptron application for you.

This file contains a summary of what you will find in each of the files that
make up your Perceptron application.


Perceptron.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

Perceptron.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

Perceptron.cpp
    This is the main application source file.
    
Neuron 
	Class include description and parametres of one neuron
	
Layer 
	Class include description and parametres of one layer. 
	Class Layer also contain std::vector<Neuron>
	
Network
	Class include description and parametres of neural network. 
	Class Network also contain std::vector<Layer>
	Also contain forward propogation and back propogation methods
/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named Perceptron.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
