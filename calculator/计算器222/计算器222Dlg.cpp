
// ������222Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "������222.h"
#include "������222Dlg.h"
#include "afxdialogex.h"
#include "Math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C������222Dlg �Ի���




C������222Dlg::C������222Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C������222Dlg::IDD, pParent)
	, m_display(_T("0.0"))
	, m_first(0.0)
	, m_second(0.0)
	, m_coff(1.0)
	, m_operator(_T("+"))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C������222Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_DISPLAY, m_display);
}

BEGIN_MESSAGE_MAP(C������222Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	
	ON_BN_CLICKED(IDC_BUTTON0, &C������222Dlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON1, &C������222Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C������222Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C������222Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &C������222Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &C������222Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &C������222Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &C������222Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &C������222Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON_POINT, &C������222Dlg::OnBnClickedButtonPoint)
	ON_BN_CLICKED(IDC_BUTTON_SIGN, &C������222Dlg::OnBnClickedButtonSign)
	ON_BN_CLICKED(IDC_BUTTON_ADD, &C������222Dlg::OnBnClickedButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_MINUS, &C������222Dlg::OnBnClickedButtonMinus)
	ON_BN_CLICKED(IDC_BUTTON_MULTIPLY, &C������222Dlg::OnBnClickedButtonMultiply)
	ON_BN_CLICKED(IDC_BUTTON_DIV, &C������222Dlg::OnBnClickedButtonDiv)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, &C������222Dlg::OnBnClickedButtonClear)
	ON_BN_CLICKED(IDC_BUTTON_SQRT, &C������222Dlg::OnBnClickedButtonSqrt)
	ON_BN_CLICKED(IDC_BUTTON_RECIPROCAL, &C������222Dlg::OnBnClickedButtonReciprocal)
	ON_BN_CLICKED(IDC_BUTTON_EQUAL, &C������222Dlg::OnBnClickedButtonEqual)
END_MESSAGE_MAP()


// C������222Dlg ��Ϣ�������

BOOL C������222Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void C������222Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void C������222Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR C������222Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}






void C������222Dlg::OnBnClickedButton0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if(m_coff==1.0)
	{
		m_second=m_second*10+0;
	}
	else
	{
		m_second=m_second+0*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+1;
	}
	else
	{
		m_second=m_second+1*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+2;
	}
	else
	{
		m_second=m_second+2*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+3;
	}
	else
	{
		m_second=m_second+3*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}

void C������222Dlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+4;
	}
	else
	{
		m_second=m_second+4*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}

void C������222Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+5;
	}
	else
	{
		m_second=m_second+5*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+6;
	}
	else
	{
		m_second=m_second+6*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+7;
	}
	else
	{
		m_second=m_second+7*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+8;
	}
	else
	{
		m_second=m_second+8*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
		if(m_coff==1.0)
	{
		m_second=m_second*10+9;
	}
	else
	{
		m_second=m_second+9*m_coff;
		m_coff*=0.1;
	}
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButtonPoint()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_coff=0.1;
}


void C������222Dlg::OnBnClickedButtonSign()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_second=-m_second;
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButtonAdd()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Calculate();
	m_operator="+";
}


void C������222Dlg::OnBnClickedButtonMinus()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Calculate();
	m_operator="-";
}


void C������222Dlg::OnBnClickedButtonMultiply()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Calculate();
	m_operator="*";
}


void C������222Dlg::OnBnClickedButtonDiv()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Calculate();
	m_operator="/";
}


void C������222Dlg::OnBnClickedButtonClear()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_second=0.0;
	m_operator="+";
	m_coff=1.0;
	UpdateDisplay(0.0);
}


void C������222Dlg::OnBnClickedButtonSqrt()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_second=sqrt(m_second);
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButtonReciprocal()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	if(fabs(m_second)<=0.000001)
	{
		m_display="��������Ϊ��";
			UpdateData(false);
			return;
	}
	m_second=1.0/m_second;
	UpdateDisplay(m_second);
}


void C������222Dlg::OnBnClickedButtonEqual()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Calculate();
	m_first=0.0;
	m_operator="+";
}


void C������222Dlg::UpdateDisplay(double lval)
{
	m_display.Format (_T("%f"),lval);
	int i=m_display.GetLength ();
	while(m_display.GetAt (i-1)=='0')
	{
		m_display.Delete (i-1,1);
		i--;
	}
	UpdateData(false);

}


void C������222Dlg::Calculate(void)
{
	switch(m_operator.GetAt (0))
	{
	case'+':
		m_first+=m_second;
		break;
	case'-':
		m_first-=m_second;
		break;
	case'*':
		m_first*=m_second;
		break;
	case'/':
		if(fabs(m_second)<=0.000001)
		{
			m_display="��������Ϊ��";
			UpdateData(false);
			return;

		}
		m_first/=m_second;
		break;
	}
	m_second=1.0;
	m_coff=1.0;
	UpdateDisplay(m_first);
}
