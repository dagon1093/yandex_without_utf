#ifndef VUSER_WEBSOCKET_BUFFER_HEADER
#define VUSER_WEBSOCKET_BUFFER_HEADER

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive0[] = "{ \"operation\": \"ping\", \"server-interval-sec\": 60 }";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	// (record-time: 50 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive1[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"in"
                        "sert\",\"lcn\":\"804\",\"session_key\":\"\",\"server_notify_id\":\"qLexxQefJqM1:"
                        "tLe4B95iQqM1.sLeAQZm474Y1:u2709:mail\",\"bright\":true,\"message\":{\"fid\":\"6\""
                        ",\"fid_type\":\"5\",\"fresh_count\":\"0\",\"hdr_from\":\"\\\"\\\\u0410\\\\u043b\\"
                        "\\u0435\\\\u043a\\\\u0441\\\\u0430\\\\u043d\\\\u0434\\\\u0440 \\\\u042f\\\\u043a"
                        "\\\\u043e\\\\u0432\\\\u043b\\\\u0435\\\\u0432\\\" <alex.under1093@yandex.ru>\",\""
                        "hdr_message_id\":\"<73923571574623314@vla4-87a00c2d2b1b.qloud-c.yandex.net>\",\""
                        "hdr_status\":\"RO\",\"hdr_subject\":\"teeeeeeeeeeeeeee\",\"hdr_to\":\"\\\"alex.u"
                        "nder1093@yandex.ru\\\" <alex.under1093@yandex.ru>\",\"lcn\":\"804\",\"lid\":\"14"
                        ",3,FAKE_RECENT_LBL,FAKE_SEEN_LBL\",\"mid\":\"170855310863368339\",\"new_messages"
                        "\":\"3\",\"operation\":\"insert\",\"received_date\":\"24.11.2019 22:21:54\",\"sz"
                        "\":\"889\",\"thread_id\":\"170855310863368339\",\"uid\":\"586221334\",\"uname\":"
                        "\"1080201457\"},\"raw_data\":\"{\\\"counters\\\":[1,43,3,12,4,31,6,3],\\\"counte"
                        "rsNew\\\":[1,3,3,5],\\\"envelopes\\\":[{\\\"date\\\":1574623314,\\\"fid\\\":\\\""
                        "6\\\",\\\"fidType\\\":5,\\\"firstline\\\":\\\"\\\",\\\"from\\\":[{\\\"displayNam"
                        "e\\\":\\\""
                        "\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80"
                        " "
                        "\xd0\xaf\xd0\xba\xd0\xbe\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xb2"
                        "\\\",\\\"domain\\\":\\\"yandex.ru\\\",\\\"local\\\":\\\"alex.under1093\\\"}],\\\""
                        "labels\\\":[\\\"14\\\",\\\"3\\\",\\\"FAKE_RECENT_LBL\\\",\\\"FAKE_SEEN_LBL\\\"],"
                        "\\\"labelsInfo\\\":{\\\"14\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\"\\\"}},\\"
                        "\"3\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\"draft_label\\\"}},\\\"FAKE_RECE"
                        "NT_LBL\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\"recent_label\\\"}},\\\"FAKE_"
                        "SEEN_LBL\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\"seen_label\\\"}}},\\\"mess"
                        "ageId\\\":\\\"<73923571574623314@vla4-87a00c2d2b1b.qloud-c.yandex.net>\\\",\\\"m"
                        "id\\\":\\\"170855310863368339\\\",\\\"size\\\":889,\\\"subject\\\":\\\"teeeeeeee"
                        "eeeeeee\\\",\\\"tab\\\":\\\"\\\",\\\"threadId\\\":\\\"170855310863368339\\\",\\\""
                        "to\\\":[{\\\"displayName\\\":\\\"alex.under1093@yandex.ru\\\",\\\"domain\\\":\\\""
                        "yandex.ru\\\",\\\"local\\\":\\\"alex.under1093\\\"}],\\\"types\\\":[4]}],\\\"fid"
                        "\\\":\\\"6\\\",\\\"freshCount\\\":0,\\\"lcn\\\":\\\"804\\\",\\\"loc-args\\\":[\\"
                        "\""
                        "\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80"
                        " "
                        "\xd0\xaf\xd0\xba\xd0\xbe\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xb2"
                        "\\\",\\\"teeeeeeeeeeeeeee\\\",\\\"\\\"],\\\"mid\\\":\\\"170855310863368339\\\",\\"
                        "\"mids_str\\\":\\\"[\\\\\\\"170855310863368339\\\\\\\"]\\\",\\\"newCount\\\":3,\\"
                        "\"operation\\\":\\\"insert\\\",\\\"sessionKey\\\":\\\"\\\",\\\"status\\\":\\\"RO"
                        "\\\",\\\"tab\\\":\\\"\\\",\\\"threadId\\\":\\\"170855310863368339\\\",\\\"uid\\\""
                        ":\\\"586221334\\\",\\\"uname\\\":\\\"1080201457\\\"}\",\"tags\":[],\"position\":"
                        "422}";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	// (record-time: 2152 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive2[] = "{ \"operation\": \"ping\", \"server-interval-sec\": 60 }";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	// (record-time: 50 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive3[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"un"
                        "supported\",\"lcn\":\"805\",\"session_key\":\"LIZA-88874651-1574623259044\",\"se"
                        "rver_notify_id\":\"0Me2pRefHSw1:5Me0IJlgJOs1.5Me8kv8wtGk1:u2709:mail\",\"bright\""
                        ":true,\"message\":{\"fid\":\"-1\",\"lcn\":\"805\",\"mids\":\"[\\\"17085531086336"
                        "8339\\\"]\",\"operation\":\"move mails\",\"session_key\":\"LIZA-88874651-1574623"
                        "259044\",\"uid\":\"586221334\",\"uname\":\"1080201457\"},\"raw_data\":\"{\\\"fid"
                        "\\\":-1,\\\"lcn\\\":\\\"805\\\",\\\"mids_str\\\":\\\"[\\\\\\\"170855310863368339"
                        "\\\\\\\"]\\\",\\\"operation\\\":\\\"move mails\\\",\\\"sessionKey\\\":\\\"LIZA-8"
                        "8874651-1574623259044\\\",\\\"uid\\\":\\\"586221334\\\",\\\"uname\\\":\\\"108020"
                        "1457\\\"}\",\"tags\":[],\"position\":423}";
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	// (record-time: 630 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive4[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"un"
                        "supported\",\"lcn\":\"805\",\"session_key\":\"LIZA-88874651-1574623259044\",\"se"
                        "rver_notify_id\":\"3MedASefJiE1:5MeZM5Jgv0U1.5Me8kv8wtGk1:u2709:mail\",\"bright\""
                        ":true,\"message\":{\"lcn\":\"805\",\"operation\":\"delete mails\",\"session_key\""
                        ":\"LIZA-88874651-1574623259044\"},\"raw_data\":\"{\\\"lcn\\\":\\\"805\\\",\\\"mi"
                        "ds\\\":[\\\"170855310863368339\\\"],\\\"operation\\\":\\\"delete mails\\\",\\\"s"
                        "essionKey\\\":\\\"LIZA-88874651-1574623259044\\\",\\\"uid\\\":\\\"586221334\\\","
                        "\\\"uname\\\":\\\"1080201457\\\"}\",\"tags\":[],\"position\":424}";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	// (record-time: 527 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive5[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"in"
                        "sert\",\"lcn\":\"806\",\"session_key\":\"\",\"server_notify_id\":\"tLefKRefICg1:"
                        "5MenTJWINCg1.5Meblv8wsuQ1:u2709:mail\",\"bright\":true,\"message\":{\"fid\":\"4\""
                        ",\"fid_type\":\"2\",\"firstline\":\"yoooooooooooooooooooooooooooooooo\",\"fresh_"
                        "count\":\"0\",\"hdr_from\":\"\\\"\\\\u0410\\\\u043b\\\\u0435\\\\u043a\\\\u0441\\"
                        "\\u0430\\\\u043d\\\\u0434\\\\u0440 \\\\u042f\\\\u043a\\\\u043e\\\\u0432\\\\u043b"
                        "\\\\u0435\\\\u0432\\\" <alex.under1093@yandex.ru>\",\"hdr_message_id\":\"<404729"
                        "1574623325@myt2-dd3598211d70.qloud-c.yandex.net>\",\"hdr_status\":\"RO\",\"hdr_s"
                        "ubject\":\"teeeeeeeeeeeeeeest\",\"hdr_to\":\"\\\"alex.under1093@yandex.ru\\\" <a"
                        "lex.under1093@yandex.ru>\",\"lcn\":\"806\",\"lid\":\"10,14,FAKE_MULCA_SHARED_LBL"
                        ",FAKE_RECENT_LBL,FAKE_SEEN_LBL\",\"mid\":\"170855310863368340\",\"new_messages\""
                        ":\"3\",\"operation\":\"insert\",\"received_date\":\"24.11.2019 22:22:05\",\"sz\""
                        ":\"2165\",\"thread_id\":\"170855310863368340\",\"uid\":\"586221334\",\"uname\":\""
                        "1080201457\"},\"raw_data\":\"{\\\"counters\\\":[1,44,3,12,4,32,6,2],\\\"counters"
                        "New\\\":[1,4,3,5],\\\"envelopes\\\":[{\\\"date\\\":1574623325,\\\"fid\\\":\\\"4\\"
                        "\",\\\"fidType\\\":2,\\\"firstline\\\":\\\"yoooooooooooooooooooooooooooooooo\\\""
                        ",\\\"from\\\":[{\\\"displayName\\\":\\\""
                        "\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80"
                        " "
                        "\xd0\xaf\xd0\xba\xd0\xbe\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xb2"
                        "\\\",\\\"domain\\\":\\\"yandex.ru\\\",\\\"local\\\":\\\"alex.under1093\\\"}],\\\""
                        "labels\\\":[\\\"10\\\",\\\"14\\\",\\\"FAKE_MULCA_SHARED_LBL\\\",\\\"FAKE_RECENT_"
                        "LBL\\\",\\\"FAKE_SEEN_LBL\\\"],\\\"labelsInfo\\\":{\\\"10\\\":{\\\"symbolicName\\"
                        "\":{\\\"title\\\":\\\"\\\"}},\\\"14\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\""
                        "\\\"}},\\\"FAKE_MULCA_SHARED_LBL\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\"mu"
                        "lcaShared_label\\\"}},\\\"FAKE_RECENT_LBL\\\":{\\\"symbolicName\\\":{\\\"title\\"
                        "\":\\\"recent_label\\\"}},\\\"FAKE_SEEN_LBL\\\":{\\\"symbolicName\\\":{\\\"title"
                        "\\\":\\\"seen_label\\\"}}},\\\"messageId\\\":\\\"<4047291574623325@myt2-dd359821"
                        "1d70.qloud-c.yandex.net>\\\",\\\"mid\\\":\\\"170855310863368340\\\",\\\"size\\\""
                        ":2165,\\\"subject\\\":\\\"teeeeeeeeeeeeeeest\\\",\\\"tab\\\":\\\"\\\",\\\"thread"
                        "Id\\\":\\\"170855310863368340\\\",\\\"to\\\":[{\\\"displayName\\\":\\\"alex.unde"
                        "r1093@yandex.ru\\\",\\\"domain\\\":\\\"yandex.ru\\\",\\\"local\\\":\\\"alex.unde"
                        "r1093\\\"}],\\\"types\\\":[4,55]}],\\\"fid\\\":\\\"4\\\",\\\"freshCount\\\":0,\\"
                        "\"lcn\\\":\\\"806\\\",\\\"loc-args\\\":[\\\""
                        "\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80"
                        " "
                        "\xd0\xaf\xd0\xba\xd0\xbe\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xb2"
                        "\\\",\\\"teeeeeeeeeeeeeeest\\\",\\\"yoooooooooooooooooooooooooooooooo\\\"],\\\"m"
                        "id\\\":\\\"170855310863368340\\\",\\\"mids_str\\\":\\\"[\\\\\\\"1708553108633683"
                        "40\\\\\\\"]\\\",\\\"newCount\\\":3,\\\"operation\\\":\\\"insert\\\",\\\"sessionK"
                        "ey\\\":\\\"\\\",\\\"status\\\":\\\"RO\\\",\\\"tab\\\":\\\"\\\",\\\"threadId\\\":"
                        "\\\"170855310863368340\\\",\\\"uid\\\":\\\"586221334\\\",\\\"uname\\\":\\\"10802"
                        "01457\\\"}\",\"tags\":[],\"position\":425}";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	// (record-time: 2394 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive6[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"in"
                        "sert\",\"lcn\":\"807\",\"session_key\":\"\",\"server_notify_id\":\"vLeGVRefJeA1:"
                        "5MeKbI0fNa61.5Meblv8wsuQ1:u2709:mail\",\"bright\":true,\"message\":{\"fid\":\"1\""
                        ",\"fid_type\":\"1\",\"firstline\":\"yoooooooooooooooooooooooooooooooo\",\"fresh_"
                        "count\":\"1\",\"hdr_from\":\"\\\"\\\\u0410\\\\u043b\\\\u0435\\\\u043a\\\\u0441\\"
                        "\\u0430\\\\u043d\\\\u0434\\\\u0440 \\\\u042f\\\\u043a\\\\u043e\\\\u0432\\\\u043b"
                        "\\\\u0435\\\\u0432\\\" <alex.under1093@yandex.ru>\",\"hdr_message_id\":\"<404729"
                        "1574623325@myt2-dd3598211d70.qloud-c.yandex.net>\",\"hdr_status\":\"New\",\"hdr_"
                        "subject\":\"teeeeeeeeeeeeeeest\",\"hdr_to\":\"\\\"alex.under1093@yandex.ru\\\" <"
                        "alex.under1093@yandex.ru>\",\"lcn\":\"807\",\"lid\":\"10,14,FAKE_MULCA_SHARED_LB"
                        "L,FAKE_RECENT_LBL\",\"mid\":\"170855310863368341\",\"new_messages\":\"4\",\"oper"
                        "ation\":\"insert\",\"received_date\":\"24.11.2019 22:22:05\",\"sz\":\"2165\",\"t"
                        "hread_id\":\"170855310863368340\",\"uid\":\"586221334\",\"uname\":\"1080201457\""
                        "},\"raw_data\":\"{\\\"counters\\\":[1,44,3,12,4,32,6,2],\\\"countersNew\\\":[1,4"
                        ",3,5],\\\"envelopes\\\":[{\\\"date\\\":1574623325,\\\"fid\\\":\\\"1\\\",\\\"fidT"
                        "ype\\\":1,\\\"firstline\\\":\\\"yoooooooooooooooooooooooooooooooo\\\",\\\"from\\"
                        "\":[{\\\"displayName\\\":\\\""
                        "\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80"
                        " "
                        "\xd0\xaf\xd0\xba\xd0\xbe\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xb2"
                        "\\\",\\\"domain\\\":\\\"yandex.ru\\\",\\\"local\\\":\\\"alex.under1093\\\"}],\\\""
                        "labels\\\":[\\\"10\\\",\\\"14\\\",\\\"FAKE_MULCA_SHARED_LBL\\\",\\\"FAKE_RECENT_"
                        "LBL\\\"],\\\"labelsInfo\\\":{\\\"10\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\""
                        "\\\"}},\\\"14\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\"\\\"}},\\\"FAKE_MULCA"
                        "_SHARED_LBL\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\"mulcaShared_label\\\"}}"
                        ",\\\"FAKE_RECENT_LBL\\\":{\\\"symbolicName\\\":{\\\"title\\\":\\\"recent_label\\"
                        "\"}}},\\\"messageId\\\":\\\"<4047291574623325@myt2-dd3598211d70.qloud-c.yandex.n"
                        "et>\\\",\\\"mid\\\":\\\"170855310863368341\\\",\\\"size\\\":2165,\\\"subject\\\""
                        ":\\\"teeeeeeeeeeeeeeest\\\",\\\"tab\\\":\\\"\\\",\\\"threadId\\\":\\\"1708553108"
                        "63368340\\\",\\\"to\\\":[{\\\"displayName\\\":\\\"alex.under1093@yandex.ru\\\",\\"
                        "\"domain\\\":\\\"yandex.ru\\\",\\\"local\\\":\\\"alex.under1093\\\"}],\\\"types\\"
                        "\":[4,55]}],\\\"fid\\\":\\\"1\\\",\\\"freshCount\\\":1,\\\"lcn\\\":\\\"807\\\",\\"
                        "\"loc-args\\\":[\\\""
                        "\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80"
                        " "
                        "\xd0\xaf\xd0\xba\xd0\xbe\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xb2"
                        "\\\",\\\"teeeeeeeeeeeeeeest\\\",\\\"yoooooooooooooooooooooooooooooooo\\\"],\\\"m"
                        "id\\\":\\\"170855310863368341\\\",\\\"mids_str\\\":\\\"[\\\\\\\"1708553108633683"
                        "41\\\\\\\"]\\\",\\\"newCount\\\":4,\\\"operation\\\":\\\"insert\\\",\\\"sessionK"
                        "ey\\\":\\\"\\\",\\\"status\\\":\\\"New\\\",\\\"tab\\\":\\\"\\\",\\\"threadId\\\""
                        ":\\\"170855310863368340\\\",\\\"uid\\\":\\\"586221334\\\",\\\"uname\\\":\\\"1080"
                        "201457\\\"}\",\"tags\":[],\"position\":426}";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	// (record-time: 2300 bytes)

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char WebSocketReceive7[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"un"
                        "supported\",\"lcn\":\"808\",\"session_key\":\"LIZA-88874651-1574623259044\",\"se"
                        "rver_notify_id\":\"5Me3PSefIeA1:JMeeFkifWqM1.JMeFRWg0xa61:u2709:mail\",\"bright\""
                        ":true,\"message\":{\"lcn\":\"808\",\"operation\":\"reset fresh\",\"session_key\""
                        ":\"LIZA-88874651-1574623259044\",\"uid\":\"586221334\",\"uname\":\"1080201457\"}"
                        ",\"raw_data\":\"{\\\"lcn\\\":\\\"808\\\",\\\"operation\\\":\\\"reset fresh\\\",\\"
                        "\"sessionKey\\\":\\\"LIZA-88874651-1574623259044\\\",\\\"uid\\\":\\\"586221334\\"
                        "\",\\\"uname\\\":\\\"1080201457\\\"}\",\"tags\":[],\"position\":427}";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	// (record-time: 530 bytes)

#endif
