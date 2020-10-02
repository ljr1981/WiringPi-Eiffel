note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	WP_INIT_TEST_SET

inherit
	TEST_SET_SUPPORT

feature -- Test routines

	wiringpi_init_test
			-- wiringPi init test
		local
			l_api: WIRINGPI_FUNCTIONS_API
		do
			create l_api
		end

end


