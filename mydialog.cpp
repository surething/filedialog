#include <QDebug>

#include "MyDialog.h"

MyDialog::MyDialog() :
	m_pDialog( new QFileDialog() )
{
	m_pDialog->setAcceptMode( QFileDialog::AcceptOpen );
	m_pDialog->setModal( true );

	connect( m_pDialog, SIGNAL(finished(int)), SLOT(DialogFinished(int)) );
}
	
MyDialog::~MyDialog()
{
	if (m_pDialog)
	{
		delete m_pDialog;
		m_pDialog = NULL;
	}
}
	
void MyDialog::RunDialog()
{
	m_pDialog->open(this, SLOT(DialogSelectedFile(QString)));
	m_pDialog->exec();
}

void MyDialog::DialogSelectedFile( const QString & file )
{
	qDebug() << "DIALOG SELECTED FILE : " << file;
}

void MyDialog::DialogFinished( int status )
{
	qDebug() << "DIALOG FINISHED : " << status;
}
	
