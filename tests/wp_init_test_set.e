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
			l_env: EXECUTION_ENVIRONMENT
		do
			create l_api
			create l_env
			l_env.sleep (1_000_000_000)
			assert_integers_not_equal ("not_fail", -1, l_api.wiring_pi_setup)
		end

end


