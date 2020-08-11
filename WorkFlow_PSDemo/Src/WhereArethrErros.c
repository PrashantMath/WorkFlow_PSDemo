int new_position(int sensor_pos1, int sensor_pos2)
{
char actuator_position;
char bug;
int x, y, tmp_pos, magnitude;

actuator_position = 2; /* default */
tmp_pos = 0;           /* values */
magnitude = sensor_pos1 / 100;
y = magnitude + 5;
x = actuator_position;
//bug = 200;

while (actuator_position < 10)
        {
        actuator_position++;
        tmp_pos += sensor_pos2 / 100;
        y += 3;
        }
if ((3*magnitude + 100) > 43)
        {
        magnitude++;
       	x = actuator_position;
       	actuator_position = x / (x - y);
        }
return actuator_position + tmp_pos; /* new value */
}
