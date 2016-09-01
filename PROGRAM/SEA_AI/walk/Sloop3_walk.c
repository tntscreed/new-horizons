int Sloop3_walk_count;
float Sloop3_walk_verts[102];
int Sloop3_walk_types[34];
int Sloop3_walk_graph[36];

void Sloop3_walk_init()
{
        Sloop3_walk_count = 34;

        Sloop3_walk_verts[0] = 0.092738;
        Sloop3_walk_verts[1] = 1.869926;
        Sloop3_walk_verts[2] = 7.712444;
        Sloop3_walk_verts[3] = 0.670044;
        Sloop3_walk_verts[4] = 1.784925;
        Sloop3_walk_verts[5] = 5.230118;
        Sloop3_walk_verts[6] = 0.744093;
        Sloop3_walk_verts[7] = 1.874925;
        Sloop3_walk_verts[8] = 2.10113;
        Sloop3_walk_verts[9] = 0.58324;
        Sloop3_walk_verts[10] = 1.962425;
        Sloop3_walk_verts[11] = -0.839647;
        Sloop3_walk_verts[12] = 0.376223;
        Sloop3_walk_verts[13] = 2.424912;
        Sloop3_walk_verts[14] = -3.852482;
        Sloop3_walk_verts[15] = 0.669;
        Sloop3_walk_verts[16] = 2.54;
        Sloop3_walk_verts[17] = -5.715;
        Sloop3_walk_verts[18] = -0.425454;
        Sloop3_walk_verts[19] = 1.822411;
        Sloop3_walk_verts[20] = 7.782091;
        Sloop3_walk_verts[21] = -0.835752;
        Sloop3_walk_verts[22] = 1.754911;
        Sloop3_walk_verts[23] = 5.153815;
        Sloop3_walk_verts[24] = -0.584479;
        Sloop3_walk_verts[25] = 1.917411;
        Sloop3_walk_verts[26] = 2.08054;
        Sloop3_walk_verts[27] = -0.483728;
        Sloop3_walk_verts[28] = 2.072411;
        Sloop3_walk_verts[29] = -0.843913;
        Sloop3_walk_verts[30] = -0.596502;
        Sloop3_walk_verts[31] = 2.467414;
        Sloop3_walk_verts[32] = -3.851869;
        Sloop3_walk_verts[33] = -0.669;
        Sloop3_walk_verts[34] = 2.54;
        Sloop3_walk_verts[35] = -5.715;
        Sloop3_walk_verts[36] = -0.035846;
        Sloop3_walk_verts[37] = 3.99;
        Sloop3_walk_verts[38] = -7.498;
        Sloop3_walk_verts[39] = -1.381853;
        Sloop3_walk_verts[40] = 4.635046;
        Sloop3_walk_verts[41] = -11.19521;
        Sloop3_walk_verts[42] = 1.251286;
        Sloop3_walk_verts[43] = 4.655049;
        Sloop3_walk_verts[44] = -11.193055;
        Sloop3_walk_verts[45] = 3.716875;
        Sloop3_walk_verts[46] = 2.077554;
        Sloop3_walk_verts[47] = 0.093538;
        Sloop3_walk_verts[48] = 3.836853;
        Sloop3_walk_verts[49] = 2.042555;
        Sloop3_walk_verts[50] = 2.52094;
        Sloop3_walk_verts[51] = 0.616669;
        Sloop3_walk_verts[52] = 19.637718;
        Sloop3_walk_verts[53] = 2.890585;
        Sloop3_walk_verts[54] = -3.781115;
        Sloop3_walk_verts[55] = 1.922522;
        Sloop3_walk_verts[56] = 0.311935;
        Sloop3_walk_verts[57] = -3.816916;
        Sloop3_walk_verts[58] = 2.002522;
        Sloop3_walk_verts[59] = 3.120287;
        Sloop3_walk_verts[60] = -0.64917;
        Sloop3_walk_verts[61] = 19.57004;
        Sloop3_walk_verts[62] = 3.183268;
        Sloop3_walk_verts[63] = 1.3;
        Sloop3_walk_verts[64] = 2.622;
        Sloop3_walk_verts[65] = -6.3;
        Sloop3_walk_verts[66] = 1.002414;
        Sloop3_walk_verts[67] = 2.372524;
        Sloop3_walk_verts[68] = -3.89278;
        Sloop3_walk_verts[69] = 1.332443;
        Sloop3_walk_verts[70] = 2.065025;
        Sloop3_walk_verts[71] = -0.823128;
        Sloop3_walk_verts[72] = 1.341139;
        Sloop3_walk_verts[73] = 1.850026;
        Sloop3_walk_verts[74] = 2.186322;
        Sloop3_walk_verts[75] = 1.365756;
        Sloop3_walk_verts[76] = 1.797525;
        Sloop3_walk_verts[77] = 5.352477;
        Sloop3_walk_verts[78] = 0.674928;
        Sloop3_walk_verts[79] = 1.850026;
        Sloop3_walk_verts[80] = 7.971041;
        Sloop3_walk_verts[81] = -1.3;
        Sloop3_walk_verts[82] = 2.622;
        Sloop3_walk_verts[83] = -6.3;
        Sloop3_walk_verts[84] = -1.178691;
        Sloop3_walk_verts[85] = 2.372525;
        Sloop3_walk_verts[86] = -3.929039;
        Sloop3_walk_verts[87] = -1.138647;
        Sloop3_walk_verts[88] = 2.027526;
        Sloop3_walk_verts[89] = -0.896524;
        Sloop3_walk_verts[90] = -1.173495;
        Sloop3_walk_verts[91] = 1.887526;
        Sloop3_walk_verts[92] = 2.135592;
        Sloop3_walk_verts[93] = -1.171591;
        Sloop3_walk_verts[94] = 1.807526;
        Sloop3_walk_verts[95] = 5.144722;
        Sloop3_walk_verts[96] = -0.770619;
        Sloop3_walk_verts[97] = 1.857526;
        Sloop3_walk_verts[98] = 7.855903;
        Sloop3_walk_verts[99] = -0.043995;
        Sloop3_walk_verts[100] = 2.657528;
        Sloop3_walk_verts[101] = -6.41;

        Sloop3_walk_types[0] = 0;
        Sloop3_walk_types[1] = 0;
        Sloop3_walk_types[2] = 0;
        Sloop3_walk_types[3] = 0;
        Sloop3_walk_types[4] = 0;
        Sloop3_walk_types[5] = 0;
        Sloop3_walk_types[6] = 0;
        Sloop3_walk_types[7] = 0;
        Sloop3_walk_types[8] = 0;
        Sloop3_walk_types[9] = 0;
        Sloop3_walk_types[10] = 0;
        Sloop3_walk_types[11] = 0;
        Sloop3_walk_types[12] = 0;
        Sloop3_walk_types[13] = 0;
        Sloop3_walk_types[14] = 0;
        Sloop3_walk_types[15] = 5;
        Sloop3_walk_types[16] = 5;
        Sloop3_walk_types[17] = 6;
        Sloop3_walk_types[18] = 5;
        Sloop3_walk_types[19] = 5;
        Sloop3_walk_types[20] = 6;
        Sloop3_walk_types[21] = 2;
        Sloop3_walk_types[22] = 2;
        Sloop3_walk_types[23] = 2;
        Sloop3_walk_types[24] = 2;
        Sloop3_walk_types[25] = 2;
        Sloop3_walk_types[26] = 2;
        Sloop3_walk_types[27] = 1;
        Sloop3_walk_types[28] = 1;
        Sloop3_walk_types[29] = 1;
        Sloop3_walk_types[30] = 1;
        Sloop3_walk_types[31] = 1;
        Sloop3_walk_types[32] = 1;
        Sloop3_walk_types[33] = 0;

        Sloop3_walk_graph[0] = (0)*256 + (1);
        Sloop3_walk_graph[1] = (1)*256 + (2);
        Sloop3_walk_graph[2] = (2)*256 + (3);
        Sloop3_walk_graph[3] = (3)*256 + (4);
        Sloop3_walk_graph[4] = (4)*256 + (5);
        Sloop3_walk_graph[5] = (7)*256 + (6);
        Sloop3_walk_graph[6] = (8)*256 + (7);
        Sloop3_walk_graph[7] = (9)*256 + (8);
        Sloop3_walk_graph[8] = (10)*256 + (9);
        Sloop3_walk_graph[9] = (11)*256 + (10);
        Sloop3_walk_graph[10] = (0)*256 + (6);
        Sloop3_walk_graph[11] = (5)*256 + (11);
        Sloop3_walk_graph[12] = (2)*256 + (8);
        Sloop3_walk_graph[13] = (12)*256 + (14);
        Sloop3_walk_graph[14] = (12)*256 + (13);
        Sloop3_walk_graph[15] = (3)*256 + (15);
        Sloop3_walk_graph[16] = (16)*256 + (15);
        Sloop3_walk_graph[17] = (16)*256 + (17);
        Sloop3_walk_graph[18] = (18)*256 + (9);
        Sloop3_walk_graph[19] = (18)*256 + (19);
        Sloop3_walk_graph[20] = (20)*256 + (19);
        Sloop3_walk_graph[21] = (5)*256 + (21);
        Sloop3_walk_graph[22] = (4)*256 + (22);
        Sloop3_walk_graph[23] = (3)*256 + (23);
        Sloop3_walk_graph[24] = (2)*256 + (24);
        Sloop3_walk_graph[25] = (1)*256 + (25);
        Sloop3_walk_graph[26] = (0)*256 + (26);
        Sloop3_walk_graph[27] = (11)*256 + (27);
        Sloop3_walk_graph[28] = (10)*256 + (28);
        Sloop3_walk_graph[29] = (9)*256 + (29);
        Sloop3_walk_graph[30] = (8)*256 + (30);
        Sloop3_walk_graph[31] = (7)*256 + (31);
        Sloop3_walk_graph[32] = (6)*256 + (32);
        Sloop3_walk_graph[33] = (33)*256 + (5);
        Sloop3_walk_graph[34] = (33)*256 + (11);
        Sloop3_walk_graph[35] = (33)*256 + (12);
}
