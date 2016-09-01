int DutchPinnace_walk_count;
float DutchPinnace_walk_verts[129];
int DutchPinnace_walk_types[43];
int DutchPinnace_walk_graph[46];

void DutchPinnace_walk_init()
{
        DutchPinnace_walk_count = 43;

        DutchPinnace_walk_verts[0] = -1.35;
        DutchPinnace_walk_verts[1] = 1.52;
        DutchPinnace_walk_verts[2] = 0;
        DutchPinnace_walk_verts[3] = -1.35;
        DutchPinnace_walk_verts[4] = 1.49;
        DutchPinnace_walk_verts[5] = -3.5;
        DutchPinnace_walk_verts[6] = 1.35;
        DutchPinnace_walk_verts[7] = 1.52;
        DutchPinnace_walk_verts[8] = 0;
        DutchPinnace_walk_verts[9] = 1.35;
        DutchPinnace_walk_verts[10] = 1.49;
        DutchPinnace_walk_verts[11] = -3.5;
        DutchPinnace_walk_verts[12] = -1.35;
        DutchPinnace_walk_verts[13] = 1.49;
        DutchPinnace_walk_verts[14] = -6.5;
        DutchPinnace_walk_verts[15] = -2.25;
        DutchPinnace_walk_verts[16] = 1.49;
        DutchPinnace_walk_verts[17] = -6.5;
        DutchPinnace_walk_verts[18] = -2.25;
        DutchPinnace_walk_verts[19] = 3.405;
        DutchPinnace_walk_verts[20] = -6.5;
        DutchPinnace_walk_verts[21] = -2.25;
        DutchPinnace_walk_verts[22] = 3.405;
        DutchPinnace_walk_verts[23] = -8.03;
        DutchPinnace_walk_verts[24] = -1.8;
        DutchPinnace_walk_verts[25] = 3.64;
        DutchPinnace_walk_verts[26] = -12.06;
        DutchPinnace_walk_verts[27] = -1.8;
        DutchPinnace_walk_verts[28] = 3.67;
        DutchPinnace_walk_verts[29] = -14.33;
        DutchPinnace_walk_verts[30] = 2.25;
        DutchPinnace_walk_verts[31] = 3.405;
        DutchPinnace_walk_verts[32] = -8.03;
        DutchPinnace_walk_verts[33] = 1.8;
        DutchPinnace_walk_verts[34] = 3.64;
        DutchPinnace_walk_verts[35] = -12.06;
        DutchPinnace_walk_verts[36] = -1.8;
        DutchPinnace_walk_verts[37] = 5.68;
        DutchPinnace_walk_verts[38] = -14.96;
        DutchPinnace_walk_verts[39] = -1.6;
        DutchPinnace_walk_verts[40] = 5.82;
        DutchPinnace_walk_verts[41] = -15.96;
        DutchPinnace_walk_verts[42] = -1.6;
        DutchPinnace_walk_verts[43] = 5.82;
        DutchPinnace_walk_verts[44] = -15.96;
        DutchPinnace_walk_verts[45] = -2.75;
        DutchPinnace_walk_verts[46] = 1.53;
        DutchPinnace_walk_verts[47] = 0.9;
        DutchPinnace_walk_verts[48] = -2.75;
        DutchPinnace_walk_verts[49] = 3.47;
        DutchPinnace_walk_verts[50] = 1.4;
        DutchPinnace_walk_verts[51] = -2.75;
        DutchPinnace_walk_verts[52] = 3.47;
        DutchPinnace_walk_verts[53] = 2.2;
        DutchPinnace_walk_verts[54] = -1.4;
        DutchPinnace_walk_verts[55] = 3.62;
        DutchPinnace_walk_verts[56] = 4.39;
        DutchPinnace_walk_verts[57] = 2.75;
        DutchPinnace_walk_verts[58] = 1.53;
        DutchPinnace_walk_verts[59] = 0.9;
        DutchPinnace_walk_verts[60] = 2.75;
        DutchPinnace_walk_verts[61] = 3.47;
        DutchPinnace_walk_verts[62] = 1.4;
        DutchPinnace_walk_verts[63] = 2.75;
        DutchPinnace_walk_verts[64] = 3.47;
        DutchPinnace_walk_verts[65] = 2.2;
        DutchPinnace_walk_verts[66] = 1.4;
        DutchPinnace_walk_verts[67] = 3.62;
        DutchPinnace_walk_verts[68] = 4.39;
        DutchPinnace_walk_verts[69] = -2.11;
        DutchPinnace_walk_verts[70] = 3.67;
        DutchPinnace_walk_verts[71] = 5.15;
        DutchPinnace_walk_verts[72] = 2.11;
        DutchPinnace_walk_verts[73] = 3.67;
        DutchPinnace_walk_verts[74] = 5.15;
        DutchPinnace_walk_verts[75] = -2.25;
        DutchPinnace_walk_verts[76] = 1.47;
        DutchPinnace_walk_verts[77] = -0.8;
        DutchPinnace_walk_verts[78] = -2.25;
        DutchPinnace_walk_verts[79] = 1.47;
        DutchPinnace_walk_verts[80] = -2.65;
        DutchPinnace_walk_verts[81] = -2.25;
        DutchPinnace_walk_verts[82] = 1.47;
        DutchPinnace_walk_verts[83] = -5.5;
        DutchPinnace_walk_verts[84] = 2.25;
        DutchPinnace_walk_verts[85] = 1.47;
        DutchPinnace_walk_verts[86] = -0.8;
        DutchPinnace_walk_verts[87] = 2.25;
        DutchPinnace_walk_verts[88] = 1.47;
        DutchPinnace_walk_verts[89] = -2.65;
        DutchPinnace_walk_verts[90] = 2.25;
        DutchPinnace_walk_verts[91] = 1.47;
        DutchPinnace_walk_verts[92] = -5.5;
        DutchPinnace_walk_verts[93] = -3.96;
        DutchPinnace_walk_verts[94] = 2.99;
        DutchPinnace_walk_verts[95] = 2.88;
        DutchPinnace_walk_verts[96] = -0.4;
        DutchPinnace_walk_verts[97] = 14.62;
        DutchPinnace_walk_verts[98] = 6.189;
        DutchPinnace_walk_verts[99] = 3.96;
        DutchPinnace_walk_verts[100] = 2.99;
        DutchPinnace_walk_verts[101] = 2.88;
        DutchPinnace_walk_verts[102] = 0.4;
        DutchPinnace_walk_verts[103] = 14.62;
        DutchPinnace_walk_verts[104] = 6.189;
        DutchPinnace_walk_verts[105] = -3.75;
        DutchPinnace_walk_verts[106] = 3.07;
        DutchPinnace_walk_verts[107] = -9.15;
        DutchPinnace_walk_verts[108] = -0.4;
        DutchPinnace_walk_verts[109] = 15.8;
        DutchPinnace_walk_verts[110] = -6.48;
        DutchPinnace_walk_verts[111] = 3.75;
        DutchPinnace_walk_verts[112] = 3.07;
        DutchPinnace_walk_verts[113] = -9.15;
        DutchPinnace_walk_verts[114] = 0.4;
        DutchPinnace_walk_verts[115] = 15.8;
        DutchPinnace_walk_verts[116] = -6.48;
        DutchPinnace_walk_verts[117] = -3.32;
        DutchPinnace_walk_verts[118] = 4.25;
        DutchPinnace_walk_verts[119] = -13.9;
        DutchPinnace_walk_verts[120] = -0.4;
        DutchPinnace_walk_verts[121] = 15.1;
        DutchPinnace_walk_verts[122] = -13.72;
        DutchPinnace_walk_verts[123] = 3.32;
        DutchPinnace_walk_verts[124] = 4.25;
        DutchPinnace_walk_verts[125] = -13.9;
        DutchPinnace_walk_verts[126] = 0.4;
        DutchPinnace_walk_verts[127] = 15.1;
        DutchPinnace_walk_verts[128] = -13.72;

        DutchPinnace_walk_types[0] = 0;
        DutchPinnace_walk_types[1] = 0;
        DutchPinnace_walk_types[2] = 0;
        DutchPinnace_walk_types[3] = 0;
        DutchPinnace_walk_types[4] = 0;
        DutchPinnace_walk_types[5] = 0;
        DutchPinnace_walk_types[6] = 0;
        DutchPinnace_walk_types[7] = 0;
        DutchPinnace_walk_types[8] = 0;
        DutchPinnace_walk_types[9] = 0;
        DutchPinnace_walk_types[10] = 0;
        DutchPinnace_walk_types[11] = 0;
        DutchPinnace_walk_types[12] = 0;
        DutchPinnace_walk_types[13] = 0;
        DutchPinnace_walk_types[14] = 0;
        DutchPinnace_walk_types[15] = 0;
        DutchPinnace_walk_types[16] = 0;
        DutchPinnace_walk_types[17] = 0;
        DutchPinnace_walk_types[18] = 0;
        DutchPinnace_walk_types[19] = 0;
        DutchPinnace_walk_types[20] = 0;
        DutchPinnace_walk_types[21] = 0;
        DutchPinnace_walk_types[22] = 0;
        DutchPinnace_walk_types[23] = 3;
        DutchPinnace_walk_types[24] = 3;
        DutchPinnace_walk_types[25] = 1;
        DutchPinnace_walk_types[26] = 1;
        DutchPinnace_walk_types[27] = 1;
        DutchPinnace_walk_types[28] = 2;
        DutchPinnace_walk_types[29] = 2;
        DutchPinnace_walk_types[30] = 2;
        DutchPinnace_walk_types[31] = 5;
        DutchPinnace_walk_types[32] = 6;
        DutchPinnace_walk_types[33] = 5;
        DutchPinnace_walk_types[34] = 6;
        DutchPinnace_walk_types[35] = 5;
        DutchPinnace_walk_types[36] = 4;
        DutchPinnace_walk_types[37] = 5;
        DutchPinnace_walk_types[38] = 4;
        DutchPinnace_walk_types[39] = 5;
        DutchPinnace_walk_types[40] = 4;
        DutchPinnace_walk_types[41] = 5;
        DutchPinnace_walk_types[42] = 4;

        DutchPinnace_walk_graph[0] = (0)*256 + (1);
        DutchPinnace_walk_graph[1] = (2)*256 + (3);
        DutchPinnace_walk_graph[2] = (0)*256 + (2);
        DutchPinnace_walk_graph[3] = (1)*256 + (3);
        DutchPinnace_walk_graph[4] = (1)*256 + (4);
        DutchPinnace_walk_graph[5] = (4)*256 + (5);
        DutchPinnace_walk_graph[6] = (5)*256 + (6);
        DutchPinnace_walk_graph[7] = (6)*256 + (7);
        DutchPinnace_walk_graph[8] = (7)*256 + (8);
        DutchPinnace_walk_graph[9] = (8)*256 + (9);
        DutchPinnace_walk_graph[10] = (10)*256 + (11);
        DutchPinnace_walk_graph[11] = (7)*256 + (10);
        DutchPinnace_walk_graph[12] = (8)*256 + (11);
        DutchPinnace_walk_graph[13] = (9)*256 + (12);
        DutchPinnace_walk_graph[14] = (12)*256 + (13);
        DutchPinnace_walk_graph[15] = (13)*256 + (14);
        DutchPinnace_walk_graph[16] = (0)*256 + (15);
        DutchPinnace_walk_graph[17] = (15)*256 + (16);
        DutchPinnace_walk_graph[18] = (16)*256 + (17);
        DutchPinnace_walk_graph[19] = (17)*256 + (18);
        DutchPinnace_walk_graph[20] = (2)*256 + (19);
        DutchPinnace_walk_graph[21] = (19)*256 + (20);
        DutchPinnace_walk_graph[22] = (20)*256 + (21);
        DutchPinnace_walk_graph[23] = (21)*256 + (22);
        DutchPinnace_walk_graph[24] = (17)*256 + (21);
        DutchPinnace_walk_graph[25] = (18)*256 + (22);
        DutchPinnace_walk_graph[26] = (17)*256 + (23);
        DutchPinnace_walk_graph[27] = (21)*256 + (24);
        DutchPinnace_walk_graph[28] = (1)*256 + (25);
        DutchPinnace_walk_graph[29] = (1)*256 + (26);
        DutchPinnace_walk_graph[30] = (1)*256 + (27);
        DutchPinnace_walk_graph[31] = (3)*256 + (28);
        DutchPinnace_walk_graph[32] = (3)*256 + (29);
        DutchPinnace_walk_graph[33] = (3)*256 + (30);
        DutchPinnace_walk_graph[34] = (17)*256 + (31);
        DutchPinnace_walk_graph[35] = (31)*256 + (32);
        DutchPinnace_walk_graph[36] = (21)*256 + (33);
        DutchPinnace_walk_graph[37] = (33)*256 + (34);
        DutchPinnace_walk_graph[38] = (7)*256 + (35);
        DutchPinnace_walk_graph[39] = (35)*256 + (36);
        DutchPinnace_walk_graph[40] = (10)*256 + (37);
        DutchPinnace_walk_graph[41] = (37)*256 + (38);
        DutchPinnace_walk_graph[42] = (8)*256 + (39);
        DutchPinnace_walk_graph[43] = (39)*256 + (40);
        DutchPinnace_walk_graph[44] = (11)*256 + (41);
        DutchPinnace_walk_graph[45] = (41)*256 + (42);
}
