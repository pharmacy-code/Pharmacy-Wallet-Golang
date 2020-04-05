

#define protected public
#define private public

#include "moc.h"
#include "_cgo_export.h"

#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QPaintDeviceWindow>
#include <QPdfWriter>
#include <QString>
#include <QTimerEvent>
#include <QWindow>

#ifdef QT_QML_LIB
	#include <QQmlEngine>
#endif


class QmlBridged68b73: public QObject
{
Q_OBJECT
public:
	QmlBridged68b73(QObject *parent = Q_NULLPTR) : QObject(parent) {qRegisterMetaType<quintptr>("quintptr");QmlBridged68b73_QmlBridged68b73_QRegisterMetaType();QmlBridged68b73_QmlBridged68b73_QRegisterMetaTypes();callbackQmlBridged68b73_Constructor(this);};
	void Signal_DisplayTotalBalance(QString balance, QString balanceUSD) { QByteArray* t8dfa30 = new QByteArray(balance.toUtf8()); Moc_PackedString balancePacked = { const_cast<char*>(t8dfa30->prepend("WHITESPACE").constData()+10), t8dfa30->size()-10, t8dfa30 };QByteArray* t7a7b4e = new QByteArray(balanceUSD.toUtf8()); Moc_PackedString balanceUSDPacked = { const_cast<char*>(t7a7b4e->prepend("WHITESPACE").constData()+10), t7a7b4e->size()-10, t7a7b4e };callbackQmlBridged68b73_DisplayTotalBalance(this, balancePacked, balanceUSDPacked); };
	void Signal_DisplayAvailableBalance(QString data) { QByteArray* ta17c9a = new QByteArray(data.toUtf8()); Moc_PackedString dataPacked = { const_cast<char*>(ta17c9a->prepend("WHITESPACE").constData()+10), ta17c9a->size()-10, ta17c9a };callbackQmlBridged68b73_DisplayAvailableBalance(this, dataPacked); };
	void Signal_DisplayLockedBalance(QString data) { QByteArray* ta17c9a = new QByteArray(data.toUtf8()); Moc_PackedString dataPacked = { const_cast<char*>(ta17c9a->prepend("WHITESPACE").constData()+10), ta17c9a->size()-10, ta17c9a };callbackQmlBridged68b73_DisplayLockedBalance(this, dataPacked); };
	void Signal_DisplayAddress(QString address, QString wallet, bool displayFiatConversion) { QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc307b6 = new QByteArray(wallet.toUtf8()); Moc_PackedString walletPacked = { const_cast<char*>(tc307b6->prepend("WHITESPACE").constData()+10), tc307b6->size()-10, tc307b6 };callbackQmlBridged68b73_DisplayAddress(this, addressPacked, walletPacked, displayFiatConversion); };
	void Signal_AddTransactionToList(QString paymentID, QString transactionID, QString amount, QString confirmations, QString ti, QString number) { QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };QByteArray* t9cb6ff = new QByteArray(amount.toUtf8()); Moc_PackedString amountPacked = { const_cast<char*>(t9cb6ff->prepend("WHITESPACE").constData()+10), t9cb6ff->size()-10, t9cb6ff };QByteArray* t8499a0 = new QByteArray(confirmations.toUtf8()); Moc_PackedString confirmationsPacked = { const_cast<char*>(t8499a0->prepend("WHITESPACE").constData()+10), t8499a0->size()-10, t8499a0 };QByteArray* t714eea = new QByteArray(ti.toUtf8()); Moc_PackedString tiPacked = { const_cast<char*>(t714eea->prepend("WHITESPACE").constData()+10), t714eea->size()-10, t714eea };QByteArray* t53b0a1 = new QByteArray(number.toUtf8()); Moc_PackedString numberPacked = { const_cast<char*>(t53b0a1->prepend("WHITESPACE").constData()+10), t53b0a1->size()-10, t53b0a1 };callbackQmlBridged68b73_AddTransactionToList(this, paymentIDPacked, transactionIDPacked, amountPacked, confirmationsPacked, tiPacked, numberPacked); };
	void Signal_AddRemoteNodeToList(QString nodeName) { QByteArray* tc1a2e1 = new QByteArray(nodeName.toUtf8()); Moc_PackedString nodeNamePacked = { const_cast<char*>(tc1a2e1->prepend("WHITESPACE").constData()+10), tc1a2e1->size()-10, tc1a2e1 };callbackQmlBridged68b73_AddRemoteNodeToList(this, nodeNamePacked); };
	void Signal_ChangeTextRemoteNode(qint32 index, QString newText) { QByteArray* t7bacb7 = new QByteArray(newText.toUtf8()); Moc_PackedString newTextPacked = { const_cast<char*>(t7bacb7->prepend("WHITESPACE").constData()+10), t7bacb7->size()-10, t7bacb7 };callbackQmlBridged68b73_ChangeTextRemoteNode(this, index, newTextPacked); };
	void Signal_SetSelectedRemoteNode(qint32 index) { callbackQmlBridged68b73_SetSelectedRemoteNode(this, index); };
	void Signal_DisplayPopup(QString text, qint32 ti) { QByteArray* t372ea0 = new QByteArray(text.toUtf8()); Moc_PackedString textPacked = { const_cast<char*>(t372ea0->prepend("WHITESPACE").constData()+10), t372ea0->size()-10, t372ea0 };callbackQmlBridged68b73_DisplayPopup(this, textPacked, ti); };
	void Signal_DisplaySyncingInfo(QString syncing, QString syncingInfo) { QByteArray* t72df87 = new QByteArray(syncing.toUtf8()); Moc_PackedString syncingPacked = { const_cast<char*>(t72df87->prepend("WHITESPACE").constData()+10), t72df87->size()-10, t72df87 };QByteArray* t834023 = new QByteArray(syncingInfo.toUtf8()); Moc_PackedString syncingInfoPacked = { const_cast<char*>(t834023->prepend("WHITESPACE").constData()+10), t834023->size()-10, t834023 };callbackQmlBridged68b73_DisplaySyncingInfo(this, syncingPacked, syncingInfoPacked); };
	void Signal_DisplayErrorDialog(QString errorText, QString errorInformativeText) { QByteArray* t5f7b8e = new QByteArray(errorText.toUtf8()); Moc_PackedString errorTextPacked = { const_cast<char*>(t5f7b8e->prepend("WHITESPACE").constData()+10), t5f7b8e->size()-10, t5f7b8e };QByteArray* tae90fd = new QByteArray(errorInformativeText.toUtf8()); Moc_PackedString errorInformativeTextPacked = { const_cast<char*>(tae90fd->prepend("WHITESPACE").constData()+10), tae90fd->size()-10, tae90fd };callbackQmlBridged68b73_DisplayErrorDialog(this, errorTextPacked, errorInformativeTextPacked); };
	void Signal_DisplayInfoDialog(QString title, QString mainText, QString informativeText) { QByteArray* t3c6de1 = new QByteArray(title.toUtf8()); Moc_PackedString titlePacked = { const_cast<char*>(t3c6de1->prepend("WHITESPACE").constData()+10), t3c6de1->size()-10, t3c6de1 };QByteArray* ta3233c = new QByteArray(mainText.toUtf8()); Moc_PackedString mainTextPacked = { const_cast<char*>(ta3233c->prepend("WHITESPACE").constData()+10), ta3233c->size()-10, ta3233c };QByteArray* t69f3f8 = new QByteArray(informativeText.toUtf8()); Moc_PackedString informativeTextPacked = { const_cast<char*>(t69f3f8->prepend("WHITESPACE").constData()+10), t69f3f8->size()-10, t69f3f8 };callbackQmlBridged68b73_DisplayInfoDialog(this, titlePacked, mainTextPacked, informativeTextPacked); };
	void Signal_ClearTransferAmount() { callbackQmlBridged68b73_ClearTransferAmount(this); };
	void Signal_AskForFusion() { callbackQmlBridged68b73_AskForFusion(this); };
	void Signal_ClearListTransactions() { callbackQmlBridged68b73_ClearListTransactions(this); };
	void Signal_DisplayPrivateKeys(QString filename, QString privateViewKey, QString privateSpendKey, QString walletAddress) { QByteArray* t08deae = new QByteArray(filename.toUtf8()); Moc_PackedString filenamePacked = { const_cast<char*>(t08deae->prepend("WHITESPACE").constData()+10), t08deae->size()-10, t08deae };QByteArray* tc634db = new QByteArray(privateViewKey.toUtf8()); Moc_PackedString privateViewKeyPacked = { const_cast<char*>(tc634db->prepend("WHITESPACE").constData()+10), tc634db->size()-10, tc634db };QByteArray* t1f6ec2 = new QByteArray(privateSpendKey.toUtf8()); Moc_PackedString privateSpendKeyPacked = { const_cast<char*>(t1f6ec2->prepend("WHITESPACE").constData()+10), t1f6ec2->size()-10, t1f6ec2 };QByteArray* t208cac = new QByteArray(walletAddress.toUtf8()); Moc_PackedString walletAddressPacked = { const_cast<char*>(t208cac->prepend("WHITESPACE").constData()+10), t208cac->size()-10, t208cac };callbackQmlBridged68b73_DisplayPrivateKeys(this, filenamePacked, privateViewKeyPacked, privateSpendKeyPacked, walletAddressPacked); };
	void Signal_DisplaySeed(QString filename, QString mnemonicSeed, QString walletAddress) { QByteArray* t08deae = new QByteArray(filename.toUtf8()); Moc_PackedString filenamePacked = { const_cast<char*>(t08deae->prepend("WHITESPACE").constData()+10), t08deae->size()-10, t08deae };QByteArray* tde366e = new QByteArray(mnemonicSeed.toUtf8()); Moc_PackedString mnemonicSeedPacked = { const_cast<char*>(tde366e->prepend("WHITESPACE").constData()+10), tde366e->size()-10, tde366e };QByteArray* t208cac = new QByteArray(walletAddress.toUtf8()); Moc_PackedString walletAddressPacked = { const_cast<char*>(t208cac->prepend("WHITESPACE").constData()+10), t208cac->size()-10, t208cac };callbackQmlBridged68b73_DisplaySeed(this, filenamePacked, mnemonicSeedPacked, walletAddressPacked); };
	void Signal_DisplayOpenWalletScreen() { callbackQmlBridged68b73_DisplayOpenWalletScreen(this); };
	void Signal_DisplayMainWalletScreen() { callbackQmlBridged68b73_DisplayMainWalletScreen(this); };
	void Signal_FinishedLoadingWalletd() { callbackQmlBridged68b73_FinishedLoadingWalletd(this); };
	void Signal_FinishedCreatingWallet() { callbackQmlBridged68b73_FinishedCreatingWallet(this); };
	void Signal_FinishedSendingTransaction() { callbackQmlBridged68b73_FinishedSendingTransaction(this); };
	void Signal_DisplayPathToPreviousWallet(QString pathToPreviousWallet) { QByteArray* t70f286 = new QByteArray(pathToPreviousWallet.toUtf8()); Moc_PackedString pathToPreviousWalletPacked = { const_cast<char*>(t70f286->prepend("WHITESPACE").constData()+10), t70f286->size()-10, t70f286 };callbackQmlBridged68b73_DisplayPathToPreviousWallet(this, pathToPreviousWalletPacked); };
	void Signal_DisplayWalletCreationLocation(QString walletLocation) { QByteArray* tabe26e = new QByteArray(walletLocation.toUtf8()); Moc_PackedString walletLocationPacked = { const_cast<char*>(tabe26e->prepend("WHITESPACE").constData()+10), tabe26e->size()-10, tabe26e };callbackQmlBridged68b73_DisplayWalletCreationLocation(this, walletLocationPacked); };
	void Signal_DisplayUseRemoteNode(bool useRemote) { callbackQmlBridged68b73_DisplayUseRemoteNode(this, useRemote); };
	void Signal_HideSettingsScreen() { callbackQmlBridged68b73_HideSettingsScreen(this); };
	void Signal_DisplaySettingsScreen() { callbackQmlBridged68b73_DisplaySettingsScreen(this); };
	void Signal_DisplaySettingsValues(bool displayFiat) { callbackQmlBridged68b73_DisplaySettingsValues(this, displayFiat); };
	void Signal_DisplaySettingsRemoteDaemonInfo(QString remoteNodeAddress, QString remoteNodePort) { QByteArray* tc6f2b4 = new QByteArray(remoteNodeAddress.toUtf8()); Moc_PackedString remoteNodeAddressPacked = { const_cast<char*>(tc6f2b4->prepend("WHITESPACE").constData()+10), tc6f2b4->size()-10, tc6f2b4 };QByteArray* t1b1377 = new QByteArray(remoteNodePort.toUtf8()); Moc_PackedString remoteNodePortPacked = { const_cast<char*>(t1b1377->prepend("WHITESPACE").constData()+10), t1b1377->size()-10, t1b1377 };callbackQmlBridged68b73_DisplaySettingsRemoteDaemonInfo(this, remoteNodeAddressPacked, remoteNodePortPacked); };
	void Signal_DisplayFullBalanceInTransferAmount(QString fullBalance) { QByteArray* tccc49e = new QByteArray(fullBalance.toUtf8()); Moc_PackedString fullBalancePacked = { const_cast<char*>(tccc49e->prepend("WHITESPACE").constData()+10), tccc49e->size()-10, tccc49e };callbackQmlBridged68b73_DisplayFullBalanceInTransferAmount(this, fullBalancePacked); };
	void Signal_DisplayDefaultFee(QString fee) { QByteArray* t9c15cd = new QByteArray(fee.toUtf8()); Moc_PackedString feePacked = { const_cast<char*>(t9c15cd->prepend("WHITESPACE").constData()+10), t9c15cd->size()-10, t9c15cd };callbackQmlBridged68b73_DisplayDefaultFee(this, feePacked); };
	void Signal_DisplayNodeFee(QString nodeFee) { QByteArray* t96217f = new QByteArray(nodeFee.toUtf8()); Moc_PackedString nodeFeePacked = { const_cast<char*>(t96217f->prepend("WHITESPACE").constData()+10), t96217f->size()-10, t96217f };callbackQmlBridged68b73_DisplayNodeFee(this, nodeFeePacked); };
	void Signal_UpdateConfirmationsOfTransaction(qint32 index, QString confirmations) { QByteArray* t8499a0 = new QByteArray(confirmations.toUtf8()); Moc_PackedString confirmationsPacked = { const_cast<char*>(t8499a0->prepend("WHITESPACE").constData()+10), t8499a0->size()-10, t8499a0 };callbackQmlBridged68b73_UpdateConfirmationsOfTransaction(this, index, confirmationsPacked); };
	void Signal_DisplayInfoScreen() { callbackQmlBridged68b73_DisplayInfoScreen(this); };
	void Signal_AddSavedAddressToList(qint32 dbID, QString name, QString address, QString paymentID) { QByteArray* t6ae999 = new QByteArray(name.toUtf8()); Moc_PackedString namePacked = { const_cast<char*>(t6ae999->prepend("WHITESPACE").constData()+10), t6ae999->size()-10, t6ae999 };QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };callbackQmlBridged68b73_AddSavedAddressToList(this, dbID, namePacked, addressPacked, paymentIDPacked); };
	 ~QmlBridged68b73() { callbackQmlBridged68b73_DestroyQmlBridge(this); };
	void childEvent(QChildEvent * event) { callbackQmlBridged68b73_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackQmlBridged68b73_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackQmlBridged68b73_CustomEvent(this, event); };
	void deleteLater() { callbackQmlBridged68b73_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackQmlBridged68b73_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackQmlBridged68b73_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	bool event(QEvent * e) { return callbackQmlBridged68b73_Event(this, e) != 0; };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackQmlBridged68b73_EventFilter(this, watched, event) != 0; };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackQmlBridged68b73_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackQmlBridged68b73_TimerEvent(this, event); };
