#include <ewg_eiffel.h>
#include <ewg_eWiringPi_callback_c_glue_code.h>

#ifdef _MSC_VER
#pragma warning (disable:4715) // Not all control paths return a value
#endif
void* void_void_anonymous_callback_object =  NULL;
void_void_anonymous_callback_eiffel_feature void_void_anonymous_callback_address_1 = NULL;
void_void_anonymous_callback_eiffel_feature void_void_anonymous_callback_address_2 = NULL;
void_void_anonymous_callback_eiffel_feature void_void_anonymous_callback_address_3 = NULL;

void set_void_void_anonymous_callback_object (void* a_object)
{
	if (a_object) {
		void_void_anonymous_callback_object = eif_protect(a_object);
	} else { 
		void_void_anonymous_callback_object = NULL;
	}
}

void release_void_void_anonymous_callback_object ()
{
	eif_wean (void_void_anonymous_callback_object);
}

void void_void_anonymous_callback_stub_1 ()
{
	if (void_void_anonymous_callback_object != NULL && void_void_anonymous_callback_address_1 != NULL)
	{
		void_void_anonymous_callback_address_1 (eif_access(void_void_anonymous_callback_object));
	}
}

void void_void_anonymous_callback_stub_2 ()
{
	if (void_void_anonymous_callback_object != NULL && void_void_anonymous_callback_address_2 != NULL)
	{
		void_void_anonymous_callback_address_2 (eif_access(void_void_anonymous_callback_object));
	}
}

void void_void_anonymous_callback_stub_3 ()
{
	if (void_void_anonymous_callback_object != NULL && void_void_anonymous_callback_address_3 != NULL)
	{
		void_void_anonymous_callback_address_3 (eif_access(void_void_anonymous_callback_object));
	}
}

void set_void_void_anonymous_callback_entry_1 (void* a_feature){
	void_void_anonymous_callback_address_1 = (void_void_anonymous_callback_eiffel_feature) a_feature;
}

void set_void_void_anonymous_callback_entry_2 (void* a_feature){
	void_void_anonymous_callback_address_2 = (void_void_anonymous_callback_eiffel_feature) a_feature;
}

void set_void_void_anonymous_callback_entry_3 (void* a_feature){
	void_void_anonymous_callback_address_3 = (void_void_anonymous_callback_eiffel_feature) a_feature;
}

void* get_void_void_anonymous_callback_stub_1 (){
	return (void*) void_void_anonymous_callback_stub_1;
}

void* get_void_void_anonymous_callback_stub_2 (){
	return (void*) void_void_anonymous_callback_stub_2;
}

void* get_void_void_anonymous_callback_stub_3 (){
	return (void*) void_void_anonymous_callback_stub_3;
}

void call_void_void_anonymous_callback (void *a_function)
{
	((void (*) ())a_function) ();
}

void* voidp_voidp_anonymous_callback_object =  NULL;
voidp_voidp_anonymous_callback_eiffel_feature voidp_voidp_anonymous_callback_address_1 = NULL;
voidp_voidp_anonymous_callback_eiffel_feature voidp_voidp_anonymous_callback_address_2 = NULL;
voidp_voidp_anonymous_callback_eiffel_feature voidp_voidp_anonymous_callback_address_3 = NULL;

void set_voidp_voidp_anonymous_callback_object (void* a_object)
{
	if (a_object) {
		voidp_voidp_anonymous_callback_object = eif_protect(a_object);
	} else { 
		voidp_voidp_anonymous_callback_object = NULL;
	}
}

void release_voidp_voidp_anonymous_callback_object ()
{
	eif_wean (voidp_voidp_anonymous_callback_object);
}

void *voidp_voidp_anonymous_callback_stub_1 (void *anonymous_1)
{
	if (voidp_voidp_anonymous_callback_object != NULL && voidp_voidp_anonymous_callback_address_1 != NULL)
	{
		return voidp_voidp_anonymous_callback_address_1 (eif_access(voidp_voidp_anonymous_callback_object), anonymous_1);
	}
}

void *voidp_voidp_anonymous_callback_stub_2 (void *anonymous_1)
{
	if (voidp_voidp_anonymous_callback_object != NULL && voidp_voidp_anonymous_callback_address_2 != NULL)
	{
		return voidp_voidp_anonymous_callback_address_2 (eif_access(voidp_voidp_anonymous_callback_object), anonymous_1);
	}
}

void *voidp_voidp_anonymous_callback_stub_3 (void *anonymous_1)
{
	if (voidp_voidp_anonymous_callback_object != NULL && voidp_voidp_anonymous_callback_address_3 != NULL)
	{
		return voidp_voidp_anonymous_callback_address_3 (eif_access(voidp_voidp_anonymous_callback_object), anonymous_1);
	}
}

