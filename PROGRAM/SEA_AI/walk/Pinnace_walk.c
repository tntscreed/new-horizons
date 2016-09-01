int Pinnace_walk_count;
float Pinnace_walk_verts[168];
int Pinnace_walk_types[56];
int Pinnace_walk_graph[112];

void Pinnace_walk_init()
{
	Pinnace_walk_count = 56;

	Pinnace_walk_verts[0 ] = 0.615476;
	Pinnace_walk_verts[1 ] = 16.935413;
	Pinnace_walk_verts[2 ] = 12.898634;
	Pinnace_walk_verts[3 ] = 0.717821;
	Pinnace_walk_verts[4 ] = 19.554276;
	Pinnace_walk_verts[5 ] = -0.756122;
	Pinnace_walk_verts[6 ] = -0.735879;
	Pinnace_walk_verts[7 ] = 19.554276;
	Pinnace_walk_verts[8 ] = -0.756122;
	Pinnace_walk_verts[9 ] = -0.629206;
	Pinnace_walk_verts[10] = 16.845657;
	Pinnace_walk_verts[11] = 12.705607;
	Pinnace_walk_verts[12] = -2.233167;
	Pinnace_walk_verts[13] = 5.175592;
	Pinnace_walk_verts[14] = 17.569794;
	Pinnace_walk_verts[15] = 1.974808;
	Pinnace_walk_verts[16] = 5.175592;
	Pinnace_walk_verts[17] = 17.786545;
	Pinnace_walk_verts[18] = -3.361789;
	Pinnace_walk_verts[19] = 5.115059;
	Pinnace_walk_verts[20] = 13.127536;
	Pinnace_walk_verts[21] = 2.848957;
	Pinnace_walk_verts[22] = 5.115059;
	Pinnace_walk_verts[23] = 13.837378;
	Pinnace_walk_verts[24] = -0.078166;
	Pinnace_walk_verts[25] = 4.587509;
	Pinnace_walk_verts[26] = 4.378553;
	Pinnace_walk_verts[27] = -3.114865;
	Pinnace_walk_verts[28] = 4.518448;
	Pinnace_walk_verts[29] = 8.974421;
	Pinnace_walk_verts[30] = -3.470551;
	Pinnace_walk_verts[31] = 4.582412;
	Pinnace_walk_verts[32] = -0.297185;
	Pinnace_walk_verts[33] = 3.223152;
	Pinnace_walk_verts[34] = 4.518447;
	Pinnace_walk_verts[35] = 9.938327;
	Pinnace_walk_verts[36] = 3.451671;
	Pinnace_walk_verts[37] = 4.582413;
	Pinnace_walk_verts[38] = -0.674065;
	Pinnace_walk_verts[39] = -0.057799;
	Pinnace_walk_verts[40] = 4.604630;
	Pinnace_walk_verts[41] = 9.682885;
	Pinnace_walk_verts[42] = -3.847866;
	Pinnace_walk_verts[43] = 6.582294;
	Pinnace_walk_verts[44] = -6.625780;
	Pinnace_walk_verts[45] = -1.723757;
	Pinnace_walk_verts[46] = 7.114859;
	Pinnace_walk_verts[47] = -13.433520;
	Pinnace_walk_verts[48] = 3.944843;
	Pinnace_walk_verts[49] = 4.545797;
	Pinnace_walk_verts[50] = 8.684860;
	Pinnace_walk_verts[51] = 4.068446;
	Pinnace_walk_verts[52] = 4.579824;
	Pinnace_walk_verts[53] = 3.663532;
	Pinnace_walk_verts[54] = 3.997576;
	Pinnace_walk_verts[55] = 4.650918;
	Pinnace_walk_verts[56] = 1.329721;
	Pinnace_walk_verts[57] = -4.086828;
	Pinnace_walk_verts[58] = 4.545797;
	Pinnace_walk_verts[59] = 8.738380;
	Pinnace_walk_verts[60] = -4.159597;
	Pinnace_walk_verts[61] = 4.545797;
	Pinnace_walk_verts[62] = 6.458970;
	Pinnace_walk_verts[63] = -4.069027;
	Pinnace_walk_verts[64] = 4.674424;
	Pinnace_walk_verts[65] = 1.333301;
	Pinnace_walk_verts[66] = -3.447898;
	Pinnace_walk_verts[67] = 6.752642;
	Pinnace_walk_verts[68] = -8.339391;
	Pinnace_walk_verts[69] = -3.318633;
	Pinnace_walk_verts[70] = 6.931665;
	Pinnace_walk_verts[71] = -11.348786;
	Pinnace_walk_verts[72] = 2.877361;
	Pinnace_walk_verts[73] = 7.013072;
	Pinnace_walk_verts[74] = -12.880598;
	Pinnace_walk_verts[75] = 3.199487;
	Pinnace_walk_verts[76] = 6.853168;
	Pinnace_walk_verts[77] = -9.659597;
	Pinnace_walk_verts[78] = -0.057799;
	Pinnace_walk_verts[79] = 7.066145;
	Pinnace_walk_verts[80] = -14.902248;
	Pinnace_walk_verts[81] = -0.057799;
	Pinnace_walk_verts[82] = 7.066145;
	Pinnace_walk_verts[83] = -16.178907;
	Pinnace_walk_verts[84] = 6.075652;
	Pinnace_walk_verts[85] = 5.639649;
	Pinnace_walk_verts[86] = 13.165161;
	Pinnace_walk_verts[87] = -6.170890;
	Pinnace_walk_verts[88] = 5.641936;
	Pinnace_walk_verts[89] = 13.053889;
	Pinnace_walk_verts[90] = -6.687665;
	Pinnace_walk_verts[91] = 6.597604;
	Pinnace_walk_verts[92] = -4.019571;
	Pinnace_walk_verts[93] = 6.579353;
	Pinnace_walk_verts[94] = 6.453833;
	Pinnace_walk_verts[95] = -3.982839;
	Pinnace_walk_verts[96] = 1.470388;
	Pinnace_walk_verts[97] = 19.817812;
	Pinnace_walk_verts[98] = 12.899589;
	Pinnace_walk_verts[99] = -1.163451;
	Pinnace_walk_verts[100] = 19.817818;
	Pinnace_walk_verts[101] = 13.341375;
	Pinnace_walk_verts[102] = -1.317818;
	Pinnace_walk_verts[103] = 24.346348;
	Pinnace_walk_verts[104] = 0.787457;
	Pinnace_walk_verts[105] = 0.882753;
	Pinnace_walk_verts[106] = 24.346348;
	Pinnace_walk_verts[107] = -0.171567;
	Pinnace_walk_verts[108] = -1.583877;
	Pinnace_walk_verts[109] = 6.487851;
	Pinnace_walk_verts[110] = -3.660583;
	Pinnace_walk_verts[111] = 1.307787;
	Pinnace_walk_verts[112] = 6.474010;
	Pinnace_walk_verts[113] = -3.489797;
	Pinnace_walk_verts[114] = 2.295116;
	Pinnace_walk_verts[115] = 7.114859;
	Pinnace_walk_verts[116] = -13.433520;
	Pinnace_walk_verts[117] = -0.046156;
	Pinnace_walk_verts[118] = 9.930684;
	Pinnace_walk_verts[119] = -16.535456;
	Pinnace_walk_verts[120] = 1.137607;
	Pinnace_walk_verts[121] = 10.497839;
	Pinnace_walk_verts[122] = -20.288239;
	Pinnace_walk_verts[123] = -1.419498;
	Pinnace_walk_verts[124] = 10.822654;
	Pinnace_walk_verts[125] = -21.887796;
	Pinnace_walk_verts[126] = 1.083498;
	Pinnace_walk_verts[127] = 11.063104;
	Pinnace_walk_verts[128] = -23.434393;
	Pinnace_walk_verts[129] = -3.016721;
	Pinnace_walk_verts[130] = 5.115061;
	Pinnace_walk_verts[131] = 11.456815;
	Pinnace_walk_verts[132] = -3.016721;
	Pinnace_walk_verts[133] = 4.566534;
	Pinnace_walk_verts[134] = 10.636077;
	Pinnace_walk_verts[135] = 2.775763;
	Pinnace_walk_verts[136] = 4.566534;
	Pinnace_walk_verts[137] = 10.636077;
	Pinnace_walk_verts[138] = 2.479045;
	Pinnace_walk_verts[139] = 5.115061;
	Pinnace_walk_verts[140] = 11.456815;
	Pinnace_walk_verts[141] = -4.155637;
	Pinnace_walk_verts[142] = 4.688717;
	Pinnace_walk_verts[143] = -1.988064;
	Pinnace_walk_verts[144] = -4.186572;
	Pinnace_walk_verts[145] = 6.582294;
	Pinnace_walk_verts[146] = -5.062115;
	Pinnace_walk_verts[147] = 4.294425;
	Pinnace_walk_verts[148] = 4.688717;
	Pinnace_walk_verts[149] = -1.983017;
	Pinnace_walk_verts[150] = 4.012543;
	Pinnace_walk_verts[151] = 6.582293;
	Pinnace_walk_verts[152] = -5.062115;
	Pinnace_walk_verts[153] = 3.347971;
	Pinnace_walk_verts[154] = 7.041961;
	Pinnace_walk_verts[155] = -14.511342;
	Pinnace_walk_verts[156] = 2.261377;
	Pinnace_walk_verts[157] = 10.371703;
	Pinnace_walk_verts[158] = -19.032461;
	Pinnace_walk_verts[159] = -2.329640;
	Pinnace_walk_verts[160] = 10.371704;
	Pinnace_walk_verts[161] = -19.026096;
	Pinnace_walk_verts[162] = -3.490485;
	Pinnace_walk_verts[163] = 7.041962;
	Pinnace_walk_verts[164] = -14.511342;
	Pinnace_walk_verts[165] = 3.327520;
	Pinnace_walk_verts[166] = 6.758777;
	Pinnace_walk_verts[167] = -8.267797;

	Pinnace_walk_types[0 ] = 4;
	Pinnace_walk_types[1 ] = 4;
	Pinnace_walk_types[2 ] = 4;
	Pinnace_walk_types[3 ] = 4;
	Pinnace_walk_types[4 ] = 0;
	Pinnace_walk_types[5 ] = 0;
	Pinnace_walk_types[6 ] = 0;
	Pinnace_walk_types[7 ] = 0;
	Pinnace_walk_types[8 ] = 0;
	Pinnace_walk_types[9 ] = 0;
	Pinnace_walk_types[10] = 0;
	Pinnace_walk_types[11] = 0;
	Pinnace_walk_types[12] = 0;
	Pinnace_walk_types[13] = 0;
	Pinnace_walk_types[14] = 0;
	Pinnace_walk_types[15] = 0;
	Pinnace_walk_types[16] = 1;
	Pinnace_walk_types[17] = 1;
	Pinnace_walk_types[18] = 1;
	Pinnace_walk_types[19] = 1;
	Pinnace_walk_types[20] = 1;
	Pinnace_walk_types[21] = 1;
	Pinnace_walk_types[22] = 1;
	Pinnace_walk_types[23] = 1;
	Pinnace_walk_types[24] = 1;
	Pinnace_walk_types[25] = 1;
	Pinnace_walk_types[26] = 2;
	Pinnace_walk_types[27] = 3;
	Pinnace_walk_types[28] = 5;
	Pinnace_walk_types[29] = 5;
	Pinnace_walk_types[30] = 5;
	Pinnace_walk_types[31] = 5;
	Pinnace_walk_types[32] = 6;
	Pinnace_walk_types[33] = 6;
	Pinnace_walk_types[34] = 6;
	Pinnace_walk_types[35] = 6;
	Pinnace_walk_types[36] = 0;
	Pinnace_walk_types[37] = 0;
	Pinnace_walk_types[38] = 0;
	Pinnace_walk_types[39] = 0;
	Pinnace_walk_types[40] = 0;
	Pinnace_walk_types[41] = 0;
	Pinnace_walk_types[42] = 0;
	Pinnace_walk_types[43] = 0;
	Pinnace_walk_types[44] = 0;
	Pinnace_walk_types[45] = 0;
	Pinnace_walk_types[46] = 0;
	Pinnace_walk_types[47] = 0;
	Pinnace_walk_types[48] = 0;
	Pinnace_walk_types[49] = 0;
	Pinnace_walk_types[50] = 0;
	Pinnace_walk_types[51] = 0;
	Pinnace_walk_types[52] = 0;
	Pinnace_walk_types[53] = 0;
	Pinnace_walk_types[54] = 0;
	Pinnace_walk_types[55] = 1;

	Pinnace_walk_graph[0 ] = (26)*256 + (27);
	Pinnace_walk_graph[1 ] = (26)*256 + (38);
	Pinnace_walk_graph[2 ] = (38)*256 + (24);
	Pinnace_walk_graph[3 ] = (24)*256 + (51);
	Pinnace_walk_graph[4 ] = (51)*256 + (38);
	Pinnace_walk_graph[5 ] = (26)*256 + (15);
	Pinnace_walk_graph[6 ] = (15)*256 + (54);
	Pinnace_walk_graph[7 ] = (15)*256 + (23);
	Pinnace_walk_graph[8 ] = (24)*256 + (25);
	Pinnace_walk_graph[9 ] = (25)*256 + (55);
	Pinnace_walk_graph[10] = (55)*256 + (50);
	Pinnace_walk_graph[11] = (54)*256 + (23);
	Pinnace_walk_graph[12] = (23)*256 + (22);
	Pinnace_walk_graph[13] = (22)*256 + (14);
	Pinnace_walk_graph[14] = (14)*256 + (48);
	Pinnace_walk_graph[15] = (48)*256 + (36);
	Pinnace_walk_graph[16] = (36)*256 + (37);
	Pinnace_walk_graph[17] = (37)*256 + (50);
	Pinnace_walk_graph[18] = (22)*256 + (55);
	Pinnace_walk_graph[19] = (23)*256 + (25);
	Pinnace_walk_graph[20] = (23)*256 + (55);
	Pinnace_walk_graph[21] = (22)*256 + (25);
	Pinnace_walk_graph[22] = (23)*256 + (50);
	Pinnace_walk_graph[23] = (48)*256 + (25);
	Pinnace_walk_graph[24] = (36)*256 + (15);
	Pinnace_walk_graph[25] = (26)*256 + (54);
	Pinnace_walk_graph[26] = (26)*256 + (51);
	Pinnace_walk_graph[27] = (37)*256 + (24);
	Pinnace_walk_graph[28] = (36)*256 + (22);
	Pinnace_walk_graph[29] = (36)*256 + (23);
	Pinnace_walk_graph[30] = (37)*256 + (55);
	Pinnace_walk_graph[31] = (47)*256 + (48); // here goes the 2nd deck
	Pinnace_walk_graph[32] = (47)*256 + (10);
	Pinnace_walk_graph[33] = (10)*256 + (21);
	Pinnace_walk_graph[34] = (21)*256 + (47);
	Pinnace_walk_graph[35] = (21)*256 + (20);
	Pinnace_walk_graph[36] = (50)*256 + (49);
	Pinnace_walk_graph[37] = (49)*256 + (12);
	Pinnace_walk_graph[38] = (12)*256 + (18);
	Pinnace_walk_graph[39] = (18)*256 + (49);
	Pinnace_walk_graph[40] = (18)*256 + (17);
	Pinnace_walk_graph[41] = (17)*256 + (16);
	Pinnace_walk_graph[42] = (17)*256 + (8);
	Pinnace_walk_graph[43] = (8)*256 + (20);
	Pinnace_walk_graph[44] = (8)*256 + (21);
	Pinnace_walk_graph[45] = (8)*256 + (16);
	Pinnace_walk_graph[46] = (20)*256 + (19);
	Pinnace_walk_graph[47] = (9)*256 + (20);
	Pinnace_walk_graph[48] = (9)*256 + (19);
	Pinnace_walk_graph[49] = (9)*256 + (44);
	Pinnace_walk_graph[50] = (19)*256 + (44);
	Pinnace_walk_graph[51] = (44)*256 + (43);
	Pinnace_walk_graph[52] = (43)*256 + (6);
	Pinnace_walk_graph[53] = (8)*256 + (18);
	Pinnace_walk_graph[54] = (8)*256 + (13);
	Pinnace_walk_graph[55] = (13)*256 + (44);
	Pinnace_walk_graph[56] = (13)*256 + (9);
	Pinnace_walk_graph[57] = (13)*256 + (20);
	Pinnace_walk_graph[58] = (13)*256 + (10);
	Pinnace_walk_graph[59] = (13)*256 + (17);
	Pinnace_walk_graph[60] = (13)*256 + (16);
	Pinnace_walk_graph[61] = (13)*256 + (18);
	Pinnace_walk_graph[62] = (16)*256 + (11);
	Pinnace_walk_graph[63] = (11)*256 + (45);
	Pinnace_walk_graph[64] = (13)*256 + (45);
	Pinnace_walk_graph[65] = (45)*256 + (46);
	Pinnace_walk_graph[66] = (8)*256 + (10); 
	Pinnace_walk_graph[67] = (6)*256 + (4); // nose
	Pinnace_walk_graph[68] = (4)*256 + (5);
	Pinnace_walk_graph[69] = (5)*256 + (7);
	Pinnace_walk_graph[70] = (7)*256 + (46);
	Pinnace_walk_graph[71] = (6)*256 + (5);
	Pinnace_walk_graph[72] = (54)*256 + (53); // tail
	Pinnace_walk_graph[73] = (53)*256 + (41);
	Pinnace_walk_graph[74] = (41)*256 + (42);
	Pinnace_walk_graph[75] = (42)*256 + (40);
	Pinnace_walk_graph[76] = (40)*256 + (52);
	Pinnace_walk_graph[77] = (52)*256 + (51);
	Pinnace_walk_graph[78] = (53)*256 + (40);
	Pinnace_walk_graph[79] = (53)*256 + (52);
	Pinnace_walk_graph[80] = (41)*256 + (40);
	Pinnace_walk_graph[81] = (42)*256 + (52);
	Pinnace_walk_graph[82] = (40)*256 + (39);
	Pinnace_walk_graph[83] = (41)*256 + (39);
	Pinnace_walk_graph[84] = (42)*256 + (39); 
	Pinnace_walk_graph[85] = (37)*256 + (38); // adds
	Pinnace_walk_graph[86] = (24)*256 + (14);
	Pinnace_walk_graph[87] = (21)*256 + (13);
	Pinnace_walk_graph[88] = (4)*256 + (7);
	Pinnace_walk_graph[89] = (50)*256 + (31); // masts
	Pinnace_walk_graph[90] = (48)*256 + (30);
	Pinnace_walk_graph[91] = (31)*256 + (1);
	Pinnace_walk_graph[92] = (1)*256 + (35);
	Pinnace_walk_graph[93] = (30)*256 + (2);
	Pinnace_walk_graph[94] = (2)*256 + (34);
	Pinnace_walk_graph[95] = (6)*256 + (29);
	Pinnace_walk_graph[96] = (7)*256 + (28);
	Pinnace_walk_graph[97] = (28)*256 + (0);
	Pinnace_walk_graph[98] = (0)*256 + (32);
	Pinnace_walk_graph[99] = (29)*256 + (3);
	Pinnace_walk_graph[100] = (3)*256 + (33);
	Pinnace_walk_graph[101] = (-1)*256 + (-1);
	Pinnace_walk_graph[102] = (-1)*256 + (-1);
	Pinnace_walk_graph[103] = (-1)*256 + (-1);
	Pinnace_walk_graph[104] = (-1)*256 + (-1);
	Pinnace_walk_graph[105] = (-1)*256 + (-1);
	Pinnace_walk_graph[106] = (-1)*256 + (-1);
	Pinnace_walk_graph[107] = (-1)*256 + (-1);
	Pinnace_walk_graph[108] = (-1)*256 + (-1);
	Pinnace_walk_graph[109] = (-1)*256 + (-1);
	Pinnace_walk_graph[110] = (-1)*256 + (-1);
	Pinnace_walk_graph[111] = (-1)*256 + (-1);
}