signals:
	void displayTotalBalance(QString balance, QString balanceUSD);
	void displayAvailableBalance(QString data);
	void displayLockedBalance(QString data);
	void displayAddress(QString address, QString wallet, bool displayFiatConversion);
	void addTransactionToList(QString paymentID, QString transactionID, QString amount, QString confirmations, QString ti, QString number);
	void addRemoteNodeToList(QString nodeName);
	void changeTextRemoteNode(qint32 index, QString newText);
	void setSelectedRemoteNode(qint32 index);
	void displayPopup(QString text, qint32 ti);
	void displaySyncingInfo(QString syncing, QString syncingInfo);
	void displayErrorDialog(QString errorText, QString errorInformativeText);
	void displayInfoDialog(QString title, QString mainText, QString informativeText);
	void clearTransferAmount();
	void askForFusion();
	void clearListTransactions();
	void displayPrivateKeys(QString filename, QString privateViewKey, QString privateSpendKey, QString walletAddress);
	void displaySeed(QString filename, QString mnemonicSeed, QString walletAddress);
	void displayOpenWalletScreen();
	void displayMainWalletScreen();
	void finishedLoadingWalletd();
	void finishedCreatingWallet();
	void finishedSendingTransaction();
	void displayPathToPreviousWallet(QString pathToPreviousWallet);
	void displayWalletCreationLocation(QString walletLocation);
	void displayUseRemoteNode(bool useRemote);
	void hideSettingsScreen();
	void displaySettingsScreen();
	void displaySettingsValues(bool displayFiat);
	void displaySettingsRemoteDaemonInfo(QString remoteNodeAddress, QString remoteNodePort);
	void displayFullBalanceInTransferAmount(QString fullBalance);
	void displayDefaultFee(QString fee);
	void displayNodeFee(QString nodeFee);
	void updateConfirmationsOfTransaction(qint32 index, QString confirmations);
	void displayInfoScreen();
	void addSavedAddressToList(qint32 dbID, QString name, QString address, QString paymentID);
