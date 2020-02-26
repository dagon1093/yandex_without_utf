Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("mail.yandex.ru", 
		"URL=http://mail.yandex.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_submit_data("1", 
		"Action=https://mc.yandex.ru/watch/3/1?wmode=7&page-ref=https%3A%2F%2Fmail.yandex.ru%2F&charset=utf-8&ut=noindex&browser-info=ti%3A10%3Afu%3A2%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623208%3Au%3A", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_2", 
		"URL=https://mc.yandex.ru/watch/10102198/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Ans%3A1574623200784%3As%3A1680x1050x24%3Ask%3A1%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222008%3Aet%3A1574623208%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apa%3A1%3Als%3A849336652624%3Arqn%3A1%3Arn%3A928398986%3Ahid%3A910733154%3Ads%3A0%2C1116%2C982%2C1%2C3755%2C0%2C0%2C1469%2C0%2C7674%2C7674%2C0%2C7353%3Afp%3A7522%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623209%3Au%3A1574623209942202331", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t3.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%85%D0%BE%D1%81%D1%82%D1%80%D1%83%D1%82%20(%D0%93%D0%BE%D0%BC%D0%B5%D1%80)%22%3A%5B%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%D1%8B%22%2C%7B%22RU%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%D1%8B%22%7D%5D%7D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_submit_data("10102198", 
		"Action=https://mc.yandex.ru/watch/10102198?wmode=7&page-url=https%3A%2F%2Fmail.yandex.ru%2F&charset=utf-8&ut=noindex&browser-info="
		"ti%3A10%3Adp%3A1%3Ans%3A1574623200784%3As%3A1680x1050x24%3Ask%3A1%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1663x939%3Az%3A180%3Ai%3A20191124222008%3Aet%3A1574623209%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Acpf%3A1%3Apv%3A1%3Als%3A849336652624%3Arqn%3A2%3Arn%3A256332337%3Ahid%3A910733154%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623209%3Au%3A1574623209942202331%3At%3A%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0%20%E2%80%94%20%D0%B1%D0%B5%D1%"
		"81%D0%BF%D0%BB%D0%B0%D1%82%D0%BD%D0%B0%D1%8F%20%D0%B8%20%D0%BD%D0%B0%D0%B4%D0%B5%D0%B6%D0%BD%D0%B0%D1%8F%20%D1%8D%D0%BB%D0%B5%D0%BA%D1%82%D1%80%D0%BE%D0%BD%D0%BD%D0%B0%D1%8F%20%D0%BF%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	lr_start_transaction("1_login");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(4);

	web_custom_request("10102198_2", 
		"URL=https://mc.yandex.ru/watch/10102198?page-ref=https%3A%2F%2Fmail.yandex.ru%2F&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623200784%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1663x939%3Az%3A180%3Ai%3A20191124222022%3Aet%3A1574623223%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Aln%3A1%3Als%3A849336652624%3Arqn%3A3%3Arn%3A936973738%3Ahid%3A910733154%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623223%3Au%3A1574623209942202331%3App%3A3629563401%3At%3A%D0%92%D0%BE%D0%B9%D1%82%D0%B8", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t5.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("1_3", 
		"URL=https://mc.yandex.ru/watch/10102198/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623200784%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222022%3Aet%3A1574623223%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Aar%3A1%3Apa%3A1%3Als%3A849336652624%3Arqn%3A4%3Arn%3A961898828%3Ahid%3A910733154%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623223%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t6.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%85%D0%BE%D1%81%D1%82%D1%80%D1%83%D1%82%20(%D0%93%D0%BE%D0%BC%D0%B5%D1%80)%22%3A%7B%22RU%22%3A%7B%22%D0%9A%D0%BB%D0%B8%D0%BA%20%D0%BF%D0%BE%20%D0%92%D0%BE%D0%B9%D1%82%D0%B8%22%3A%7B%22%D0%A1%D0%B2%D0%B5%D1%80%D1%85%D1%83%22%3A%22%D0%9F%D0%BE%20%D1%86%D0%B5%D0%BD%D1%82%D1%80%D1%83%22%7D%7D%7D%7D", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("auth", 
		"URL=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_submit_data("784657", 
		"Action=https://mc.yandex.ru/watch/784657?wmode=7&page-ref=https%3A%2F%2Fmail.yandex.ru%2F&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&exp="
		"cYStrLRTWlFxWKHrtfUSW-tzhEwZ_ksyrcY99cRt0opPoUFdoC_KrIYWM6FW0S7ns_tcBcxAvFV8acjAiJcYqesCmwOlLUM3BdKt2c1hnFCf_9tHByJ_8hWKs43gXLmAwXVk0IfM_FqlENAN76DcfzsqTgESpXNUiVt0jxfQ3tKpKink5KPl8XIKcZaQfqFx540APaNTTIMI8JeVod0AHfaDPaU9r_cZHFSDSpT_6Qd6eYE4Q-m17A6_HFc05f65cQ5s3cs9i6qjF5iwlBKlujm6bTXiQqCg5_l3nIJTfyFSGvPXv8CX3ZaeqhzAv9HMzwWQe9o_34DBgvpFQee9Ty58qcFwIiOmKUZpfWvXdVs&browser-info="
		"ti%3A10%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1680x939%3Az%3A180%3Ai%3A20191124222023%3Aet%3A1574623224%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Acpf%3A1%3Apv%3A1%3Als%3A494481107191%3Arqn%3A1%3Arn%3A408069085%3Ahid%3A685284627%3Ads%3A11%2C93%2C127%2C2%2C3%2C0%2C0%2C236%2C178%2C%2C%2C%2C686%3Afp%3A827%3Awn%3A51095%3Ahl%3A2%3Agdpr%3A8%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623224%3Au%3A1574623209942202331%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B"
		"8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_4", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222023%3Aet%3A1574623224%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A494481107191%3Arqn%3A3%3Arn%3A585696569%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623224%3Au%3A1574623209942202331", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t9.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D0%B4%D0%BE%D0%BC%D0%B8%D0%BA%20V3%22%3A%22%D0%BF%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%81%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D1%8B%22%7D", 
		LAST);

	web_custom_request("1_5", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222023%3Aet%3A1574623224%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A494481107191%3Arqn%3A2%3Arn%3A575995947%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623224%3Au%3A1574623209942202331", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t10.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D0%B4%D0%BE%D0%BC%D0%B8%D0%BA%20V3%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D0%B2%D0%B2%D0%BE%D0%B4%D0%B0%20%D0%BB%D0%BE%D0%B3%D0%B8%D0%BD%D0%B0%22%7D", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("1_6", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&page-url=goal%3A%2F%2Fpassport.yandex.ru%2F2step_domik_show_login_form&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1680x939%3Az%3A180%3Ai%3A20191124222023%3Aet%3A1574623224%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Als%3A494481107191%3Arqn%3A4%3Arn%3A153808934%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623224%3Au%3A1574623209942202331%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t11.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_custom_request("click", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t12.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=8e5a150d8994e4299f728751c81ee8fb/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623222741,143.2112=18,143.2119=249,1701=3036,207=863.525/cts=1574623223628/*\r\n/reqid=8e5a150d8994e4299f728751c81ee8fb/dtype=stred/pid=1/cid=72202/path=690.1033/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars="
		"143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2129=1574623222741,1036=18,1037=11,1038=93,1383=62,1039=127,1040=2,1040.906=233,1310.2084=12,1310.2085=248,1310.1309=178,1310.1007=437,2299=2,2130=827,1041=578,1041.906=809,2116=122,2114=29,2131=864,2123=686,2770=497,2769=261,2113=29,2112=18,2111=3,2117=122,2120=251,2119=249,2115=60,1484=1,2437=2771,2870=4g/cts="
		"1574623223630/*\r\n/reqid=8e5a150d8994e4299f728751c81ee8fb/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623222741,143.2112=18,143.2119=249,1701=1926.2793,207=827.31/cts=1574623223630/*\r\n/reqid=8e5a150d8994e4299f728751c81ee8fb/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287="
		"213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623222741,143.2112=18,143.2119=249,1701=1926.2794,207=827.31/cts=1574623223630/*", 
		LAST);

	web_custom_request("click_2", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t13.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=8e5a150d8994e4299f728751c81ee8fb/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623222741,143.2112=18,143.2119=249,1701=2876,207=1039.97/cts=1574623223781/*\r\n/reqid=8e5a150d8994e4299f728751c81ee8fb/path=690.2096.2335.1822/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287"
		"=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,1822=mskm/cts=1574623223783/*\r\n/reqid=8e5a150d8994e4299f728751c81ee8fb/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,"
		"35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623222741,143.2112=18,143.2119=249,1701=1724,207=1104.21/cts=1574623223845/*\r\n/reqid=8e5a150d8994e4299f728751c81ee8fb/path=690.2096.2748/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;"
		"109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2748=yastatic.net!11!725836;ysa-static.passport.yandex.net!1!;mc.yandex.ru!2!;mc.admetrica.ru!1!;/cts=1574623223850/*\r\n/reqid=8e5a150d8994e4299f728751c81ee8fb/path="
		"690.2096.2892/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2116=122.31,2114=29.435,"
		"2886=32989,2124=1104.035,2131=864.455,2123=686.18,2770=497.21,2113=29.435,2112=17.99,2136=1113.05,2887=8424,2888=navigation,2111=3.425,2889=navigation,2126=1113.05,2125=1104.065,2890=http%2F1.1,1385=0,2110=0,2109=0,2117=122.4,2120=250.705,2119=249.48,2115=60.175,2322=0,2323=10995,76=navigate,2128=0,2127=0,2137=0,2437=2771,2870=4g/cts=1574623223885/*", 
		LAST);

	lr_end_transaction("1_login",LR_AUTO);

	web_custom_request("click_3", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t14.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=8e5a150d8994e4299f728751c81ee8fb/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623222741,143.2112=18,143.2119=249,1701=2795,207=1221,2796.2797=s-442-499.s-533-866.s-903-1029.s-1042-1101.u-1169-1220,689.2322=890.63/cts=1574623227637/*", 
		LAST);

	web_revert_auto_header("Origin");

	lr_think_time(11);

	web_custom_request("784657_2", 
		"URL=https://mc.yandex.ru/watch/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1680x939%3Az%3A180%3Ai%3A20191124222038%3Aet%3A1574623239%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Anb%3A1%3Acl%3A93%3Als%3A494481107191%3Arqn%3A5%3Arn%3A565930318%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C1104%2C1104%2C9%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623239%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t15.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

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

	web_submit_data("start", 
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/start", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=csrf_token", "Value=7e9822b478c4c4d7984cdf7f23e6f7bc715c5bee:1574623222627", ENDITEM, 
		"Name=login", "Value=alex.under1093@yandex.ru", ENDITEM, 
		"Name=process_uuid", "Value=ddbc63f2-01ae-40b3-b1a9-be329346af3b", ENDITEM, 
		"Name=retpath", "Value=https://mail.yandex.ru/", ENDITEM, 
		"Name=origin", "Value=hostroot_homer_auth_ru", ENDITEM, 
		"Name=service", "Value=mail", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_7", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222053%3Aet%3A1574623254%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A494481107191%3Arqn%3A6%3Arn%3A120772513%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623254%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t17.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D0%B4%D0%BE%D0%BC%D0%B8%D0%BA%20V3%22%3A%7B%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D0%B2%D0%B2%D0%BE%D0%B4%D0%B0%20%D0%BB%D0%BE%D0%B3%D0%B8%D0%BD%D0%B0%22%3A%7B%22%D0%9E%D1%82%D0%BF%D1%80%D0%B0%D0%B2%D0%BA%D0%B0%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%BB%D0%BE%D0%B3%D0%B8%D0%BD%D0%B0%22%3A%22%D0%A3%D1%81%D0%BF%D0%B5%D1%88%D0%BD%D1%8B%D0%B9%20%D0%B2%D0%B2%D0%BE%D0%B4%22%7D%7D%7D", 
		LAST);

	web_custom_request("1_8", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222053%3Aet%3A1574623254%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A494481107191%3Arqn%3A7%3Arn%3A472011675%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623254%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t18.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D0%B4%D0%BE%D0%BC%D0%B8%D0%BA%20V3%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%B2%D0%B2%D0%BE%D0%B4%20%D0%BF%D0%B0%D1%80%D0%BE%D0%BB%D1%8F%22%7D", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("1_9", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&page-url=goal%3A%2F%2Fpassport.yandex.ru%2F2step_domik_show_pass_form&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1663x939%3Az%3A180%3Ai%3A20191124222053%3Aet%3A1574623254%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Als%3A494481107191%3Arqn%3A8%3Arn%3A194386090%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623254%3Au%3A1574623209942202331%3App%3A3629563401%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1"
		"%8F", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t19.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("commit_password", 
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/commit_password", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=7e9822b478c4c4d7984cdf7f23e6f7bc715c5bee:1574623222627", ENDITEM, 
		"Name=track_id", "Value=87853001177fdc102f364e74527c59f222", ENDITEM, 
		"Name=password", "Value=Rp_9i7g7", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_10", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&page-url=goal%3A%2F%2Fpassport.yandex.ru%2Fone_domik_auth_sucess&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1680x939%3Az%3A180%3Ai%3A20191124222059%3Aet%3A1574623259%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Als%3A494481107191%3Arqn%3A9%3Arn%3A1035162992%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623259%3Au%3A1574623209942202331%3App%3A3629563401%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D"
		"1%8F", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t21.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("1_11", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623222741%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222059%3Aet%3A1574623259%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A494481107191%3Arqn%3A10%3Arn%3A539769232%3Ahid%3A685284627%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623259%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t22.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D0%B4%D0%BE%D0%BC%D0%B8%D0%BA%20V3%22%3A%7B%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%B2%D0%B2%D0%BE%D0%B4%20%D0%BF%D0%B0%D1%80%D0%BE%D0%BB%D1%8F%22%3A%7B%22%D0%9E%D1%82%D0%BF%D1%80%D0%B0%D0%B2%D0%BA%D0%B0%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%22%3A%22%D0%A3%D1%81%D0%BF%D0%B5%D1%88%D0%BD%D1%8B%D0%B9%20%D0%B2%D0%B2%D0%BE%D0%B4%22%7D%7D%7D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("accounts", 
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=7e9822b478c4c4d7984cdf7f23e6f7bc715c5bee:1574623222627", ENDITEM, 
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
		"Name=csrf_token", "Value=9cac35fe8d37e302e2850ece911110dfa0a6c271:1574623258839", ENDITEM, 
		"Name=uid", "Value=586221334", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("redirect", 
		"URL=https://passport.yandex.ru/redirect?url=https%3A%2F%2Fmail.yandex.ru%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://passport.yandex.ru/auth/list?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1&mode=edit", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("liza1", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=folders,labels,messages", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623260303,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\""
		"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0,\"models\":[{\"name\":\"folders\",\"params\":{}},{\"name\":\"labels\",\"params\":{}},{\"name\":\"messages\",\"params\":{\"current_folder\":true,\"with_pins\":\"yes\",\""
		"threaded\":\"yes\"}}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_revert_auto_header("Origin");

	web_custom_request("click_4", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t27.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/dtype=stred/pid=1/cid=72202/path=690.1033/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20"
		"(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2129=1574623259305,1036=41,1037=0,1038=0,1039=297,1040=51,1040.906=348,1310.2084=24,1310.2085=699,1310.1309=11,1310.1007=699,2299=4,3140=8,3141=4,2130=975,1041=637,1041.906=934,2116=41,2114=41,2131=1048,2123=1037,2770=1037,2769=362,2113=41,2112=41,2111=41,2117=43,2120=389,2119=338,1484=1,2437=2771,2870=4g/cts=1574623260366/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0"
		",38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=1926.2793,207=975.075/"
		"cts=1574623260366/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("monitoring_liza.txt", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?allTime=687&allSumTime=677&requestTime=8&selfTime=679&full=687&collectModels.0=70&requestModels.0=8&collectViews=11&generateHTML=130&html2node=34&triggerHideEvents=1&insertNodes=39&triggerEvents=392&blockname=messages&request=8&event=BlockTimings&visibilityState=visible&show=687&browser=Chrome&uid=586221334&cid=LIZA-88874651-1574623259044&login=alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%23inbox&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_2", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=system-status", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"system-status\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623262478,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0"
		",29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("liza1_3", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=collectors", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"collectors\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623262482,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29"
		";169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_custom_request("liza1_4", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=messages-pager", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"messages-pager\",\"params\":{\"current_folder\":\"1\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623262497,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476"
		",0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_custom_request("liza1_5", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=recipients", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"BodyBinary={\"models\":[{\"name\":\"recipients\",\"params\":{\"recipientsIds\":[\"\\\\\"\\xD0\\x90\\xD0\\xBB\\xD0\\xB5\\xD0\\xBA\\xD1\\x81\\xD0\\xB0\\xD0\\xBD\\xD0\\xB4\\xD1\\x80 \\xD0\\xAF\\xD0\\xBA\\xD0\\xBE\\xD0\\xB2\\xD0\\xBB\\xD0\\xB5\\xD0\\xB2\\\\\" <Alex.Under1093@yandex.ru>\"]}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623262540,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,"
		"0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,"
		"0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_submit_data("40081755", 
		"Action=https://mc.yandex.ru/watch/40081755?wmode=7&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Flist%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1%26mode%3Dedit&page-url=https%3A%2F%2Fmail.yandex.ru%2F%23inbox&charset=utf-8&ut=noindex&exp="
		"IAlSIbhiMgNnm91eHWk6kWat_QhikmqjCiHBgX7zniHTFp2ASBYVEG5JriMNuwTyLUOvyATeJrjrHwSTxUJsuSX0kwJZWU6RRL8dqWmOJi3VXV2dc2l0Yz_Wd676sa9tpfAJZl8SR9Lubx38rhx1EpusopEFY-uzj_V3gWEKewmDAmjHO29PhgEk0rYlMP-NbtekXaWppNCnqagGCo2M3RNBNIJqarJYX8M5zxYlEywAF1LDK7UnWoYO2cpP5bPkH_wwioCGuUudF8sAd1SkB5cIh88JWkwC1XjoNWsrRA2DAtO0aK_RmfYEKZSjPU6j&browser-info="
		"ti%3A10%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222102%3Aet%3A1574623263%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Acpf%3A1%3Apv%3A1%3Als%3A650157472659%3Arqn%3A1%3Arn%3A69879206%3Ahid%3A1010272455%3Ads%3A0%2C0%2C295%2C51%2C41%2C0%2C0%2C675%2C11%2C%2C%2C%2C1037%3Afp%3A2293%3Agdpr%3A13%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623263%3Au%3A1574623209942202331", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("click_5", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t34.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=1401,207.2154=3041.07,207.1428=3049.07,2877=8,2924=28.176.2048.2314.2389,2925=0,689.2322=3048.985/cts=1574623262354/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,"
		"52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046,207.2154=2370.18,207.1428=3049.18,2877=679,2924=28.176.2048.2314.2389,2925=0,689.2322=3048.985/cts=1574623262354/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071"
		",0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,"
		"1701=487,207.2154=2362.225,207.1428=3049.225,2877=687,2924=28.176.2048.2314.2389,2925=0,689.2322=3048.985/cts=1574623262354/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_6", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=message-body", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"message-body\",\"params\":{\"ids\":\"166914661189419110\",\"is_spam\":\"false\",\"raw\":\"false\",\"frequency\":\"0\",\"draft\":\"false\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623262490,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;"
		"100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_custom_request("liza1_7", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=message-body", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"message-body\",\"params\":{\"ids\":\"166633186212708451\",\"is_spam\":\"false\",\"raw\":\"false\",\"frequency\":\"0\",\"draft\":\"false\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623262493,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;"
		"100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_8", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=message-body", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"message-body\",\"params\":{\"ids\":\"166914661189419111\",\"is_spam\":\"false\",\"raw\":\"false\",\"frequency\":\"0\",\"draft\":\"false\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623262486,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;"
		"100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("click_6", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t38.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=1724,207=3751.4/cts=1574623263056/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2748/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,"
		"-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2748=yastatic.net!61!1177335;an.yandex.ru!1!16668;mail.yandex.ru!3!18781;static-mon.yandex.net!1!;yandex.ru!1!;mc.yandex.ru!1!;avatars.mds.yandex.net!1!11660;upics.yandex.net!1!17370;/cts=1574623263058/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2892/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;"
		"140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2116=40.795,2114=40.795,2886=399989,2124=3750.98,2131=1047.945,2123=1037.165,2770=1037.065,"
		"2113=40.795,2112=40.795,2136=3753.07,2887=145839,2888=navigation,2111=40.795,2889=navigation,2126=3753.07,2125=3751.33,2890=http%2F1.1,1385=0,2110=0,2109=0,2117=43.425,2120=389.545,2119=338.285,2115=40.795,2322=0,2323=149996,76=navigate,2128=0,2127=0,2137=0,2437=2771,2870=4g/cts=1574623263137/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_9", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=filters", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"filters\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623263196,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;"
		"169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_custom_request("liza1_10", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=userphones", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"userphones\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623263198,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29"
		";169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_11", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-mail-reset-recent-counter", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-mail-reset-recent-counter\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623263202,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;"
		"62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("monitoring_liza.txt_2", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?event=LoadingTime&theme=colorful&regDate=1515564695000&regionId=213&prepare=1.2050&static-load=1.1480&static-run=1.2030&handlers=0.5900&parse-prefetch=0.0470&pageinit=0.0740&first-draw=1.5560&trigger-init=0.0610&log-timings=1574623263.2420&timeout=3.5750&tm.navigationStart=1574623259305&tm.unloadEventStart=0&tm.unloadEventEnd=0&tm.redirectStart=0&tm.redirectEnd=0&tm.fetchStart=1574623259346&tm.domainLookupStart=1574623259346&tm.domainLookupEnd="
		"1574623259346&tm.connectStart=1574623259346&tm.connectEnd=1574623259346&tm.secureConnectionStart=0&tm.requestStart=1574623259348&tm.responseStart=1574623259643&tm.responseEnd=1574623259694&tm.domLoading=1574623259667&tm.domInteractive=1574623260342&tm.domContentLoadedEventStart=1574623260342&tm.domContentLoadedEventEnd=1574623260353&tm.domComplete=1574623263056&tm.loadEventStart=1574623263056&tm.loadEventEnd=1574623263058&nav.type=0&nav.redirectCount=0&uid=586221334&cid=LIZA-88874651-1574623259044"
		"&login=alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=2&"
		"afterload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_7", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t43.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2876,207=3877.4/cts=1574623263182/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_12", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=user-dropdown-data", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"user-dropdown-data\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623263454,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;"
		"189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
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

	web_custom_request("liza1_14", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages="
		"%5B%7B%22mids%22%3A%5B%22170855310863368338%22%2C%22170855310863368334%22%2C%22170855310863368328%22%2C%22170855310863368314%22%2C%22170855310863368313%22%2C%22167759086119551088%22%2C%22167759086119551084%22%2C%22167759086119551083%22%2C%22166914661189419114%22%2C%22166914661189419113%22%2C%22166914661189419112%22%2C%22166914661189419111%22%2C%22166914661189419110%22%2C%22166914661189419108%22%2C%22166633186212708451%22%2C%22166633186212708450%22%2C%22166633186212708449%22%2C%22166633186212708448"
		"%22%2C%22166351711235997747%22%2C%22166351711235997733%22%2C%22166351711235997720%22%2C%22166351711235997717%22%2C%22166070236259287051%22%2C%22164944336352444425%22%2C%22164944336352444424%22%2C%22164662861375733767%22%2C%22164662861375733766%22%2C%22164662861375733765%22%2C%22164662861375733764%22%2C%22164381386399023106%22%5D%2C%22fid%22%3A%221%22%2C%22reason%22%3A%22mail-list-render%22%7D%5D&model=do-client-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&"
		"_timestamp=1574623263724&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	web_custom_request("liza1_15", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-journal-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages=%5B%7B%22target%22%3A%22folder%22%2C%22fid%22%3A%221%22%2C%22fidName%22%3A%22%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%22%2C%22isUserFolder%22%3Afalse%2C%22operation%22%3A%22open%22%7D%5D&model=do-journal-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623263727&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	web_custom_request("liza1_16", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=unsubscribe-furita-newsletters", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"unsubscribe-furita-newsletters\",\"params\":{\"master\":\"1\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623263689,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,"
		"57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_custom_request("liza1_17", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-settings,settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-settings\",\"params\":{\"params\":\"{\\\"browser_notify_requested\\\":true}\"}},{\"name\":\"settings\",\"params\":{\"list\":\"browser_notify_requested\",\"actual\":\"true\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623263629,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;"
		"160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\""
		"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_12", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222103%3Aet%3A1574623264%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A650157472659%3Arqn%3A2%3Arn%3A603491519%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C3751%2C3751%2C2%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623264%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t50.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%5B%7B%22Attachments%22%3A%7B%22attachments%20show%22%3A%7B%22in%20messages%20list%22%3A%5B%22%2B%22%2C%22%2B%22%2C%22%2B%22%5D%7D%7D%7D%2C%7B%22theme%22%3A%7B%22u2709%22%3A%7B%22%D0%BE%D0%B4%D0%BD%D0%B0%20%D1%81%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%22%3A%22colorful%22%7D%7D%7D%2C%7B%22Login%20header.Right%20part%22%3A%7B%22Promo%20Ya.Plus2%22%3A%7B%22Button%20Ya.Plus(off)"
		"%22%3A%22Show%22%7D%7D%7D%2C%7B%22Left%20column%22%3A%7B%222pane%22%3A%7B%22System%20labels%22%3A%7B%22With%20attachments%22%3A%22Show%22%7D%7D%7D%7D%2C%7B%22Left%20column%22%3A%7B%222pane%22%3A%7B%22System%20labels%22%3A%7B%22Unread%22%3A%22Show%22%7D%7D%7D%7D%2C%7B%22Left%20column%22%3A%7B%222pane%22%3A%7B%22System%20labels%22%3A%7B%22Important%22%3A%22Show%22%7D%7D%7D%7D%2C%7B%22Login%20header.Left%20part%22%3A%7B%22Portal%20navigation%2FServices%22%3A%7B%22yandex.ru%22%3A%5B%7B%22Contacts%22%3"
		"A%22Show%22%7D%2C%7B%22Calendar%22%3A%22Show%22%7D%2C%7B%22Disk%22%3A%22Show%22%7D%2C%7B%22Money%22%3A%22Show%22%7D%5D%7D%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22189745%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22139071%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22142275%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22136883%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22135611%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22140619%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22160546%22%7D%7D%2C%"
		"7B%22stat%22%3A%7B%22eexp%22%3A%22160678%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22185126%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22100970%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22158581%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%2294810%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22189178%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22137858%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22165347%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%2262697%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%2"
		"2%3A%22189014%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22169671%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22182410%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22182406%22%7D%7D%2C%7B%22stat%22%3A%7B%22puid%22%3A%22586221334%22%7D%7D%2C%7B%22lang%22%3A%22ru%22%7D%2C%7B%22tabs%22%3A%22no%22%7D%2C%7B%22Left%20column%22%3A%7B%22Collectors%20promo%22%3A%7B%22Promo%20button%20%5C%22Add%20your%20mailbox%5C%22%22%3A%22Show%22%7D%7D%7D%5D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_18", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-settings,settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-settings\",\"params\":{\"params\":\"{\\\"promo-manager\\\":{\\\"last-time-show-promo\\\":1574623263515,\\\"last-promo-was-name\\\":\\\"yabrowser-promoline\\\"}}\"}},{\"name\":\"settings\",\"params\":{\"list\":\"promo-manager\",\"actual\":\"true\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623263892,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;"
		"139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;"
		"182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("liza1_19", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages=%5B%7B%22action%22%3A%22requested%22%2C%22saved%22%3Atrue%2C%22browser_notify_requested%22%3Atrue%2C%22flow%22%3A%22ipush%22%2C%22reason%22%3A%22workflow%22%7D%5D&model=do-client-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623264725&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_8", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t53.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2923,207=8240.96,2923=0/cts=1574623267542/*", 
		LAST);

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("1_13", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222107%3Aet%3A1574623268%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A650157472659%3Arqn%3A3%3Arn%3A602316926%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623268%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t54.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22__ym%22%3A%7B%22adSessionID%22%3A%225369951574623267653%22%7D%7D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_submit_data("92550", 
		"Action=https://mc.yandex.ru/watch/92550?wmode=7&cnt-class=1&nohit=1&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Flist%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1%26mode%3Dedit&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&charset=utf-8&ut=noindex&browser-info="
		"ti%3A10%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A2%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222102%3Aet%3A1574623268%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Acpf%3A1%3Aad%3A1%3Apv%3A1%3Als%3A540591228937%3Arn%3A592826889%3Ahid%3A1010272455%3Agdpr%3A13%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623268%3Au%3A1574623209942202331%3App%3A3629563401%3At%3A3%20%C2%B7%20%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0"
		"%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_14", 
		"URL=https://mc.yandex.ru/watch/92550/1?cnt-class=1&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A2%3Az%3A180%3Ai%3A20191124222108%3Aet%3A1574623268%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Aar%3A1%3Apa%3A1%3Als%3A540591228937%3Arqn%3A1%3Arn%3A17843490%3Ahid%3A1010272455%3Ads%3A0%2C0%2C295%2C51%2C41%2C0%2C0%2C675%2C11%2C3751%2C3751%2C2%2C1037%3Afp%3A2293%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623268%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t56.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22__ym%22%3A%7B%22adSessionID%22%3A%225369951574623267653%22%7D%7D", 
		LAST);

	web_custom_request("92550_2", 
		"URL=https://mc.yandex.ru/watch/92550?cnt-class=1&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Flist%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1%26mode%3Dedit&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A2%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222108%3Aet%3A1574623268%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Aar%3A1%3Apv%3A1%3Als%3A540591228937%3Arqn%3A2%3Arn%3A689741932%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623268%3Au%3A1574623209942202331%3App%3A3629563401%3At%3A3%20%C2%B7%20%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B"
		"5%20%E2%80%94%20%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t57.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"nested-navigate");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("render.html", 
		"URL=https://yastatic.net/safeframe-bundles/0.69/1-1-0/render.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_9", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t59.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046.3431.2154,207=8659.28,2924=3431.1202,2925=0,689.2322=0.001/cts=1574623268360/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,"
		"287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046.3431.1428,207=9055,2924=3431.1202,2925=0,689.2322=0.001/cts=1574623268360/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,"
		"44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046.3431,207.2154=8664.04,207.1428=9059.76,2877=395.72,2924=3431.1202,"
		"2925=0,689.2322=0.001/cts=1574623268360/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)"
		"%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046.3431.791.3178,207.2154=3882.33,207.1428=9059.93,2877=5177.6,2924=3431.1202,2925=0,689.2322=0.001/cts=1574623268361/*", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("click_10", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t60.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046.3431.2154,207=8663.12,2924=3431.77,2925=0,689.2322=0.001/cts=1574623268600/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,"
		"287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046.3431.1428,207=9294,2924=3431.77,2925=0,689.2322=0.001/cts=1574623268600/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44"
		";185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046.3431,207.2154=8668.085,207.1428=9298.965,2877=630.88,2924=3431.77,"
		"2925=0,689.2322=0.001/cts=1574623268600/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)"
		"%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046.3431.791.3178,207.2154=3882.43,207.1428=9299.03,2877=5416.6,2924=3431.77,2925=0,689.2322=0.001/cts=1574623268600/*", 
		LAST);

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("1_15", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222112%3Aet%3A1574623272%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A650157472659%3Arqn%3A4%3Arn%3A673630933%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623272%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t61.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%5B%7B%22%D0%9F%D1%80%D0%BE%D0%BC%D0%BE-%D0%BF%D0%BE%D0%BB%D0%BE%D1%81%D0%BA%D0%B0%20%D0%91%D0%9A%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%22%7D%5D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_20", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages="
		"%5B%7B%22action%22%3A%22show%22%2C%22block%22%3A%22left-col-rtb-1%22%2C%22id%22%3A%22R-I-92550-750%22%2C%22statId%22%3A65%2C%22type%22%3A%22common%22%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%2C%7B%22action%22%3A%22show%22%2C%22block%22%3A%22messages-direct%22%2C%22id%22%3A%22R-I-92550-748%22%2C%22statId%22%3A72%2C%22type%22%3A%22new%22%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%2C%7B%22action%22%3A%22first-render%22%2C%22block%22%3A%22left-col-rtb-1%22%2C%22id%2"
		"2%3A%22R-I-92550-750%22%2C%22statId%22%3A65%2C%22lifetime%22%3A9055%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%2C%7B%22action%22%3A%22first-render%22%2C%22block%22%3A%22messages-direct%22%2C%22id%22%3A%22R-I-92550-748%22%2C%22statId%22%3A72%2C%22lifetime%22%3A9294%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%5D&model=do-client-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623272505&_product=RUS&_connection_id="
		"LIZA-88874651-1574623259044&_exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
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

	web_revert_auto_header("Origin");

	web_url("browser2", 
		"URL=https://yandex.ru/paranja/browser2?from=rsya&format=json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://yastatic.net/safeframe-bundles/0.69/1-1-0/render.html", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("click_11", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t65.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.207/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2795,207=13192,2796.2797=s-963-1050.s-1640-1723.s-1822-2057.s-2076-2134.s-2136-2246.s-2350-2435.s-2440-3061.u-3062-3129.s-3171-3233.s-3245-3591.u-3639-3733.s-3750-3825.s-3876-3938.u-3945-4063.s-4164-4217.u-4236-4299.u-4939-4990.s-8326-8472.u-8586-8642.s-8874-9085.s-9144-9194.s-9227-9304.s-9326-9454.s-9485-9859.s-9916-13191,689.2322=1061.64/cts=1574623275507/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://yastatic.net");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_submit_data("1_16", 
		"Action=https://mc.yandex.ru/watch/3/1?wmode=7&page-ref=https%3A%2F%2Fyastatic.net%2Fsafeframe-bundles%2F0.69%2F1-1-0%2Frender.html&charset=utf-8&browser-info=ti%3A10%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623277%3Au%3A", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://yastatic.net/safeframe-bundles/0.69/1-1-0/render.html", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_submit_data("1_17", 
		"Action=https://mc.yandex.ru/watch/3/1?wmode=7&page-ref=https%3A%2F%2Fyastatic.net%2Fsafeframe-bundles%2F0.69%2F1-1-0%2Frender.html&charset=utf-8&browser-info=ti%3A10%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623277%3Au%3A", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://yastatic.net/safeframe-bundles/0.69/1-1-0/render.html", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_submit_data("37412095", 
		"Action=https://mc.yandex.ru/watch/37412095?wmode=7&page-ref=https%3A%2F%2Fmail.yandex.ru%2F&page-url=https%3A%2F%2Fyastatic.net%2Fsafeframe-bundles%2F0.69%2F1-1-0%2Frender.html&charset=utf-8&site-info="
		"%7B%22extensions%22%3A%22%22%2C%22fromGoogle%22%3A%22false%22%2C%22fromCancel%22%3A%22false%22%2C%22loyal%22%3A%220%22%2C%22sbscrb%22%3A%22%22%2C%22p%22%3A%22%22%2C%22b%22%3A%22%22%2C%22fresh%22%3A%220%22%2C%22infected%22%3A%22%22%2C%22slow%22%3A%22%22%2C%22os%22%3A%22windows%22%2C%22browser%22%3A%22chrome%22%2C%22winxp%22%3A%22false%22%2C%22old%22%3A%22%22%2C%22yabroAge%22%3A487%2C%22__ym%22%3A%7B%22parentIframe%22%3A%7B%22counterId%22%3A%2240081755%22%2C%22hid%22%3A1010272455%7D%7D%7D&"
		"browser-info=ti%3A10%3Ans%3A1574623268526%3As%3A1680x1050x24%3Ask%3A1%3Aifr%3A1%3Asti%3A0%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1x1%3Az%3A180%3Ai%3A20191124222115%3Aet%3A1574623277%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Acpf%3A1%3Apv%3A1%3Als%3A566486317300%3Arqn%3A1%3Arn%3A375002982%3Ahid%3A726618926%3Ads%3A0%2C0%2C44%2C9%2C2%2C0%2C0%2C484%2C0%2C%2C%2C%2C554%3Agdpr%3A8%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623277%3Au%3A1574623277373563414", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://yastatic.net/safeframe-bundles/0.69/1-1-0/render.html", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_submit_data("45507111", 
		"Action=https://mc.yandex.ru/watch/45507111?wmode=7&page-ref=https%3A%2F%2Fmail.yandex.ru%2F&page-url=https%3A%2F%2Fyastatic.net%2Fsafeframe-bundles%2F0.69%2F1-1-0%2Frender.html&charset=utf-8&site-info=%7B%22from%22%3A%22rsya%22%2C%22product%22%3A%22browser2%22%2C%22variation%22%3A1%7D&browser-info="
		"ti%3A10%3Ans%3A1574623268401%3As%3A1680x1050x24%3Ask%3A1%3Aifr%3A1%3Asti%3A0%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A0x0%3Az%3A180%3Ai%3A20191124222116%3Aet%3A1574623277%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Acpf%3A1%3Apv%3A1%3Als%3A799699918425%3Arqn%3A1%3Arn%3A464813598%3Ahid%3A49528133%3Ads%3A0%2C0%2C47%2C34%2C5%2C0%2C0%2C5630%2C0%2C5791%2C5791%2C2%2C5791%3Agdpr%3A8%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623277%3Au%3A1574623277373563414", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://yastatic.net/safeframe-bundles/0.69/1-1-0/render.html", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("2_login",LR_AUTO);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"nested-navigate");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(9);

	web_url("001001.htm", 
		"URL=https://awaps.yandex.ru/0/9947/001001.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://yastatic.net");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("45507111_2", 
		"URL=https://mc.yandex.ru/watch/45507111?page-url=https%3A%2F%2Fyastatic.net%2Fsafeframe-bundles%2F0.69%2F1-1-0%2Frender.html&charset=utf-8&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623268401%3As%3A1680x1050x24%3Ask%3A1%3Aifr%3A1%3Asti%3A0%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A0x0%3Az%3A180%3Ai%3A20191124222131%3Aet%3A1574623292%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Aar%3A1%3Anb%3A1%3Acl%3A285%3Als%3A799699918425%3Arqn%3A2%3Arn%3A846675712%3Ahid%3A49528133%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623292%3Au%3A1574623277373563414%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yastatic.net/safeframe-bundles/0.69/1-1-0/render.html", 
		"Snapshot=t71.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_start_transaction("3_message");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("40081755_2", 
		"URL=https://mc.yandex.ru/watch/40081755?page-ref=https%3A%2F%2Fmail.yandex.ru%2F%23inbox&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222134%3Aet%3A1574623294%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Apv%3A1%3Als%3A650157472659%3Arqn%3A5%3Arn%3A340567392%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623294%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t72.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_21", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages=%5B%7B%22scenario%22%3A%7B%22id%22%3A%22LIZA-88874651-1574623259044_32%22%2C%22type%22%3A%22compose-scenario%22%2C%22startTime%22%3A1574623293676%7D%2C%22params%22%3A%7B%22sessionLifetime%22%3A34746%2C%22step%22%3A%22start%22%2C%22initiator%22%3A%22button-from-left-column%22%7D%2C%22reason%22%3A%22scenario%22%7D%5D&model=do-client-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623294590&_product=RUS&_connection_id="
		"LIZA-88874651-1574623259044&_exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("monitoring_liza.txt_3", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?allTime=1097&allSumTime=6704.5.10%20DEV&requestTime=685&selfTime=412&full=1097&collectModels.0=12&requestModels.0=685&collectModels.1=17&requestModels.1=0&collectViews=3&generateHTML=20&html2node=14&triggerHideEvents=3&insertNodes=45&triggerEvents=294&showEditor=262&versionEditor=4.5.10%20DEV&blockname=compose-message-editor&request=685&event=BlockTimings&visibilityState=visible&show=1097&browser=Chrome&uid=586221334&cid=LIZA-88874651-1574623259044&"
		"login=alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=34&"
		"afterload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_12", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t75.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=1401,207.2154=35228.03,207.1428=35913.03,2877=685,2924=28.176.2048.2314.1206.1304,2925=0,689.2322=35913.005/cts=1574623295214/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;"
		"182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046,207.2154=35501.1,207.1428=35913.1,2877=412,2924=28.176.2048.2314.1206.1304,2925=0,689.2322=35913.005/cts=1574623295214/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots="
		"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112"
		"=41,143.2119=338,1701=487,207.2154=34816.135,207.1428=35913.135,2877=1097,2924=28.176.2048.2314.1206.1304,2925=0,689.2322=35913.005/cts=1574623295214/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("monitoring_liza.txt_4", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?errorType=done_promo_manager.invalid_custom_config&eexp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&uid=586221334&cid="
		"LIZA-88874651-1574623259044&login=alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=34&afterload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_revert_auto_header("Origin");

	web_custom_request("1_18", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222135%3Aet%3A1574623295%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A650157472659%3Arqn%3A6%3Arn%3A72980124%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623295%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t77.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info="
		"%5B%7B%22Toolbar%22%3A%7B%22Toolbar%3A%20messages%20list%22%3A%7B%222pane%22%3A%7B%22System%20folder%22%3A%7B%22compose%22%3A%22click%22%7D%7D%7D%7D%7D%2C%7B%22%D0%9F%D1%80%D0%BE%D0%BC%D0%BE-%D0%BF%D0%BE%D0%BB%D0%BE%D1%81%D0%BA%D0%B0%20%D0%91%D0%9A%22%3A%22%D0%90%D0%B2%D1%82%D0%BE%D1%81%D0%BA%D1%80%D1%8B%D1%82%D0%B8%D0%B5%20%D0%BF%D1%80%D0%BE%D0%BC%D0%BE%22%7D%2C%7B%22%D0%A4%D1%83%D1%82%D0%B5%D1%80%20%D0%B2%202-%D0%BF%D0%B5%D0%B9%D0%BD%22%3A%22%D0%BF%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%84%D1%83%D1%82%D0"
		"%B5%D1%80%D0%B0%22%7D%5D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_22", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages="
		"%5B%7B%22scenario%22%3A%7B%22id%22%3A%22LIZA-88874651-1574623259044_32%22%2C%22type%22%3A%22compose-scenario%22%2C%22startTime%22%3A1574623293676%7D%2C%22params%22%3A%7B%22sessionLifetime%22%3A35660%2C%22step%22%3A%22compose-have-opened%22%2C%22duration%22%3A915%7D%2C%22reason%22%3A%22scenario%22%7D%2C%7B%22action%22%3A%22show%22%2C%22block%22%3A%22left-col-rtb-1%22%2C%22id%22%3A%22R-I-92550-754%22%2C%22statId%22%3A195%2C%22type%22%3A%22common%22%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workfl"
		"ow%22%7D%5D&model=do-client-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623295614&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	lr_end_transaction("3_message",LR_AUTO);

	lr_start_transaction("4_send_message");

	web_revert_auto_header("X-Requested-With");

	lr_think_time(11);

	web_url("liza1_23", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_model.0=abook-suggest&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623309676&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0&climit.0=5&glimit.0=5&useAbook.0=on&popular.0=true&q.0=&_=1574623260295", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_24", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=recipients", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"BodyBinary={\"models\":[{\"name\":\"recipients\",\"params\":{\"recipientsIds\":[\"<alex.under1093@yandex.ru>\",\"<dagon1093@gmail.com>\",\"\\\\\"\\xD0\\x9B\\xD0\\xB8\\xD0\\xB4\\xD0\\xB8\\xD1\\x8F \\xD0\\x9A\\xD0\\xBE\\xD1\\x88\\xD0\\xB5\\xD0\\xBD\\xD0\\xBA\\xD0\\xBE\\\\\" <gaz-rf@mail.ru>\",\"<zakaz@gazoanalizators.ru>\"]}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623309890,\"_product\":\"RUS\",\"_connection_id\":\""
		"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347"
		",0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_custom_request("liza1_25", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=abook-suggest-report", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"abook-suggest-report\",\"params\":{\"q\":\"\",\"section\":\"email\",\"title\":\"alex.under1093@yandex.ru\",\"id\":\"13\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623311510,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,"
		"24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("1_19", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222152%3Aet%3A1574623313%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A650157472659%3Arqn%3A7%3Arn%3A752691983%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623313%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t82.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%5B%7B%22popular_suggest%22%3A%22%D0%9A%D0%BB%D0%B8%D0%BA%D0%B8%20%D0%B2%20%D1%81%D0%B0%D0%B4%D0%B6%D0%B5%D1%81%D1%82%20%D0%BF%D0%BE%D0%BF%D1%83%D0%BB%D1%8F%D1%80%D0%BD%D1%8B%D1%85%20%D0%BA%D0%BE%D0%BD%D1%82%D0%B0%D0%BA%D1%82%D0%BE%D0%B2%22%7D%5D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_26", 
		"URL=https://mail.yandex.ru/web-api/do-send/liza1?_save=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=att_ids=&bcc=&captcha_entered=&captcha_key=&cc=&charset=&confirm_limit=&current_folder=&doit=&fid=&from_mailbox=Alex.Under1093%40yandex.ru&from_name=%D0%90%D0%BB%D0%B5%D0%BA%D1%81%D0%B0%D0%BD%D0%B4%D1%80+%D0%AF%D0%BA%D0%BE%D0%B2%D0%BB%D0%B5%D0%B2&get_abook=&html=&idcs=&ign_overwrite=&initial_cc=&initial_to=&inreplyto=&mark_as=&disk_att=&nosave=&nosend=yes&notify_on_send=&overwrite=&parts=&phone=&references=&remind_period=&retpath=&returl=&saveDraft=&save_symbol=draft&send="
		"%3Cdiv%3E%3Cbr%2F%3E%3C%2Fdiv%3E%3Cdiv%3E%3Cbr%2F%3E%3C%2Fdiv%3E%3Cdiv%3E%26nbsp%3B%3C%2Fdiv%3E%3Cdiv%3E-------------------------------%3C%2Fdiv%3E%3Cdiv%3E%D0%A1+%D1%83%D0%B2%D0%B0%D0%B6%D0%B5%D0%BD%D0%B8%D0%B5%D0%BC%2C%3C%2Fdiv%3E%3Cdiv%3E%D0%90%D0%BB%D0%B5%D0%BA%D1%81%D0%B0%D0%BD%D0%B4%D1%80%3C%2Fdiv%3E%3Cdiv%3E%3Cbr%2F%3E%3C%2Fdiv%3E&send_time=&store_fid=&store_name=&strict_charset=&style=&subj=teeeeeeeeeeeeeee&to=%3Calex.under1093%40yandex.ru%3E&ttype=html&where=&_ckey="
		"LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623314972&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("40081755_3", 
		"URL=https://mc.yandex.ru/watch/40081755?page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose%2F170855310863368339&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222155%3Aet%3A1574623315%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Apv%3A1%3Als%3A650157472659%3Arqn%3A8%3Arn%3A448352304%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623315%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t84.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_27", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=folders,labels", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"folders\",\"params\":{}},{\"name\":\"labels\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623315264,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;"
		"155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive1*/

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"qLexxQefJqM1:tLe4B95iQqM1.sLeAQZm474Y1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("monitoring_liza.txt_5", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?ts=1574623315923&msg=%7B%22version%22%3A%221%22%2C%22uid%22%3A%22586221334%22%2C%22service%22%3A%22mail%22%2C%22operation%22%3A%22insert%22%2C%22lcn%22%3A%22804%22%2C%22session_key%22%3A%22%22%2C%22server_notify_id%22%3A%22qLexxQefJqM1%3AtLe4B95iQqM1.sLeAQZm474Y1%3Au2709%3Amail%22%2C%22bright%22%3Atrue%2C%22tags%22%3A%5B%5D%2C%22position%22%3A422%7D&type=xivaMsg&uid=586221334&cid=LIZA-88874651-1574623259044&login=alex-under1093&loc="
		"https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose%2F170855310863368339&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=54&"
		"afterload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_28", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=messages", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"messages\",\"params\":{\"thread_id\":\"t170855310863368339\",\"sort_type\":\"date\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623316129,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;"
		"165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0,\"_features\":{\"web_search_extra_params\":{\""
		"updated-contact-ranking\":\"true\",\"self-emails-zero-ranking\":\"true\"}}}", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive2*/

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

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
		"Body=att_ids=&bcc=&captcha_entered=&captcha_key=&cc=&charset=&confirm_limit=&current_folder=6&doit=&fid=&from_mailbox=Alex.Under1093%40yandex.ru&from_name=%D0%90%D0%BB%D0%B5%D0%BA%D1%81%D0%B0%D0%BD%D0%B4%D1%80+%D0%AF%D0%BA%D0%BE%D0%B2%D0%BB%D0%B5%D0%B2&get_abook=&html=&idcs=&ign_overwrite=no&initial_cc=&initial_to=&inreplyto=&mark_as=&disk_att=&nosave=&nosend=&notify_on_send=&overwrite=170855310863368339&parts=&phone=&references=&remind_period=&retpath=&returl=&saveDraft=&save_symbol=draft&send="
		"%3Cdiv%3Eyoooooooooooooooooooooooooooooooo%3C%2Fdiv%3E%3Cdiv%3E%26nbsp%3B%3C%2Fdiv%3E%3Cdiv%3E%26nbsp%3B%3C%2Fdiv%3E%3Cdiv%3E-------------------------------%3C%2Fdiv%3E%3Cdiv%3E%D0%A1+%D1%83%D0%B2%D0%B0%D0%B6%D0%B5%D0%BD%D0%B8%D0%B5%D0%BC%2C%3C%2Fdiv%3E%3Cdiv%3E%D0%90%D0%BB%D0%B5%D0%BA%D1%81%D0%B0%D0%BD%D0%B4%D1%80%3C%2Fdiv%3E%3Cdiv%3E%26nbsp%3B%3C%2Fdiv%3E&send_time=&store_fid=&store_name=&strict_charset=&style=&subj=teeeeeeeeeeeeeeest&to=%3Calex.under1093%40yandex.ru%3E&ttype=html&where=&_ckey="
		"LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623325272&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_20", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose%2F170855310863368339&page-url=goal%3A%2F%2Fmail.yandex.ru%2FSEND&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222205%3Aet%3A1574623326%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Als%3A650157472659%3Arqn%3A9%3Arn%3A910557320%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623326%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t89.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_30", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=folders,labels", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"folders\",\"params\":{}},{\"name\":\"labels\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623325732,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;"
		"155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_custom_request("liza1_31", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages="
		"%5B%7B%22scenario%22%3A%7B%22id%22%3A%22LIZA-88874651-1574623259044_32%22%2C%22type%22%3A%22compose-scenario%22%2C%22startTime%22%3A1574623293676%2C%22finishTime%22%3A1574623325347%7D%2C%22params%22%3A%7B%22sessionLifetime%22%3A65916%2C%22step%22%3A%22sending-has-been-triggered%22%2C%22autocomplete%22%3Afalse%7D%2C%22reason%22%3A%22scenario%22%7D%2C%7B%22scenario%22%3A%7B%22id%22%3A%22LIZA-88874651-1574623259044_32%22%2C%22type%22%3A%22compose-scenario%22%2C%22startTime%22%3A1574623293676%2C%22fin"
		"ishTime%22%3A1574623325347%7D%2C%22params%22%3A%7B%22sessionLifetime%22%3A66432%2C%22step%22%3A%22finish%22%2C%22finalizer%22%3A%22successful-sending%22%2C%22hasAttachments%22%3Afalse%2C%22fileAttachmentsCount%22%3A0%2C%22fileAttachmentsSize%22%3A0%2C%22diskAttachmentsCount%22%3A0%2C%22diskAttachmentsSize%22%3A0%2C%22forwardedMailsAttachmentsCount%22%3A0%2C%22relatedMailIds%22%3A%5B%5D%2C%22bodyLength%22%3A90%7D%2C%22reason%22%3A%22scenario%22%7D%5D&model=do-client-log&_ckey="
		"LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623326020&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive3*/

	/*Connection ID 0 received buffer WebSocketReceive4*/

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"0Me2pRefHSw1:5Me0IJlgJOs1.5Me8kv8wtGk1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("40081755_4", 
		"URL=https://mc.yandex.ru/watch/40081755?page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23compose%2F170855310863368339&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222206%3Aet%3A1574623326%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Apv%3A1%3Als%3A650157472659%3Arqn%3A10%3Arn%3A169684271%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623326%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t92.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"3MedASefJiE1:5MeZM5Jgv0U1.5Me8kv8wtGk1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("monitoring_liza.txt_6", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?ts=1574623326093&msg=%7B%22version%22%3A%221%22%2C%22uid%22%3A%22586221334%22%2C%22service%22%3A%22mail%22%2C%22operation%22%3A%22unsupported%22%2C%22lcn%22%3A%22805%22%2C%22session_key%22%3A%22LIZA-88874651-1574623259044%22%2C%22server_notify_id%22%3A%220Me2pRefHSw1%3A5Me0IJlgJOs1.5Me8kv8wtGk1%3Au2709%3Amail%22%2C%22bright%22%3Atrue%2C%22tags%22%3A%5B%5D%2C%22position%22%3A423%7D&type=xivaMsg&uid=586221334&cid=LIZA-88874651-1574623259044&login="
		"alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=64&afterload"
		"=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_32", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=user-apps-activity,push-subscriptions", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"user-apps-activity\",\"params\":{}},{\"name\":\"push-subscriptions\",\"params\":{\"clients\":\"bar,yabrowser\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623326055,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,"
		"40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive5*/

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("monitoring_liza.txt_7", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?ts=1574623326097&msg=%7B%22version%22%3A%221%22%2C%22uid%22%3A%22586221334%22%2C%22service%22%3A%22mail%22%2C%22operation%22%3A%22unsupported%22%2C%22lcn%22%3A%22805%22%2C%22session_key%22%3A%22LIZA-88874651-1574623259044%22%2C%22server_notify_id%22%3A%223MedASefJiE1%3A5MeZM5Jgv0U1.5Me8kv8wtGk1%3Au2709%3Amail%22%2C%22bright%22%3Atrue%2C%22tags%22%3A%5B%5D%2C%22position%22%3A424%7D&type=xivaMsg&uid=586221334&cid=LIZA-88874651-1574623259044&login="
		"alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=64&afterload"
		"=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive6*/

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"tLefKRefICg1:5MenTJWINCg1.5Meblv8wsuQ1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"vLeGVRefJeA1:5MeKbI0fNa61.5Meblv8wsuQ1:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_custom_request("monitoring_liza.txt_8", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?ts=1574623326172&msg=%7B%22version%22%3A%221%22%2C%22uid%22%3A%22586221334%22%2C%22service%22%3A%22mail%22%2C%22operation%22%3A%22insert%22%2C%22lcn%22%3A%22806%22%2C%22session_key%22%3A%22%22%2C%22server_notify_id%22%3A%22tLefKRefICg1%3A5MenTJWINCg1.5Meblv8wsuQ1%3Au2709%3Amail%22%2C%22bright%22%3Atrue%2C%22tags%22%3A%5B%5D%2C%22position%22%3A425%7D&type=xivaMsg&uid=586221334&cid=LIZA-88874651-1574623259044&login=alex-under1093&loc="
		"https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=65&afterload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("monitoring_liza.txt_9", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?ts=1574623326174&msg=%7B%22version%22%3A%221%22%2C%22uid%22%3A%22586221334%22%2C%22service%22%3A%22mail%22%2C%22operation%22%3A%22insert%22%2C%22lcn%22%3A%22807%22%2C%22session_key%22%3A%22%22%2C%22server_notify_id%22%3A%22vLeGVRefJeA1%3A5MeKbI0fNa61.5Meblv8wsuQ1%3Au2709%3Amail%22%2C%22bright%22%3Atrue%2C%22tags%22%3A%5B%5D%2C%22position%22%3A426%7D&type=xivaMsg&uid=586221334&cid=LIZA-88874651-1574623259044&login=alex-under1093&loc="
		"https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=65&afterload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_33", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-settings,settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-settings\",\"params\":{\"params\":\"{\\\"done-promo\\\":\\\"mobile-default\\\"}\"}},{\"name\":\"settings\",\"params\":{\"list\":\"done-promo\",\"actual\":\"true\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623326189,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;"
		"121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":"
		"\"30\",\"_csw\":0}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_custom_request("liza1_34", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=messages", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"messages\",\"params\":{\"thread_id\":\"t170855310863368340\",\"sort_type\":\"date\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623326392,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;"
		"165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0,\"_features\":{\"web_search_extra_params\":{\""
		"updated-contact-ranking\":\"true\",\"self-emails-zero-ranking\":\"true\"}}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_custom_request("1_21", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222206%3Aet%3A1574623327%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A650157472659%3Arqn%3A11%3Arn%3A998724154%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623327%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t100.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info="
		"%5B%7B%22%D0%9D%D0%B0%D0%BF%D0%B8%D1%81%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%B0%22%3A%7B%22%D0%9F%D0%BE%D0%B4%D0%B2%D0%B0%D0%BB%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%B0%22%3A%22%D0%9A%D0%BB%D0%B8%D0%BA%20%D0%B2%20%5C%22%D0%9E%D1%82%D0%BF%D1%80%D0%B0%D0%B2%D0%B8%D1%82%D1%8C%5C%22%22%7D%7D%2C%7B%22%D0%9E%D1%82%D0%BF%D1%80%D0%B0%D0%B2%D0%BA%D0%B0%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%B0%22%3A%22compose%22%7D%2C%7B%22%D0%9D%D0%BE%D1%82%D0%B8%D1%84%D0%B8%D0%BA%D0%B0%D1%86%D0%B8%D0%B8"
		"%22%3A%7B%22%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%BE%D0%BD%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D0%B5%20%D0%BD%D0%BE%D1%82%D0%B8%D1%84%D0%B8%D0%BA%D0%B0%D1%86%D0%B8%D0%B8%22%3A%7B%22sending_message%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%22%7D%7D%7D%2C%7B%22%D0%9F%D1%80%D0%BE%D0%BC%D0%BE%20%D0%BD%D0%B0%20Done%22%3A%7B%22%D0%A3%D1%81%D1%82%D0%B0%D0%BD%D0%BE%D0%B2%D0%B8%22%3A%7B%22%D0%9D%D0%B5%20%D1%81%D1%82%D0%B0%D0%B2%D0%B8%D0%BB%20%D0%BF%D1%80%D0%B8%D0%BB%D0%BE%D0%B6%D0%B5%D0%BD%D0%B8%D0%B5%20%2B%20%D1"
		"%81%D1%82%D0%B0%D0%B2%D0%B8%D0%BB%2C%20%D0%BD%D0%B5%20%D0%B0%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%BE%D0%B2%D0%B0%D0%BB%D1%81%D1%8F%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%D1%8B%22%7D%7D%7D%2C%7B%22%D0%9F%D1%80%D0%BE%D0%BC%D0%BE%20%D0%BD%D0%B0%20Done%22%3A%7B%22Done%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%22%7D%7D%5D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_submit_data("257968", 
		"Action=https://mc.yandex.ru/watch/257968?wmode=7&cnt-class=1&nohit=1&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Flist%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1%26mode%3Dedit&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&charset=utf-8&ut=noindex&browser-info="
		"ti%3A10%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A3%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222102%3Aet%3A1574623327%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Acpf%3A1%3Aad%3A1%3Apv%3A1%3Als%3A1079939657892%3Arn%3A337429904%3Ahid%3A1010272455%3Agdpr%3A13%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623327%3Au%3A1574623209942202331%3App%3A3629563401%3At%3A%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%82%D0%B0", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_22", 
		"URL=https://mc.yandex.ru/watch/257968/1?cnt-class=1&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A3%3Az%3A180%3Ai%3A20191124222206%3Aet%3A1574623327%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Aar%3A1%3Apa%3A1%3Als%3A1079939657892%3Arqn%3A1%3Arn%3A473563710%3Ahid%3A1010272455%3Ads%3A0%2C0%2C295%2C51%2C41%2C0%2C0%2C675%2C11%2C3751%2C3751%2C2%2C1037%3Afp%3A2293%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623327%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t102.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22__ym%22%3A%7B%22adSessionID%22%3A%225369951574623267653%22%7D%7D", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("257968_2", 
		"URL=https://mc.yandex.ru/watch/257968?cnt-class=1&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Flist%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1%26mode%3Dedit&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A3%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222206%3Aet%3A1574623327%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Aar%3A1%3Apv%3A1%3Als%3A1079939657892%3Arqn%3A2%3Arn%3A958992357%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623327%3Au%3A1574623209942202331%3App%3A3629563401%3At%3A%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81.%D0%9F%D0%BE%D1%87%D1%"
		"82%D0%B0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t103.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_35", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages="
		"%5B%7B%22reason%22%3A%22performance%22%2C%22type%22%3A%22fps%22%2C%22area%22%3A%22compose%22%2C%22total%22%3A1810%2C%22freeze%22%3A0%2C%22slow%22%3A37%7D%2C%7B%22action%22%3A%22show%22%2C%22type%22%3A%22done-promo%22%2C%22name%22%3A%22mobile-default%22%2C%22view%22%3A%22done-promo-mobile-app%22%2C%22flow%22%3A%22user_events%22%2C%22reason%22%3A%22workflow%22%7D%2C%7B%22action%22%3A%22show%22%2C%22block%22%3A%22done-direct%22%2C%22id%22%3A%22R-I-257968-4%22%2C%22statId%22%3A268%2C%22type%22%3A%22co"
		"mmon%22%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%2C%7B%22action%22%3A%22show%22%2C%22block%22%3A%22left-col-rtb-1%22%2C%22id%22%3A%22R-I-257968-5%22%2C%22statId%22%3A260%2C%22type%22%3A%22common%22%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%2C%7B%22action%22%3A%22show%22%2C%22block%22%3A%22left-col-rtb-1%22%2C%22id%22%3A%22R-I-257968-5%22%2C%22statId%22%3A260%2C%22type%22%3A%22common%22%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%2C%7B%22action%2"
		"2%3A%22first-render%22%2C%22block%22%3A%22done-direct%22%2C%22id%22%3A%22R-I-257968-4%22%2C%22statId%22%3A268%2C%22lifetime%22%3A67676%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%5D&model=do-client-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623327178&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	lr_end_transaction("4_send_message",LR_AUTO);

	lr_think_time(9);

	lr_start_transaction("5_logout");

	web_custom_request("liza1_36", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-mail-reset-recent-counter", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-mail-reset-recent-counter\",\"params\":{}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623340100,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;"
		"62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\",\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive7*/

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"5Me3PSefIeA1:JMeeFkifWqM1.JMeFRWg0xa61:u2709:mail\"}", 
		"IsBinary=0", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("monitoring_liza.txt_10", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?ts=1574623340602&msg=%7B%22version%22%3A%221%22%2C%22uid%22%3A%22586221334%22%2C%22service%22%3A%22mail%22%2C%22operation%22%3A%22unsupported%22%2C%22lcn%22%3A%22808%22%2C%22session_key%22%3A%22LIZA-88874651-1574623259044%22%2C%22server_notify_id%22%3A%225Me3PSefIeA1%3AJMeeFkifWqM1.JMeFRWg0xa61%3Au2709%3Amail%22%2C%22bright%22%3Atrue%2C%22tags%22%3A%5B%5D%2C%22position%22%3A427%7D&type=xivaMsg&uid=586221334&cid=LIZA-88874651-1574623259044&login="
		"alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=79&afterload"
		"=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_23", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222221%3Aet%3A1574623341%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A650157472659%3Arqn%3A12%3Arn%3A691753275%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623341%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t107.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info="
		"%5B%7B%22Login%20header.Right%20part%22%3A%7B%22Menu%20behind%20login%22%3A%22Click%22%7D%7D%2C%7B%22Login%20header.Right%20part%22%3A%7B%22Menu%20behind%20login%22%3A%7B%22No%20new%20messages%22%3A%22Promo%20shows%22%7D%7D%7D%2C%7B%22Login%20header.Right%20part%22%3A%7B%22Menu%20behind%20login%22%3A%7B%22No%20new%20messages%22%3A%5B%7B%22Add%20user%22%3A%22Show%22%7D%2C%7B%22Account%20settings%22%3A%22Show%22%7D%2C%7B%22Change%20password%22%3A%22Show%22%7D%2C%7B%22Help%20and%20feedback%22%3A%22Sh"
		"ow%22%7D%2C%7B%22Sign%20out%20of%20Yandex%20services%22%3A%22Show%22%7D%2C%7B%22Yandex%20home%20page%22%3A%22Show%22%7D%5D%7D%7D%7D%5D", 
		LAST);

	web_custom_request("40081755_5", 
		"URL=https://mc.yandex.ru/watch/40081755?page-ref=https%3A%2F%2Fmail.yandex.ru%2F%23inbox&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Fmode%3Dembeddedauth%26action%3Dlogout%26uid%3D586221334%26yu%3D1486360661574623206%26retpath%3Dhttps%253A%252F%252Fyandex.ru&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222221%3Aet%3A1574623342%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aln%3A1%3Als%3A650157472659%3Arqn%3A13%3Arn%3A659118696%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623342%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t108.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("1_24", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222221%3Aet%3A1574623342%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A650157472659%3Arqn%3A14%3Arn%3A225406263%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623342%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t109.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%5B%7B%22Login%20header.Right%20part%22%3A%7B%22Menu%20behind%20login%22%3A%7B%22No%20new%20messages%22%3A%7B%22Sign%20out%20of%20Yandex%20services%22%3A%22Click%22%7D%7D%7D%7D%5D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_37", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-settings,settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-settings\",\"params\":{\"params\":\"{\\\"promo-mobile-done_show-date\\\":1574623341250}\"}},{\"name\":\"settings\",\"params\":{\"list\":\"promo-mobile-done_show-date\",\"actual\":\"true\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623341624,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;"
		"160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\","
		"\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("40081755_6", 
		"URL=https://mc.yandex.ru/watch/40081755?page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23done&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Adp%3A1%3Ans%3A1574623259305%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1667x939%3Az%3A180%3Ai%3A20191124222224%3Aet%3A1574623342%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Antf%3A1%3Awh%3A1%3Apv%3A1%3Als%3A650157472659%3Arqn%3A15%3Arn%3A949982970%3Ahid%3A1010272455%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A13%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623342%3Au%3A1574623209942202331%3App%3A3629563401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t111.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("monitoring_liza.txt_11", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?allTime=1784&allSumTime=145&requestTime=0&selfTime=1784&full=1784&collectModels.0=27&requestModels.0=0&collectViews=2&generateHTML=0&html2node=1&triggerHideEvents=3&insertNodes=10&triggerEvents=102&blockname=messages&request=0&event=BlockTimings&visibilityState=visible&show=1784&browser=Chrome&uid=586221334&cid=LIZA-88874651-1574623259044&login=alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&cv=jane-19.8.1&lcl=ru&cdn=mskm&"
		"exp=189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=83&afterload=true&unload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_38", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-settings,settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-settings\",\"params\":{\"params\":\"{\\\"promo-mobile-done_show-date\\\":1574623344343}\"}},{\"name\":\"settings\",\"params\":{\"list\":\"promo-mobile-done_show-date\",\"actual\":\"true\"}}],\"_ckey\":\"LAOHVN5/QVemdMWYWvuRdg0R6jI=!k3eth1g7\",\"_uid\":\"586221334\",\"_locale\":\"ru\",\"_timestamp\":1574623344717,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-88874651-1574623259044\",\"_exp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;"
		"160546,0,63;160678,0,44;121622,0,22;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;155721,0,57;155476,0,79;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_eexp\":\"189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54\",\"_service\":\"LIZA\",\"_version\":\"19.8.1\","
		"\"_messages_per_page\":\"30\",\"_csw\":0}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("monitoring_liza.txt_12", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?event=LongRun&block=app&theme=colorful&allTime=1789&requestTime=0&selfTime=1789&perf.full=1789&perf.collectModels.0=27&perf.requestModels.0=0&perf.collectViews=2&perf.generateHTML=0&perf.html2node=1&perf.triggerHideEvents=3&perf.insertNodes=10&perf.triggerEvents=105&uid=586221334&cid=LIZA-88874651-1574623259044&login=alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=83&afterload=true&unload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("monitoring_liza.txt_13", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?event=doLogin&from=parseLoginInfo&uid=586221334&cid=LIZA-88874651-1574623259044&login=alex-under1093&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334%23inbox&cv=jane-19.8.1&lcl=ru&cdn=mskm&exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&kclbd=n&csw=0&lifetime=83&afterload=true&unload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_39", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages=%5B%7B%22action%22%3A%22show%22%2C%22block%22%3A%22left-col-rtb-1%22%2C%22id%22%3A%22R-I-92550-750%22%2C%22statId%22%3A65%2C%22type%22%3A%22common%22%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%2C%7B%22action%22%3A%22show%22%2C%22block%22%3A%22messages-direct%22%2C%22id%22%3A%22R-I-92550-748%22%2C%22statId%22%3A72%2C%22type%22%3A%22new%22%2C%22flow%22%3A%22ads%22%2C%22reason%22%3A%22workflow%22%7D%5D&model=do-client-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&"
		"_uid=586221334&_locale=ru&_timestamp=1574623345069&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_custom_request("liza1_40", 
		"URL=https://mail.yandex.ru/web-api/journal/liza1?_m=do-journal-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=messages=%5B%7B%22target%22%3A%22folder%22%2C%22fid%22%3A%221%22%2C%22fidName%22%3A%22%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%22%2C%22isUserFolder%22%3Afalse%2C%22operation%22%3A%22open%22%7D%5D&model=do-journal-log&_ckey=LAOHVN5%2FQVemdMWYWvuRdg0R6jI%3D!k3eth1g7&_uid=586221334&_locale=ru&_timestamp=1574623345070&_product=RUS&_connection_id=LIZA-88874651-1574623259044&_exp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B121622%2C0%2C22%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B155721%2C0%2C57%3B155476%2C0%2C79%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_eexp="
		"189745%2C0%2C19%3B139071%2C0%2C85%3B142275%2C0%2C69%3B136883%2C0%2C38%3B135611%2C0%2C60%3B140619%2C0%2C14%3B160546%2C0%2C63%3B160678%2C0%2C44%3B185126%2C0%2C48%3B100970%2C0%2C14%3B158581%2C0%2C24%3B94810%2C0%2C40%3B189178%2C0%2C14%3B137858%2C0%2C95%3B165347%2C0%2C99%3B62697%2C0%2C78%3B189014%2C0%2C29%3B169671%2C0%2C45%3B182410%2C0%2C52%3B182406%2C0%2C54&_service=LIZA&_version=19.8.1&_messages_per_page=30&_csw=0", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_13", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t118.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=1401,207.2154=85527.975,207.1428=85527.975,2877=0,2924=28.176.2048.2314.2389,2925=1,689.2322=85527.94/cts=1574623344831/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410"
		",0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,143.2119=338,1701=2046,207.2154=83744.075,207.1428=85528.075,2877=1784,2924=28.176.2048.2314.2389,2925=1,689.2322=85527.94/cts=1574623344831/*\r\n/reqid=LIZA-88874651-1574623259044/path=690.2096.2877/slots=189745,0,"
		"19;139071,0,85;142275,0,69;136883,0,38;135611,0,60;140619,0,14;160546,0,63;160678,0,44;185126,0,48;100970,0,14;158581,0,24;94810,0,40;189178,0,14;137858,0,95;165347,0,99;62697,0,78;189014,0,29;169671,0,45;182410,0,52;182406,0,54/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=19.8.1,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623259305,143.2112=41,"
		"143.2119=338,1701=487,207.2154=83744.115,207.1428=85528.115,2877=1784,2924=28.176.2048.2314.2389,2925=1,689.2322=85527.94/cts=1574623344831/*", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("passport", 
		"URL=https://passport.yandex.ru/passport?mode=embeddedauth&action=logout&uid=586221334&yu=1486360661574623206&retpath=https%3A%2F%2Fyandex.ru", 
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

	web_url("mail.yandex.ru_2", 
		"URL=https://mail.yandex.ru/?uid=586221334", 
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

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_14", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_L_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t121.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623345092,143.2112=51,143.2119=428,1701=3036,207=927.255/cts=1574623346033/*\r\n/reqid=f93989f18ad6ab36942257efd24f1496/dtype=stred/pid=1/cid=72202/path=690.1033/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars="
		"143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2129=1574623345092,1036=51,1037=0,1038=0,1039=377,1040=2,1040.906=379,1310.2084=85,1310.2085=180,1310.1309=150,1310.1007=350,2299=5,2130=652,1041=224,1041.906=601,2116=51,2114=51,2131=928,2123=778,2770=608,2769=513,2113=51,2112=51,2111=51,2117=53,2120=430,2119=428,1484=1,770.76=1,2437=2771,2870=4g/cts=1574623346035/*\r"
		"\n/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623345092,143.2112=51,143.2119=428,1701=1926.2793,207=652.73/cts=1574623346035/*\r\n/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287="
		"213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623345092,143.2112=51,143.2119=428,1701=1926.2794,207=652.73/cts=1574623346035/*\r\n/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;"
		"82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623345092,143.2112=51,143.2119=428,1701=2876,207=946.17/cts=1574623346038/*\r\n/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.2335.1822/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;"
		"145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,1822=mskm/cts=1574623346043/*", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_submit_data("784657_3", 
		"Action=https://mc.yandex.ru/watch/784657?wmode=7&page-ref=https%3A%2F%2Fmail.yandex.ru%2F&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_L_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%253Fuid%253D586221334%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&exp="
		"cYStrLRTWlFxWKHrtfUSW-tzhEwZ_ksyrcY99cRt0opPoUFdoC_KrIYWM6FW0S7ns_tcBcxAvFV8acjAiJcYqesCmwOlLUM3BdKt2c1hnFCf_9tHByJ_8hWKs43gXLmAwXVk0IfM_FqlENAN76DcfzsqTgESpXNUiVt0jxfQ3tKpKink5KPl8XIKcZaQfqFx540APaNTTIMI8JeVod0AHfaDPaU9r_cZHFSDSpT_6Qd6eYE4Q-m17A6_HFc05f65cQ5s3cs9i6qjF5iwlBKlujm6bTXiQqCg5_l3nIJTfyFSGvPXv8CX3ZaeqhzAv9HMzwWQe9o_34DBgvpFQee9Ty58qcFwIiOmKUZpfWvXdVs&browser-info="
		"ti%3A10%3Avc%3Ab%3Ans%3A1574623345092%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1680x939%3Az%3A180%3Ai%3A20191124222226%3Aet%3A1574623346%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Acpf%3A1%3Apv%3A1%3Als%3A494481107191%3Arqn%3A11%3Arn%3A1054939697%3Ahid%3A190620280%3Ads%3A0%2C0%2C375%2C2%2C51%2C0%2C0%2C95%2C150%2C%2C%2C%2C778%3Afp%3A653%3Awn%3A51095%3Ahl%3A5%3Agdpr%3A8%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623346%3Au%3A1574623209942202331%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D"
		"1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_L_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		LAST);

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_25", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_L_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%253Fuid%253D586221334%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Ans%3A1574623345092%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222226%3Aet%3A1574623346%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A494481107191%3Arqn%3A12%3Arn%3A149868717%3Ahid%3A190620280%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623346%3Au%3A1574623209942202331", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_L_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t123.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D0%B4%D0%BE%D0%BC%D0%B8%D0%BA%20V3%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%B2%D0%B2%D0%BE%D0%B4%20%D0%BF%D0%B0%D1%80%D0%BE%D0%BB%D1%8F%22%7D", 
		LAST);

	web_custom_request("1_26", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_L_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%253Fuid%253D586221334%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Ans%3A1574623345092%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Az%3A180%3Ai%3A20191124222226%3Aet%3A1574623346%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Apa%3A1%3Als%3A494481107191%3Arqn%3A13%3Arn%3A509640929%3Ahid%3A190620280%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A1%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623346%3Au%3A1574623209942202331", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_L_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t124.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=site-info=%7B%22%D0%9D%D0%BE%D0%B2%D1%8B%D0%B9%20%D0%B4%D0%BE%D0%BC%D0%B8%D0%BA%20V3%22%3A%22%D0%BF%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%81%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D1%8B%22%7D", 
		LAST);

	web_custom_request("1_27", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Ffrom%3Dmail%26origin%3Dhostroot_homer_auth_L_ru%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%253Fuid%253D586221334%26backpath%3Dhttps%253A%252F%252Fmail.yandex.ru%253Fnoretpath%253D1&page-url=goal%3A%2F%2Fpassport.yandex.ru%2F2step_domik_show_pass_form&charset=utf-8&ut=noindex&force-urlencoded=1&browser-info="
		"ti%3A1%3Ans%3A1574623345092%3As%3A1680x1050x24%3Ask%3A1%3Aadb%3A2%3Afpr%3A67501995301%3Acn%3A1%3Aw%3A1680x939%3Az%3A180%3Ai%3A20191124222226%3Aet%3A1574623346%3Aen%3Autf-8%3Ac%3A1%3Ala%3Aru-ru%3Awh%3A1%3Aar%3A1%3Als%3A494481107191%3Arqn%3A14%3Arn%3A552961582%3Ahid%3A190620280%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%2C%3Agdpr%3A8%3Afu%3A3%3Av%3A1744%3Arqnl%3A1%3Ast%3A1574623346%3Au%3A1574623209942202331%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_L_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t125.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("click_15", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_L_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t126.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623345092,143.2112=51,143.2119=428,1701=1724,207=1105.45/cts=1574623346197/*\r\n/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.2748/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,"
		"1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2748=yastatic.net!11!;ysa-static.passport.yandex.net!1!;avatars.mds.yandex.net!1!;mc.yandex.ru!1!;yandex.ru!1!;/cts=1574623346198/*\r\n/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.2892/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;"
		"108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F78.0.3904.108%20Safari%2F537.36,2116=51.555,2114=51.555,2886=33737,2124=1105.305,2131=928.065,2123=777.995,2770=608.135,2113=51.555,2112=51.555,2136=1106.4,2887=8558,2888=navigation,2111=51.555,2889=navigation,2126="
		"1106.4,2125=1105.32,2890=http%2F1.1,1385=0,2110=0,2109=0,2117=53.28,2120=430.52,2119=428.46,2115=51.555,2322=0,2323=11100,76=reload,2128=0,2127=0,2137=0,2437=2771,2870=4g/cts=1574623346199/*", 
		LAST);

	lr_end_transaction("5_logout",LR_AUTO);

	web_custom_request("click_16", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_L_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D586221334&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"Snapshot=t127.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=f93989f18ad6ab36942257efd24f1496/path=690.2096.207/slots=176965,0,-1;186113,0,-1;65472,0,-1;157721,0,-1;176266,0,2;145109,0,54;166973,0,24;161163,0,84;156007,0,55;131936,0,43;131972,0,92;109335,0,80;108959,0,2;100597,0,75;127242,0,83;82098,0,49;118435,0,14;125988,0,0;147814,0,79;55539,0,55;148930,0,35;146770,0,78;152513,0,96/vars=143=28.1207.2243,287=213,1042=Mozilla%2F5.0%20(Windows%20NT%206.1%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F78.0.3904.108%20Safari%2F537.36,143.2129=1574623345092,143.2112=51,143.2119=428,1701=2795,207=1174,2796.2797=s-671-929.s-1039-1100.s-1119-1173,689.2322=945.255/cts=1574623350048/*", 
		LAST);

	return 0;
}