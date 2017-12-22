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


#include "SWGPresetImport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPresetImport::SWGPresetImport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPresetImport::SWGPresetImport() {
    init();
}

SWGPresetImport::~SWGPresetImport() {
    this->cleanup();
}

void
SWGPresetImport::init() {
    group_name = new QString("");
    description = new QString("");
    file_path = new QString("");
}

void
SWGPresetImport::cleanup() {
    
    if(group_name != nullptr) {
        delete group_name;
    }

    if(description != nullptr) {
        delete description;
    }

    if(file_path != nullptr) {
        delete file_path;
    }
}

SWGPresetImport*
SWGPresetImport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPresetImport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&group_name, pJson["groupName"], "QString", "QString");
    ::SWGSDRangel::setValue(&description, pJson["description"], "QString", "QString");
    ::SWGSDRangel::setValue(&file_path, pJson["filePath"], "QString", "QString");
}

QString
SWGPresetImport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPresetImport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("groupName"), group_name, obj, QString("QString"));

    toJsonValue(QString("description"), description, obj, QString("QString"));

    toJsonValue(QString("filePath"), file_path, obj, QString("QString"));

    return obj;
}

QString*
SWGPresetImport::getGroupName() {
    return group_name;
}
void
SWGPresetImport::setGroupName(QString* group_name) {
    this->group_name = group_name;
}

QString*
SWGPresetImport::getDescription() {
    return description;
}
void
SWGPresetImport::setDescription(QString* description) {
    this->description = description;
}

QString*
SWGPresetImport::getFilePath() {
    return file_path;
}
void
SWGPresetImport::setFilePath(QString* file_path) {
    this->file_path = file_path;
}


}