public slots:
	void log(QString msg) { QByteArray* t19f34e = new QByteArray(msg.toUtf8()); Moc_PackedString msgPacked = { const_cast<char*>(t19f34e->prepend("WHITESPACE").constData()+10), t19f34e->size()-10, t19f34e };callbackQmlBridged68b73_Log(this, msgPacked); };
	void clickedButtonExplorer(QString transactionID) { QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };callbackQmlBridged68b73_ClickedButtonExplorer(this, transactionIDPacked); };
	void goToWebsite(QString url) { QByteArray* t817363 = new QByteArray(url.toUtf8()); Moc_PackedString urlPacked = { const_cast<char*>(t817363->prepend("WHITESPACE").constData()+10), t817363->size()-10, t817363 };callbackQmlBridged68b73_GoToWebsite(this, urlPacked); };
	void clickedButtonCopyTx(QString transactionID) { QByteArray* tec2ac1 = new QByteArray(transactionID.toUtf8()); Moc_PackedString transactionIDPacked = { const_cast<char*>(tec2ac1->prepend("WHITESPACE").constData()+10), tec2ac1->size()-10, tec2ac1 };callbackQmlBridged68b73_ClickedButtonCopyTx(this, transactionIDPacked); };
	void clickedButtonCopyAddress() { callbackQmlBridged68b73_ClickedButtonCopyAddress(this); };
	void clickedButtonCopyKeys() { callbackQmlBridged68b73_ClickedButtonCopyKeys(this); };
	void clickedButtonCopy(QString stringToCopy) { QByteArray* te009d3 = new QByteArray(stringToCopy.toUtf8()); Moc_PackedString stringToCopyPacked = { const_cast<char*>(te009d3->prepend("WHITESPACE").constData()+10), te009d3->size()-10, te009d3 };callbackQmlBridged68b73_ClickedButtonCopy(this, stringToCopyPacked); };
	void clickedButtonSend(QString transferAddress, QString transferAmount, QString transferPaymentID, QString transferFee) { QByteArray* tb2289f = new QByteArray(transferAddress.toUtf8()); Moc_PackedString transferAddressPacked = { const_cast<char*>(tb2289f->prepend("WHITESPACE").constData()+10), tb2289f->size()-10, tb2289f };QByteArray* t307ef6 = new QByteArray(transferAmount.toUtf8()); Moc_PackedString transferAmountPacked = { const_cast<char*>(t307ef6->prepend("WHITESPACE").constData()+10), t307ef6->size()-10, t307ef6 };QByteArray* tc16f3f = new QByteArray(transferPaymentID.toUtf8()); Moc_PackedString transferPaymentIDPacked = { const_cast<char*>(tc16f3f->prepend("WHITESPACE").constData()+10), tc16f3f->size()-10, tc16f3f };QByteArray* t1a861b = new QByteArray(transferFee.toUtf8()); Moc_PackedString transferFeePacked = { const_cast<char*>(t1a861b->prepend("WHITESPACE").constData()+10), t1a861b->size()-10, t1a861b };callbackQmlBridged68b73_ClickedButtonSend(this, transferAddressPacked, transferAmountPacked, transferPaymentIDPacked, transferFeePacked); };
	void clickedButtonBackupWallet() { callbackQmlBridged68b73_ClickedButtonBackupWallet(this); };
	void clickedCloseWallet() { callbackQmlBridged68b73_ClickedCloseWallet(this); };
	void clickedButtonOpen(QString pathToWallet, QString passwordWallet) { QByteArray* t6c0b5c = new QByteArray(pathToWallet.toUtf8()); Moc_PackedString pathToWalletPacked = { const_cast<char*>(t6c0b5c->prepend("WHITESPACE").constData()+10), t6c0b5c->size()-10, t6c0b5c };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };callbackQmlBridged68b73_ClickedButtonOpen(this, pathToWalletPacked, passwordWalletPacked); };
	void clickedButtonCreate(QString filenameWallet, QString passwordWallet, QString confirmPasswordWallet) { QByteArray* t794b1e = new QByteArray(filenameWallet.toUtf8()); Moc_PackedString filenameWalletPacked = { const_cast<char*>(t794b1e->prepend("WHITESPACE").constData()+10), t794b1e->size()-10, t794b1e };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };QByteArray* taf1d27 = new QByteArray(confirmPasswordWallet.toUtf8()); Moc_PackedString confirmPasswordWalletPacked = { const_cast<char*>(taf1d27->prepend("WHITESPACE").constData()+10), taf1d27->size()-10, taf1d27 };callbackQmlBridged68b73_ClickedButtonCreate(this, filenameWalletPacked, passwordWalletPacked, confirmPasswordWalletPacked); };
	void clickedButtonImport(QString filenameWallet, QString passwordWallet, QString privateViewKey, QString privateSpendKey, QString mnemonicSeed, QString confirmPasswordWallet, QString scanHeight) { QByteArray* t794b1e = new QByteArray(filenameWallet.toUtf8()); Moc_PackedString filenameWalletPacked = { const_cast<char*>(t794b1e->prepend("WHITESPACE").constData()+10), t794b1e->size()-10, t794b1e };QByteArray* t1b4d89 = new QByteArray(passwordWallet.toUtf8()); Moc_PackedString passwordWalletPacked = { const_cast<char*>(t1b4d89->prepend("WHITESPACE").constData()+10), t1b4d89->size()-10, t1b4d89 };QByteArray* tc634db = new QByteArray(privateViewKey.toUtf8()); Moc_PackedString privateViewKeyPacked = { const_cast<char*>(tc634db->prepend("WHITESPACE").constData()+10), tc634db->size()-10, tc634db };QByteArray* t1f6ec2 = new QByteArray(privateSpendKey.toUtf8()); Moc_PackedString privateSpendKeyPacked = { const_cast<char*>(t1f6ec2->prepend("WHITESPACE").constData()+10), t1f6ec2->size()-10, t1f6ec2 };QByteArray* tde366e = new QByteArray(mnemonicSeed.toUtf8()); Moc_PackedString mnemonicSeedPacked = { const_cast<char*>(tde366e->prepend("WHITESPACE").constData()+10), tde366e->size()-10, tde366e };QByteArray* taf1d27 = new QByteArray(confirmPasswordWallet.toUtf8()); Moc_PackedString confirmPasswordWalletPacked = { const_cast<char*>(taf1d27->prepend("WHITESPACE").constData()+10), taf1d27->size()-10, taf1d27 };QByteArray* t32972b = new QByteArray(scanHeight.toUtf8()); Moc_PackedString scanHeightPacked = { const_cast<char*>(t32972b->prepend("WHITESPACE").constData()+10), t32972b->size()-10, t32972b };callbackQmlBridged68b73_ClickedButtonImport(this, filenameWalletPacked, passwordWalletPacked, privateViewKeyPacked, privateSpendKeyPacked, mnemonicSeedPacked, confirmPasswordWalletPacked, scanHeightPacked); };
	void choseRemote(bool remote) { callbackQmlBridged68b73_ChoseRemote(this, remote); };
	void selectedRemoteNode(qint32 index) { callbackQmlBridged68b73_SelectedRemoteNode(this, index); };
	QString getTransferAmountUSD(QString amountTRTL) { QByteArray* te38fb0 = new QByteArray(amountTRTL.toUtf8()); Moc_PackedString amountTRTLPacked = { const_cast<char*>(te38fb0->prepend("WHITESPACE").constData()+10), te38fb0->size()-10, te38fb0 };return ({ Moc_PackedString tempVal = callbackQmlBridged68b73_GetTransferAmountUSD(this, amountTRTLPacked); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void clickedCloseSettings() { callbackQmlBridged68b73_ClickedCloseSettings(this); };
	void clickedSettingsButton() { callbackQmlBridged68b73_ClickedSettingsButton(this); };
	void choseDisplayFiat(bool displayFiat) { callbackQmlBridged68b73_ChoseDisplayFiat(this, displayFiat); };
	void choseCheckpoints(bool checkpoints) { callbackQmlBridged68b73_ChoseCheckpoints(this, checkpoints); };
	void saveRemoteDaemonInfo(QString daemonAddress, QString daemonPort) { QByteArray* td2b37c = new QByteArray(daemonAddress.toUtf8()); Moc_PackedString daemonAddressPacked = { const_cast<char*>(td2b37c->prepend("WHITESPACE").constData()+10), td2b37c->size()-10, td2b37c };QByteArray* tcb21fe = new QByteArray(daemonPort.toUtf8()); Moc_PackedString daemonPortPacked = { const_cast<char*>(tcb21fe->prepend("WHITESPACE").constData()+10), tcb21fe->size()-10, tcb21fe };callbackQmlBridged68b73_SaveRemoteDaemonInfo(this, daemonAddressPacked, daemonPortPacked); };
	void resetRemoteDaemonInfo() { callbackQmlBridged68b73_ResetRemoteDaemonInfo(this); };
	void getFullBalanceAndDisplayInTransferAmount(QString transferFee) { QByteArray* t1a861b = new QByteArray(transferFee.toUtf8()); Moc_PackedString transferFeePacked = { const_cast<char*>(t1a861b->prepend("WHITESPACE").constData()+10), t1a861b->size()-10, t1a861b };callbackQmlBridged68b73_GetFullBalanceAndDisplayInTransferAmount(this, transferFeePacked); };
	void getDefaultFeeAndDisplay() { callbackQmlBridged68b73_GetDefaultFeeAndDisplay(this); };
	void limitDisplayTransactions(bool limit) { callbackQmlBridged68b73_LimitDisplayTransactions(this, limit); };
	QString getVersion() { return ({ Moc_PackedString tempVal = callbackQmlBridged68b73_GetVersion(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	QString getNewVersion() { return ({ Moc_PackedString tempVal = callbackQmlBridged68b73_GetNewVersion(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	QString getNewVersionURL() { return ({ Moc_PackedString tempVal = callbackQmlBridged68b73_GetNewVersionURL(this); QString ret = QString::fromUtf8(tempVal.data, tempVal.len); free(tempVal.data); ret; }); };
	void optimizeWalletWithFusion() { callbackQmlBridged68b73_OptimizeWalletWithFusion(this); };
	void saveAddress(QString name, QString address, QString paymentID) { QByteArray* t6ae999 = new QByteArray(name.toUtf8()); Moc_PackedString namePacked = { const_cast<char*>(t6ae999->prepend("WHITESPACE").constData()+10), t6ae999->size()-10, t6ae999 };QByteArray* tc66218 = new QByteArray(address.toUtf8()); Moc_PackedString addressPacked = { const_cast<char*>(tc66218->prepend("WHITESPACE").constData()+10), tc66218->size()-10, tc66218 };QByteArray* tc240c1 = new QByteArray(paymentID.toUtf8()); Moc_PackedString paymentIDPacked = { const_cast<char*>(tc240c1->prepend("WHITESPACE").constData()+10), tc240c1->size()-10, tc240c1 };callbackQmlBridged68b73_SaveAddress(this, namePacked, addressPacked, paymentIDPacked); };
	void fillListSavedAddresses() { callbackQmlBridged68b73_FillListSavedAddresses(this); };
	void deleteSavedAddress(qint32 dbID) { callbackQmlBridged68b73_DeleteSavedAddress(this, dbID); };
	void exportListTransactions() { callbackQmlBridged68b73_ExportListTransactions(this); };
	void registerToGo(QObject* object) { callbackQmlBridged68b73_RegisterToGo(this, object); };
	void deregisterToGo(QString objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackQmlBridged68b73_DeregisterToGo(this, objectNamePacked); };
private:
};

Q_DECLARE_METATYPE(QmlBridged68b73*)


void QmlBridged68b73_QmlBridged68b73_QRegisterMetaTypes() {
}

void QmlBridged68b73_ConnectDisplayTotalBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::displayTotalBalance), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::Signal_DisplayTotalBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayTotalBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::displayTotalBalance), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::Signal_DisplayTotalBalance));
}

void QmlBridged68b73_DisplayTotalBalance(void* ptr, struct Moc_PackedString balance, struct Moc_PackedString balanceUSD)
{
	static_cast<QmlBridged68b73*>(ptr)->displayTotalBalance(QString::fromUtf8(balance.data, balance.len), QString::fromUtf8(balanceUSD.data, balanceUSD.len));
}

void QmlBridged68b73_ConnectDisplayAvailableBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayAvailableBalance), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayAvailableBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayAvailableBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayAvailableBalance), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayAvailableBalance));
}

