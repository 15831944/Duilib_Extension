/*
//	��ʱ��ť	
//   20180522

xml ����
<TimeButton name="lc_time_btn" text="��ʱ��ť" width="200" bkcolor="0x5500ff00" sectime="60" textcolor="0xFFFFFFFF" disabledtextcolor="0xFFFFFFFF"> </TimeButton>

// ��ʼ������
//	pTime->SetTimeLong(60);

// ��Ϣ��Ӧ
// ��ť�����ʱ��ִ�м�ʱ
	
*/

#pragma once

#include "..\UiLib\UIlib.h"
using namespace DuiLib;

class CTimeButtonUI :
	public CButtonUI
{
public:
	CTimeButtonUI();
	~CTimeButtonUI();
	void SetTimeLong(unsigned long nValue);
	void SetPaddingText(CDuiString str);

	void DoEvent(TEventUI& event);
	void OnTimer(int nTimerID);
	// ��ť�����
	bool Activate();
	// ����ʱ������
	void UpShow();
	// �ж��Ƿ���Ҫ�رռ�ʱ��
	bool NeedKillTimer();
	void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);
protected:
	static unsigned int __stdcall TimeThreadFun(PVOID pM);
private:
	CDuiString		m_textBak;
	CDuiString		m_textPadding;
	unsigned long	m_nTimeLong;
	unsigned long	m_nTimerNow;
};

