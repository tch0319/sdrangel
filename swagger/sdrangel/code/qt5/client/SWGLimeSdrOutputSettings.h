/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI version there is no support for channel deletion. As a consequence the call to the API /sdrangel/deviceset/{deviceSetIndex}/channel/{channelIndex} returns with a status code of 501 (not implemented)   * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGLimeSdrOutputSettings.h
 * 
 * 
 */

#ifndef SWGLimeSdrOutputSettings_H_
#define SWGLimeSdrOutputSettings_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace SWGSDRangel {

class SWGLimeSdrOutputSettings: public SWGObject {
public:
    SWGLimeSdrOutputSettings();
    SWGLimeSdrOutputSettings(QString* json);
    virtual ~SWGLimeSdrOutputSettings();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGLimeSdrOutputSettings* fromJson(QString &jsonString);

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    qint32 getDevSampleRate();
    void setDevSampleRate(qint32 dev_sample_rate);

    qint32 getLog2HardInterp();
    void setLog2HardInterp(qint32 log2_hard_interp);

    qint32 getLog2SoftInterp();
    void setLog2SoftInterp(qint32 log2_soft_interp);

    qint32 getLpfBw();
    void setLpfBw(qint32 lpf_bw);

    qint32 getLpfFirEnable();
    void setLpfFirEnable(qint32 lpf_fir_enable);

    qint32 getLpfFirbw();
    void setLpfFirbw(qint32 lpf_firbw);

    qint32 getGain();
    void setGain(qint32 gain);

    qint32 getNcoEnable();
    void setNcoEnable(qint32 nco_enable);

    qint32 getNcoFrequency();
    void setNcoFrequency(qint32 nco_frequency);

    qint32 getAntennaPath();
    void setAntennaPath(qint32 antenna_path);

    qint32 getExtClock();
    void setExtClock(qint32 ext_clock);

    qint32 getExtClockFreq();
    void setExtClockFreq(qint32 ext_clock_freq);


private:
    qint64 center_frequency;
    qint32 dev_sample_rate;
    qint32 log2_hard_interp;
    qint32 log2_soft_interp;
    qint32 lpf_bw;
    qint32 lpf_fir_enable;
    qint32 lpf_firbw;
    qint32 gain;
    qint32 nco_enable;
    qint32 nco_frequency;
    qint32 antenna_path;
    qint32 ext_clock;
    qint32 ext_clock_freq;
};

}

#endif /* SWGLimeSdrOutputSettings_H_ */
