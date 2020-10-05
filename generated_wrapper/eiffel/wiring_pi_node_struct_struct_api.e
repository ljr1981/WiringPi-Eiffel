note

	description: "This file has been generated by WrapC. Do not edit. Changes will be lost!"

	generator: "Eiffel Wrapper Generator"

class WIRING_PI_NODE_STRUCT_STRUCT_API

inherit

	MEMORY_STRUCTURE

	
create

	make,
	make_by_pointer

feature -- Measurement

	structure_size: INTEGER 
		do
			Result := sizeof_external
		end

feature {ANY} -- Member Access

	pinbase: INTEGER
			-- Access member `pinBase`
		require
			exists: exists
		do
			Result := c_pinbase (item)
		ensure
			result_correct: Result = c_pinbase (item)
		end

	set_pinbase (a_value: INTEGER) 
			-- Change the value of member `pinBase` to `a_value`.
		require
			exists: exists
		do
			set_c_pinbase (item, a_value)
		ensure
			pinbase_set: a_value = pinbase
		end

	pinmax: INTEGER
			-- Access member `pinMax`
		require
			exists: exists
		do
			Result := c_pinmax (item)
		ensure
			result_correct: Result = c_pinmax (item)
		end

	set_pinmax (a_value: INTEGER) 
			-- Change the value of member `pinMax` to `a_value`.
		require
			exists: exists
		do
			set_c_pinmax (item, a_value)
		ensure
			pinmax_set: a_value = pinmax
		end

	fd: INTEGER
			-- Access member `fd`
		require
			exists: exists
		do
			Result := c_fd (item)
		ensure
			result_correct: Result = c_fd (item)
		end

	set_fd (a_value: INTEGER) 
			-- Change the value of member `fd` to `a_value`.
		require
			exists: exists
		do
			set_c_fd (item, a_value)
		ensure
			fd_set: a_value = fd
		end

	data0: NATURAL
			-- Access member `data0`
		require
			exists: exists
		do
			Result := c_data0 (item)
		ensure
			result_correct: Result = c_data0 (item)
		end

	set_data0 (a_value: NATURAL) 
			-- Change the value of member `data0` to `a_value`.
		require
			exists: exists
		do
			set_c_data0 (item, a_value)
		ensure
			data0_set: a_value = data0
		end

	data1: NATURAL
			-- Access member `data1`
		require
			exists: exists
		do
			Result := c_data1 (item)
		ensure
			result_correct: Result = c_data1 (item)
		end

	set_data1 (a_value: NATURAL) 
			-- Change the value of member `data1` to `a_value`.
		require
			exists: exists
		do
			set_c_data1 (item, a_value)
		ensure
			data1_set: a_value = data1
		end

	data2: NATURAL
			-- Access member `data2`
		require
			exists: exists
		do
			Result := c_data2 (item)
		ensure
			result_correct: Result = c_data2 (item)
		end

	set_data2 (a_value: NATURAL) 
			-- Change the value of member `data2` to `a_value`.
		require
			exists: exists
		do
			set_c_data2 (item, a_value)
		ensure
			data2_set: a_value = data2
		end

	data3: NATURAL
			-- Access member `data3`
		require
			exists: exists
		do
			Result := c_data3 (item)
		ensure
			result_correct: Result = c_data3 (item)
		end

	set_data3 (a_value: NATURAL) 
			-- Change the value of member `data3` to `a_value`.
		require
			exists: exists
		do
			set_c_data3 (item, a_value)
		ensure
			data3_set: a_value = data3
		end

	pinmode: POINTER
			-- Access member `pinMode`
		require
			exists: exists
		do
			Result := c_pinmode (item)
		ensure
			result_correct: Result = c_pinmode (item)
		end

	set_pinmode (a_value: POINTER) 
			-- Change the value of member `pinMode` to `a_value`.
		require
			exists: exists
		do
			set_c_pinmode (item, a_value)
		ensure
			pinmode_set: a_value = pinmode
		end

	pullupdncontrol: POINTER
			-- Access member `pullUpDnControl`
		require
			exists: exists
		do
			Result := c_pullupdncontrol (item)
		ensure
			result_correct: Result = c_pullupdncontrol (item)
		end

	set_pullupdncontrol (a_value: POINTER) 
			-- Change the value of member `pullUpDnControl` to `a_value`.
		require
			exists: exists
		do
			set_c_pullupdncontrol (item, a_value)
		ensure
			pullupdncontrol_set: a_value = pullupdncontrol
		end

	digitalread: POINTER
			-- Access member `digitalRead`
		require
			exists: exists
		do
			Result := c_digitalread (item)
		ensure
			result_correct: Result = c_digitalread (item)
		end

	set_digitalread (a_value: POINTER) 
			-- Change the value of member `digitalRead` to `a_value`.
		require
			exists: exists
		do
			set_c_digitalread (item, a_value)
		ensure
			digitalread_set: a_value = digitalread
		end

	digitalwrite: POINTER
			-- Access member `digitalWrite`
		require
			exists: exists
		do
			Result := c_digitalwrite (item)
		ensure
			result_correct: Result = c_digitalwrite (item)
		end

	set_digitalwrite (a_value: POINTER) 
			-- Change the value of member `digitalWrite` to `a_value`.
		require
			exists: exists
		do
			set_c_digitalwrite (item, a_value)
		ensure
			digitalwrite_set: a_value = digitalwrite
		end

	pwmwrite: POINTER
			-- Access member `pwmWrite`
		require
			exists: exists
		do
			Result := c_pwmwrite (item)
		ensure
			result_correct: Result = c_pwmwrite (item)
		end

	set_pwmwrite (a_value: POINTER) 
			-- Change the value of member `pwmWrite` to `a_value`.
		require
			exists: exists
		do
			set_c_pwmwrite (item, a_value)
		ensure
			pwmwrite_set: a_value = pwmwrite
		end

	analogread: POINTER
			-- Access member `analogRead`
		require
			exists: exists
		do
			Result := c_analogread (item)
		ensure
			result_correct: Result = c_analogread (item)
		end

	set_analogread (a_value: POINTER) 
			-- Change the value of member `analogRead` to `a_value`.
		require
			exists: exists
		do
			set_c_analogread (item, a_value)
		ensure
			analogread_set: a_value = analogread
		end

	analogwrite: POINTER
			-- Access member `analogWrite`
		require
			exists: exists
		do
			Result := c_analogwrite (item)
		ensure
			result_correct: Result = c_analogwrite (item)
		end

	set_analogwrite (a_value: POINTER) 
			-- Change the value of member `analogWrite` to `a_value`.
		require
			exists: exists
		do
			set_c_analogwrite (item, a_value)
		ensure
			analogwrite_set: a_value = analogwrite
		end

	next: detachable WIRING_PI_NODE_STRUCT_STRUCT_API 
			-- Access member `next`
		require
			exists: exists
		do
			if attached c_next (item) as l_ptr and then not l_ptr.is_default_pointer then
				create Result.make_by_pointer (l_ptr)
			end
		ensure
			result_void: Result = Void implies c_next (item) = default_pointer 
			result_not_void: attached Result as l_result implies l_result.item = c_next (item) 
		end

	set_next (a_value: WIRING_PI_NODE_STRUCT_STRUCT_API) 
			-- Set member `next`
		require
			a_value_not_void: a_value /= Void
			exists: exists
		do
			set_c_next (item, a_value.item)
		ensure
			next_set: attached next as l_value implies l_value.item = a_value.item
		end

