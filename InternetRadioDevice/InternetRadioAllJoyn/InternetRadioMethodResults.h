//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace maker { namespace InternetRadio {

ref class InternetRadioConsumer;

public ref class InternetRadioNextPresetResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static InternetRadioNextPresetResult^ CreateSuccessResult()
    {
        auto result = ref new InternetRadioNextPresetResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }
    
    static InternetRadioNextPresetResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioNextPresetResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class InternetRadioPreviousPresetResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static InternetRadioPreviousPresetResult^ CreateSuccessResult()
    {
        auto result = ref new InternetRadioPreviousPresetResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }
    
    static InternetRadioPreviousPresetResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioPreviousPresetResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class InternetRadioAddPresetResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static InternetRadioAddPresetResult^ CreateSuccessResult()
    {
        auto result = ref new InternetRadioAddPresetResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }
    
    static InternetRadioAddPresetResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioAddPresetResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class InternetRadioRemovePresetResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static InternetRadioRemovePresetResult^ CreateSuccessResult()
    {
        auto result = ref new InternetRadioRemovePresetResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }
    
    static InternetRadioRemovePresetResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioRemovePresetResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class InternetRadioPlayPresetResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    
    static InternetRadioPlayPresetResult^ CreateSuccessResult()
    {
        auto result = ref new InternetRadioPlayPresetResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }
    
    static InternetRadioPlayPresetResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioPlayPresetResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class InternetRadioJoinSessionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property InternetRadioConsumer^ Consumer
    {
        InternetRadioConsumer^ get() { return m_consumer; }
    internal:
        void set(_In_ InternetRadioConsumer^ value) { m_consumer = value; }
    };

private:
    int32 m_status;
    InternetRadioConsumer^ m_consumer;
};

public ref class InternetRadioGetVersionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint16 Version
    {
        uint16 get() { return m_value; }
    internal:
        void set(_In_ uint16 value) { m_value = value; }
    }

    static InternetRadioGetVersionResult^ CreateSuccessResult(_In_ uint16 value)
    {
        auto result = ref new InternetRadioGetVersionResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Version = value;
        return result;
    }

    static InternetRadioGetVersionResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioGetVersionResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
    uint16 m_value;
};

public ref class InternetRadioGetVolumeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property double Volume
    {
        double get() { return m_value; }
    internal:
        void set(_In_ double value) { m_value = value; }
    }

    static InternetRadioGetVolumeResult^ CreateSuccessResult(_In_ double value)
    {
        auto result = ref new InternetRadioGetVolumeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Volume = value;
        return result;
    }

    static InternetRadioGetVolumeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioGetVolumeResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
    double m_value;
};

public ref class InternetRadioSetVolumeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    static InternetRadioSetVolumeResult^ CreateSuccessResult()
    {
        auto result = ref new InternetRadioSetVolumeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }

    static InternetRadioSetVolumeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioSetVolumeResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class InternetRadioGetCurrentlyPlayingResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ CurrentlyPlaying
    {
        Platform::String^ get() { return m_value; }
    internal:
        void set(_In_ Platform::String^ value) { m_value = value; }
    }

    static InternetRadioGetCurrentlyPlayingResult^ CreateSuccessResult(_In_ Platform::String^ value)
    {
        auto result = ref new InternetRadioGetCurrentlyPlayingResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->CurrentlyPlaying = value;
        return result;
    }

    static InternetRadioGetCurrentlyPlayingResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioGetCurrentlyPlayingResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
    Platform::String^ m_value;
};

public ref class InternetRadioGetPresetsResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ Presets
    {
        Platform::String^ get() { return m_value; }
    internal:
        void set(_In_ Platform::String^ value) { m_value = value; }
    }

    static InternetRadioGetPresetsResult^ CreateSuccessResult(_In_ Platform::String^ value)
    {
        auto result = ref new InternetRadioGetPresetsResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Presets = value;
        return result;
    }

    static InternetRadioGetPresetsResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioGetPresetsResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
    Platform::String^ m_value;
};

public ref class InternetRadioGetPowerResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property bool Power
    {
        bool get() { return m_value; }
    internal:
        void set(_In_ bool value) { m_value = value; }
    }

    static InternetRadioGetPowerResult^ CreateSuccessResult(_In_ bool value)
    {
        auto result = ref new InternetRadioGetPowerResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Power = value;
        return result;
    }

    static InternetRadioGetPowerResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioGetPowerResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
    bool m_value;
};

public ref class InternetRadioSetPowerResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    static InternetRadioSetPowerResult^ CreateSuccessResult()
    {
        auto result = ref new InternetRadioSetPowerResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }

    static InternetRadioSetPowerResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new InternetRadioSetPowerResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

} } } } 
