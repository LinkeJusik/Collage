import time
tiempo_segundos = time.time()
print(tiempo_segundos)  # 1488651001.7188754 segundos

tiempo_cadena = time.ctime(tiempo_segundos) # 1488651001.7188754 seg
print(tiempo_cadena)  # Sat Mar  4 19:10:01 2017

# Operando con tiempos

print(time.gmtime(tiempo_segundos))

#tiempo_segundos = 1488651001.7188754
tiempo_segundos = tiempo_segundos + 86400  # Suma 1 día
print(time.ctime(tiempo_segundos))  # Sun Mar  5 19:10:01 2017

import textwrap
#import time

available_clocks = [
    ('clock', time.clock),
    ('monotonic', time.monotonic),
    ('perf_counter', time.perf_counter),
    ('process_time', time.process_time),
    ('time', time.time),
]

for clock_name, func in available_clocks:
    print(textwrap.dedent('''\
    {name}:
        adjustable    : {info.adjustable}
        implementation: {info.implementation}
        monotonic     : {info.monotonic}
        resolution    : {info.resolution}
        current       : {current}
    ''').format(
        name=clock_name,
        info=time.get_clock_info(clock_name),
        current=func())
    )