feature {NONE} -- Implementation wrapper for struct struct wiringPiNodeStruct

	sizeof_external: INTEGER 
		external
			"C inline use <wiringPi.h>"
		alias
			"sizeof(struct wiringPiNodeStruct)"
		end

	c_pinbase (an_item: POINTER): INTEGER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pinBase
			]"
		end

	set_c_pinbase (an_item: POINTER; a_value: INTEGER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pinBase =  (int)$a_value
			]"
		ensure
			pinbase_set: a_value = c_pinbase (an_item)
		end

	c_pinmax (an_item: POINTER): INTEGER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pinMax
			]"
		end

	set_c_pinmax (an_item: POINTER; a_value: INTEGER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pinMax =  (int)$a_value
			]"
		ensure
			pinmax_set: a_value = c_pinmax (an_item)
		end

	c_fd (an_item: POINTER): INTEGER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->fd
			]"
		end

	set_c_fd (an_item: POINTER; a_value: INTEGER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->fd =  (int)$a_value
			]"
		ensure
			fd_set: a_value = c_fd (an_item)
		end

	c_data0 (an_item: POINTER): NATURAL
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->data0
			]"
		end

	set_c_data0 (an_item: POINTER; a_value: NATURAL) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->data0 =  (unsigned int)$a_value
			]"
		ensure
			data0_set: a_value = c_data0 (an_item)
		end

	c_data1 (an_item: POINTER): NATURAL
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->data1
			]"
		end

	set_c_data1 (an_item: POINTER; a_value: NATURAL) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->data1 =  (unsigned int)$a_value
			]"
		ensure
			data1_set: a_value = c_data1 (an_item)
		end

	c_data2 (an_item: POINTER): NATURAL
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->data2
			]"
		end

	set_c_data2 (an_item: POINTER; a_value: NATURAL) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->data2 =  (unsigned int)$a_value
			]"
		ensure
			data2_set: a_value = c_data2 (an_item)
		end

	c_data3 (an_item: POINTER): NATURAL
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->data3
			]"
		end

	set_c_data3 (an_item: POINTER; a_value: NATURAL) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->data3 =  (unsigned int)$a_value
			]"
		ensure
			data3_set: a_value = c_data3 (an_item)
		end

	c_pinmode (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pinMode
			]"
		end

	set_c_pinmode (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pinMode =  (void (*) (struct wiringPiNodeStruct *node, int pin, int mode))$a_value
			]"
		ensure
			pinmode_set: a_value = c_pinmode (an_item)
		end

	c_pullupdncontrol (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pullUpDnControl
			]"
		end

	set_c_pullupdncontrol (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pullUpDnControl =  (void (*) (struct wiringPiNodeStruct *node, int pin, int mode))$a_value
			]"
		ensure
			pullupdncontrol_set: a_value = c_pullupdncontrol (an_item)
		end

	c_digitalread (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->digitalRead
			]"
		end

	set_c_digitalread (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->digitalRead =  (int (*) (struct wiringPiNodeStruct *node, int pin))$a_value
			]"
		ensure
			digitalread_set: a_value = c_digitalread (an_item)
		end

	c_digitalwrite (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->digitalWrite
			]"
		end

	set_c_digitalwrite (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->digitalWrite =  (void (*) (struct wiringPiNodeStruct *node, int pin, int value))$a_value
			]"
		ensure
			digitalwrite_set: a_value = c_digitalwrite (an_item)
		end

	c_pwmwrite (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pwmWrite
			]"
		end

	set_c_pwmwrite (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->pwmWrite =  (void (*) (struct wiringPiNodeStruct *node, int pin, int value))$a_value
			]"
		ensure
			pwmwrite_set: a_value = c_pwmwrite (an_item)
		end

	c_analogread (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->analogRead
			]"
		end

	set_c_analogread (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->analogRead =  (int (*) (struct wiringPiNodeStruct *node, int pin))$a_value
			]"
		ensure
			analogread_set: a_value = c_analogread (an_item)
		end

	c_analogwrite (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->analogWrite
			]"
		end

	set_c_analogwrite (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->analogWrite =  (void (*) (struct wiringPiNodeStruct *node, int pin, int value))$a_value
			]"
		ensure
			analogwrite_set: a_value = c_analogwrite (an_item)
		end

	c_next (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->next
			]"
		end

	set_c_next (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <wiringPi.h>"
		alias
			"[
				((struct wiringPiNodeStruct*)$an_item)->next =  (struct wiringPiNodeStruct*)$a_value
			]"
		ensure
			next_set: a_value = c_next (an_item)
		end

end
