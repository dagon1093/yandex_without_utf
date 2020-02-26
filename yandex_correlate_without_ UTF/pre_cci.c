# 1 "c:\\users\\lol\\documents\\vugen\\scripts\\yandex_correlate_without_ utf\\\\combined_yandex_correlate_without_ UTF.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\lol\\documents\\vugen\\scripts\\yandex_correlate_without_ utf\\\\combined_yandex_correlate_without_ UTF.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\lol\\documents\\vugen\\scripts\\yandex_correlate_without_ utf\\\\combined_yandex_correlate_without_ UTF.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{ \"operation\": \"ping\", \"server-interval-sec\": 60 }";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 

 

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
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	 

 

char WebSocketReceive2[] = "{ \"operation\": \"ping\", \"server-interval-sec\": 60 }";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	 

 

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
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	 

 

char WebSocketReceive4[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"un"
                        "supported\",\"lcn\":\"805\",\"session_key\":\"LIZA-88874651-1574623259044\",\"se"
                        "rver_notify_id\":\"3MedASefJiE1:5MeZM5Jgv0U1.5Me8kv8wtGk1:u2709:mail\",\"bright\""
                        ":true,\"message\":{\"lcn\":\"805\",\"operation\":\"delete mails\",\"session_key\""
                        ":\"LIZA-88874651-1574623259044\"},\"raw_data\":\"{\\\"lcn\\\":\\\"805\\\",\\\"mi"
                        "ds\\\":[\\\"170855310863368339\\\"],\\\"operation\\\":\\\"delete mails\\\",\\\"s"
                        "essionKey\\\":\\\"LIZA-88874651-1574623259044\\\",\\\"uid\\\":\\\"586221334\\\","
                        "\\\"uname\\\":\\\"1080201457\\\"}\",\"tags\":[],\"position\":424}";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	 

 

char WebSocketReceive5[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"in"
                        "sert\",\"lcn\":\"806\",\"session_key\":\"\",\"server_notify_id\":\"tLefKRefICg1:"
                        "5MenTJWINCg1.5Meblv8wsuQ1:u2709:mail\",\"bright\":true,\"message\":{\"fid\":\"4\""
                        ",\"fid_type\":\"2\",\"firstline\":\"{Message}\",\"fresh_"
                        "count\":\"0\",\"hdr_from\":\"\\\"\\\\u0410\\\\u043b\\\\u0435\\\\u043a\\\\u0441\\"
                        "\\u0430\\\\u043d\\\\u0434\\\\u0440 \\\\u042f\\\\u043a\\\\u043e\\\\u0432\\\\u043b"
                        "\\\\u0435\\\\u0432\\\" <alex.under1093@yandex.ru>\",\"hdr_message_id\":\"<404729"
                        "1574623325@myt2-dd3598211d70.qloud-c.yandex.net>\",\"hdr_status\":\"RO\",\"hdr_s"
                        "ubject\":\"{subject}\",\"hdr_to\":\"\\\"alex.under1093@yandex.ru\\\" <a"
                        "lex.under1093@yandex.ru>\",\"lcn\":\"806\",\"lid\":\"10,14,FAKE_MULCA_SHARED_LBL"
                        ",FAKE_RECENT_LBL,FAKE_SEEN_LBL\",\"mid\":\"170855310863368340\",\"new_messages\""
                        ":\"3\",\"operation\":\"insert\",\"received_date\":\"24.11.2019 22:22:05\",\"sz\""
                        ":\"2165\",\"thread_id\":\"170855310863368340\",\"uid\":\"586221334\",\"uname\":\""
                        "1080201457\"},\"raw_data\":\"{\\\"counters\\\":[1,44,3,12,4,32,6,2],\\\"counters"
                        "New\\\":[1,4,3,5],\\\"envelopes\\\":[{\\\"date\\\":1574623325,\\\"fid\\\":\\\"4\\"
                        "\",\\\"fidType\\\":2,\\\"firstline\\\":\\\"{Message}\\\""
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
                        ":2165,\\\"subject\\\":\\\"{subject}\\\",\\\"tab\\\":\\\"\\\",\\\"thread"
                        "Id\\\":\\\"170855310863368340\\\",\\\"to\\\":[{\\\"displayName\\\":\\\"alex.unde"
                        "r1093@yandex.ru\\\",\\\"domain\\\":\\\"yandex.ru\\\",\\\"local\\\":\\\"alex.unde"
                        "r1093\\\"}],\\\"types\\\":[4,55]}],\\\"fid\\\":\\\"4\\\",\\\"freshCount\\\":0,\\"
                        "\"lcn\\\":\\\"806\\\",\\\"loc-args\\\":[\\\""
                        "\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80"
                        " "
                        "\xd0\xaf\xd0\xba\xd0\xbe\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xb2"
                        "\\\",\\\"{subject}\\\",\\\"{Message}\\\"],\\\"m"
                        "id\\\":\\\"170855310863368340\\\",\\\"mids_str\\\":\\\"[\\\\\\\"1708553108633683"
                        "40\\\\\\\"]\\\",\\\"newCount\\\":3,\\\"operation\\\":\\\"insert\\\",\\\"sessionK"
                        "ey\\\":\\\"\\\",\\\"status\\\":\\\"RO\\\",\\\"tab\\\":\\\"\\\",\\\"threadId\\\":"
                        "\\\"170855310863368340\\\",\\\"uid\\\":\\\"586221334\\\",\\\"uname\\\":\\\"10802"
                        "01457\\\"}\",\"tags\":[],\"position\":425}";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	 

 

char WebSocketReceive6[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"in"
                        "sert\",\"lcn\":\"807\",\"session_key\":\"\",\"server_notify_id\":\"vLeGVRefJeA1:"
                        "5MeKbI0fNa61.5Meblv8wsuQ1:u2709:mail\",\"bright\":true,\"message\":{\"fid\":\"1\""
                        ",\"fid_type\":\"1\",\"firstline\":\"{Message}\",\"fresh_"
                        "count\":\"1\",\"hdr_from\":\"\\\"\\\\u0410\\\\u043b\\\\u0435\\\\u043a\\\\u0441\\"
                        "\\u0430\\\\u043d\\\\u0434\\\\u0440 \\\\u042f\\\\u043a\\\\u043e\\\\u0432\\\\u043b"
                        "\\\\u0435\\\\u0432\\\" <alex.under1093@yandex.ru>\",\"hdr_message_id\":\"<404729"
                        "1574623325@myt2-dd3598211d70.qloud-c.yandex.net>\",\"hdr_status\":\"New\",\"hdr_"
                        "subject\":\"{subject}\",\"hdr_to\":\"\\\"alex.under1093@yandex.ru\\\" <"
                        "alex.under1093@yandex.ru>\",\"lcn\":\"807\",\"lid\":\"10,14,FAKE_MULCA_SHARED_LB"
                        "L,FAKE_RECENT_LBL\",\"mid\":\"170855310863368341\",\"new_messages\":\"4\",\"oper"
                        "ation\":\"insert\",\"received_date\":\"24.11.2019 22:22:05\",\"sz\":\"2165\",\"t"
                        "hread_id\":\"170855310863368340\",\"uid\":\"586221334\",\"uname\":\"1080201457\""
                        "},\"raw_data\":\"{\\\"counters\\\":[1,44,3,12,4,32,6,2],\\\"countersNew\\\":[1,4"
                        ",3,5],\\\"envelopes\\\":[{\\\"date\\\":1574623325,\\\"fid\\\":\\\"1\\\",\\\"fidT"
                        "ype\\\":1,\\\"firstline\\\":\\\"{Message}\\\",\\\"from\\"
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
                        ":\\\"{subject}\\\",\\\"tab\\\":\\\"\\\",\\\"threadId\\\":\\\"1708553108"
                        "63368340\\\",\\\"to\\\":[{\\\"displayName\\\":\\\"alex.under1093@yandex.ru\\\",\\"
                        "\"domain\\\":\\\"yandex.ru\\\",\\\"local\\\":\\\"alex.under1093\\\"}],\\\"types\\"
                        "\":[4,55]}],\\\"fid\\\":\\\"1\\\",\\\"freshCount\\\":1,\\\"lcn\\\":\\\"807\\\",\\"
                        "\"loc-args\\\":[\\\""
                        "\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80"
                        " "
                        "\xd0\xaf\xd0\xba\xd0\xbe\xd0\xb2\xd0\xbb\xd0\xb5\xd0\xb2"
                        "\\\",\\\"{subject}\\\",\\\"{Message}\\\"],\\\"m"
                        "id\\\":\\\"170855310863368341\\\",\\\"mids_str\\\":\\\"[\\\\\\\"1708553108633683"
                        "41\\\\\\\"]\\\",\\\"newCount\\\":4,\\\"operation\\\":\\\"insert\\\",\\\"sessionK"
                        "ey\\\":\\\"\\\",\\\"status\\\":\\\"New\\\",\\\"tab\\\":\\\"\\\",\\\"threadId\\\""
                        ":\\\"170855310863368340\\\",\\\"uid\\\":\\\"586221334\\\",\\\"uname\\\":\\\"1080"
                        "201457\\\"}\",\"tags\":[],\"position\":426}";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	 

 

char WebSocketReceive7[] = "{\"version\":\"1\",\"uid\":\"586221334\",\"service\":\"mail\",\"operation\":\"un"
                        "supported\",\"lcn\":\"808\",\"session_key\":\"LIZA-88874651-1574623259044\",\"se"
                        "rver_notify_id\":\"5Me3PSefIeA1:JMeeFkifWqM1.JMeFRWg0xa61:u2709:mail\",\"bright\""
                        ":true,\"message\":{\"lcn\":\"808\",\"operation\":\"reset fresh\",\"session_key\""
                        ":\"LIZA-88874651-1574623259044\",\"uid\":\"586221334\",\"uname\":\"1080201457\"}"
                        ",\"raw_data\":\"{\\\"lcn\\\":\\\"808\\\",\\\"operation\\\":\\\"reset fresh\\\",\\"
                        "\"sessionKey\\\":\\\"LIZA-88874651-1574623259044\\\",\\\"uid\\\":\\\"586221334\\"
                        "\",\\\"uname\\\":\\\"1080201457\\\"}\",\"tags\":[],\"position\":427}";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	 


# 10 "globals.h" 2


 
 


# 3 "c:\\users\\lol\\documents\\vugen\\scripts\\yandex_correlate_without_ utf\\\\combined_yandex_correlate_without_ UTF.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\lol\\documents\\vugen\\scripts\\yandex_correlate_without_ utf\\\\combined_yandex_correlate_without_ UTF.c" 2

# 1 "Action.c" 1
Action()
{
	
	lr_start_transaction("0_homepage");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 





	web_reg_save_param_regexp(
		"ParamName=yu",
		"RegExp=yandexuid=(.*?)&",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/mail.yandex.ru/*",
		"LAST");

	web_reg_find("Search=Body",	"Text=Войти","LAST");

	web_url("mail.yandex.ru", 
		"URL=http://mail.yandex.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("0_homepage", 2);
	
	
	
	

	lr_start_transaction("1_login");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 





	web_reg_save_param_regexp(
		"ParamName=reqid",
		"RegExp=reqid:'(.*?)'",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/auth*",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=process_uuid",
		"RegExp=process_uuid=(.*?)&quot",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/auth*",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=csrf_token",
		"RegExp=data-csrf=\"(.*?)\" data-metrics-id",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/auth*",
		"LAST");

	web_url("auth", 
		"URL=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("1_login",2);

	

	lr_start_transaction("2_login");

	 

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 





	web_reg_save_param_json(
		"ParamName=track_id",
		"QueryString=$.track_id",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

 





	web_reg_save_param_json(
		"ParamName=CorrelationParameter",
		"QueryString=$.magic_link_email",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_submit_data("start",
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/start",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/auth?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1",
		"Snapshot=t16.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token}", "ENDITEM",
		"Name=login", "Value={email}", "ENDITEM",
		"Name=process_uuid", "Value={process_uuid}", "ENDITEM",
		"Name=retpath", "Value=https://mail.yandex.ru/", "ENDITEM",
		"Name=origin", "Value=hostroot_homer_auth_ru", "ENDITEM",
		"Name=service", "Value=mail", "ENDITEM",
		"LAST");

	web_convert_param("CorrelationParameter_URL1",
		"SourceString={CorrelationParameter}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 





	web_reg_save_param_regexp(
		"ParamName=uid",
		"RegExp=X-Default-UID: (.*?)\r\n",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"LAST");

	web_reg_find("Search=All","Text=ok","LAST");
			
	web_submit_data("commit_password",
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/commit_password",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1",
		"Snapshot=t20.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token}", "ENDITEM",
		"Name=track_id", "Value={track_id}", "ENDITEM",
		"Name=password", "Value={password}", "ENDITEM",
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 





	web_reg_save_param_json(
		"ParamName=csrf_token_1",
		"QueryString=$.csrf",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_submit_data("accounts",
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token}", "ENDITEM",
		"LAST");

	web_submit_data("ask_v2",
		"Action=https://passport.yandex.ru/registration-validations/auth/additional_data/ask_v2",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/auth/welcome?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1",
		"Snapshot=t24.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token_1}", "ENDITEM",
		"Name=uid", "Value={uid}", "ENDITEM",
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 





	web_reg_save_param_regexp(
		"ParamName=reqid_1",
		"RegExp=reqid=(.*?);",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/mail.yandex.ru/*",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=\"ckey\":\"(.*?)\"}},",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/mail.yandex.ru/*",
		"LAST");
		
		web_reg_find("Search=Body",	"Text=Контакты", "LAST");

	web_url("redirect", 
		"URL=https://passport.yandex.ru/redirect?url=https%3A%2F%2Fmail.yandex.ru%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://passport.yandex.ru/auth/list?from=mail&origin=hostroot_homer_auth_ru&retpath=https%3A%2F%2Fmail.yandex.ru%2F&backpath=https%3A%2F%2Fmail.yandex.ru%3Fnoretpath%3D1&mode=edit", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_convert_param("CorrelationParameter_1_URL2",
		"SourceString={CorrelationParameter_1}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		"LAST");


	 

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
		"LAST");


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
		"LAST");

	lr_end_transaction("2_login",2);

	
	
	
	lr_start_transaction("4_send_message");

	 

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"qLexxQefJqM1:tLe4B95iQqM1.sLeAQZm474Y1:u2709:mail\"}", 
		"IsBinary=0", 
		"LAST");

	 

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_reg_find("Search=All","Text=ok","LAST");

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
		"LAST");


	 

	 

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"0Me2pRefHSw1:5Me0IJlgJOs1.5Me8kv8wtGk1:u2709:mail\"}", 
		"IsBinary=0", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"3MedASefJiE1:5MeZM5Jgv0U1.5Me8kv8wtGk1:u2709:mail\"}", 
		"IsBinary=0", 
		"LAST");


	 

	 

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"tLefKRefICg1:5MenTJWINCg1.5Meblv8wsuQ1:u2709:mail\"}", 
		"IsBinary=0", 
		"LAST");

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"vLeGVRefJeA1:5MeKbI0fNa61.5Meblv8wsuQ1:u2709:mail\"}", 
		"IsBinary=0", 
		"LAST");

	lr_end_transaction("4_send_message",2);


	

	lr_start_transaction("5_logout");

	 

	web_websocket_send("ID=0", 
		"Buffer={\"reaction\":\"ack\",\"parsed\":true,\"server_notify_id\":\"5Me3PSefIeA1:JMeeFkifWqM1.JMeFRWg0xa61:u2709:mail\"}", 
		"IsBinary=0", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=All","Text=Написать", "LAST");
	
	web_url("passport",
		"URL=https://passport.yandex.ru/passport?mode=embeddedauth&action=logout&uid={uid}&yu={yu}&retpath=https%3A%2F%2Fyandex.ru",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://mail.yandex.ru/",
		"Snapshot=t119.inf",
		"Mode=HTML",
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));

 





	web_reg_save_param_regexp(
		"ParamName=reqid_2",
		"RegExp=reqid:'(.*?)'",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/auth*",
		"LAST");

	web_reg_find("Search=Body",	"Text=Войти", "LAST");
	
	web_url("mail.yandex.ru_2",
		"URL=https://mail.yandex.ru/?uid={uid}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://mail.yandex.ru/",
		"Snapshot=t120.inf",
		"Mode=HTML",
		"LAST");

	web_websocket_close("ID=0", 
		"Code=1001", 
		"LAST");

	lr_end_transaction("5_logout",2);

	return 0;
}
# 5 "c:\\users\\lol\\documents\\vugen\\scripts\\yandex_correlate_without_ utf\\\\combined_yandex_correlate_without_ UTF.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\lol\\documents\\vugen\\scripts\\yandex_correlate_without_ utf\\\\combined_yandex_correlate_without_ UTF.c" 2

