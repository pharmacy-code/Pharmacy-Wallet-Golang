

#pragma once

#ifndef GO_MOC_d68b73_H
#define GO_MOC_d68b73_H

#include <stdint.h>

#ifdef __cplusplus
class QmlBridged68b73;
void QmlBridged68b73_QmlBridged68b73_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; void* ptr; };
struct Moc_PackedList { void* data; long long len; };
void QmlBridged68b73_ConnectDisplayTotalBalance(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayTotalBalance(void* ptr);
void QmlBridged68b73_DisplayTotalBalance(void* ptr, struct Moc_PackedString balance, struct Moc_PackedString balanceUSD);
void QmlBridged68b73_ConnectDisplayAvailableBalance(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayAvailableBalance(void* ptr);
void QmlBridged68b73_DisplayAvailableBalance(void* ptr, struct Moc_PackedString data);
void QmlBridged68b73_ConnectDisplayLockedBalance(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayLockedBalance(void* ptr);
void QmlBridged68b73_DisplayLockedBalance(void* ptr, struct Moc_PackedString data);
void QmlBridged68b73_ConnectDisplayAddress(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayAddress(void* ptr);
void QmlBridged68b73_DisplayAddress(void* ptr, struct Moc_PackedString address, struct Moc_PackedString wallet, char displayFiatConversion);
void QmlBridged68b73_ConnectAddTransactionToList(void* ptr, long long t);
void QmlBridged68b73_DisconnectAddTransactionToList(void* ptr);
void QmlBridged68b73_AddTransactionToList(void* ptr, struct Moc_PackedString paymentID, struct Moc_PackedString transactionID, struct Moc_PackedString amount, struct Moc_PackedString confirmations, struct Moc_PackedString ti, struct Moc_PackedString number);
void QmlBridged68b73_ConnectAddRemoteNodeToList(void* ptr, long long t);
void QmlBridged68b73_DisconnectAddRemoteNodeToList(void* ptr);
void QmlBridged68b73_AddRemoteNodeToList(void* ptr, struct Moc_PackedString nodeName);
void QmlBridged68b73_ConnectChangeTextRemoteNode(void* ptr, long long t);
void QmlBridged68b73_DisconnectChangeTextRemoteNode(void* ptr);
void QmlBridged68b73_ChangeTextRemoteNode(void* ptr, int index, struct Moc_PackedString newText);
void QmlBridged68b73_ConnectSetSelectedRemoteNode(void* ptr, long long t);
void QmlBridged68b73_DisconnectSetSelectedRemoteNode(void* ptr);
void QmlBridged68b73_SetSelectedRemoteNode(void* ptr, int index);
void QmlBridged68b73_ConnectDisplayPopup(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayPopup(void* ptr);
void QmlBridged68b73_DisplayPopup(void* ptr, struct Moc_PackedString text, int ti);
void QmlBridged68b73_ConnectDisplaySyncingInfo(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplaySyncingInfo(void* ptr);
void QmlBridged68b73_DisplaySyncingInfo(void* ptr, struct Moc_PackedString syncing, struct Moc_PackedString syncingInfo);
void QmlBridged68b73_ConnectDisplayErrorDialog(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayErrorDialog(void* ptr);
void QmlBridged68b73_DisplayErrorDialog(void* ptr, struct Moc_PackedString errorText, struct Moc_PackedString errorInformativeText);
void QmlBridged68b73_ConnectDisplayInfoDialog(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayInfoDialog(void* ptr);
void QmlBridged68b73_DisplayInfoDialog(void* ptr, struct Moc_PackedString title, struct Moc_PackedString mainText, struct Moc_PackedString informativeText);
void QmlBridged68b73_ConnectClearTransferAmount(void* ptr, long long t);
void QmlBridged68b73_DisconnectClearTransferAmount(void* ptr);
void QmlBridged68b73_ClearTransferAmount(void* ptr);
void QmlBridged68b73_ConnectAskForFusion(void* ptr, long long t);
void QmlBridged68b73_DisconnectAskForFusion(void* ptr);
void QmlBridged68b73_AskForFusion(void* ptr);
void QmlBridged68b73_ConnectClearListTransactions(void* ptr, long long t);
void QmlBridged68b73_DisconnectClearListTransactions(void* ptr);
void QmlBridged68b73_ClearListTransactions(void* ptr);
void QmlBridged68b73_ConnectDisplayPrivateKeys(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayPrivateKeys(void* ptr);
void QmlBridged68b73_DisplayPrivateKeys(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString walletAddress);
void QmlBridged68b73_ConnectDisplaySeed(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplaySeed(void* ptr);
void QmlBridged68b73_DisplaySeed(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString walletAddress);
void QmlBridged68b73_ConnectDisplayOpenWalletScreen(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayOpenWalletScreen(void* ptr);
void QmlBridged68b73_DisplayOpenWalletScreen(void* ptr);
void QmlBridged68b73_ConnectDisplayMainWalletScreen(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayMainWalletScreen(void* ptr);
void QmlBridged68b73_DisplayMainWalletScreen(void* ptr);
void QmlBridged68b73_ConnectFinishedLoadingWalletd(void* ptr, long long t);
void QmlBridged68b73_DisconnectFinishedLoadingWalletd(void* ptr);
void QmlBridged68b73_FinishedLoadingWalletd(void* ptr);
void QmlBridged68b73_ConnectFinishedCreatingWallet(void* ptr, long long t);
void QmlBridged68b73_DisconnectFinishedCreatingWallet(void* ptr);
void QmlBridged68b73_FinishedCreatingWallet(void* ptr);
void QmlBridged68b73_ConnectFinishedSendingTransaction(void* ptr, long long t);
void QmlBridged68b73_DisconnectFinishedSendingTransaction(void* ptr);
void QmlBridged68b73_FinishedSendingTransaction(void* ptr);
void QmlBridged68b73_ConnectDisplayPathToPreviousWallet(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayPathToPreviousWallet(void* ptr);
void QmlBridged68b73_DisplayPathToPreviousWallet(void* ptr, struct Moc_PackedString pathToPreviousWallet);
void QmlBridged68b73_ConnectDisplayWalletCreationLocation(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayWalletCreationLocation(void* ptr);
void QmlBridged68b73_DisplayWalletCreationLocation(void* ptr, struct Moc_PackedString walletLocation);
void QmlBridged68b73_ConnectDisplayUseRemoteNode(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayUseRemoteNode(void* ptr);
void QmlBridged68b73_DisplayUseRemoteNode(void* ptr, char useRemote);
void QmlBridged68b73_ConnectHideSettingsScreen(void* ptr, long long t);
void QmlBridged68b73_DisconnectHideSettingsScreen(void* ptr);
void QmlBridged68b73_HideSettingsScreen(void* ptr);
void QmlBridged68b73_ConnectDisplaySettingsScreen(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplaySettingsScreen(void* ptr);
void QmlBridged68b73_DisplaySettingsScreen(void* ptr);
void QmlBridged68b73_ConnectDisplaySettingsValues(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplaySettingsValues(void* ptr);
void QmlBridged68b73_DisplaySettingsValues(void* ptr, char displayFiat);
void QmlBridged68b73_ConnectDisplaySettingsRemoteDaemonInfo(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplaySettingsRemoteDaemonInfo(void* ptr);
void QmlBridged68b73_DisplaySettingsRemoteDaemonInfo(void* ptr, struct Moc_PackedString remoteNodeAddress, struct Moc_PackedString remoteNodePort);
void QmlBridged68b73_ConnectDisplayFullBalanceInTransferAmount(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayFullBalanceInTransferAmount(void* ptr);
void QmlBridged68b73_DisplayFullBalanceInTransferAmount(void* ptr, struct Moc_PackedString fullBalance);
void QmlBridged68b73_ConnectDisplayDefaultFee(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayDefaultFee(void* ptr);
void QmlBridged68b73_DisplayDefaultFee(void* ptr, struct Moc_PackedString fee);
void QmlBridged68b73_ConnectDisplayNodeFee(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayNodeFee(void* ptr);
void QmlBridged68b73_DisplayNodeFee(void* ptr, struct Moc_PackedString nodeFee);
void QmlBridged68b73_ConnectUpdateConfirmationsOfTransaction(void* ptr, long long t);
void QmlBridged68b73_DisconnectUpdateConfirmationsOfTransaction(void* ptr);
void QmlBridged68b73_UpdateConfirmationsOfTransaction(void* ptr, int index, struct Moc_PackedString confirmations);
void QmlBridged68b73_ConnectDisplayInfoScreen(void* ptr, long long t);
void QmlBridged68b73_DisconnectDisplayInfoScreen(void* ptr);
void QmlBridged68b73_DisplayInfoScreen(void* ptr);
void QmlBridged68b73_ConnectAddSavedAddressToList(void* ptr, long long t);
void QmlBridged68b73_DisconnectAddSavedAddressToList(void* ptr);
void QmlBridged68b73_AddSavedAddressToList(void* ptr, int dbID, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridged68b73_Log(void* ptr, struct Moc_PackedString msg);
void QmlBridged68b73_ClickedButtonExplorer(void* ptr, struct Moc_PackedString transactionID);
void QmlBridged68b73_GoToWebsite(void* ptr, struct Moc_PackedString url);
void QmlBridged68b73_ClickedButtonCopyTx(void* ptr, struct Moc_PackedString transactionID);
void QmlBridged68b73_ClickedButtonCopyAddress(void* ptr);
void QmlBridged68b73_ClickedButtonCopyKeys(void* ptr);
void QmlBridged68b73_ClickedButtonCopy(void* ptr, struct Moc_PackedString stringToCopy);
void QmlBridged68b73_ClickedButtonSend(void* ptr, struct Moc_PackedString transferAddress, struct Moc_PackedString transferAmount, struct Moc_PackedString transferPaymentID, struct Moc_PackedString transferFee);
void QmlBridged68b73_ClickedButtonBackupWallet(void* ptr);
void QmlBridged68b73_ClickedCloseWallet(void* ptr);
void QmlBridged68b73_ClickedButtonOpen(void* ptr, struct Moc_PackedString pathToWallet, struct Moc_PackedString passwordWallet);
void QmlBridged68b73_ClickedButtonCreate(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString confirmPasswordWallet);
void QmlBridged68b73_ClickedButtonImport(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString confirmPasswordWallet, struct Moc_PackedString scanHeight);
void QmlBridged68b73_ChoseRemote(void* ptr, char remote);
void QmlBridged68b73_SelectedRemoteNode(void* ptr, int index);
struct Moc_PackedString QmlBridged68b73_GetTransferAmountUSD(void* ptr, struct Moc_PackedString amountTRTL);
void QmlBridged68b73_ClickedCloseSettings(void* ptr);
void QmlBridged68b73_ClickedSettingsButton(void* ptr);
void QmlBridged68b73_ChoseDisplayFiat(void* ptr, char displayFiat);
void QmlBridged68b73_ChoseCheckpoints(void* ptr, char checkpoints);
void QmlBridged68b73_SaveRemoteDaemonInfo(void* ptr, struct Moc_PackedString daemonAddress, struct Moc_PackedString daemonPort);
void QmlBridged68b73_ResetRemoteDaemonInfo(void* ptr);
void QmlBridged68b73_GetFullBalanceAndDisplayInTransferAmount(void* ptr, struct Moc_PackedString transferFee);
void QmlBridged68b73_GetDefaultFeeAndDisplay(void* ptr);
void QmlBridged68b73_LimitDisplayTransactions(void* ptr, char limit);
struct Moc_PackedString QmlBridged68b73_GetVersion(void* ptr);
struct Moc_PackedString QmlBridged68b73_GetNewVersion(void* ptr);
struct Moc_PackedString QmlBridged68b73_GetNewVersionURL(void* ptr);
void QmlBridged68b73_OptimizeWalletWithFusion(void* ptr);
void QmlBridged68b73_SaveAddress(void* ptr, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID);
void QmlBridged68b73_FillListSavedAddresses(void* ptr);
void QmlBridged68b73_DeleteSavedAddress(void* ptr, int dbID);
void QmlBridged68b73_ExportListTransactions(void* ptr);
void QmlBridged68b73_RegisterToGo(void* ptr, void* object);
void QmlBridged68b73_DeregisterToGo(void* ptr, struct Moc_PackedString objectName);
int QmlBridged68b73_QmlBridged68b73_QRegisterMetaType();
int QmlBridged68b73_QmlBridged68b73_QRegisterMetaType2(char* typeName);
int QmlBridged68b73_QmlBridged68b73_QmlRegisterType();
int QmlBridged68b73_QmlBridged68b73_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* QmlBridged68b73___children_atList(void* ptr, int i);
void QmlBridged68b73___children_setList(void* ptr, void* i);
void* QmlBridged68b73___children_newList(void* ptr);
void* QmlBridged68b73___dynamicPropertyNames_atList(void* ptr, int i);
void QmlBridged68b73___dynamicPropertyNames_setList(void* ptr, void* i);
void* QmlBridged68b73___dynamicPropertyNames_newList(void* ptr);
void* QmlBridged68b73___findChildren_atList(void* ptr, int i);
void QmlBridged68b73___findChildren_setList(void* ptr, void* i);
void* QmlBridged68b73___findChildren_newList(void* ptr);
void* QmlBridged68b73___findChildren_atList3(void* ptr, int i);
void QmlBridged68b73___findChildren_setList3(void* ptr, void* i);
void* QmlBridged68b73___findChildren_newList3(void* ptr);
void* QmlBridged68b73_NewQmlBridge(void* parent);
void QmlBridged68b73_DestroyQmlBridge(void* ptr);
void QmlBridged68b73_DestroyQmlBridgeDefault(void* ptr);
void QmlBridged68b73_ChildEventDefault(void* ptr, void* event);
void QmlBridged68b73_ConnectNotifyDefault(void* ptr, void* sign);
void QmlBridged68b73_CustomEventDefault(void* ptr, void* event);
void QmlBridged68b73_DeleteLaterDefault(void* ptr);
void QmlBridged68b73_DisconnectNotifyDefault(void* ptr, void* sign);
char QmlBridged68b73_EventDefault(void* ptr, void* e);
char QmlBridged68b73_EventFilterDefault(void* ptr, void* watched, void* event);
;
void QmlBridged68b73_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif