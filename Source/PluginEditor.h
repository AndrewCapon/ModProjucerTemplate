/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#if (!JUCE_AUDIOPROCESSOR_NO_GUI)

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class ModProjucerProjectAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    ModProjucerProjectAudioProcessorEditor (ModProjucerProjectAudioProcessor&);
    ~ModProjucerProjectAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    ModProjucerProjectAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ModProjucerProjectAudioProcessorEditor)
};

#endif