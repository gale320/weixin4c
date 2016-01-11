/* It had generated by DirectStruct v1.6.1 */
#include "IDL_xml.dsc.h"

int DSCINIT_xml( xml *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(xml) );
	return 0;
}

#include "fasterxml.h"

int DSCSERIALIZE_XML_xml( xml *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"<?xml version=\"1.0\" encoding=\"%s\"?>\n",encoding); if(len<0)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<xml>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<ToUserName>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ToUserName); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</ToUserName>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<FromUserName>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->FromUserName); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</FromUserName>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<CreateTime>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->CreateTime); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</CreateTime>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<MsgType>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->MsgType); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</MsgType>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Content>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Content); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Content>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Event>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Event); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Event>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<PicUrl>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->PicUrl); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</PicUrl>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<MediaId>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->MediaId); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</MediaId>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Format>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Format); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Format>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Recognition>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Recognition); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Recognition>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<ThumbMediaId>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ThumbMediaId); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</ThumbMediaId>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Location_X>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%lf",pst->Location_X); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Location_X>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Location_Y>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%lf",pst->Location_Y); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Location_Y>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Scale>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->Scale); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Scale>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Label>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Label); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Label>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Title>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Title); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Title>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Description>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Description); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Description>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<Url>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->Url); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</Url>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<MsgId>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->MsgId); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</MsgId>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</xml>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	(*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

funcCallbackOnXmlNode CallbackOnXmlNode_xml ;
int CallbackOnXmlNode_xml( int type , char *xpath , int xpath_len , int xpath_size , char *node , int node_len , char *properties , int properties_len , char *content , int content_len , void *p )
{
	xml	*pst = (xml*)p ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	
	if( type & FASTERXML_NODE_BRANCH )
	{
		if( type & FASTERXML_NODE_ENTER )
		{
		}
		else if( type & FASTERXML_NODE_LEAVE )
		{
		}
	}
	else if( type & FASTERXML_NODE_LEAF )
	{
		/* ToUserName */
		if( xpath_len == 15 && strncmp( xpath , "/xml/ToUserName" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->ToUserName);
		{if( content_len > sizeof(pst->ToUserName)-1 ) return -7;}}
		/* FromUserName */
		if( xpath_len == 17 && strncmp( xpath , "/xml/FromUserName" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->FromUserName);
		{if( content_len > sizeof(pst->FromUserName)-1 ) return -7;}}
		/* CreateTime */
		if( xpath_len == 15 && strncmp( xpath , "/xml/CreateTime" , xpath_len ) == 0 )
		{NATOI(content,content_len,pst->CreateTime);}
		/* MsgType */
		if( xpath_len == 12 && strncmp( xpath , "/xml/MsgType" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->MsgType);
		{if( content_len > sizeof(pst->MsgType)-1 ) return -7;}}
		/* Content */
		if( xpath_len == 12 && strncmp( xpath , "/xml/Content" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Content);
		{if( content_len > sizeof(pst->Content)-1 ) return -7;}}
		/* Event */
		if( xpath_len == 10 && strncmp( xpath , "/xml/Event" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Event);
		{if( content_len > sizeof(pst->Event)-1 ) return -7;}}
		/* PicUrl */
		if( xpath_len == 11 && strncmp( xpath , "/xml/PicUrl" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->PicUrl);
		{if( content_len > sizeof(pst->PicUrl)-1 ) return -7;}}
		/* MediaId */
		if( xpath_len == 12 && strncmp( xpath , "/xml/MediaId" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->MediaId);
		{if( content_len > sizeof(pst->MediaId)-1 ) return -7;}}
		/* Format */
		if( xpath_len == 11 && strncmp( xpath , "/xml/Format" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Format);
		{if( content_len > sizeof(pst->Format)-1 ) return -7;}}
		/* Recognition */
		if( xpath_len == 16 && strncmp( xpath , "/xml/Recognition" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Recognition);
		{if( content_len > sizeof(pst->Recognition)-1 ) return -7;}}
		/* ThumbMediaId */
		if( xpath_len == 17 && strncmp( xpath , "/xml/ThumbMediaId" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->ThumbMediaId);
		{if( content_len > sizeof(pst->ThumbMediaId)-1 ) return -7;}}
		/* Location_X */
		if( xpath_len == 15 && strncmp( xpath , "/xml/Location_X" , xpath_len ) == 0 )
		{NATOLF(content,content_len,pst->Location_X);}
		/* Location_Y */
		if( xpath_len == 15 && strncmp( xpath , "/xml/Location_Y" , xpath_len ) == 0 )
		{NATOLF(content,content_len,pst->Location_Y);}
		/* Scale */
		if( xpath_len == 10 && strncmp( xpath , "/xml/Scale" , xpath_len ) == 0 )
		{NATOI(content,content_len,pst->Scale);}
		/* Label */
		if( xpath_len == 10 && strncmp( xpath , "/xml/Label" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Label);
		{if( content_len > sizeof(pst->Label)-1 ) return -7;}}
		/* Title */
		if( xpath_len == 10 && strncmp( xpath , "/xml/Title" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Title);
		{if( content_len > sizeof(pst->Title)-1 ) return -7;}}
		/* Description */
		if( xpath_len == 16 && strncmp( xpath , "/xml/Description" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Description);
		{if( content_len > sizeof(pst->Description)-1 ) return -7;}}
		/* Url */
		if( xpath_len == 8 && strncmp( xpath , "/xml/Url" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->Url);
		{if( content_len > sizeof(pst->Url)-1 ) return -7;}}
		/* MsgId */
		if( xpath_len == 10 && strncmp( xpath , "/xml/MsgId" , xpath_len ) == 0 )
		{XMLUNESCAPE_FOLD(content,content_len,pst->MsgId);
		{if( content_len > sizeof(pst->MsgId)-1 ) return -7;}}
	}
	
	return 0;
}

int DSCDESERIALIZE_XML_xml( char *encoding , char *buf , int *p_len , xml *pst )
{
	char	xpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( xpath , 0x00 , sizeof(xpath) );
	nret = TravelXmlBuffer( buf , xpath , sizeof(xpath) , & CallbackOnXmlNode_xml , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}