void set_voidp_voidp_anonymous_callback_entry_1 (void* a_feature){
	voidp_voidp_anonymous_callback_address_1 = (voidp_voidp_anonymous_callback_eiffel_feature) a_feature;
}

void set_voidp_voidp_anonymous_callback_entry_2 (void* a_feature){
	voidp_voidp_anonymous_callback_address_2 = (voidp_voidp_anonymous_callback_eiffel_feature) a_feature;
}

void set_voidp_voidp_anonymous_callback_entry_3 (void* a_feature){
	voidp_voidp_anonymous_callback_address_3 = (voidp_voidp_anonymous_callback_eiffel_feature) a_feature;
}

void* get_voidp_voidp_anonymous_callback_stub_1 (){
	return (void*) voidp_voidp_anonymous_callback_stub_1;
}

void* get_voidp_voidp_anonymous_callback_stub_2 (){
	return (void*) voidp_voidp_anonymous_callback_stub_2;
}

void* get_voidp_voidp_anonymous_callback_stub_3 (){
	return (void*) voidp_voidp_anonymous_callback_stub_3;
}

void *call_voidp_voidp_anonymous_callback (void *a_function, void *anonymous_1)
{
	return ((void *(*) (void *anonymous_1))a_function) (anonymous_1);
}

void* void_structwiringpinodestructp_int_int_anonymous_callback_1_object =  NULL;
void_structwiringpinodestructp_int_int_anonymous_callback_1_eiffel_feature void_structwiringpinodestructp_int_int_anonymous_callback_1_address_1 = NULL;
void_structwiringpinodestructp_int_int_anonymous_callback_1_eiffel_feature void_structwiringpinodestructp_int_int_anonymous_callback_1_address_2 = NULL;
void_structwiringpinodestructp_int_int_anonymous_callback_1_eiffel_feature void_structwiringpinodestructp_int_int_anonymous_callback_1_address_3 = NULL;

void set_void_structwiringpinodestructp_int_int_anonymous_callback_1_object (void* a_object)
{
	if (a_object) {
		void_structwiringpinodestructp_int_int_anonymous_callback_1_object = eif_protect(a_object);
	} else { 
		void_structwiringpinodestructp_int_int_anonymous_callback_1_object = NULL;
	}
}

void release_void_structwiringpinodestructp_int_int_anonymous_callback_1_object ()
{
	eif_wean (void_structwiringpinodestructp_int_int_anonymous_callback_1_object);
}

void void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_1 (struct wiringPiNodeStruct *node, int pin, int mode)
{
	if (void_structwiringpinodestructp_int_int_anonymous_callback_1_object != NULL && void_structwiringpinodestructp_int_int_anonymous_callback_1_address_1 != NULL)
	{
		void_structwiringpinodestructp_int_int_anonymous_callback_1_address_1 (eif_access(void_structwiringpinodestructp_int_int_anonymous_callback_1_object), node, pin, mode);
	}
}

void void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_2 (struct wiringPiNodeStruct *node, int pin, int mode)
{
	if (void_structwiringpinodestructp_int_int_anonymous_callback_1_object != NULL && void_structwiringpinodestructp_int_int_anonymous_callback_1_address_2 != NULL)
	{
		void_structwiringpinodestructp_int_int_anonymous_callback_1_address_2 (eif_access(void_structwiringpinodestructp_int_int_anonymous_callback_1_object), node, pin, mode);
	}
}

void void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_3 (struct wiringPiNodeStruct *node, int pin, int mode)
{
	if (void_structwiringpinodestructp_int_int_anonymous_callback_1_object != NULL && void_structwiringpinodestructp_int_int_anonymous_callback_1_address_3 != NULL)
	{
		void_structwiringpinodestructp_int_int_anonymous_callback_1_address_3 (eif_access(void_structwiringpinodestructp_int_int_anonymous_callback_1_object), node, pin, mode);
	}
}

void set_void_structwiringpinodestructp_int_int_anonymous_callback_1_entry_1 (void* a_feature){
	void_structwiringpinodestructp_int_int_anonymous_callback_1_address_1 = (void_structwiringpinodestructp_int_int_anonymous_callback_1_eiffel_feature) a_feature;
}

void set_void_structwiringpinodestructp_int_int_anonymous_callback_1_entry_2 (void* a_feature){
	void_structwiringpinodestructp_int_int_anonymous_callback_1_address_2 = (void_structwiringpinodestructp_int_int_anonymous_callback_1_eiffel_feature) a_feature;
}

