
// AntiRansomwareUserDlg.h : ��� ����
//

#pragma once


// CAntiRansomwareUserDlg ��ȭ ����
class CAntiRansomwareUserDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CAntiRansomwareUserDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ANTIRANSOMWAREUSER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};