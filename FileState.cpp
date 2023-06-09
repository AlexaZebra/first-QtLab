#include "FileState.h"



StateFile::StateFile(const QString& Path) { // конструктор с параметром
    QFileInfo infoFile;                     // с помощью конструктора QFileInfo инициализируем информацию
    infoFile.setFile(Path);
    fileName = infoFile.filePath();         // храним путь
    IsExist = infoFile.exists();            // существование файла
    Size = infoFile.size();                 // его размер
}

bool StateFile::operator==(const StateFile& file)const {   // перегрузка оператора сравнения

    if (file.fileName == fileName)
        return true;
    return false;
}
                                            // геттеры для обращения к приватной информации из класса мониторинга
QString StateFile::getPath(){
    return fileName;
}

qint64 StateFile::getSize(){
    return Size;
}

bool StateFile::getExist(){
    return IsExist;
}
