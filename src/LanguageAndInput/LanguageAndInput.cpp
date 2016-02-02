/*
 * LanguageAndInput.cpp
 *
 *  Created on: 2016-02-01
 *      Author: Roger
 */

#include <src/LanguageAndInput/LanguageAndInput.h>

LanguageAndInput::LanguageAndInput(QObject *_parent) :
    QObject(_parent),
    m_languageAndInput(new PpsWatch("/pps/services/input/options", this))
{
    connect(m_languageAndInput, SIGNAL(ppsFileReady(const QVariantMap&)), this, SLOT(onPpsFileReady(const QVariantMap&)));
}

void LanguageAndInput::onPpsFileReady(const QVariantMap& map) {
    if (map.contains("feedback.vibrateOnCorrect")) {
        if (m_vibrateOnCorrect != map["feedback.vibrateOnCorrect"].toBool()) {
            m_vibrateOnCorrect = map["feedback.vibrateOnCorrect"].toBool();
            emit vibrateOnCorrectChanged(m_vibrateOnCorrect);
        }
    }

    if (map.contains("fluency.auto_capitalize")) {
        if (m_autoCapitalize != map["fluency.auto_capitalize"].toBool()) {
            m_autoCapitalize = map["fluency.auto_capitalize"].toBool();
            emit autoCapitalizeChanged(m_autoCapitalize);
        }
    }

    if (map.contains("fluency.auto_comma")) {
        if (m_autoComma != map["fluency.auto_comma"].toBool()) {
            m_autoComma = map["fluency.auto_comma"].toBool();
            emit autoCommaChanged(m_autoComma);
        }
    }

    if (map.contains("fluency.auto_complete_threshold")) {
        if (m_autoCompleteThreshold != map["fluency.auto_complete_threshold"].toInt()) {
            m_autoCompleteThreshold = map["fluency.auto_complete_threshold"].toInt();
            emit autoCompleteThresholdChanged(m_autoCompleteThreshold);
        }
    }

    if (map.contains("fluency.auto_correct")) {
        if (m_autoCorrect != map["fluency.auto_correct"].toBool()) {
            m_autoCorrect = map["fluency.auto_correct"].toBool();
            emit autoCorrectChanged(m_autoCorrect);
        }
    }

    if (map.contains("fluency.auto_period")) {
        if (m_autoPeriod != map["fluency.auto_period"].toBool()) {
            m_autoPeriod = map["fluency.auto_period"].toBool();
            emit autoPeriodChanged(m_autoPeriod);
        }
    }

    if (map.contains("fluency.clear_learned_words")) {
        if (m_clearLearnedWords != map["fluency.clear_learned_words"].toBool()) {
            m_clearLearnedWords = map["fluency.clear_learned_words"].toBool();
            emit clearLearnedWordsChanged(m_clearLearnedWords);
        }
    }

    if (map.contains("fluency.enable_macros")) {
        if (m_enableMacros != map["fluency.enable_macros"].toBool()) {
            m_enableMacros = map["fluency.enable_macros"].toBool();
            emit enableMacrosChanged(m_enableMacros);
        }
    }

    if (map.contains("fluency.learned_words")) {
        if (m_learnedWords != map["fluency.learned_words"].toBool()) {
            m_learnedWords = map["fluency.learned_words"].toBool();
            emit learnedWordsChanged(m_learnedWords);
        }
    }

    if (map.contains("fluency.prediction_display_mode")) {
        if (m_predictionDisplayMode != map["fluency.prediction_display_mode"].toString()) {
            m_predictionDisplayMode = map["fluency.prediction_display_mode"].toString();
            emit predictionDisplayModeChanged(m_predictionDisplayMode);
        }
    }

    if (map.contains("fluency.prediction_enabled")) {
        if (m_predictionEnabled != map["fluency.prediction_enabled"].toBool()) {
            m_predictionEnabled = map["fluency.prediction_enabled"].toBool();
            emit predictionEnabledChanged(m_predictionEnabled);
        }
    }

    if (map.contains("fluency.prediction_placement")) {
        if (m_predictionPlacement != map["fluency.prediction_placement"].toString()) {
            m_predictionPlacement = map["fluency.prediction_placement"].toString();
            emit predictionPlacementChanged(m_predictionPlacement);
        }
    }

    if (map.contains("fluency.stroke_invalid_prompt")) {
        if (m_strokeInvalidPrompt != map["fluency.stroke_invalid_prompt"].toBool()) {
            m_strokeInvalidPrompt = map["fluency.stroke_invalid_prompt"].toBool();
            emit strokeInvalidPromptChanged(m_strokeInvalidPrompt);
        }
    }

    if (map.contains("keypad_available")) {
        if (m_keypadAvailable != map["keypad_available"].toBool()) {
            m_keypadAvailable = map["keypad_available"].toBool();
            emit keypadAvailableChanged(m_keypadAvailable);
        }
    }

    if (map.contains("languages.active_lang_layouts")) {
        const QVariantMap active_lang_layouts = map["languages.active_lang_layouts"].toMap();
        if (active_lang_layouts.contains("layout_id")) {
            if (m_layoutActive != active_lang_layouts["layout_id"].toString()) {
                m_layoutActive = active_lang_layouts["layout_id"].toString();
                emit layoutActiveChanged(m_layoutActive);
            }
        }
        if (active_lang_layouts.contains("locales")) {
            const QString joinSeparator = ",";
            m_localesActive.sort();
            QStringList locales = active_lang_layouts["locales"].toStringList();
            locales.sort();
            if (m_localesActive.join(joinSeparator) != locales.join(joinSeparator)) {
                m_localesActive = locales;
                emit localesActiveChanged(m_localesActive);
            }
        }
    }

    if (map.contains("languages.quick_language_switch")) {
        if (m_quickLanguageSwitch != map["languages.quick_language_switch"].toBool()) {
            m_quickLanguageSwitch = map["languages.quick_language_switch"].toBool();
            emit quickLanguageSwitchChanged(m_quickLanguageSwitch);
        }
    }

    if (map.contains("languages.verification_status")) {
        if (m_verificationStatus != map["languages.verification_status"].toString()) {
            m_verificationStatus = map["languages.verification_status"].toString();
            emit verificationStatusChanged(m_verificationStatus);
        }
    }

    if (map.contains("spell_check.enabled")) {
        if (m_spellCheckEnabled != map["spell_check.enabled"].toBool()) {
            m_spellCheckEnabled = map["spell_check.enabled"].toBool();
            emit spellCheckEnabledChanged(m_spellCheckEnabled);
        }
    }

    if (map.contains("spell_check.ignore_acronyms")) {
        if (m_spellCheckIgnoreAcronyms != map["spell_check.ignore_acronyms"].toBool()) {
            m_spellCheckIgnoreAcronyms = map["spell_check.ignore_acronyms"].toBool();
            emit spellCheckIgnoreAcronymsChanged(m_spellCheckIgnoreAcronyms);
        }
    }

    if (map.contains("spell_check.ignore_case")) {
        if (m_spellCheckIgnoreCase != map["spell_check.ignore_case"].toBool()) {
            m_spellCheckIgnoreCase = map["spell_check.ignore_case"].toBool();
            emit spellCheckIgnoreCaseChanged(m_spellCheckIgnoreCase);
        }
    }

    if (map.contains("spell_check.ignore_words_with_digits")) {
        if (m_spellCheckIgnoreWordsWithDigits != map["spell_check.ignore_words_with_digits"].toBool()) {
            m_spellCheckIgnoreWordsWithDigits = map["spell_check.ignore_words_with_digits"].toBool();
            emit spellCheckIgnoreWordsWithDigitsChanged(m_spellCheckIgnoreWordsWithDigits);
        }
    }

    if (map.contains("touch_keypad_available")) {
        if (m_touchKeypadAvailable != map["touch_keypad_available"].toBool()) {
            m_touchKeypadAvailable = map["touch_keypad_available"].toBool();
            emit touchKeypadAvailableChanged(m_touchKeypadAvailable);
        }
    }
}