void set_void_structwiringpinodestructp_int_int_anonymous_callback_1_entry_3 (void* a_feature){
	void_structwiringpinodestructp_int_int_anonymous_callback_1_address_3 = (void_structwiringpinodestructp_int_int_anonymous_callback_1_eiffel_feature) a_feature;
}

void* get_void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_1 (){
	return (void*) void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_1;
}

void* get_void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_2 (){
	return (void*) void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_2;
}

void* get_void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_3 (){
	return (void*) void_structwiringpinodestructp_int_int_anonymous_callback_1_stub_3;
}

void call_void_structwiringpinodestructp_int_int_anonymous_callback_1 (void *a_function, struct wiringPiNodeStruct *node, int pin, int mode)
{
	((void (*) (struct wiringPiNodeStruct *node, int pin, int mode))a_function) (node, pin, mode);
}

void* int_structwiringpinodestructp_int_anonymous_callback_object =  NULL;
int_structwiringpinodestructp_int_anonymous_callback_eiffel_feature int_structwiringpinodestructp_int_anonymous_callback_address_1 = NULL;
int_structwiringpinodestructp_int_anonymous_callback_eiffel_feature int_structwiringpinodestructp_int_anonymous_callback_address_2 = NULL;
int_structwiringpinodestructp_int_anonymous_callback_eiffel_feature int_structwiringpinodestructp_int_anonymous_callback_address_3 = NULL;

void set_int_structwiringpinodestructp_int_anonymous_callback_object (void* a_object)
{
	if (a_object) {
		int_structwiringpinodestructp_int_anonymous_callback_object = eif_protect(a_object);
	} else { 
		int_structwiringpinodestructp_int_anonymous_callback_object = NULL;
	}
}

void release_int_structwiringpinodestructp_int_anonymous_callback_object ()
{
	eif_wean (int_structwiringpinodestructp_int_anonymous_callback_object);
}

int int_structwiringpinodestructp_int_anonymous_callback_stub_1 (struct wiringPiNodeStruct *node, int pin)
{
	if (int_structwiringpinodestructp_int_anonymous_callback_object != NULL && int_structwiringpinodestructp_int_anonymous_callback_address_1 != NULL)
	{
		return int_structwiringpinodestructp_int_anonymous_callback_address_1 (eif_access(int_structwiringpinodestructp_int_anonymous_callback_object), node, pin);
	}
}

int int_structwiringpinodestructp_int_anonymous_callback_stub_2 (struct wiringPiNodeStruct *node, int pin)
{
	if (int_structwiringpinodestructp_int_anonymous_callback_object != NULL && int_structwiringpinodestructp_int_anonymous_callback_address_2 != NULL)
	{
		return int_structwiringpinodestructp_int_anonymous_callback_address_2 (eif_access(int_structwiringpinodestructp_int_anonymous_callback_object), node, pin);
	}
}

int int_structwiringpinodestructp_int_anonymous_callback_stub_3 (struct wiringPiNodeStruct *node, int pin)
{
	if (int_structwiringpinodestructp_int_anonymous_callback_object != NULL && int_structwiringpinodestructp_int_anonymous_callback_address_3 != NULL)
	{
		return int_structwiringpinodestructp_int_anonymous_callback_address_3 (eif_access(int_structwiringpinodestructp_int_anonymous_callback_object), node, pin);
	}
}

void set_int_structwiringpinodestructp_int_anonymous_callback_entry_1 (void* a_feature){
	int_structwiringpinodestructp_int_anonymous_callback_address_1 = (int_structwiringpinodestructp_int_anonymous_callback_eiffel_feature) a_feature;
}

void set_int_structwiringpinodestructp_int_anonymous_callback_entry_2 (void* a_feature){
	int_structwiringpinodestructp_int_anonymous_callback_address_2 = (int_structwiringpinodestructp_int_anonymous_callback_eiffel_feature) a_feature;
}

void set_int_structwiringpinodestructp_int_anonymous_callback_entry_3 (void* a_feature){
	int_structwiringpinodestructp_int_anonymous_callback_address_3 = (int_structwiringpinodestructp_int_anonymous_callback_eiffel_feature) a_feature;
}

void* get_int_structwiringpinodestructp_int_anonymous_callback_stub_1 (){
	return (void*) int_structwiringpinodestructp_int_anonymous_callback_stub_1;
}

void* get_int_structwiringpinodestructp_int_anonymous_callback_stub_2 (){
	return (void*) int_structwiringpinodestructp_int_anonymous_callback_stub_2;
}

void* get_int_structwiringpinodestructp_int_anonymous_callback_stub_3 (){
	return (void*) int_structwiringpinodestructp_int_anonymous_callback_stub_3;
}

