note
	description: "Summary description for {TEST_APP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			--
		local
			l_api: WIRINGPI_FUNCTIONS_API
		do
			create l_api
			print ("wiring_pi_setup = " + l_api.wiring_pi_setup.out)

		end

end
