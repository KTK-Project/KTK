LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)





LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

LOCAL_SRC_FILES := hellocpp/main.cpp \
					../../Classes/AppDelegate.cpp \
					../../Classes/Main/GameSence.cpp \
					../../Classes/Card/Card.cpp \
					../../Classes/Card/Card_AllOutOfNone.cpp \
					../../Classes/Card/Card_Armor.cpp \
					../../Classes/Card/Card_ArrowRain.cpp \
					../../Classes/Card/Card_BaGuaRank.cpp \
					../../Classes/Card/Card_Basic.cpp \
					../../Classes/Card/Card_CoupleSwords.cpp \
					../../Classes/Card/Card_DelayedStrategy.cpp \
					../../Classes/Card/Card_Dodge.cpp \
					../../Classes/Card/Card_DragonBroadSword.cpp \
					../../Classes/Card/Card_DrownInHappiness.cpp \
					../../Classes/Card/Card_Duel.cpp \
					../../Classes/Card/Card_Equipment.cpp \
					../../Classes/Card/Card_FlawlessDefense.cpp \
					../../Classes/Card/Card_GuanShiAxe.cpp \
					../../Classes/Card/Card_Harvest.cpp \
					../../Classes/Card/Card_Horse.cpp \
					../../Classes/Card/Card_IceSword.cpp \
					../../Classes/Card/Card_JusticeShield.cpp \
					../../Classes/Card/Card_KylinBow.cpp \
					../../Classes/Card/Card_Lightning.cpp \
					../../Classes/Card/Card_MurderWithBorrowedWeapon.cpp \
					../../Classes/Card/Card_OathInPeachGarden.cpp \
					../../Classes/Card/Card_Peach.cpp \
					../../Classes/Card/Card_Sabotage.cpp \
					../../Classes/Card/Card_Slash.cpp \
					../../Classes/Card/Card_SouthInvasion.cpp \
					../../Classes/Card/Card_Strategy.cpp \
					../../Classes/Card/Card_Theft.cpp \
					../../Classes/Card/Card_TsingGangSword.cpp \
					../../Classes/Card/Card_Weapon.cpp \
					../../Classes/Card/CardPile.cpp \
					../../Classes/Controller/Controller_Base.cpp \
					../../Classes/Event/Event_AllOutOfNone.cpp \
					../../Classes/Event/Event_ArrowRain.cpp \
					../../Classes/Event/Event_Base.cpp \
					../../Classes/Event/Event_DelayedStrategy.cpp \
					../../Classes/Event/Event_DrownInHappiness.cpp \
					../../Classes/Event/Event_Duel.cpp \
					../../Classes/Event/Event_Dying.cpp \
					../../Classes/Event/Event_FlawlessDefense.cpp \
					../../Classes/Event/Event_GetCardFromHarvest.cpp \
					../../Classes/Event/Event_Harvest.cpp \
					../../Classes/Event/Event_Hurt.cpp \
					../../Classes/Event/Event_Interaction.cpp \
					../../Classes/Event/Event_Judge.cpp \
					../../Classes/Event/Event_Lightning.cpp \
					../../Classes/Event/Event_MurderWithBorrowedWeapon.cpp \
					../../Classes/Event/Event_OathInPeachGarden.cpp \
					../../Classes/Event/Event_RequestBoolean.cpp \
					../../Classes/Event/Event_RequestCard.cpp \
					../../Classes/Event/Event_RequestCardAndGoalPlayer.cpp \
					../../Classes/Event/Event_RequestCardSuit.cpp \
					../../Classes/Event/Event_RequestGoalPlayer.cpp \
					../../Classes/Event/Event_RequestPlayerCard.cpp \
					../../Classes/Event/Event_Sabotage.cpp \
					../../Classes/Event/Event_Slash.cpp \
					../../Classes/Event/Event_SouthInvasion.cpp \
					../../Classes/Event/Event_Strategy.cpp \
					../../Classes/Event/Event_Theft.cpp \
					../../Classes/Event/SelectedCards.cpp \
					../../Classes/Event/SelectedPlayers.cpp \
					../../Classes/Manager/EventManagers.cpp \
					../../Classes/Manager/GameManager.cpp \
					../../Classes/Manager/PlayersManager.cpp \
					../../Classes/Manager/RoundManager.cpp \
					../../Classes/Manager/TextManager.cpp \
					../../Classes/Skill/Skill.cpp \
					../../Classes/Skill/SkillList.cpp \
					../../Classes/UI/UI_Card.cpp \
					../../Classes/UI/UI_DebugBox.cpp \
					../../Classes/UI/UI_Desktop.cpp \
					../../Classes/UI/UI_EquipmentPanal.cpp \
					../../Classes/UI/UI_ForwardPlayerPanal.cpp \
					../../Classes/UI/UI_GuanXing.cpp \
					../../Classes/UI/UI_HandCardPage.cpp \
					../../Classes/UI/UI_HandCardPanal.cpp \
					../../Classes/UI/UI_HandCardQuantity.cpp \
					../../Classes/UI/UI_Harvest.cpp \
					../../Classes/UI/UI_HP.cpp \
					../../Classes/UI/UI_ID.cpp \
					../../Classes/UI/UI_InformationBox.cpp \
					../../Classes/UI/UI_JudgeIcon.cpp \
					../../Classes/UI/UI_LogBox.cpp \
					../../Classes/UI/UI_Message.cpp \
					../../Classes/UI/UI_PlayerPanal.cpp \
					../../Classes/UI/UI_Position.cpp \
					../../Classes/UI/UI_SkillPanal.cpp \
					../../Classes/UI/UI_TheftAndSabotage.cpp \
					../../Classes/Player/Player.cpp \
					../../Classes/Rule/Character.cpp \
					../../Classes/Rule/Rule_Base.cpp \
					../../Classes/Rule/Rule_CaoCao.cpp \
					../../Classes/Rule/Rule_DaQiao.cpp \
					../../Classes/Rule/Rule_DiaoChan.cpp \
					../../Classes/Rule/Rule_GanNing.cpp \
					../../Classes/Rule/Rule_GuanYu.cpp \
					../../Classes/Rule/Rule_GuoJia.cpp \
					../../Classes/Rule/Rule_HuangGai.cpp \
					../../Classes/Rule/Rule_HuangYueYing.cpp \
					../../Classes/Rule/Rule_HuaTuo.cpp \
					../../Classes/Rule/Rule_LiuBei.cpp \
					../../Classes/Rule/Rule_LuXun.cpp \
					../../Classes/Rule/Rule_LvBu.cpp \
					../../Classes/Rule/Rule_LvMeng.cpp \
					../../Classes/Rule/Rule_MaChao.cpp \
					../../Classes/Rule/Rule_SiMaYi.cpp \
					../../Classes/Rule/Rule_SunQuan.cpp \
					../../Classes/Rule/Rule_SunShangXiang.cpp \
					../../Classes/Rule/Rule_XiaHouDun.cpp \
					../../Classes/Rule/Rule_XuChu.cpp \
					../../Classes/Rule/Rule_ZhangFei.cpp \
					../../Classes/Rule/Rule_ZhangLiao.cpp \
					../../Classes/Rule/Rule_ZhaoYun.cpp \
					../../Classes/Rule/Rule_ZhenJi.cpp \
					../../Classes/Rule/Rule_ZhouYu.cpp \
					../../Classes/Rule/Rule_ZhuGeLiang.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += android_support

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module,./prebuilt-mk)
$(call import-module, android/support)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