void QmlBridged68b73_DisplayAvailableBalance(void* ptr, struct Moc_PackedString data)
{
	static_cast<QmlBridged68b73*>(ptr)->displayAvailableBalance(QString::fromUtf8(data.data, data.len));
}

void QmlBridged68b73_ConnectDisplayLockedBalance(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayLockedBalance), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayLockedBalance), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayLockedBalance(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayLockedBalance), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayLockedBalance));
}

void QmlBridged68b73_DisplayLockedBalance(void* ptr, struct Moc_PackedString data)
{
	static_cast<QmlBridged68b73*>(ptr)->displayLockedBalance(QString::fromUtf8(data.data, data.len));
}

void QmlBridged68b73_ConnectDisplayAddress(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, bool)>(&QmlBridged68b73::displayAddress), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, bool)>(&QmlBridged68b73::Signal_DisplayAddress), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayAddress(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, bool)>(&QmlBridged68b73::displayAddress), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, bool)>(&QmlBridged68b73::Signal_DisplayAddress));
}

void QmlBridged68b73_DisplayAddress(void* ptr, struct Moc_PackedString address, struct Moc_PackedString wallet, char displayFiatConversion)
{
	static_cast<QmlBridged68b73*>(ptr)->displayAddress(QString::fromUtf8(address.data, address.len), QString::fromUtf8(wallet.data, wallet.len), displayFiatConversion != 0);
}

