# A rock, paper, scissors, lizard, spock simulation
# Created by: Asad Zia

from random import randrange

def name_to_number (name):
	if name == 'rock':
		return 0
	elif name == 'Spock':
		return 1
	elif name == 'paper':
		return 2
	elif name == 'lizard':
		return 3
	elif name == 'scissors':
		return 4
	else:
		print ('Please enter the correct choice!\n')

def number_to_name (number):
	if number == 0:
		return 'rock'
	elif number == 1:
		return 'Spock'
	elif number == 2:
		return 'paper'
	elif number == 3:
		return 'lizard'
	elif number == 4:
		return 'scissors'

def rpsls (player_choice):
	# print a blank line to separate consecutive games
	print

	# print out the message for the player's choice
	print ('Player chooses %s' % player_choice)

	# convert the player's choice to player_number using the function name_to_number()
	player_number = name_to_number(player_choice)
	# compute random guess for comp_number using random.randrange()
	comp_number = randrange(0, 5)
	 # convert comp_number to comp_choice using the function number_to_name()
	comp_choice = number_to_name(comp_number)

	# print out the message for computer's choice
	print('Computer chooses %s' % comp_choice)

	 # compute difference of comp_number and player_number modulo five
	dif = (comp_number - player_number) % 5


	if dif == 1 or dif == 2:
		print('Computer Wins!')
	elif dif == 3 or dif == 4:
		print('Player Wins!')
	else:
		print('It is a Tie!')


# Testing the Code
rpsls("rock")
rpsls("Spock")
rpsls("paper")
rpsls("lizard")
rpsls("scissors")