int call_int_structwiringpinodestructp_int_anonymous_callback (void *a_function, struct wiringPiNodeStruct *node, int pin)
{
	return ((int (*) (struct wiringPiNodeStruct *node, int pin))a_function) (node, pin);
}

void* void_structwiringpinodestructp_int_int_anonymous_callback_object =  NULL;
void_structwiringpinodestructp_int_int_anonymous_callback_eiffel_feature void_structwiringpinodestructp_int_int_anonymous_callback_address_1 = NULL;
void_structwiringpinodestructp_int_int_anonymous_callback_eiffel_feature void_structwiringpinodestructp_int_int_anonymous_callback_address_2 = NULL;
void_structwiringpinodestructp_int_int_anonymous_callback_eiffel_feature void_structwiringpinodestructp_int_int_anonymous_callback_address_3 = NULL;

void set_void_structwiringpinodestructp_int_int_anonymous_callback_object (void* a_object)
{
	if (a_object) {
		void_structwiringpinodestructp_int_int_anonymous_callback_object = eif_protect(a_object);
	} else { 
		void_structwiringpinodestructp_int_int_anonymous_callback_object = NULL;
	}
}

void release_void_structwiringpinodestructp_int_int_anonymous_callback_object ()
{
	eif_wean (void_structwiringpinodestructp_int_int_anonymous_callback_object);
}

void void_structwiringpinodestructp_int_int_anonymous_callback_stub_1 (struct wiringPiNodeStruct *node, int pin, int value)
{
	if (void_structwiringpinodestructp_int_int_anonymous_callback_object != NULL && void_structwiringpinodestructp_int_int_anonymous_callback_address_1 != NULL)
	{
		void_structwiringpinodestructp_int_int_anonymous_callback_address_1 (eif_access(void_structwiringpinodestructp_int_int_anonymous_callback_object), node, pin, value);
	}
}

void void_structwiringpinodestructp_int_int_anonymous_callback_stub_2 (struct wiringPiNodeStruct *node, int pin, int value)
{
	if (void_structwiringpinodestructp_int_int_anonymous_callback_object != NULL && void_structwiringpinodestructp_int_int_anonymous_callback_address_2 != NULL)
	{
		void_structwiringpinodestructp_int_int_anonymous_callback_address_2 (eif_access(void_structwiringpinodestructp_int_int_anonymous_callback_object), node, pin, value);
	}
}

void void_structwiringpinodestructp_int_int_anonymous_callback_stub_3 (struct wiringPiNodeStruct *node, int pin, int value)
{
	if (void_structwiringpinodestructp_int_int_anonymous_callback_object != NULL && void_structwiringpinodestructp_int_int_anonymous_callback_address_3 != NULL)
	{
		void_structwiringpinodestructp_int_int_anonymous_callback_address_3 (eif_access(void_structwiringpinodestructp_int_int_anonymous_callback_object), node, pin, value);
	}
}

void set_void_structwiringpinodestructp_int_int_anonymous_callback_entry_1 (void* a_feature){
	void_structwiringpinodestructp_int_int_anonymous_callback_address_1 = (void_structwiringpinodestructp_int_int_anonymous_callback_eiffel_feature) a_feature;
}

void set_void_structwiringpinodestructp_int_int_anonymous_callback_entry_2 (void* a_feature){
	void_structwiringpinodestructp_int_int_anonymous_callback_address_2 = (void_structwiringpinodestructp_int_int_anonymous_callback_eiffel_feature) a_feature;
}

void set_void_structwiringpinodestructp_int_int_anonymous_callback_entry_3 (void* a_feature){
	void_structwiringpinodestructp_int_int_anonymous_callback_address_3 = (void_structwiringpinodestructp_int_int_anonymous_callback_eiffel_feature) a_feature;
}

void* get_void_structwiringpinodestructp_int_int_anonymous_callback_stub_1 (){
	return (void*) void_structwiringpinodestructp_int_int_anonymous_callback_stub_1;
}

void* get_void_structwiringpinodestructp_int_int_anonymous_callback_stub_2 (){
	return (void*) void_structwiringpinodestructp_int_int_anonymous_callback_stub_2;
}

void* get_void_structwiringpinodestructp_int_int_anonymous_callback_stub_3 (){
	return (void*) void_structwiringpinodestructp_int_int_anonymous_callback_stub_3;
}

void call_void_structwiringpinodestructp_int_int_anonymous_callback (void *a_function, struct wiringPiNodeStruct *node, int pin, int value)
{
	((void (*) (struct wiringPiNodeStruct *node, int pin, int value))a_function) (node, pin, value);
}