void QmlBridged68b73_ConnectAddTransactionToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridged68b73::addTransactionToList), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridged68b73::Signal_AddTransactionToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectAddTransactionToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridged68b73::addTransactionToList), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString, QString, QString, QString)>(&QmlBridged68b73::Signal_AddTransactionToList));
}

void QmlBridged68b73_AddTransactionToList(void* ptr, struct Moc_PackedString paymentID, struct Moc_PackedString transactionID, struct Moc_PackedString amount, struct Moc_PackedString confirmations, struct Moc_PackedString ti, struct Moc_PackedString number)
{
	static_cast<QmlBridged68b73*>(ptr)->addTransactionToList(QString::fromUtf8(paymentID.data, paymentID.len), QString::fromUtf8(transactionID.data, transactionID.len), QString::fromUtf8(amount.data, amount.len), QString::fromUtf8(confirmations.data, confirmations.len), QString::fromUtf8(ti.data, ti.len), QString::fromUtf8(number.data, number.len));
}

void QmlBridged68b73_ConnectAddRemoteNodeToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::addRemoteNodeToList), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_AddRemoteNodeToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectAddRemoteNodeToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::addRemoteNodeToList), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_AddRemoteNodeToList));
}

void QmlBridged68b73_AddRemoteNodeToList(void* ptr, struct Moc_PackedString nodeName)
{
	static_cast<QmlBridged68b73*>(ptr)->addRemoteNodeToList(QString::fromUtf8(nodeName.data, nodeName.len));
}

void QmlBridged68b73_ConnectChangeTextRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString)>(&QmlBridged68b73::changeTextRemoteNode), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString)>(&QmlBridged68b73::Signal_ChangeTextRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectChangeTextRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString)>(&QmlBridged68b73::changeTextRemoteNode), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString)>(&QmlBridged68b73::Signal_ChangeTextRemoteNode));
}

void QmlBridged68b73_ChangeTextRemoteNode(void* ptr, int index, struct Moc_PackedString newText)
{
	static_cast<QmlBridged68b73*>(ptr)->changeTextRemoteNode(index, QString::fromUtf8(newText.data, newText.len));
}

void QmlBridged68b73_ConnectSetSelectedRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32)>(&QmlBridged68b73::setSelectedRemoteNode), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32)>(&QmlBridged68b73::Signal_SetSelectedRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectSetSelectedRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32)>(&QmlBridged68b73::setSelectedRemoteNode), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32)>(&QmlBridged68b73::Signal_SetSelectedRemoteNode));
}

void QmlBridged68b73_SetSelectedRemoteNode(void* ptr, int index)
{
	static_cast<QmlBridged68b73*>(ptr)->setSelectedRemoteNode(index);
}

void QmlBridged68b73_ConnectDisplayPopup(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, qint32)>(&QmlBridged68b73::displayPopup), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, qint32)>(&QmlBridged68b73::Signal_DisplayPopup), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayPopup(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, qint32)>(&QmlBridged68b73::displayPopup), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, qint32)>(&QmlBridged68b73::Signal_DisplayPopup));
}

void QmlBridged68b73_DisplayPopup(void* ptr, struct Moc_PackedString text, int ti)
{
	static_cast<QmlBridged68b73*>(ptr)->displayPopup(QString::fromUtf8(text.data, text.len), ti);
}

void QmlBridged68b73_ConnectDisplaySyncingInfo(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::displaySyncingInfo), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::Signal_DisplaySyncingInfo), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplaySyncingInfo(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::displaySyncingInfo), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::Signal_DisplaySyncingInfo));
}

void QmlBridged68b73_DisplaySyncingInfo(void* ptr, struct Moc_PackedString syncing, struct Moc_PackedString syncingInfo)
{
	static_cast<QmlBridged68b73*>(ptr)->displaySyncingInfo(QString::fromUtf8(syncing.data, syncing.len), QString::fromUtf8(syncingInfo.data, syncingInfo.len));
}

void QmlBridged68b73_ConnectDisplayErrorDialog(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::displayErrorDialog), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::Signal_DisplayErrorDialog), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayErrorDialog(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::displayErrorDialog), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::Signal_DisplayErrorDialog));
}

void QmlBridged68b73_DisplayErrorDialog(void* ptr, struct Moc_PackedString errorText, struct Moc_PackedString errorInformativeText)
{
	static_cast<QmlBridged68b73*>(ptr)->displayErrorDialog(QString::fromUtf8(errorText.data, errorText.len), QString::fromUtf8(errorInformativeText.data, errorInformativeText.len));
}

void QmlBridged68b73_ConnectDisplayInfoDialog(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString)>(&QmlBridged68b73::displayInfoDialog), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString)>(&QmlBridged68b73::Signal_DisplayInfoDialog), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayInfoDialog(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString)>(&QmlBridged68b73::displayInfoDialog), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString)>(&QmlBridged68b73::Signal_DisplayInfoDialog));
}

void QmlBridged68b73_DisplayInfoDialog(void* ptr, struct Moc_PackedString title, struct Moc_PackedString mainText, struct Moc_PackedString informativeText)
{
	static_cast<QmlBridged68b73*>(ptr)->displayInfoDialog(QString::fromUtf8(title.data, title.len), QString::fromUtf8(mainText.data, mainText.len), QString::fromUtf8(informativeText.data, informativeText.len));
}

