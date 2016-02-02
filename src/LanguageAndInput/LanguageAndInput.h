/*
 * LanguageAndInput.h
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#ifndef LANGUAGEANDINPUT_H_
#define LANGUAGEANDINPUT_H_

#include <src/PpsWatch/PpsWatch.h>

#include <QStringList>

class LanguageAndInput : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool vibrateOnCorrect READ vibrateOnCorrect NOTIFY vibrateOnCorrectChanged);
    Q_PROPERTY(bool autoCapitalize READ autoCapitalize NOTIFY autoCapitalizeChanged);
    Q_PROPERTY(bool autoComma READ autoComma NOTIFY autoCommaChanged);
    Q_PROPERTY(int autoCompleteThreshold READ autoCompleteThreshold NOTIFY autoCompleteThresholdChanged);
    Q_PROPERTY(bool autoCorrect READ autoCorrect NOTIFY autoCorrectChanged);
    Q_PROPERTY(bool autoPeriod READ autoPeriod NOTIFY autoPeriodChanged);
    Q_PROPERTY(bool clearLearnedWords READ clearLearnedWords NOTIFY clearLearnedWordsChanged);
    Q_PROPERTY(bool enableMacros READ enableMacros NOTIFY enableMacrosChanged);
    Q_PROPERTY(bool learnedWords READ learnedWords NOTIFY learnedWordsChanged);
    Q_PROPERTY(QString predictionDisplayMode READ predictionDisplayMode NOTIFY predictionDisplayModeChanged);
    Q_PROPERTY(bool predictionEnabled READ predictionEnabled NOTIFY predictionEnabledChanged);
    Q_PROPERTY(QString predictionPlacement READ predictionPlacement NOTIFY predictionPlacementChanged);
    Q_PROPERTY(bool strokeInvalidPrompt READ strokeInvalidPrompt NOTIFY strokeInvalidPromptChanged);
    Q_PROPERTY(bool keypadAvailable READ keypadAvailable NOTIFY keypadAvailableChanged);
    Q_PROPERTY(QString layoutActive READ layoutActive NOTIFY layoutActiveChanged);
    Q_PROPERTY(QStringList localesActive READ localesActive NOTIFY localesActiveChanged);
    Q_PROPERTY(bool languageDetection READ languageDetection NOTIFY languageDetectionChanged);
    Q_PROPERTY(bool quickLanguageSwitch READ quickLanguageSwitch NOTIFY quickLanguageSwitchChanged);
    Q_PROPERTY(QString verificationStatus READ verificationStatus NOTIFY verificationStatusChanged);
    Q_PROPERTY(bool spellCheckEnabled READ spellCheckEnabled NOTIFY spellCheckEnabledChanged);
    Q_PROPERTY(bool spellCheckIgnoreAcronyms READ spellCheckIgnoreAcronyms NOTIFY spellCheckIgnoreAcronymsChanged);
    Q_PROPERTY(bool spellCheckIgnoreCase READ spellCheckIgnoreCase NOTIFY spellCheckIgnoreCaseChanged);
    Q_PROPERTY(bool spellCheckIgnoreWordsWithDigits READ spellCheckIgnoreWordsWithDigits NOTIFY spellCheckIgnoreWordsWithDigitsChanged);
    Q_PROPERTY(bool touchKeypadAvailable READ touchKeypadAvailable NOTIFY touchKeypadAvailableChanged);

public:
    LanguageAndInput(QObject *_parent = 0);

private slots:
    void onPpsFileReady(const QVariantMap&);

private:
    bool vibrateOnCorrect() { return m_vibrateOnCorrect; }
    bool autoCapitalize() { return m_autoCapitalize; }
    bool autoComma() { return m_autoComma; }
    int autoCompleteThreshold() { return m_autoCompleteThreshold; }
    bool autoCorrect() { return m_autoCorrect; }
    bool autoPeriod() { return m_autoPeriod; }
    bool clearLearnedWords() { return m_clearLearnedWords; }
    bool enableMacros() { return m_enableMacros; }
    bool learnedWords() { return m_learnedWords; }
    QString predictionDisplayMode() { return m_predictionDisplayMode; }
    bool predictionEnabled() { return m_predictionEnabled; }
    QString predictionPlacement() { return m_predictionPlacement; }
    bool strokeInvalidPrompt() { return m_strokeInvalidPrompt; }
    bool keypadAvailable() { return m_keypadAvailable; }
    QString layoutActive() { return m_layoutActive; }
    QStringList localesActive() { return m_localesActive; }
    bool languageDetection() { return m_languageDetection; }
    bool quickLanguageSwitch() { return m_quickLanguageSwitch; }
    QString verificationStatus() { return m_verificationStatus; }
    bool spellCheckEnabled() { return m_spellCheckEnabled; }
    bool spellCheckIgnoreAcronyms() { return m_spellCheckIgnoreAcronyms; }
    bool spellCheckIgnoreCase() { return m_spellCheckIgnoreCase; }
    bool spellCheckIgnoreWordsWithDigits() { return m_spellCheckIgnoreWordsWithDigits; }
    bool touchKeypadAvailable() { return m_touchKeypadAvailable; }

    bool m_vibrateOnCorrect;
    bool m_autoCapitalize;
    bool m_autoComma;
    int m_autoCompleteThreshold;
    bool m_autoCorrect;
    bool m_autoPeriod;
    bool m_clearLearnedWords;
    bool m_enableMacros;
    bool m_learnedWords;
    QString m_predictionDisplayMode;
    bool m_predictionEnabled;
    QString m_predictionPlacement;
    bool m_strokeInvalidPrompt;
    bool m_keypadAvailable;
    QString m_layoutActive;
    QStringList m_localesActive;
    bool m_languageDetection;
    bool m_quickLanguageSwitch;
    QString m_verificationStatus;
    bool m_spellCheckEnabled;
    bool m_spellCheckIgnoreAcronyms;
    bool m_spellCheckIgnoreCase;
    bool m_spellCheckIgnoreWordsWithDigits;
    bool m_touchKeypadAvailable;

    PpsWatch* m_languageAndInput;

signals:
    void vibrateOnCorrectChanged(bool&);
    void autoCapitalizeChanged(bool&);
    void autoCommaChanged(bool&);
    void autoCompleteThresholdChanged(int&);
    void autoCorrectChanged(bool&);
    void autoPeriodChanged(bool&);
    void clearLearnedWordsChanged(bool&);
    void enableMacrosChanged(bool&);
    void learnedWordsChanged(bool&);
    void predictionDisplayModeChanged(QString&);
    void predictionEnabledChanged(bool&);
    void predictionPlacementChanged(QString&);
    void strokeInvalidPromptChanged(bool&);
    void keypadAvailableChanged(bool&);
    void layoutActiveChanged(QString&);
    void localesActiveChanged(QStringList&);
    void languageDetectionChanged(bool&);
    void quickLanguageSwitchChanged(bool&);
    void verificationStatusChanged(QString&);
    void spellCheckEnabledChanged(bool&);
    void spellCheckIgnoreAcronymsChanged(bool&);
    void spellCheckIgnoreCaseChanged(bool&);
    void spellCheckIgnoreWordsWithDigitsChanged(bool&);
    void touchKeypadAvailableChanged(bool&);
};

#endif /* LANGUAGEANDINPUT_H_ */
