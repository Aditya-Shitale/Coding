import numpy as np
import skfuzzy as fuzz
from skfuzzy import control as ctrl
# New Antecedet/Consequent objets hold universe variables and membership
# functions
quality = ctrl.Antecedent (np.arange(0,11, 1), 'quality')
service = ctrl.Antecedent(np.arange(0,11,1), 'service')
tip = ctrl.Consequent(np.arange(0, 26,1), 'tip')
# Auto-membership functon population possible with .automf(3,5,or7)
quality.automf(3)
service.automf(3)
#Custom membership functions can be buit interactively with a familar,
#Pythonic APT
tip ['low'] = fuzz.trimf(tip.universe, [0,0,13])
tip[ 'medium']= fuzz.trimf (tip.universe, [0, 13,25])
tip ['high'] = fuzz.trimf(tip.universe, [13,25,25])
quality ['averge'].view()
service.view()
tip.view()
rule1 = ctrl.Rule(quality[ 'poor'] |service[ 'poor'] , tip[ 'low'])
rule2= ctrl.Rule(service['average'], tip['medium'])
rule3=  ctrl.Rule(service['good']| quality[ 'good'], tip ['high'])
rule1.view()
tipping_ctrl = ctrl.ControlSystem([rule1, rule2, rule3])
tipping = ctrl.ControlSystemSimulation(tipping_ctrl)
tipping.input['quality'] = 6.5
tipping.input[ 'service'] = 9.8
# Crunch the numbers
tipping.compute()
tip.view(sim=tipping)
print(tipping.output[ 'tip'] )