void QmlBridged68b73_ConnectClearTransferAmount(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::clearTransferAmount), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_ClearTransferAmount), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectClearTransferAmount(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::clearTransferAmount), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_ClearTransferAmount));
}

void QmlBridged68b73_ClearTransferAmount(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->clearTransferAmount();
}

void QmlBridged68b73_ConnectAskForFusion(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::askForFusion), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_AskForFusion), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectAskForFusion(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::askForFusion), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_AskForFusion));
}

void QmlBridged68b73_AskForFusion(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->askForFusion();
}

void QmlBridged68b73_ConnectClearListTransactions(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::clearListTransactions), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_ClearListTransactions), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectClearListTransactions(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::clearListTransactions), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_ClearListTransactions));
}

void QmlBridged68b73_ClearListTransactions(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->clearListTransactions();
}

void QmlBridged68b73_ConnectDisplayPrivateKeys(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString, QString)>(&QmlBridged68b73::displayPrivateKeys), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString, QString)>(&QmlBridged68b73::Signal_DisplayPrivateKeys), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayPrivateKeys(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString, QString)>(&QmlBridged68b73::displayPrivateKeys), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString, QString)>(&QmlBridged68b73::Signal_DisplayPrivateKeys));
}

void QmlBridged68b73_DisplayPrivateKeys(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString walletAddress)
{
	static_cast<QmlBridged68b73*>(ptr)->displayPrivateKeys(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(privateViewKey.data, privateViewKey.len), QString::fromUtf8(privateSpendKey.data, privateSpendKey.len), QString::fromUtf8(walletAddress.data, walletAddress.len));
}

void QmlBridged68b73_ConnectDisplaySeed(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString)>(&QmlBridged68b73::displaySeed), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString)>(&QmlBridged68b73::Signal_DisplaySeed), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplaySeed(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString)>(&QmlBridged68b73::displaySeed), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString, QString)>(&QmlBridged68b73::Signal_DisplaySeed));
}

void QmlBridged68b73_DisplaySeed(void* ptr, struct Moc_PackedString filename, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString walletAddress)
{
	static_cast<QmlBridged68b73*>(ptr)->displaySeed(QString::fromUtf8(filename.data, filename.len), QString::fromUtf8(mnemonicSeed.data, mnemonicSeed.len), QString::fromUtf8(walletAddress.data, walletAddress.len));
}

void QmlBridged68b73_ConnectDisplayOpenWalletScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::displayOpenWalletScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_DisplayOpenWalletScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayOpenWalletScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::displayOpenWalletScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_DisplayOpenWalletScreen));
}

void QmlBridged68b73_DisplayOpenWalletScreen(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->displayOpenWalletScreen();
}

void QmlBridged68b73_ConnectDisplayMainWalletScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::displayMainWalletScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_DisplayMainWalletScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayMainWalletScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::displayMainWalletScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_DisplayMainWalletScreen));
}

void QmlBridged68b73_DisplayMainWalletScreen(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->displayMainWalletScreen();
}

void QmlBridged68b73_ConnectFinishedLoadingWalletd(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::finishedLoadingWalletd), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_FinishedLoadingWalletd), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectFinishedLoadingWalletd(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::finishedLoadingWalletd), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_FinishedLoadingWalletd));
}

void QmlBridged68b73_FinishedLoadingWalletd(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->finishedLoadingWalletd();
}

void QmlBridged68b73_ConnectFinishedCreatingWallet(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::finishedCreatingWallet), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_FinishedCreatingWallet), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectFinishedCreatingWallet(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::finishedCreatingWallet), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_FinishedCreatingWallet));
}

void QmlBridged68b73_FinishedCreatingWallet(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->finishedCreatingWallet();
}

void QmlBridged68b73_ConnectFinishedSendingTransaction(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::finishedSendingTransaction), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_FinishedSendingTransaction), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectFinishedSendingTransaction(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::finishedSendingTransaction), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_FinishedSendingTransaction));
}

void QmlBridged68b73_FinishedSendingTransaction(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->finishedSendingTransaction();
}

void QmlBridged68b73_ConnectDisplayPathToPreviousWallet(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayPathToPreviousWallet), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayPathToPreviousWallet), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayPathToPreviousWallet(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayPathToPreviousWallet), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayPathToPreviousWallet));
}

void QmlBridged68b73_DisplayPathToPreviousWallet(void* ptr, struct Moc_PackedString pathToPreviousWallet)
{
	static_cast<QmlBridged68b73*>(ptr)->displayPathToPreviousWallet(QString::fromUtf8(pathToPreviousWallet.data, pathToPreviousWallet.len));
}

void QmlBridged68b73_ConnectDisplayWalletCreationLocation(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayWalletCreationLocation), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayWalletCreationLocation), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayWalletCreationLocation(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayWalletCreationLocation), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayWalletCreationLocation));
}

void QmlBridged68b73_DisplayWalletCreationLocation(void* ptr, struct Moc_PackedString walletLocation)
{
	static_cast<QmlBridged68b73*>(ptr)->displayWalletCreationLocation(QString::fromUtf8(walletLocation.data, walletLocation.len));
}

void QmlBridged68b73_ConnectDisplayUseRemoteNode(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(bool)>(&QmlBridged68b73::displayUseRemoteNode), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(bool)>(&QmlBridged68b73::Signal_DisplayUseRemoteNode), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayUseRemoteNode(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(bool)>(&QmlBridged68b73::displayUseRemoteNode), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(bool)>(&QmlBridged68b73::Signal_DisplayUseRemoteNode));
}

void QmlBridged68b73_DisplayUseRemoteNode(void* ptr, char useRemote)
{
	static_cast<QmlBridged68b73*>(ptr)->displayUseRemoteNode(useRemote != 0);
}

void QmlBridged68b73_ConnectHideSettingsScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::hideSettingsScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_HideSettingsScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectHideSettingsScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::hideSettingsScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_HideSettingsScreen));
}

void QmlBridged68b73_HideSettingsScreen(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->hideSettingsScreen();
}

void QmlBridged68b73_ConnectDisplaySettingsScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::displaySettingsScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_DisplaySettingsScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplaySettingsScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::displaySettingsScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_DisplaySettingsScreen));
}

void QmlBridged68b73_DisplaySettingsScreen(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->displaySettingsScreen();
}

void QmlBridged68b73_ConnectDisplaySettingsValues(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(bool)>(&QmlBridged68b73::displaySettingsValues), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(bool)>(&QmlBridged68b73::Signal_DisplaySettingsValues), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplaySettingsValues(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(bool)>(&QmlBridged68b73::displaySettingsValues), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(bool)>(&QmlBridged68b73::Signal_DisplaySettingsValues));
}

void QmlBridged68b73_DisplaySettingsValues(void* ptr, char displayFiat)
{
	static_cast<QmlBridged68b73*>(ptr)->displaySettingsValues(displayFiat != 0);
}

void QmlBridged68b73_ConnectDisplaySettingsRemoteDaemonInfo(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::displaySettingsRemoteDaemonInfo), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::Signal_DisplaySettingsRemoteDaemonInfo), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplaySettingsRemoteDaemonInfo(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::displaySettingsRemoteDaemonInfo), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString, QString)>(&QmlBridged68b73::Signal_DisplaySettingsRemoteDaemonInfo));
}

