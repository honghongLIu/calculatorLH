
// ������222Dlg.h : ͷ�ļ�
//

#pragma once


// C������222Dlg �Ի���
class C������222Dlg : public CDialogEx
{
// ����
public:
	C������222Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY222_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton4();
	CString m_display;
protected:
	double m_first;
	double m_second;
	double m_coff;
	CString m_operator;
public:
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButtonPoint();
	afx_msg void OnBnClickedButtonSign();
	afx_msg void OnBnClickedButtonAdd();
	afx_msg void OnBnClickedButtonMinus();
	afx_msg void OnBnClickedButtonMultiply();
	afx_msg void OnBnClickedButtonDiv();
	afx_msg void OnBnClickedButtonClear();
	afx_msg void OnBnClickedButtonSqrt();
	afx_msg void OnBnClickedButtonReciprocal();
	afx_msg void OnBnClickedButtonEqual();
	void UpdateDisplay(double lval);
	void Calculate(void);
};
