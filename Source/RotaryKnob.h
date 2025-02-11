/*
  ==============================================================================

    RotaryKnob.h
    Created: 16 Jan 2025 6:44:12pm
    Author:  Davi Bedoya

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class RotaryKnob  : public juce::Component
{
public:
    RotaryKnob(const juce::String&,
               juce::AudioProcessorValueTreeState&,
               const juce::ParameterID&);
    ~RotaryKnob() override;

    void resized() override;
    
    juce::Slider slider;
    juce::Label label;
    juce::AudioProcessorValueTreeState::SliderAttachment attachment;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RotaryKnob)
};
