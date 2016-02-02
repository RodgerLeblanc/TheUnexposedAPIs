import bb.cascades 1.3

Container {
    Label { text: "Auto capitalize: " + _languageAndInput.autoCapitalize }
    Label { text: "Auto comma: " + _languageAndInput.autoComma }
    Label { text: "Locales active: " + _languageAndInput.localesActive }
    Label { text: "Spell Check Enabled: " + _languageAndInput.spellCheckEnabled }
}
