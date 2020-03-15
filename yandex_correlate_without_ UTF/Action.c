Action()
{
	
	lr_start_transaction("0_homepage");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='1486360661574623206' 
Name ='yu' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='yandexuid'*/
	web_reg_save_param_regexp(
		"ParamName=yu",
		"RegExp=yandexuid=(.*?)&",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/mail.yandex.ru/*",
		LAST);

	web_reg_find("Search=Body",	"Text=Войти",LAST);

	web_url("mail.yandex.ru", 
		"URL=http://mail.yandex.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("0_homepage", LR_AUTO);
	
	
	
	

	lr_start_transaction("1_login");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='8e5a150d8994e4299f728751c81ee8fb' 
Name ='reqid' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='requid_1'*/
	web_reg_save_param_regexp(
		"ParamName=reqid",
		"RegExp=reqid:'(.*?)'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/auth*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='ddbc63f2-01ae-40b3-b1a9-be329346af3b' 
Name ='process_uuid' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='process_uuid'*/
	web_reg_save_param_regexp(
		"ParamName=process_uuid",
		"RegExp=process_uuid=(.*?)&",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/auth*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='7e9822b478c4c4d7984cdf7f23e6f7bc715c5bee:1574623222627' 
Name ='csrf_token' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='csrf_token'*/
	web_reg_save_param_regexp(
		"ParamName=csrf_token",
		"RegExp=data-csrf=\"(.*?)\" data-metrics-id",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/auth*",
		LAST);

	web_url("auth", 
		"URL=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("1_login",LR_AUTO);

	

	lr_start_transaction("2_login");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

/*Correlation comment: Automatic rules - Do not change!  
Original value='87853001177fdc102f364e74527c59f222' 
Name ='track_id' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='track_id'*/
	web_reg_save_param_json(
		"ParamName=track_id",
		"QueryString=$.track_id",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='Alex.Under1093@yandex.ru' 
Name ='CorrelationParameter' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='corr_email'*/
	web_reg_save_param_json(
		"ParamName=CorrelationParameter",
		"QueryString=$.magic_link_email",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("start",
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/start",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1",
		"Snapshot=t16.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrf_token", "Value={csrf_token}", ENDITEM,
		"Name=login", "Value={email}", ENDITEM,
		"Name=process_uuid", "Value={process_uuid}", ENDITEM,
		"Name=retpath", "Value=https://mail.yandex.ru/", ENDITEM,
		"Name=origin", "Value=hostroot_homer_auth_ru", ENDITEM,
		"Name=service", "Value=mail", ENDITEM,
		LAST);

	web_convert_param("CorrelationParameter_URL1",
		"SourceString={CorrelationParameter}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

/*Correlation comment: Automatic rules - Do not change!  
Original value='586221334' 
Name ='uid' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='X-Default-UID'*/
	web_reg_save_param_regexp(
		"ParamName=uid",
		"RegExp=X-Default-UID: (.*?)\r\n",
		SEARCH_FILTERS,
		"Scope=Headers",
		LAST);

	web_reg_find("Search=All","Text=ok",LAST);
			
	web_submit_data("commit_password",
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/commit_password",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1",
		"Snapshot=t20.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrf_token", "Value={csrf_token}", ENDITEM,
		"Name=track_id", "Value={track_id}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

/*Correlation comment: Automatic rules - Do not change!  
Original value='9cac35fe8d37e302e2850ece911110dfa0a6c271:1574623258839' 
Name ='csrf_token_1' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='csrf_token_2'*/
	web_reg_save_param_json(
		"ParamName=csrf_token_1",
		"QueryString=$.csrf",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("accounts",
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1",
		"Snapshot=t23.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrf_token", "Value={csrf_token}", ENDITEM,
		LAST);

	web_submit_data("ask_v2",
		"Action=https://passport.yandex.ru/registration-validations/auth/additional_data/ask_v2",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1",
		"Snapshot=t24.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrf_token", "Value={csrf_token_1}", ENDITEM,
		"Name=uid", "Value={uid}", ENDITEM,
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='LIZA-88874651-1574623259044' 
Name ='reqid_1' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='requid'*/
	web_reg_save_param_regexp(
		"ParamName=reqid_1",
		"RegExp=reqid=(.*?);",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/mail.yandex.ru/*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7' 
Name ='CorrelationParameter_1' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='ckey'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=\"ckey\":\"(.*?)\"}},",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/mail.yandex.ru/*",
		LAST);
		
		web_reg_find("Search=Body",	"Text=Контакты", LAST);

	web_url("redirect", 
		"URL=https://passport.yandex.ru/redirect?url=https%3A%2F%2Fmail.yandex.ru%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://passport.yandex.ru/auth/list?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1&mode=edit", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_convert_param("CorrelationParameter_1_URL2",
		"SourceString={CorrelationParameter_1}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);


	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_websocket_connect("ID=0", 
		"URI=wss://mail.yandex.ru/web-api/models/liza1?_m=do-service-worker-log", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);


	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://yastatic.net");

	web_url("data", 
		"URL=https://yandex.ru/set/s/rsya-tag-users/data?referrer=https%3A%2F%2Fmail.yandex.ru%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://yastatic.net/safeframe-bundles/0.69/1-1-0/render.html", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("2_login",LR_AUTO);

	
	
	
	lr_start_transaction("4_send_message");

	/*Connection ID 0 received buffer WebSocketReceive1*/

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"qLexxQefJqM1:tLe4B95iQqM1.sLeAQZm474Y1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive2*/

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_reg_find("Search=All","Text=ok",LAST);

	web_custom_request("liza1_29",
		"URL=https://mail.yandex.ru/web-api/do-send/liza1?_send=true",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://mail.yandex.ru/",
		"Snapshot=t88.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=att_ids=&bcc=&captcha_entered=&captcha_key=&cc=&charset=&confirm_limit=&current_folder=6&doit=&fid=&from_mailbox={CorrelationParameter_URL1}&from_name=%D0%90%D0%BB%D0%B5%D0%BA%D1%81%D0%B0%D0%BD%D0%B4%D1%80+%D0%AF%D0%BA%D0%BE%D0%B2%D0%BB%D0%B5%D0%B2&get_abook=&html=&idcs=&ign_overwrite=no&initial_cc=&initial_to=&inreplyto=&mark_as=&disk_att=&nosave=&nosend=&notify_on_send=&overwrite=170855310863368339&parts=&phone=&references=&remind_period=&retpath=&returl=&saveDraft=&save_symbol=draft&send=%3Cdiv%3E{Message}%3C%2Fdiv%3E%3Cdiv%3E%26nbsp%3B%3C%2Fdiv%3E%3Cdiv%3E%26nbsp%3B%3C%2Fdiv%3E%3Cdiv%3E-------------------------------%3C%2Fdiv%3E%3Cdiv%3E%D0%A1+%D1%83%D0%B2%D0%B0%D0%B6%D0%B5%D0%BD%D0%B8%D0%B5%D0%BC%2C%3C%2Fdiv%3E%3Cdiv%3E%D0%90%D0%BB%D0%B5%D0%BA%D1%81%D0%B0%D0%BD%D0%B4%D1%80%3C%2Fdiv%3E%3Cdiv%3E%26nbsp%3B%3C%2Fdiv%3E&send_time=&store_fid=&store_name=&strict_charset=&style=&subj={subject}&to=%3Calex.under1093%40yandex.ru%3E&ttype=html&where=&_ckey={CorrelationParameter"
		"_1_URL2}&_uid={uid}&_locale=ru&_timestamp=1574623325272&_product=RUS&_connection_id={reqid_1}&_exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0",
		LAST);


	/*Connection ID 0 received buffer WebSocketReceive3*/

	/*Connection ID 0 received buffer WebSocketReceive4*/

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"0Me2pRefHSw1:5Me0IJlgJOs1.5Me8kv8wtGk1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"3MedASefJiE1:5MeZM5Jgv0U1.5Me8kv8wtGk1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);


	/*Connection ID 0 received buffer WebSocketReceive5*/

	/*Connection ID 0 received buffer WebSocketReceive6*/

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"tLefKRefICg1:5MenTJWINCg1.5Meblv8wsuQ1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"vLeGVRefJeA1:5MeKbI0fNa61.5Meblv8wsuQ1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	lr_end_transaction("4_send_message",LR_AUTO);


	

	lr_start_transaction("5_logout");

	/*Connection ID 0 received buffer WebSocketReceive7*/

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"5Me3PSefIeA1:JMeeFkifWqM1.JMeFRWg0xa61:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=All","Text=Написать", LAST);
	
	web_url("passport",
		"URL=https://passport.yandex.ru/passport?mode=embeddedauth&action=logout&uid={uid}&yu={yu}&retpath=https%3A%2F%2Fyandex.ru",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://mail.yandex.ru/",
		"Snapshot=t119.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

/*Correlation comment: Automatic rules - Do not change!  
Original value='f93989f18ad6ab36942257efd24f1496' 
Name ='reqid_2' 
Type ='Rule' 
AppName ='yandex' 
RuleName ='requid_1'*/
	web_reg_save_param_regexp(
		"ParamName=reqid_2",
		"RegExp=reqid:'(.*?)'",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/auth*",
		LAST);

	web_reg_find("Search=Body",	"Text=Войти", LAST);
	
	web_url("mail.yandex.ru_2",
		"URL=https://mail.yandex.ru/?uid={uid}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://mail.yandex.ru/",
		"Snapshot=t120.inf",
		"Mode=HTML",
		LAST);

	web_websocket_close("ID=0", 
		"Code=1001", 
		LAST);

	lr_end_transaction("5_logout",LR_AUTO);

	return 0;
}