void QmlBridged68b73_DisplaySettingsRemoteDaemonInfo(void* ptr, struct Moc_PackedString remoteNodeAddress, struct Moc_PackedString remoteNodePort)
{
	static_cast<QmlBridged68b73*>(ptr)->displaySettingsRemoteDaemonInfo(QString::fromUtf8(remoteNodeAddress.data, remoteNodeAddress.len), QString::fromUtf8(remoteNodePort.data, remoteNodePort.len));
}

void QmlBridged68b73_ConnectDisplayFullBalanceInTransferAmount(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayFullBalanceInTransferAmount), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayFullBalanceInTransferAmount), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayFullBalanceInTransferAmount(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayFullBalanceInTransferAmount), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayFullBalanceInTransferAmount));
}

void QmlBridged68b73_DisplayFullBalanceInTransferAmount(void* ptr, struct Moc_PackedString fullBalance)
{
	static_cast<QmlBridged68b73*>(ptr)->displayFullBalanceInTransferAmount(QString::fromUtf8(fullBalance.data, fullBalance.len));
}

void QmlBridged68b73_ConnectDisplayDefaultFee(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayDefaultFee), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayDefaultFee), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayDefaultFee(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayDefaultFee), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayDefaultFee));
}

void QmlBridged68b73_DisplayDefaultFee(void* ptr, struct Moc_PackedString fee)
{
	static_cast<QmlBridged68b73*>(ptr)->displayDefaultFee(QString::fromUtf8(fee.data, fee.len));
}

void QmlBridged68b73_ConnectDisplayNodeFee(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayNodeFee), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayNodeFee), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayNodeFee(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::displayNodeFee), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(QString)>(&QmlBridged68b73::Signal_DisplayNodeFee));
}

void QmlBridged68b73_DisplayNodeFee(void* ptr, struct Moc_PackedString nodeFee)
{
	static_cast<QmlBridged68b73*>(ptr)->displayNodeFee(QString::fromUtf8(nodeFee.data, nodeFee.len));
}

void QmlBridged68b73_ConnectUpdateConfirmationsOfTransaction(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString)>(&QmlBridged68b73::updateConfirmationsOfTransaction), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString)>(&QmlBridged68b73::Signal_UpdateConfirmationsOfTransaction), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectUpdateConfirmationsOfTransaction(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString)>(&QmlBridged68b73::updateConfirmationsOfTransaction), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString)>(&QmlBridged68b73::Signal_UpdateConfirmationsOfTransaction));
}

void QmlBridged68b73_UpdateConfirmationsOfTransaction(void* ptr, int index, struct Moc_PackedString confirmations)
{
	static_cast<QmlBridged68b73*>(ptr)->updateConfirmationsOfTransaction(index, QString::fromUtf8(confirmations.data, confirmations.len));
}

void QmlBridged68b73_ConnectDisplayInfoScreen(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::displayInfoScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_DisplayInfoScreen), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectDisplayInfoScreen(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::displayInfoScreen), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)()>(&QmlBridged68b73::Signal_DisplayInfoScreen));
}

void QmlBridged68b73_DisplayInfoScreen(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->displayInfoScreen();
}

void QmlBridged68b73_ConnectAddSavedAddressToList(void* ptr, long long t)
{
	QObject::connect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString, QString, QString)>(&QmlBridged68b73::addSavedAddressToList), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString, QString, QString)>(&QmlBridged68b73::Signal_AddSavedAddressToList), static_cast<Qt::ConnectionType>(t));
}

void QmlBridged68b73_DisconnectAddSavedAddressToList(void* ptr)
{
	QObject::disconnect(static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString, QString, QString)>(&QmlBridged68b73::addSavedAddressToList), static_cast<QmlBridged68b73*>(ptr), static_cast<void (QmlBridged68b73::*)(qint32, QString, QString, QString)>(&QmlBridged68b73::Signal_AddSavedAddressToList));
}

void QmlBridged68b73_AddSavedAddressToList(void* ptr, int dbID, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID)
{
	static_cast<QmlBridged68b73*>(ptr)->addSavedAddressToList(dbID, QString::fromUtf8(name.data, name.len), QString::fromUtf8(address.data, address.len), QString::fromUtf8(paymentID.data, paymentID.len));
}

void QmlBridged68b73_Log(void* ptr, struct Moc_PackedString msg)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "log", Q_ARG(QString, QString::fromUtf8(msg.data, msg.len)));
}

void QmlBridged68b73_ClickedButtonExplorer(void* ptr, struct Moc_PackedString transactionID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonExplorer", Q_ARG(QString, QString::fromUtf8(transactionID.data, transactionID.len)));
}

void QmlBridged68b73_GoToWebsite(void* ptr, struct Moc_PackedString url)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "goToWebsite", Q_ARG(QString, QString::fromUtf8(url.data, url.len)));
}

void QmlBridged68b73_ClickedButtonCopyTx(void* ptr, struct Moc_PackedString transactionID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonCopyTx", Q_ARG(QString, QString::fromUtf8(transactionID.data, transactionID.len)));
}

void QmlBridged68b73_ClickedButtonCopyAddress(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonCopyAddress");
}

void QmlBridged68b73_ClickedButtonCopyKeys(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonCopyKeys");
}

void QmlBridged68b73_ClickedButtonCopy(void* ptr, struct Moc_PackedString stringToCopy)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonCopy", Q_ARG(QString, QString::fromUtf8(stringToCopy.data, stringToCopy.len)));
}

void QmlBridged68b73_ClickedButtonSend(void* ptr, struct Moc_PackedString transferAddress, struct Moc_PackedString transferAmount, struct Moc_PackedString transferPaymentID, struct Moc_PackedString transferFee)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonSend", Q_ARG(QString, QString::fromUtf8(transferAddress.data, transferAddress.len)), Q_ARG(QString, QString::fromUtf8(transferAmount.data, transferAmount.len)), Q_ARG(QString, QString::fromUtf8(transferPaymentID.data, transferPaymentID.len)), Q_ARG(QString, QString::fromUtf8(transferFee.data, transferFee.len)));
}

void QmlBridged68b73_ClickedButtonBackupWallet(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonBackupWallet");
}

void QmlBridged68b73_ClickedCloseWallet(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedCloseWallet");
}

void QmlBridged68b73_ClickedButtonOpen(void* ptr, struct Moc_PackedString pathToWallet, struct Moc_PackedString passwordWallet)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonOpen", Q_ARG(QString, QString::fromUtf8(pathToWallet.data, pathToWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)));
}

void QmlBridged68b73_ClickedButtonCreate(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString confirmPasswordWallet)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonCreate", Q_ARG(QString, QString::fromUtf8(filenameWallet.data, filenameWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)), Q_ARG(QString, QString::fromUtf8(confirmPasswordWallet.data, confirmPasswordWallet.len)));
}

void QmlBridged68b73_ClickedButtonImport(void* ptr, struct Moc_PackedString filenameWallet, struct Moc_PackedString passwordWallet, struct Moc_PackedString privateViewKey, struct Moc_PackedString privateSpendKey, struct Moc_PackedString mnemonicSeed, struct Moc_PackedString confirmPasswordWallet, struct Moc_PackedString scanHeight)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedButtonImport", Q_ARG(QString, QString::fromUtf8(filenameWallet.data, filenameWallet.len)), Q_ARG(QString, QString::fromUtf8(passwordWallet.data, passwordWallet.len)), Q_ARG(QString, QString::fromUtf8(privateViewKey.data, privateViewKey.len)), Q_ARG(QString, QString::fromUtf8(privateSpendKey.data, privateSpendKey.len)), Q_ARG(QString, QString::fromUtf8(mnemonicSeed.data, mnemonicSeed.len)), Q_ARG(QString, QString::fromUtf8(confirmPasswordWallet.data, confirmPasswordWallet.len)), Q_ARG(QString, QString::fromUtf8(scanHeight.data, scanHeight.len)));
}

