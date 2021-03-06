// This file is part of flobby (GPL v2 or later), see the LICENSE file

#pragma once

#include "LogFile.h"

#include <FL/Fl_Group.H>
#include <string>

class Model;
class ITabs;
class User;
class Battle;
class TextDisplay2;
class ChatInput;
class ChatSettingsDialog;

class PrivateChatTab: public Fl_Group
{
public:
    PrivateChatTab(int x, int y, int w, int h, std::string const & userName,
                ITabs& iTabs, Model & model, ChatSettingsDialog & chatSettingsDialog);
    virtual ~PrivateChatTab();

    std::string const& userName() const { return userName_; }

private:
    friend class Tabs;

    std::string userName_;
    ITabs & iTabs_;
    Model & model_;
    ChatSettingsDialog & chatSettingsDialog_;
    LogFile logFile_;
    TextDisplay2 * text_;
    ChatInput * input_;
    bool beep_;

    int handle(int event);
    void append(std::string const & msg, int interest = 0);
    void onInput(std::string const & text);

    void initChatSettings();

    // model signal handlers
    void say(std::string const & userName, std::string const & msg); // your confirm msg
    void said(std::string const & userName, std::string const & msg); // msg from other
    void userJoined(User const & user);
    void userLeft(User const & user);
    void userJoinedBattle(User const & user, Battle const & battle);
    void userLeftBattle(User const & user, Battle const & battle);
};
