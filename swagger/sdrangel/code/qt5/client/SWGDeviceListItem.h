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
 * SWGDeviceListItem.h
 * 
 * Summarized information about attached hardware device
 */

#ifndef SWGDeviceListItem_H_
#define SWGDeviceListItem_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace SWGSDRangel {

class SWGDeviceListItem: public SWGObject {
public:
    SWGDeviceListItem();
    SWGDeviceListItem(QString* json);
    virtual ~SWGDeviceListItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGDeviceListItem* fromJson(QString &jsonString);

    QString* getDisplayedName();
    void setDisplayedName(QString* displayed_name);

    QString* getHwType();
    void setHwType(QString* hw_type);

    QString* getSerial();
    void setSerial(QString* serial);

    qint32 getSequence();
    void setSequence(qint32 sequence);

    qint32 getTx();
    void setTx(qint32 tx);

    qint32 getNbStreams();
    void setNbStreams(qint32 nb_streams);

    qint32 getStreamIndex();
    void setStreamIndex(qint32 stream_index);

    qint32 getDeviceSetIndex();
    void setDeviceSetIndex(qint32 device_set_index);

    qint32 getIndex();
    void setIndex(qint32 index);


private:
    QString* displayed_name;
    QString* hw_type;
    QString* serial;
    qint32 sequence;
    qint32 tx;
    qint32 nb_streams;
    qint32 stream_index;
    qint32 device_set_index;
    qint32 index;
};

}

#endif /* SWGDeviceListItem_H_ */