void QmlBridged68b73_ChoseRemote(void* ptr, char remote)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "choseRemote", Q_ARG(bool, remote != 0));
}

void QmlBridged68b73_SelectedRemoteNode(void* ptr, int index)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "selectedRemoteNode", Q_ARG(qint32, index));
}

struct Moc_PackedString QmlBridged68b73_GetTransferAmountUSD(void* ptr, struct Moc_PackedString amountTRTL)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "getTransferAmountUSD", Q_RETURN_ARG(QString, returnArg), Q_ARG(QString, QString::fromUtf8(amountTRTL.data, amountTRTL.len)));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

void QmlBridged68b73_ClickedCloseSettings(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedCloseSettings");
}

void QmlBridged68b73_ClickedSettingsButton(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "clickedSettingsButton");
}

void QmlBridged68b73_ChoseDisplayFiat(void* ptr, char displayFiat)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "choseDisplayFiat", Q_ARG(bool, displayFiat != 0));
}

void QmlBridged68b73_ChoseCheckpoints(void* ptr, char checkpoints)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "choseCheckpoints", Q_ARG(bool, checkpoints != 0));
}

void QmlBridged68b73_SaveRemoteDaemonInfo(void* ptr, struct Moc_PackedString daemonAddress, struct Moc_PackedString daemonPort)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "saveRemoteDaemonInfo", Q_ARG(QString, QString::fromUtf8(daemonAddress.data, daemonAddress.len)), Q_ARG(QString, QString::fromUtf8(daemonPort.data, daemonPort.len)));
}

void QmlBridged68b73_ResetRemoteDaemonInfo(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "resetRemoteDaemonInfo");
}

void QmlBridged68b73_GetFullBalanceAndDisplayInTransferAmount(void* ptr, struct Moc_PackedString transferFee)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "getFullBalanceAndDisplayInTransferAmount", Q_ARG(QString, QString::fromUtf8(transferFee.data, transferFee.len)));
}

void QmlBridged68b73_GetDefaultFeeAndDisplay(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "getDefaultFeeAndDisplay");
}

void QmlBridged68b73_LimitDisplayTransactions(void* ptr, char limit)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "limitDisplayTransactions", Q_ARG(bool, limit != 0));
}

struct Moc_PackedString QmlBridged68b73_GetVersion(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "getVersion", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

struct Moc_PackedString QmlBridged68b73_GetNewVersion(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "getNewVersion", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

struct Moc_PackedString QmlBridged68b73_GetNewVersionURL(void* ptr)
{
	QString returnArg;
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "getNewVersionURL", Q_RETURN_ARG(QString, returnArg));
	return ({ QByteArray* t8e5b69 = new QByteArray(returnArg.toUtf8()); Moc_PackedString { const_cast<char*>(t8e5b69->prepend("WHITESPACE").constData()+10), t8e5b69->size()-10, t8e5b69 }; });
}

void QmlBridged68b73_OptimizeWalletWithFusion(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "optimizeWalletWithFusion");
}

void QmlBridged68b73_SaveAddress(void* ptr, struct Moc_PackedString name, struct Moc_PackedString address, struct Moc_PackedString paymentID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "saveAddress", Q_ARG(QString, QString::fromUtf8(name.data, name.len)), Q_ARG(QString, QString::fromUtf8(address.data, address.len)), Q_ARG(QString, QString::fromUtf8(paymentID.data, paymentID.len)));
}

void QmlBridged68b73_FillListSavedAddresses(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "fillListSavedAddresses");
}

void QmlBridged68b73_DeleteSavedAddress(void* ptr, int dbID)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "deleteSavedAddress", Q_ARG(qint32, dbID));
}

void QmlBridged68b73_ExportListTransactions(void* ptr)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "exportListTransactions");
}

void QmlBridged68b73_RegisterToGo(void* ptr, void* object)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "registerToGo", Q_ARG(QObject*, static_cast<QObject*>(object)));
}

void QmlBridged68b73_DeregisterToGo(void* ptr, struct Moc_PackedString objectName)
{
	QMetaObject::invokeMethod(static_cast<QmlBridged68b73*>(ptr), "deregisterToGo", Q_ARG(QString, QString::fromUtf8(objectName.data, objectName.len)));
}

int QmlBridged68b73_QmlBridged68b73_QRegisterMetaType()
{
	return qRegisterMetaType<QmlBridged68b73*>();
}

int QmlBridged68b73_QmlBridged68b73_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<QmlBridged68b73*>(const_cast<const char*>(typeName));
}

int QmlBridged68b73_QmlBridged68b73_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<QmlBridged68b73>();
#else
	return 0;
#endif
}

int QmlBridged68b73_QmlBridged68b73_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<QmlBridged68b73>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

void* QmlBridged68b73___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridged68b73___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridged68b73___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* QmlBridged68b73___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void QmlBridged68b73___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* QmlBridged68b73___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* QmlBridged68b73___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridged68b73___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridged68b73___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* QmlBridged68b73___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void QmlBridged68b73___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* QmlBridged68b73___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* QmlBridged68b73_NewQmlBridge(void* parent)
{
	if (dynamic_cast<QOffscreenSurface*>(static_cast<QObject*>(parent))) {
		return new QmlBridged68b73(static_cast<QOffscreenSurface*>(parent));
	} else if (dynamic_cast<QPaintDeviceWindow*>(static_cast<QObject*>(parent))) {
		return new QmlBridged68b73(static_cast<QPaintDeviceWindow*>(parent));
	} else if (dynamic_cast<QPdfWriter*>(static_cast<QObject*>(parent))) {
		return new QmlBridged68b73(static_cast<QPdfWriter*>(parent));
	} else if (dynamic_cast<QWindow*>(static_cast<QObject*>(parent))) {
		return new QmlBridged68b73(static_cast<QWindow*>(parent));
	} else {
		return new QmlBridged68b73(static_cast<QObject*>(parent));
	}
}

void QmlBridged68b73_DestroyQmlBridge(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->~QmlBridged68b73();
}

void QmlBridged68b73_DestroyQmlBridgeDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

void QmlBridged68b73_ChildEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridged68b73*>(ptr)->QObject::childEvent(static_cast<QChildEvent*>(event));
}

void QmlBridged68b73_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<QmlBridged68b73*>(ptr)->QObject::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void QmlBridged68b73_CustomEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridged68b73*>(ptr)->QObject::customEvent(static_cast<QEvent*>(event));
}

void QmlBridged68b73_DeleteLaterDefault(void* ptr)
{
	static_cast<QmlBridged68b73*>(ptr)->QObject::deleteLater();
}

void QmlBridged68b73_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<QmlBridged68b73*>(ptr)->QObject::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

char QmlBridged68b73_EventDefault(void* ptr, void* e)
{
	return static_cast<QmlBridged68b73*>(ptr)->QObject::event(static_cast<QEvent*>(e));
}

char QmlBridged68b73_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<QmlBridged68b73*>(ptr)->QObject::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}



void QmlBridged68b73_TimerEventDefault(void* ptr, void* event)
{
	static_cast<QmlBridged68b73*>(ptr)->QObject::timerEvent(static_cast<QTimerEvent*>(event));
}

#include "moc_moc.h"
