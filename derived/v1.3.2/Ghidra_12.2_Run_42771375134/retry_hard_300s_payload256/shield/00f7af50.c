/* Ghidra 12.2 SWSH shield recovered retry function 00f7af50; pseudocode not original game source. */


void FUN_00f7af50(long *param_1,char *param_2,long *param_3,long param_4,long *param_5,long param_6,
                 long *param_7,long param_8,long *param_9,long param_10,long *param_11,long param_12
                 ,long *param_13,long param_14,long *param_15,long param_16,long *param_17,
                 long param_18,long *param_19,long param_20,long *param_21,long param_22,
                 long *param_23,long param_24,long *param_25,long param_26,long *param_27,
                 long param_28,long *param_29,long param_30,long *param_31,long param_32,
                 long *param_33,long param_34,long *param_35,long param_36,long *param_37,
                 long param_38,long *param_39,long param_40,long *param_41,long param_42,
                 long *param_43,long param_44,long *param_45,long param_46,long *param_47,
                 long param_48,long *param_49,long param_50,long *param_51,long param_52,
                 long *param_53,long param_54,long *param_55,long param_56,long *param_57,
                 long param_58,long *param_59,long param_60,long *param_61,long param_62,
                 long *param_63,long param_64,long *param_65,long param_66,long *param_67,
                 long param_68,long *param_69,long param_70)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  string *psVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  byte *pbVar9;
  long *plVar10;
  string *psVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  string *psVar18;
  byte *pbVar19;
  string *psVar20;
  char *pcVar21;
  void *pvVar22;
  byte *pbVar23;
  byte *pbVar24;
  long *in_stack_000001f0;
  long in_stack_000001f8;
  long *in_stack_00000200;
  long in_stack_00000208;
  long *in_stack_00000210;
  long in_stack_00000218;
  long *in_stack_00000220;
  long in_stack_00000228;
  long *in_stack_00000230;
  long in_stack_00000238;
  long *in_stack_00000240;
  long in_stack_00000248;
  long *in_stack_00000250;
  long in_stack_00000258;
  long *in_stack_00000260;
  long in_stack_00000268;
  long *in_stack_00000270;
  long in_stack_00000278;
  long *in_stack_00000280;
  long in_stack_00000288;
  long *in_stack_00000290;
  long in_stack_00000298;
  long *in_stack_000002a0;
  long in_stack_000002a8;
  long *in_stack_000002b0;
  long in_stack_000002b8;
  long *in_stack_000002c0;
  long in_stack_000002c8;
  long *in_stack_000002d0;
  long in_stack_000002d8;
  long *in_stack_000002e0;
  long in_stack_000002e8;
  long *in_stack_000002f0;
  long in_stack_000002f8;
  long *in_stack_00000300;
  long in_stack_00000308;
  long *in_stack_00000310;
  long in_stack_00000318;
  long *in_stack_00000320;
  long in_stack_00000328;
  long *in_stack_00000330;
  long in_stack_00000338;
  long *in_stack_00000340;
  long in_stack_00000348;
  long *in_stack_00000350;
  long in_stack_00000358;
  long *in_stack_00000360;
  long in_stack_00000368;
  long *in_stack_00000370;
  long in_stack_00000378;
  long *in_stack_00000380;
  long in_stack_00000388;
  long *in_stack_00000390;
  long in_stack_00000398;
  long *in_stack_000003a0;
  long in_stack_000003a8;
  long *in_stack_000003b0;
  long in_stack_000003b8;
  long *in_stack_000003c0;
  long in_stack_000003c8;
  long *in_stack_000003d0;
  long in_stack_000003d8;
  long *in_stack_000003e0;
  long in_stack_000003e8;
  long *in_stack_000003f0;
  long in_stack_000003f8;
  long *in_stack_00000400;
  long in_stack_00000408;
  long *in_stack_00000410;
  long in_stack_00000418;
  long *in_stack_00000420;
  long in_stack_00000428;
  long *in_stack_00000430;
  long in_stack_00000438;
  long *in_stack_00000440;
  long in_stack_00000448;
  long *in_stack_00000450;
  long in_stack_00000458;
  long *in_stack_00000460;
  long in_stack_00000468;
  long *in_stack_00000470;
  long in_stack_00000478;
  long *in_stack_00000480;
  long in_stack_00000488;
  long *in_stack_00000490;
  long in_stack_00000498;
  long *in_stack_000004a0;
  long in_stack_000004a8;
  long *in_stack_000004b0;
  long in_stack_000004b8;
  long *in_stack_000004c0;
  long in_stack_000004c8;
  long *in_stack_000004d0;
  long in_stack_000004d8;
  long *in_stack_000004e0;
  long in_stack_000004e8;
  long *in_stack_000004f0;
  long in_stack_000004f8;
  long *in_stack_00000500;
  long in_stack_00000508;
  long *in_stack_00000510;
  long in_stack_00000518;
  long *in_stack_00000520;
  long in_stack_00000528;
  long *in_stack_00000530;
  long in_stack_00000538;
  long *in_stack_00000540;
  long in_stack_00000548;
  long *in_stack_00000550;
  long in_stack_00000558;
  long *in_stack_00000560;
  long in_stack_00000568;
  long *in_stack_00000570;
  long in_stack_00000578;
  long *in_stack_00000580;
  long in_stack_00000588;
  long *in_stack_00000590;
  long in_stack_00000598;
  long *in_stack_000005a0;
  long in_stack_000005a8;
  long *in_stack_000005b0;
  long in_stack_000005b8;
  long *in_stack_000005c0;
  long in_stack_000005c8;
  long *in_stack_000005d0;
  long in_stack_000005d8;
  long *in_stack_000005e0;
  long in_stack_000005e8;
  long *in_stack_000005f0;
  long in_stack_000005f8;
  long *in_stack_00000600;
  long in_stack_00000608;
  long *in_stack_00000610;
  long in_stack_00000618;
  long *in_stack_00000620;
  long in_stack_00000628;
  long *in_stack_00000630;
  long in_stack_00000638;
  long *in_stack_00000640;
  long in_stack_00000648;
  long *in_stack_00000650;
  long in_stack_00000658;
  long *in_stack_00000660;
  long in_stack_00000668;
  long *in_stack_00000670;
  long in_stack_00000678;
  long *in_stack_00000680;
  long in_stack_00000688;
  long *in_stack_00000690;
  long in_stack_00000698;
  long *in_stack_000006a0;
  char *in_stack_000006a8;
  long *in_stack_000006b0;
  char *in_stack_000006b8;
  long *in_stack_000006c0;
  char *in_stack_000006c8;
  long *in_stack_000006d0;
  char *in_stack_000006d8;
  long *in_stack_000006e0;
  char *in_stack_000006e8;
  long *in_stack_000006f0;
  char *in_stack_000006f8;
  long *in_stack_00000700;
  char *in_stack_00000708;
  char *in_stack_00000718;
  byte local_28f8;
  undefined7 uStack_28f7;
  undefined1 local_28f0;
  undefined7 uStack_28ef;
  void *local_28e8;
  undefined7 uStack_28e0;
  undefined1 local_28d9;
  undefined7 uStack_28d8;
  byte local_28d0;
  undefined7 uStack_28cf;
  undefined1 local_28c8;
  undefined7 uStack_28c7;
  void *local_28c0;
  undefined7 uStack_28b8;
  undefined1 local_28b1;
  undefined7 uStack_28b0;
  byte local_28a8;
  undefined7 uStack_28a7;
  undefined1 local_28a0;
  undefined7 uStack_289f;
  void *local_2898;
  undefined7 uStack_2890;
  undefined1 local_2889;
  undefined7 uStack_2888;
  byte local_2880;
  undefined7 uStack_287f;
  undefined1 local_2878;
  undefined7 uStack_2877;
  void *local_2870;
  undefined7 uStack_2868;
  undefined1 local_2861;
  undefined7 uStack_2860;
  byte local_2858;
  undefined7 uStack_2857;
  undefined1 local_2850;
  undefined7 uStack_284f;
  void *local_2848;
  undefined7 uStack_2840;
  undefined1 local_2839;
  undefined7 uStack_2838;
  byte local_2830;
  undefined7 uStack_282f;
  undefined1 local_2828;
  undefined7 uStack_2827;
  void *local_2820;
  undefined7 uStack_2818;
  undefined1 local_2811;
  undefined7 uStack_2810;
  byte local_2808;
  undefined7 uStack_2807;
  undefined1 local_2800;
  undefined7 uStack_27ff;
  void *local_27f8;
  undefined7 uStack_27f0;
  undefined1 local_27e9;
  undefined7 uStack_27e8;
  byte local_27e0;
  undefined7 uStack_27df;
  undefined1 local_27d8;
  undefined7 uStack_27d7;
  void *local_27d0;
  undefined7 uStack_27c8;
  undefined1 local_27c1;
  undefined7 uStack_27c0;
  byte local_27b8;
  undefined7 uStack_27b7;
  undefined1 local_27b0;
  undefined7 uStack_27af;
  void *local_27a8;
  undefined7 uStack_27a0;
  undefined1 local_2799;
  undefined7 uStack_2798;
  byte local_2790;
  undefined7 uStack_278f;
  undefined1 local_2788;
  undefined7 uStack_2787;
  void *local_2780;
  undefined7 uStack_2778;
  undefined1 local_2771;
  undefined7 uStack_2770;
  byte local_2768;
  undefined7 uStack_2767;
  undefined1 local_2760;
  undefined7 uStack_275f;
  void *local_2758;
  undefined7 uStack_2750;
  undefined1 local_2749;
  undefined7 uStack_2748;
  byte local_2740;
  undefined7 uStack_273f;
  undefined1 local_2738;
  undefined7 uStack_2737;
  void *local_2730;
  undefined7 uStack_2728;
  undefined1 local_2721;
  undefined7 uStack_2720;
  byte local_2718;
  undefined7 uStack_2717;
  undefined1 local_2710;
  undefined7 uStack_270f;
  void *local_2708;
  undefined7 uStack_2700;
  undefined1 local_26f9;
  undefined7 uStack_26f8;
  byte local_26f0;
  undefined7 uStack_26ef;
  undefined1 local_26e8;
  undefined7 uStack_26e7;
  void *local_26e0;
  undefined7 uStack_26d8;
  undefined1 local_26d1;
  undefined7 uStack_26d0;
  byte local_26c8;
  undefined7 uStack_26c7;
  undefined1 local_26c0;
  undefined7 uStack_26bf;
  void *local_26b8;
  undefined7 uStack_26b0;
  undefined1 local_26a9;
  undefined7 uStack_26a8;
  byte local_26a0;
  undefined7 uStack_269f;
  undefined1 local_2698;
  undefined7 uStack_2697;
  void *local_2690;
  undefined7 uStack_2688;
  undefined1 local_2681;
  undefined7 uStack_2680;
  byte local_2678;
  undefined7 uStack_2677;
  undefined1 local_2670;
  undefined7 uStack_266f;
  void *local_2668;
  undefined7 uStack_2660;
  undefined1 local_2659;
  undefined7 uStack_2658;
  byte local_2650;
  undefined7 uStack_264f;
  undefined1 local_2648;
  undefined7 uStack_2647;
  void *local_2640;
  undefined7 uStack_2638;
  undefined1 local_2631;
  undefined7 uStack_2630;
  byte local_2628;
  undefined7 uStack_2627;
  undefined1 local_2620;
  undefined7 uStack_261f;
  void *local_2618;
  undefined7 uStack_2610;
  undefined1 local_2609;
  undefined7 uStack_2608;
  byte local_2600;
  undefined7 uStack_25ff;
  undefined1 local_25f8;
  undefined7 uStack_25f7;
  void *local_25f0;
  undefined7 uStack_25e8;
  undefined1 local_25e1;
  undefined7 uStack_25e0;
  byte local_25d8;
  undefined7 uStack_25d7;
  undefined1 local_25d0;
  undefined7 uStack_25cf;
  void *local_25c8;
  undefined7 uStack_25c0;
  undefined1 local_25b9;
  undefined7 uStack_25b8;
  byte local_25b0;
  undefined7 uStack_25af;
  undefined1 local_25a8;
  undefined7 uStack_25a7;
  void *local_25a0;
  undefined7 uStack_2598;
  undefined1 local_2591;
  undefined7 uStack_2590;
  byte local_2588;
  undefined7 uStack_2587;
  undefined1 local_2580;
  undefined7 uStack_257f;
  void *local_2578;
  undefined7 uStack_2570;
  undefined1 local_2569;
  undefined7 uStack_2568;
  byte local_2560;
  undefined7 uStack_255f;
  undefined1 local_2558;
  undefined7 uStack_2557;
  void *local_2550;
  undefined7 uStack_2548;
  undefined1 local_2541;
  undefined7 uStack_2540;
  byte local_2538;
  undefined7 uStack_2537;
  undefined1 local_2530;
  undefined7 uStack_252f;
  void *local_2528;
  undefined7 uStack_2520;
  undefined1 local_2519;
  undefined7 uStack_2518;
  byte local_2510;
  undefined7 uStack_250f;
  undefined1 local_2508;
  undefined7 uStack_2507;
  void *local_2500;
  undefined7 uStack_24f8;
  undefined1 local_24f1;
  undefined7 uStack_24f0;
  byte local_24e8;
  undefined7 uStack_24e7;
  undefined1 local_24e0;
  undefined7 uStack_24df;
  void *local_24d8;
  undefined7 uStack_24d0;
  undefined1 local_24c9;
  undefined7 uStack_24c8;
  byte local_24c0;
  undefined7 uStack_24bf;
  undefined1 local_24b8;
  undefined7 uStack_24b7;
  void *local_24b0;
  undefined7 uStack_24a8;
  undefined1 local_24a1;
  undefined7 uStack_24a0;
  byte local_2498;
  undefined7 uStack_2497;
  undefined1 local_2490;
  undefined7 uStack_248f;
  void *local_2488;
  undefined7 uStack_2480;
  undefined1 local_2479;
  undefined7 uStack_2478;
  byte local_2470;
  undefined7 uStack_246f;
  undefined1 local_2468;
  undefined7 uStack_2467;
  void *local_2460;
  undefined7 uStack_2458;
  undefined1 local_2451;
  undefined7 uStack_2450;
  byte local_2448;
  undefined7 uStack_2447;
  undefined1 local_2440;
  undefined7 uStack_243f;
  void *local_2438;
  undefined7 uStack_2430;
  undefined1 local_2429;
  undefined7 uStack_2428;
  byte local_2420;
  undefined7 uStack_241f;
  undefined1 local_2418;
  undefined7 uStack_2417;
  void *local_2410;
  undefined7 uStack_2408;
  undefined1 local_2401;
  undefined7 uStack_2400;
  byte local_23f8;
  undefined7 uStack_23f7;
  undefined1 local_23f0;
  undefined7 uStack_23ef;
  void *local_23e8;
  undefined7 uStack_23e0;
  undefined1 local_23d9;
  undefined7 uStack_23d8;
  byte local_23d0;
  undefined7 uStack_23cf;
  undefined1 local_23c8;
  undefined7 uStack_23c7;
  void *local_23c0;
  undefined7 uStack_23b8;
  undefined1 local_23b1;
  undefined7 uStack_23b0;
  byte local_23a8;
  undefined7 uStack_23a7;
  undefined1 local_23a0;
  undefined7 uStack_239f;
  void *local_2398;
  undefined7 uStack_2390;
  undefined1 local_2389;
  undefined7 uStack_2388;
  byte local_2380;
  undefined7 uStack_237f;
  undefined1 local_2378;
  undefined7 uStack_2377;
  void *local_2370;
  undefined7 uStack_2368;
  undefined1 local_2361;
  undefined7 uStack_2360;
  byte local_2358;
  undefined7 uStack_2357;
  undefined1 local_2350;
  undefined7 uStack_234f;
  void *local_2348;
  undefined7 uStack_2340;
  undefined1 local_2339;
  undefined7 uStack_2338;
  byte local_2330;
  undefined7 uStack_232f;
  undefined1 local_2328;
  undefined7 uStack_2327;
  void *local_2320;
  undefined7 uStack_2318;
  undefined1 local_2311;
  undefined7 uStack_2310;
  byte local_2308;
  undefined7 uStack_2307;
  undefined1 local_2300;
  undefined7 uStack_22ff;
  void *local_22f8;
  undefined7 uStack_22f0;
  undefined1 local_22e9;
  undefined7 uStack_22e8;
  byte local_22e0;
  undefined7 uStack_22df;
  undefined1 local_22d8;
  undefined7 uStack_22d7;
  void *local_22d0;
  undefined7 uStack_22c8;
  undefined1 local_22c1;
  undefined7 uStack_22c0;
  byte local_22b8;
  undefined7 uStack_22b7;
  undefined1 local_22b0;
  undefined7 uStack_22af;
  void *local_22a8;
  undefined7 uStack_22a0;
  undefined1 local_2299;
  undefined7 uStack_2298;
  byte local_2290;
  undefined7 uStack_228f;
  undefined1 local_2288;
  undefined7 uStack_2287;
  void *local_2280;
  undefined7 uStack_2278;
  undefined1 local_2271;
  undefined7 uStack_2270;
  byte local_2268;
  undefined7 uStack_2267;
  undefined1 local_2260;
  undefined7 uStack_225f;
  void *local_2258;
  undefined7 uStack_2250;
  undefined1 local_2249;
  undefined7 uStack_2248;
  byte local_2240;
  undefined7 uStack_223f;
  undefined1 local_2238;
  undefined7 uStack_2237;
  void *local_2230;
  undefined7 uStack_2228;
  undefined1 local_2221;
  undefined7 uStack_2220;
  byte local_2218;
  undefined7 uStack_2217;
  undefined1 local_2210;
  undefined7 uStack_220f;
  void *local_2208;
  undefined7 uStack_2200;
  undefined1 local_21f9;
  undefined7 uStack_21f8;
  byte local_21f0;
  undefined7 uStack_21ef;
  undefined1 local_21e8;
  undefined7 uStack_21e7;
  void *local_21e0;
  undefined7 uStack_21d8;
  undefined1 local_21d1;
  undefined7 uStack_21d0;
  byte local_21c8;
  undefined7 uStack_21c7;
  undefined1 local_21c0;
  undefined7 uStack_21bf;
  void *local_21b8;
  undefined7 uStack_21b0;
  undefined1 local_21a9;
  undefined7 uStack_21a8;
  byte local_21a0;
  undefined7 uStack_219f;
  undefined1 local_2198;
  undefined7 uStack_2197;
  void *local_2190;
  undefined7 uStack_2188;
  undefined1 local_2181;
  undefined7 uStack_2180;
  byte local_2178;
  undefined7 uStack_2177;
  undefined1 local_2170;
  undefined7 uStack_216f;
  void *local_2168;
  undefined7 uStack_2160;
  undefined1 local_2159;
  undefined7 uStack_2158;
  byte local_2150;
  undefined7 uStack_214f;
  undefined1 local_2148;
  undefined7 uStack_2147;
  void *local_2140;
  undefined7 uStack_2138;
  undefined1 local_2131;
  undefined7 uStack_2130;
  byte local_2128;
  undefined7 uStack_2127;
  undefined1 local_2120;
  undefined7 uStack_211f;
  void *local_2118;
  undefined7 uStack_2110;
  undefined1 local_2109;
  undefined7 uStack_2108;
  byte local_2100;
  undefined7 uStack_20ff;
  undefined1 local_20f8;
  undefined7 uStack_20f7;
  void *local_20f0;
  undefined7 uStack_20e8;
  undefined1 local_20e1;
  undefined7 uStack_20e0;
  byte local_20d8;
  undefined7 uStack_20d7;
  undefined1 local_20d0;
  undefined7 uStack_20cf;
  void *local_20c8;
  undefined7 uStack_20c0;
  undefined1 local_20b9;
  undefined7 uStack_20b8;
  byte local_20b0;
  undefined7 uStack_20af;
  undefined1 local_20a8;
  undefined7 uStack_20a7;
  void *local_20a0;
  undefined7 uStack_2098;
  undefined1 local_2091;
  undefined7 uStack_2090;
  byte local_2088;
  undefined7 uStack_2087;
  undefined1 local_2080;
  undefined7 uStack_207f;
  void *local_2078;
  undefined7 uStack_2070;
  undefined1 local_2069;
  undefined7 uStack_2068;
  byte local_2060;
  undefined7 uStack_205f;
  undefined1 local_2058;
  undefined7 uStack_2057;
  void *local_2050;
  undefined7 uStack_2048;
  undefined1 local_2041;
  undefined7 uStack_2040;
  byte local_2038;
  undefined7 uStack_2037;
  undefined1 local_2030;
  undefined7 uStack_202f;
  void *local_2028;
  undefined7 uStack_2020;
  undefined1 local_2019;
  undefined7 uStack_2018;
  byte local_2010;
  undefined7 uStack_200f;
  undefined1 local_2008;
  undefined7 uStack_2007;
  void *local_2000;
  undefined7 uStack_1ff8;
  undefined1 local_1ff1;
  undefined7 uStack_1ff0;
  byte local_1fe8;
  undefined7 uStack_1fe7;
  undefined1 local_1fe0;
  undefined7 uStack_1fdf;
  void *local_1fd8;
  undefined7 uStack_1fd0;
  undefined1 local_1fc9;
  undefined7 uStack_1fc8;
  byte local_1fc0;
  undefined7 uStack_1fbf;
  undefined1 local_1fb8;
  undefined7 uStack_1fb7;
  void *local_1fb0;
  undefined7 uStack_1fa8;
  undefined1 local_1fa1;
  undefined7 uStack_1fa0;
  byte local_1f98;
  undefined7 uStack_1f97;
  undefined1 local_1f90;
  undefined7 uStack_1f8f;
  void *local_1f88;
  undefined7 uStack_1f80;
  undefined1 local_1f79;
  undefined7 uStack_1f78;
  byte local_1f70;
  undefined7 uStack_1f6f;
  undefined1 local_1f68;
  undefined7 uStack_1f67;
  void *local_1f60;
  undefined7 uStack_1f58;
  undefined1 local_1f51;
  undefined7 uStack_1f50;
  byte local_1f48;
  undefined7 uStack_1f47;
  undefined1 local_1f40;
  undefined7 uStack_1f3f;
  void *local_1f38;
  undefined7 uStack_1f30;
  undefined1 local_1f29;
  undefined7 uStack_1f28;
  byte local_1f20;
  undefined7 uStack_1f1f;
  undefined1 local_1f18;
  undefined7 uStack_1f17;
  void *local_1f10;
  undefined7 uStack_1f08;
  undefined1 local_1f01;
  undefined7 uStack_1f00;
  byte local_1ef8;
  undefined7 uStack_1ef7;
  undefined1 local_1ef0;
  undefined7 uStack_1eef;
  void *local_1ee8;
  undefined7 uStack_1ee0;
  undefined1 local_1ed9;
  undefined7 uStack_1ed8;
  byte local_1ed0;
  undefined7 uStack_1ecf;
  undefined1 local_1ec8;
  undefined7 uStack_1ec7;
  void *local_1ec0;
  undefined7 uStack_1eb8;
  undefined1 local_1eb1;
  undefined7 uStack_1eb0;
  byte local_1ea8;
  undefined7 uStack_1ea7;
  undefined1 local_1ea0;
  undefined7 uStack_1e9f;
  void *local_1e98;
  undefined7 uStack_1e90;
  undefined1 local_1e89;
  undefined7 uStack_1e88;
  byte local_1e80;
  undefined7 uStack_1e7f;
  undefined1 local_1e78;
  undefined7 uStack_1e77;
  void *local_1e70;
  undefined7 uStack_1e68;
  undefined1 local_1e61;
  undefined7 uStack_1e60;
  byte local_1e58;
  undefined7 uStack_1e57;
  undefined1 local_1e50;
  undefined7 uStack_1e4f;
  void *local_1e48;
  undefined7 uStack_1e40;
  undefined1 local_1e39;
  undefined7 uStack_1e38;
  byte local_1e30;
  undefined7 uStack_1e2f;
  undefined1 local_1e28;
  undefined7 uStack_1e27;
  void *local_1e20;
  undefined7 uStack_1e18;
  undefined1 local_1e11;
  undefined7 uStack_1e10;
  byte local_1e08;
  undefined7 uStack_1e07;
  undefined1 local_1e00;
  undefined7 uStack_1dff;
  void *local_1df8;
  undefined7 uStack_1df0;
  undefined1 local_1de9;
  undefined7 uStack_1de8;
  byte local_1de0;
  undefined7 uStack_1ddf;
  undefined1 local_1dd8;
  undefined7 uStack_1dd7;
  void *local_1dd0;
  undefined7 uStack_1dc8;
  undefined1 local_1dc1;
  undefined7 uStack_1dc0;
  byte local_1db8;
  undefined7 uStack_1db7;
  undefined1 local_1db0;
  undefined7 uStack_1daf;
  void *local_1da8;
  undefined7 uStack_1da0;
  undefined1 local_1d99;
  undefined7 uStack_1d98;
  byte local_1d90;
  undefined7 uStack_1d8f;
  undefined1 local_1d88;
  undefined7 uStack_1d87;
  void *local_1d80;
  undefined7 uStack_1d78;
  undefined1 local_1d71;
  undefined7 uStack_1d70;
  byte local_1d68;
  undefined7 uStack_1d67;
  undefined1 local_1d60;
  undefined7 uStack_1d5f;
  void *local_1d58;
  undefined7 uStack_1d50;
  undefined1 local_1d49;
  undefined7 uStack_1d48;
  byte local_1d40;
  undefined7 uStack_1d3f;
  undefined1 local_1d38;
  undefined7 uStack_1d37;
  void *local_1d30;
  undefined7 uStack_1d28;
  undefined1 local_1d21;
  undefined7 uStack_1d20;
  byte local_1d18;
  undefined7 uStack_1d17;
  undefined1 local_1d10;
  undefined7 uStack_1d0f;
  void *local_1d08;
  undefined7 uStack_1d00;
  undefined1 local_1cf9;
  undefined7 uStack_1cf8;
  byte local_1cf0;
  undefined7 uStack_1cef;
  undefined1 local_1ce8;
  undefined7 uStack_1ce7;
  void *local_1ce0;
  undefined7 uStack_1cd8;
  undefined1 local_1cd1;
  undefined7 uStack_1cd0;
  byte local_1cc8;
  undefined7 uStack_1cc7;
  undefined1 local_1cc0;
  undefined7 uStack_1cbf;
  void *local_1cb8;
  undefined7 uStack_1cb0;
  undefined1 local_1ca9;
  undefined7 uStack_1ca8;
  byte local_1ca0;
  undefined7 uStack_1c9f;
  undefined1 local_1c98;
  undefined7 uStack_1c97;
  void *local_1c90;
  undefined7 uStack_1c88;
  undefined1 local_1c81;
  undefined7 uStack_1c80;
  byte local_1c78;
  undefined7 uStack_1c77;
  undefined1 local_1c70;
  undefined7 uStack_1c6f;
  void *local_1c68;
  undefined7 uStack_1c60;
  undefined1 local_1c59;
  undefined7 uStack_1c58;
  byte local_1c50;
  undefined7 uStack_1c4f;
  undefined1 local_1c48;
  undefined7 uStack_1c47;
  void *local_1c40;
  undefined7 uStack_1c38;
  undefined1 local_1c31;
  undefined7 uStack_1c30;
  byte local_1c28;
  undefined7 uStack_1c27;
  undefined1 local_1c20;
  undefined7 uStack_1c1f;
  void *local_1c18;
  undefined7 uStack_1c10;
  undefined1 local_1c09;
  undefined7 uStack_1c08;
  byte local_1c00;
  undefined7 uStack_1bff;
  undefined1 local_1bf8;
  undefined7 uStack_1bf7;
  void *local_1bf0;
  undefined7 uStack_1be8;
  undefined1 local_1be1;
  undefined7 uStack_1be0;
  byte local_1bd8;
  undefined7 uStack_1bd7;
  undefined1 local_1bd0;
  undefined7 uStack_1bcf;
  void *local_1bc8;
  undefined7 uStack_1bc0;
  undefined1 local_1bb9;
  undefined7 uStack_1bb8;
  byte local_1bb0;
  undefined7 uStack_1baf;
  undefined1 local_1ba8;
  undefined7 uStack_1ba7;
  void *local_1ba0;
  undefined7 uStack_1b98;
  undefined1 local_1b91;
  undefined7 uStack_1b90;
  byte local_1b88;
  undefined7 uStack_1b87;
  undefined1 local_1b80;
  undefined7 uStack_1b7f;
  void *local_1b78;
  undefined7 uStack_1b70;
  undefined1 local_1b69;
  undefined7 uStack_1b68;
  byte local_1b60;
  undefined7 uStack_1b5f;
  undefined1 local_1b58;
  undefined7 uStack_1b57;
  void *local_1b50;
  undefined7 uStack_1b48;
  undefined1 local_1b41;
  undefined7 uStack_1b40;
  byte local_1b38;
  undefined7 uStack_1b37;
  undefined1 local_1b30;
  undefined7 uStack_1b2f;
  void *local_1b28;
  undefined7 uStack_1b20;
  undefined1 local_1b19;
  undefined7 uStack_1b18;
  byte local_1b10;
  undefined7 uStack_1b0f;
  undefined1 local_1b08;
  undefined7 uStack_1b07;
  void *local_1b00;
  undefined7 uStack_1af8;
  undefined1 local_1af1;
  undefined7 uStack_1af0;
  byte local_1ae8;
  undefined7 uStack_1ae7;
  undefined1 local_1ae0;
  undefined7 uStack_1adf;
  void *local_1ad8;
  undefined7 uStack_1ad0;
  undefined1 local_1ac9;
  undefined7 uStack_1ac8;
  byte local_1ac0;
  undefined7 uStack_1abf;
  undefined1 local_1ab8;
  undefined7 uStack_1ab7;
  void *local_1ab0;
  undefined7 uStack_1aa8;
  undefined1 local_1aa1;
  undefined7 uStack_1aa0;
  byte local_1a98;
  undefined7 uStack_1a97;
  undefined1 local_1a90;
  undefined7 uStack_1a8f;
  void *local_1a88;
  undefined7 uStack_1a80;
  undefined1 local_1a79;
  undefined7 uStack_1a78;
  byte local_1a70;
  undefined7 uStack_1a6f;
  undefined1 local_1a68;
  undefined7 uStack_1a67;
  void *local_1a60;
  undefined7 uStack_1a58;
  undefined1 local_1a51;
  undefined7 uStack_1a50;
  byte local_1a48;
  undefined7 uStack_1a47;
  undefined1 local_1a40;
  undefined7 uStack_1a3f;
  void *local_1a38;
  undefined7 uStack_1a30;
  undefined1 local_1a29;
  undefined7 uStack_1a28;
  byte local_1a20;
  undefined7 uStack_1a1f;
  undefined1 local_1a18;
  undefined7 uStack_1a17;
  void *local_1a10;
  undefined7 uStack_1a08;
  undefined1 local_1a01;
  undefined7 uStack_1a00;
  byte local_19f8;
  undefined7 uStack_19f7;
  undefined1 local_19f0;
  undefined7 uStack_19ef;
  void *local_19e8;
  undefined7 uStack_19e0;
  undefined1 local_19d9;
  undefined7 uStack_19d8;
  byte local_19d0;
  undefined7 uStack_19cf;
  undefined1 local_19c8;
  undefined7 uStack_19c7;
  void *local_19c0;
  undefined7 uStack_19b8;
  undefined1 local_19b1;
  undefined7 uStack_19b0;
  byte local_19a8;
  undefined7 uStack_19a7;
  undefined1 local_19a0;
  undefined7 uStack_199f;
  void *local_1998;
  undefined7 uStack_1990;
  undefined1 local_1989;
  undefined7 uStack_1988;
  byte local_1980;
  undefined7 uStack_197f;
  undefined1 local_1978;
  undefined7 uStack_1977;
  void *local_1970;
  undefined7 uStack_1968;
  undefined1 local_1961;
  undefined7 uStack_1960;
  byte local_1958;
  undefined7 uStack_1957;
  undefined1 local_1950;
  undefined7 uStack_194f;
  void *local_1948;
  undefined7 uStack_1940;
  undefined1 local_1939;
  undefined7 uStack_1938;
  byte local_1930;
  undefined7 uStack_192f;
  undefined1 local_1928;
  undefined7 uStack_1927;
  void *local_1920;
  undefined7 uStack_1918;
  undefined1 local_1911;
  undefined7 uStack_1910;
  byte local_1908;
  undefined7 uStack_1907;
  undefined1 local_1900;
  undefined7 uStack_18ff;
  void *local_18f8;
  undefined7 uStack_18f0;
  undefined1 local_18e9;
  undefined7 uStack_18e8;
  byte local_18e0;
  undefined7 uStack_18df;
  undefined1 local_18d8;
  undefined7 uStack_18d7;
  void *local_18d0;
  undefined7 uStack_18c8;
  undefined1 local_18c1;
  undefined7 uStack_18c0;
  byte local_18b8;
  undefined7 uStack_18b7;
  undefined1 local_18b0;
  undefined7 uStack_18af;
  void *local_18a8;
  undefined7 uStack_18a0;
  undefined1 local_1899;
  undefined7 uStack_1898;
  byte local_1890;
  undefined7 uStack_188f;
  undefined1 local_1888;
  undefined7 uStack_1887;
  void *local_1880;
  undefined7 uStack_1878;
  undefined1 local_1871;
  undefined7 uStack_1870;
  byte local_1868;
  undefined7 uStack_1867;
  undefined1 local_1860;
  undefined7 uStack_185f;
  void *local_1858;
  undefined7 uStack_1850;
  undefined1 local_1849;
  undefined7 uStack_1848;
  byte local_1840;
  undefined7 uStack_183f;
  undefined1 local_1838;
  undefined7 uStack_1837;
  void *local_1830;
  undefined7 uStack_1828;
  undefined1 local_1821;
  undefined7 uStack_1820;
  byte local_1818;
  undefined7 uStack_1817;
  undefined1 local_1810;
  undefined7 uStack_180f;
  void *local_1808;
  undefined7 uStack_1800;
  undefined1 local_17f9;
  undefined7 uStack_17f8;
  byte local_17f0;
  undefined7 uStack_17ef;
  undefined1 local_17e8;
  undefined7 uStack_17e7;
  void *local_17e0;
  undefined7 uStack_17d8;
  undefined1 local_17d1;
  undefined7 uStack_17d0;
  byte local_17c8;
  undefined7 uStack_17c7;
  undefined1 local_17c0;
  undefined7 uStack_17bf;
  void *local_17b8;
  undefined7 uStack_17b0;
  undefined1 local_17a9;
  undefined7 uStack_17a8;
  byte local_17a0;
  undefined7 uStack_179f;
  undefined1 local_1798;
  undefined7 uStack_1797;
  void *local_1790;
  undefined7 uStack_1788;
  undefined1 local_1781;
  undefined7 uStack_1780;
  byte local_1778;
  undefined7 uStack_1777;
  undefined1 local_1770;
  undefined7 uStack_176f;
  void *local_1768;
  undefined7 uStack_1760;
  undefined1 local_1759;
  undefined7 uStack_1758;
  byte local_1750;
  undefined7 uStack_174f;
  undefined1 local_1748;
  undefined7 uStack_1747;
  void *local_1740;
  undefined7 uStack_1738;
  undefined1 local_1731;
  undefined7 uStack_1730;
  byte local_1728;
  undefined7 uStack_1727;
  undefined1 local_1720;
  undefined7 uStack_171f;
  void *local_1718;
  undefined7 uStack_1710;
  undefined1 local_1709;
  undefined7 uStack_1708;
  byte local_1700;
  undefined7 uStack_16ff;
  undefined1 local_16f8;
  undefined7 uStack_16f7;
  void *local_16f0;
  undefined7 uStack_16e8;
  undefined1 local_16e1;
  undefined7 uStack_16e0;
  byte local_16d8;
  undefined7 uStack_16d7;
  undefined1 local_16d0;
  undefined7 uStack_16cf;
  void *local_16c8;
  undefined7 uStack_16c0;
  undefined1 local_16b9;
  undefined7 uStack_16b8;
  string local_16b0;
  undefined7 uStack_16af;
  undefined1 local_16a8;
  undefined7 uStack_16a7;
  void *local_16a0;
  undefined7 uStack_1698;
  undefined1 local_1691;
  undefined7 uStack_1690;
  string local_1688;
  undefined7 uStack_1687;
  undefined1 local_1680;
  undefined7 uStack_167f;
  void *local_1678;
  undefined *local_1670;
  undefined *local_1668;
  undefined4 local_1660;
  byte local_1658;
  undefined7 uStack_1657;
  undefined1 local_1650;
  undefined7 uStack_164f;
  void *local_1648;
  undefined *local_1640;
  undefined *local_1638;
  undefined4 local_1630;
  byte local_1628;
  undefined7 uStack_1627;
  undefined1 local_1620;
  undefined7 uStack_161f;
  void *local_1618;
  undefined *local_1610;
  undefined *local_1608;
  undefined4 local_1600;
  byte local_15f8;
  undefined7 uStack_15f7;
  undefined1 local_15f0;
  undefined7 uStack_15ef;
  void *local_15e8;
  undefined *local_15e0;
  undefined *local_15d8;
  undefined4 local_15d0;
  byte local_15c8;
  undefined7 uStack_15c7;
  undefined1 local_15c0;
  undefined7 uStack_15bf;
  void *local_15b8;
  undefined *local_15b0;
  undefined *local_15a8;
  undefined4 local_15a0;
  byte local_1598;
  undefined7 uStack_1597;
  undefined1 local_1590;
  undefined7 uStack_158f;
  void *local_1588;
  undefined *local_1580;
  undefined *local_1578;
  undefined4 local_1570;
  byte local_1568;
  undefined7 local_1567;
  undefined1 uStack_1560;
  undefined7 uStack_155f;
  void *local_1558;
  undefined *local_1550;
  undefined *local_1548;
  undefined4 local_1540;
  byte local_1538;
  undefined7 local_1537;
  undefined1 uStack_1530;
  undefined7 uStack_152f;
  void *local_1528;
  undefined *local_1520;
  undefined *local_1518;
  undefined4 local_1510;
  byte local_1508;
  undefined7 local_1507;
  undefined1 uStack_1500;
  undefined7 uStack_14ff;
  void *local_14f8;
  undefined *local_14f0;
  undefined *local_14e8;
  undefined4 local_14e0;
  byte local_14d8;
  undefined7 local_14d7;
  undefined1 uStack_14d0;
  undefined7 uStack_14cf;
  void *local_14c8;
  undefined *local_14c0;
  undefined *local_14b8;
  undefined4 local_14b0;
  byte local_14a8;
  undefined7 local_14a7;
  undefined1 uStack_14a0;
  undefined7 uStack_149f;
  void *local_1498;
  undefined *local_1490;
  undefined *local_1488;
  undefined4 local_1480;
  byte local_1478;
  undefined7 local_1477;
  undefined1 uStack_1470;
  undefined7 uStack_146f;
  void *local_1468;
  undefined *local_1460;
  undefined *local_1458;
  undefined4 local_1450;
  byte local_1448;
  undefined7 local_1447;
  undefined1 uStack_1440;
  undefined7 uStack_143f;
  void *local_1438;
  undefined *local_1430;
  undefined *local_1428;
  undefined4 local_1420;
  byte local_1418;
  undefined7 local_1417;
  undefined1 uStack_1410;
  undefined7 uStack_140f;
  void *local_1408;
  undefined *local_1400;
  undefined *local_13f8;
  undefined4 local_13f0;
  byte local_13e8;
  undefined7 local_13e7;
  undefined1 uStack_13e0;
  undefined7 uStack_13df;
  void *local_13d8;
  undefined *local_13d0;
  undefined *local_13c8;
  undefined4 local_13c0;
  byte local_13b8;
  undefined7 local_13b7;
  undefined1 uStack_13b0;
  undefined7 uStack_13af;
  void *local_13a8;
  undefined *local_13a0;
  undefined *local_1398;
  undefined4 local_1390;
  byte local_1388;
  undefined7 local_1387;
  undefined1 uStack_1380;
  undefined7 uStack_137f;
  void *local_1378;
  undefined *local_1370;
  undefined *local_1368;
  undefined4 local_1360;
  byte local_1358;
  undefined7 local_1357;
  undefined1 uStack_1350;
  undefined7 uStack_134f;
  void *local_1348;
  undefined *local_1340;
  undefined *local_1338;
  undefined4 local_1330;
  byte local_1328;
  undefined7 local_1327;
  undefined1 uStack_1320;
  undefined7 uStack_131f;
  void *local_1318;
  undefined *local_1310;
  undefined *local_1308;
  undefined4 local_1300;
  byte local_12f8;
  undefined7 local_12f7;
  undefined1 uStack_12f0;
  undefined7 uStack_12ef;
  void *local_12e8;
  undefined *local_12e0;
  undefined *local_12d8;
  undefined4 local_12d0;
  byte local_12c8;
  undefined7 local_12c7;
  undefined1 uStack_12c0;
  undefined7 uStack_12bf;
  void *local_12b8;
  undefined *local_12b0;
  undefined *local_12a8;
  undefined4 local_12a0;
  byte local_1298;
  undefined7 local_1297;
  undefined1 uStack_1290;
  undefined7 uStack_128f;
  void *local_1288;
  undefined *local_1280;
  undefined *local_1278;
  undefined4 local_1270;
  byte local_1268;
  undefined7 local_1267;
  undefined1 uStack_1260;
  undefined7 uStack_125f;
  void *local_1258;
  undefined *local_1250;
  undefined *local_1248;
  undefined4 local_1240;
  byte local_1238;
  undefined7 local_1237;
  undefined1 uStack_1230;
  undefined7 uStack_122f;
  void *local_1228;
  undefined *local_1220;
  undefined *local_1218;
  undefined4 local_1210;
  byte local_1208;
  undefined7 local_1207;
  undefined1 uStack_1200;
  undefined7 uStack_11ff;
  void *local_11f8;
  undefined *local_11f0;
  undefined *local_11e8;
  undefined4 local_11e0;
  byte local_11d8;
  undefined7 local_11d7;
  undefined1 uStack_11d0;
  undefined7 uStack_11cf;
  void *local_11c8;
  undefined *local_11c0;
  undefined *local_11b8;
  undefined4 local_11b0;
  byte local_11a8;
  undefined7 local_11a7;
  undefined1 uStack_11a0;
  undefined7 uStack_119f;
  void *local_1198;
  undefined *local_1190;
  undefined *local_1188;
  undefined4 local_1180;
  byte local_1178;
  undefined7 local_1177;
  undefined1 uStack_1170;
  undefined7 uStack_116f;
  void *local_1168;
  undefined *local_1160;
  undefined *local_1158;
  undefined4 local_1150;
  byte local_1148;
  undefined7 local_1147;
  undefined1 uStack_1140;
  undefined7 uStack_113f;
  void *local_1138;
  undefined *local_1130;
  undefined *local_1128;
  undefined4 local_1120;
  byte local_1118;
  undefined7 local_1117;
  undefined1 uStack_1110;
  undefined7 uStack_110f;
  void *local_1108;
  undefined *local_1100;
  undefined *local_10f8;
  undefined4 local_10f0;
  byte local_10e8;
  undefined7 local_10e7;
  undefined1 uStack_10e0;
  undefined7 uStack_10df;
  void *local_10d8;
  undefined *local_10d0;
  undefined *local_10c8;
  undefined4 local_10c0;
  byte local_10b8;
  undefined7 local_10b7;
  undefined1 uStack_10b0;
  undefined7 uStack_10af;
  void *local_10a8;
  undefined *local_10a0;
  undefined *local_1098;
  undefined4 local_1090;
  byte local_1088;
  undefined7 local_1087;
  undefined1 uStack_1080;
  undefined7 uStack_107f;
  void *local_1078;
  undefined *local_1070;
  undefined *local_1068;
  undefined4 local_1060;
  byte local_1058;
  undefined7 local_1057;
  undefined1 uStack_1050;
  undefined7 uStack_104f;
  void *local_1048;
  undefined *local_1040;
  undefined *local_1038;
  undefined4 local_1030;
  byte local_1028;
  undefined7 local_1027;
  undefined1 uStack_1020;
  undefined7 uStack_101f;
  void *local_1018;
  undefined *local_1010;
  undefined *local_1008;
  undefined4 local_1000;
  byte local_ff8;
  undefined7 local_ff7;
  undefined1 uStack_ff0;
  undefined7 uStack_fef;
  void *local_fe8;
  undefined *local_fe0;
  undefined *local_fd8;
  undefined4 local_fd0;
  byte local_fc8;
  undefined7 local_fc7;
  undefined1 uStack_fc0;
  undefined7 uStack_fbf;
  void *local_fb8;
  undefined *local_fb0;
  undefined *local_fa8;
  undefined4 local_fa0;
  byte local_f98;
  undefined7 local_f97;
  undefined1 uStack_f90;
  undefined7 uStack_f8f;
  void *local_f88;
  undefined *local_f80;
  undefined *local_f78;
  undefined4 local_f70;
  byte local_f68;
  undefined7 local_f67;
  undefined1 uStack_f60;
  undefined7 uStack_f5f;
  void *local_f58;
  undefined *local_f50;
  undefined *local_f48;
  undefined4 local_f40;
  byte local_f38;
  undefined7 local_f37;
  undefined1 uStack_f30;
  undefined7 uStack_f2f;
  void *local_f28;
  undefined *local_f20;
  undefined *local_f18;
  undefined4 local_f10;
  byte local_f08;
  undefined7 local_f07;
  undefined1 uStack_f00;
  undefined7 uStack_eff;
  void *local_ef8;
  undefined *local_ef0;
  undefined *local_ee8;
  undefined4 local_ee0;
  byte local_ed8;
  undefined7 local_ed7;
  undefined1 uStack_ed0;
  undefined7 uStack_ecf;
  void *local_ec8;
  undefined *local_ec0;
  undefined *local_eb8;
  undefined4 local_eb0;
  byte local_ea8;
  undefined7 local_ea7;
  undefined1 uStack_ea0;
  undefined7 uStack_e9f;
  void *local_e98;
  undefined *local_e90;
  undefined *local_e88;
  undefined4 local_e80;
  byte local_e78;
  undefined7 local_e77;
  undefined1 uStack_e70;
  undefined7 uStack_e6f;
  void *local_e68;
  undefined *local_e60;
  undefined *local_e58;
  undefined4 local_e50;
  byte local_e48;
  undefined7 local_e47;
  undefined1 uStack_e40;
  undefined7 uStack_e3f;
  void *local_e38;
  undefined *local_e30;
  undefined *local_e28;
  undefined4 local_e20;
  byte local_e18;
  undefined7 local_e17;
  undefined1 uStack_e10;
  undefined7 uStack_e0f;
  void *local_e08;
  undefined *local_e00;
  undefined *local_df8;
  undefined4 local_df0;
  byte local_de8;
  undefined7 local_de7;
  undefined1 uStack_de0;
  undefined7 uStack_ddf;
  void *local_dd8;
  undefined *local_dd0;
  undefined *local_dc8;
  undefined4 local_dc0;
  byte local_db8;
  undefined7 local_db7;
  undefined1 uStack_db0;
  undefined7 uStack_daf;
  void *local_da8;
  undefined *local_da0;
  undefined *local_d98;
  undefined4 local_d90;
  byte local_d88;
  undefined7 local_d87;
  undefined1 uStack_d80;
  undefined7 uStack_d7f;
  void *local_d78;
  undefined *local_d70;
  undefined *local_d68;
  undefined4 local_d60;
  byte local_d58;
  undefined7 local_d57;
  undefined1 uStack_d50;
  undefined7 uStack_d4f;
  void *local_d48;
  undefined *local_d40;
  undefined *local_d38;
  undefined4 local_d30;
  byte local_d28;
  undefined7 local_d27;
  undefined1 uStack_d20;
  undefined7 uStack_d1f;
  void *local_d18;
  undefined *local_d10;
  undefined *local_d08;
  undefined4 local_d00;
  byte local_cf8;
  undefined7 local_cf7;
  undefined1 uStack_cf0;
  undefined7 uStack_cef;
  void *local_ce8;
  undefined *local_ce0;
  undefined *local_cd8;
  undefined4 local_cd0;
  byte local_cc8;
  undefined7 local_cc7;
  undefined1 uStack_cc0;
  undefined7 uStack_cbf;
  void *local_cb8;
  undefined *local_cb0;
  undefined *local_ca8;
  undefined4 local_ca0;
  byte local_c98;
  undefined7 local_c97;
  undefined1 uStack_c90;
  undefined7 uStack_c8f;
  void *local_c88;
  undefined *local_c80;
  undefined *local_c78;
  undefined4 local_c70;
  byte local_c68;
  undefined7 local_c67;
  undefined1 uStack_c60;
  undefined7 uStack_c5f;
  void *local_c58;
  undefined *local_c50;
  undefined *local_c48;
  undefined4 local_c40;
  byte local_c38;
  undefined7 local_c37;
  undefined1 uStack_c30;
  undefined7 uStack_c2f;
  void *local_c28;
  undefined *local_c20;
  undefined *local_c18;
  undefined4 local_c10;
  byte local_c08;
  undefined7 local_c07;
  undefined1 uStack_c00;
  undefined7 uStack_bff;
  void *local_bf8;
  undefined *local_bf0;
  undefined *local_be8;
  undefined4 local_be0;
  byte local_bd8;
  undefined7 local_bd7;
  undefined1 uStack_bd0;
  undefined7 uStack_bcf;
  void *local_bc8;
  undefined *local_bc0;
  undefined *local_bb8;
  undefined4 local_bb0;
  byte local_ba8;
  undefined7 local_ba7;
  undefined1 uStack_ba0;
  undefined7 uStack_b9f;
  void *local_b98;
  undefined *local_b90;
  undefined *local_b88;
  undefined4 local_b80;
  byte local_b78;
  undefined7 local_b77;
  undefined1 uStack_b70;
  undefined7 uStack_b6f;
  void *local_b68;
  undefined *local_b60;
  undefined *local_b58;
  undefined4 local_b50;
  byte local_b48;
  undefined7 local_b47;
  undefined1 uStack_b40;
  undefined7 uStack_b3f;
  void *local_b38;
  undefined *local_b30;
  undefined *local_b28;
  undefined4 local_b20;
  byte local_b18;
  undefined7 local_b17;
  undefined1 uStack_b10;
  undefined7 uStack_b0f;
  void *local_b08;
  undefined *local_b00;
  undefined *local_af8;
  undefined4 local_af0;
  byte local_ae8;
  undefined7 local_ae7;
  undefined1 uStack_ae0;
  undefined7 uStack_adf;
  void *local_ad8;
  undefined *local_ad0;
  undefined *local_ac8;
  undefined4 local_ac0;
  byte local_ab8;
  undefined7 local_ab7;
  undefined1 uStack_ab0;
  undefined7 uStack_aaf;
  void *local_aa8;
  undefined *local_aa0;
  undefined *local_a98;
  undefined4 local_a90;
  byte local_a88;
  undefined7 local_a87;
  undefined1 uStack_a80;
  undefined7 uStack_a7f;
  void *local_a78;
  undefined *local_a70;
  undefined *local_a68;
  undefined4 local_a60;
  byte local_a58;
  undefined7 local_a57;
  undefined1 uStack_a50;
  undefined7 uStack_a4f;
  void *local_a48;
  undefined *local_a40;
  undefined *local_a38;
  undefined4 local_a30;
  byte local_a28;
  undefined7 local_a27;
  undefined1 uStack_a20;
  undefined7 uStack_a1f;
  void *local_a18;
  undefined *local_a10;
  undefined *local_a08;
  undefined4 local_a00;
  byte local_9f8;
  undefined7 local_9f7;
  undefined1 uStack_9f0;
  undefined7 uStack_9ef;
  void *local_9e8;
  undefined *local_9e0;
  undefined *local_9d8;
  undefined4 local_9d0;
  byte local_9c8;
  undefined7 local_9c7;
  undefined1 uStack_9c0;
  undefined7 uStack_9bf;
  void *local_9b8;
  undefined *local_9b0;
  undefined *local_9a8;
  undefined4 local_9a0;
  byte local_998;
  undefined7 local_997;
  undefined1 uStack_990;
  undefined7 uStack_98f;
  void *local_988;
  undefined *local_980;
  undefined *local_978;
  undefined4 local_970;
  byte local_968;
  undefined7 local_967;
  undefined1 uStack_960;
  undefined7 uStack_95f;
  void *local_958;
  undefined *local_950;
  undefined *local_948;
  undefined4 local_940;
  byte local_938;
  undefined7 local_937;
  undefined1 uStack_930;
  undefined7 uStack_92f;
  void *local_928;
  undefined *local_920;
  undefined *local_918;
  undefined4 local_910;
  byte local_908;
  undefined7 local_907;
  undefined1 uStack_900;
  undefined7 uStack_8ff;
  void *local_8f8;
  undefined *local_8f0;
  undefined *local_8e8;
  undefined4 local_8e0;
  byte local_8d8;
  undefined7 local_8d7;
  undefined1 uStack_8d0;
  undefined7 uStack_8cf;
  void *local_8c8;
  undefined *local_8c0;
  undefined *local_8b8;
  undefined4 local_8b0;
  byte local_8a8;
  undefined7 local_8a7;
  undefined1 uStack_8a0;
  undefined7 uStack_89f;
  void *local_898;
  undefined *local_890;
  undefined *local_888;
  undefined4 local_880;
  byte local_878;
  undefined7 local_877;
  undefined1 uStack_870;
  undefined7 uStack_86f;
  void *local_868;
  undefined *local_860;
  undefined *local_858;
  undefined4 local_850;
  byte local_848;
  undefined7 local_847;
  undefined1 uStack_840;
  undefined7 uStack_83f;
  void *local_838;
  undefined *local_830;
  undefined *local_828;
  undefined4 local_820;
  byte local_818;
  undefined7 local_817;
  undefined1 uStack_810;
  undefined7 uStack_80f;
  void *local_808;
  undefined *local_800;
  undefined *local_7f8;
  undefined4 local_7f0;
  byte local_7e8;
  undefined7 local_7e7;
  undefined1 uStack_7e0;
  undefined7 uStack_7df;
  void *local_7d8;
  undefined *local_7d0;
  undefined *local_7c8;
  undefined4 local_7c0;
  byte local_7b8;
  undefined7 local_7b7;
  undefined1 uStack_7b0;
  undefined7 uStack_7af;
  void *local_7a8;
  undefined *local_7a0;
  undefined *local_798;
  undefined4 local_790;
  byte local_788;
  undefined7 local_787;
  undefined1 uStack_780;
  undefined7 uStack_77f;
  void *local_778;
  undefined *local_770;
  undefined *local_768;
  undefined4 local_760;
  byte local_758;
  undefined7 local_757;
  undefined1 uStack_750;
  undefined7 uStack_74f;
  void *local_748;
  undefined *local_740;
  undefined *local_738;
  undefined4 local_730;
  byte local_728;
  undefined7 local_727;
  undefined1 uStack_720;
  undefined7 uStack_71f;
  void *local_718;
  undefined *local_710;
  undefined *local_708;
  undefined4 local_700;
  byte local_6f8;
  undefined7 local_6f7;
  undefined1 uStack_6f0;
  undefined7 uStack_6ef;
  void *local_6e8;
  undefined *local_6e0;
  undefined *local_6d8;
  undefined4 local_6d0;
  byte local_6c8;
  undefined7 local_6c7;
  undefined1 uStack_6c0;
  undefined7 uStack_6bf;
  void *local_6b8;
  undefined *local_6b0;
  undefined *local_6a8;
  undefined4 local_6a0;
  byte local_698;
  undefined7 local_697;
  undefined1 uStack_690;
  undefined7 uStack_68f;
  void *local_688;
  undefined *local_680;
  undefined *local_678;
  undefined4 local_670;
  byte bStack_668;
  undefined7 uStack_667;
  undefined1 local_660;
  undefined7 uStack_65f;
  void *local_658;
  undefined *local_650;
  undefined *local_648;
  undefined4 local_640;
  byte bStack_638;
  undefined7 uStack_637;
  undefined1 local_630;
  undefined7 uStack_62f;
  void *local_628;
  undefined *local_620;
  undefined *local_618;
  undefined4 local_610;
  byte bStack_608;
  undefined7 uStack_607;
  undefined1 local_600;
  undefined7 uStack_5ff;
  void *local_5f8;
  undefined *local_5f0;
  undefined *local_5e8;
  undefined4 local_5e0;
  byte bStack_5d8;
  undefined7 uStack_5d7;
  undefined1 local_5d0;
  undefined7 uStack_5cf;
  void *local_5c8;
  undefined *local_5c0;
  undefined *local_5b8;
  undefined4 local_5b0;
  byte bStack_5a8;
  undefined7 uStack_5a7;
  undefined1 local_5a0;
  undefined7 uStack_59f;
  void *local_598;
  undefined *local_590;
  undefined *local_588;
  undefined4 local_580;
  byte bStack_578;
  undefined7 uStack_577;
  undefined1 local_570;
  undefined7 uStack_56f;
  void *local_568;
  undefined *local_560;
  undefined *local_558;
  undefined4 local_550;
  byte bStack_548;
  undefined7 uStack_547;
  undefined1 local_540;
  undefined7 uStack_53f;
  void *local_538;
  undefined *local_530;
  undefined *local_528;
  undefined4 local_520;
  byte bStack_518;
  undefined7 uStack_517;
  undefined1 local_510;
  undefined7 uStack_50f;
  void *local_508;
  undefined *local_500;
  undefined *local_4f8;
  undefined4 local_4f0;
  byte bStack_4e8;
  undefined7 uStack_4e7;
  undefined1 local_4e0;
  undefined7 uStack_4df;
  void *local_4d8;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined4 local_4c0;
  byte bStack_4b8;
  undefined7 uStack_4b7;
  undefined1 local_4b0;
  undefined7 uStack_4af;
  void *local_4a8;
  undefined *local_4a0;
  undefined *local_498;
  undefined4 local_490;
  byte bStack_488;
  undefined7 uStack_487;
  undefined1 local_480;
  undefined7 uStack_47f;
  void *local_478;
  undefined *local_470;
  undefined *local_468;
  undefined4 local_460;
  byte bStack_458;
  undefined7 uStack_457;
  undefined1 local_450;
  undefined7 uStack_44f;
  void *local_448;
  undefined *local_440;
  undefined *local_438;
  undefined4 local_430;
  byte bStack_428;
  undefined7 uStack_427;
  undefined1 local_420;
  undefined7 uStack_41f;
  void *local_418;
  undefined *local_410;
  undefined *local_408;
  undefined4 local_400;
  byte bStack_3f8;
  undefined7 uStack_3f7;
  undefined1 local_3f0;
  undefined7 uStack_3ef;
  void *local_3e8;
  undefined *local_3e0;
  undefined *local_3d8;
  undefined4 local_3d0;
  byte bStack_3c8;
  undefined7 uStack_3c7;
  undefined1 local_3c0;
  undefined7 uStack_3bf;
  void *local_3b8;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined4 local_3a0;
  byte bStack_398;
  undefined7 uStack_397;
  undefined1 local_390;
  undefined7 uStack_38f;
  void *local_388;
  undefined *local_380;
  undefined *local_378;
  undefined4 local_370;
  byte bStack_368;
  undefined7 uStack_367;
  undefined1 local_360;
  undefined7 uStack_35f;
  void *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined4 local_340;
  byte bStack_338;
  undefined7 uStack_337;
  undefined1 local_330;
  undefined7 uStack_32f;
  void *local_328;
  undefined *local_320;
  undefined *local_318;
  undefined4 local_310;
  byte bStack_308;
  undefined7 uStack_307;
  undefined1 local_300;
  undefined7 uStack_2ff;
  void *local_2f8;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined4 local_2e0;
  byte bStack_2d8;
  undefined7 uStack_2d7;
  undefined1 local_2d0;
  undefined7 uStack_2cf;
  void *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined4 local_2b0;
  byte bStack_2a8;
  undefined7 uStack_2a7;
  undefined1 local_2a0;
  undefined7 uStack_29f;
  void *local_298;
  undefined *local_290;
  undefined *local_288;
  undefined4 local_280;
  byte bStack_278;
  undefined7 uStack_277;
  undefined1 local_270;
  undefined7 uStack_26f;
  void *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined4 local_250;
  byte bStack_248;
  undefined7 uStack_247;
  undefined1 local_240;
  undefined7 uStack_23f;
  void *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined4 local_220;
  byte bStack_218;
  undefined7 uStack_217;
  undefined1 local_210;
  undefined7 uStack_20f;
  void *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  byte bStack_1e8;
  undefined7 uStack_1e7;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  void *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  byte bStack_1b8;
  undefined7 uStack_1b7;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  void *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined4 local_190;
  byte bStack_188;
  undefined7 uStack_187;
  undefined1 local_180;
  undefined7 uStack_17f;
  void *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined4 local_160;
  byte bStack_158;
  undefined7 uStack_157;
  undefined1 local_150;
  undefined7 uStack_14f;
  void *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined4 local_130;
  byte bStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined7 uStack_11f;
  void *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined4 local_100;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  void *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  undefined7 uStack_bf;
  void *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  byte local_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  void *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  string asStack_68 [8];
  
  plVar12 = param_1 + 1;
  *plVar12 = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[6] = (long)PTR_LAB_02721d70;
  param_1[7] = (long)PTR_FUN_02721d78;
  puVar5 = PTR_DAT_02721d80;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = (long)param_2;
  *param_1 = (long)(puVar5 + 0x10);
  lVar14 = *param_3;
  lVar3 = param_3[1];
  param_1[0xf] = param_4;
  param_1[0xd] = lVar14;
  param_1[0xe] = lVar3;
  lVar14 = *param_5;
  lVar3 = param_5[1];
  param_1[0x12] = param_6;
  param_1[0x10] = lVar14;
  param_1[0x11] = lVar3;
  lVar14 = *param_7;
  lVar3 = param_7[1];
  param_1[0x15] = param_8;
  param_1[0x13] = lVar14;
  param_1[0x14] = lVar3;
  lVar14 = *param_9;
  lVar3 = param_9[1];
  param_1[0x18] = param_10;
  param_1[0x16] = lVar14;
  param_1[0x17] = lVar3;
  lVar14 = *param_11;
  lVar3 = param_11[1];
  param_1[0x1b] = param_12;
  param_1[0x19] = lVar14;
  param_1[0x1a] = lVar3;
  lVar14 = *param_13;
  lVar3 = param_13[1];
  param_1[0x1e] = param_14;
  param_1[0x1c] = lVar14;
  param_1[0x1d] = lVar3;
  lVar14 = *param_15;
  lVar3 = param_15[1];
  param_1[0x21] = param_16;
  param_1[0x1f] = lVar14;
  param_1[0x20] = lVar3;
  lVar14 = *param_17;
  lVar3 = param_17[1];
  param_1[0x24] = param_18;
  param_1[0x22] = lVar14;
  param_1[0x23] = lVar3;
  lVar14 = *param_19;
  lVar3 = param_19[1];
  param_1[0x27] = param_20;
  param_1[0x25] = lVar14;
  param_1[0x26] = lVar3;
  lVar14 = *param_21;
  lVar3 = param_21[1];
  param_1[0x2a] = param_22;
  param_1[0x28] = lVar14;
  param_1[0x29] = lVar3;
  lVar14 = *param_23;
  lVar3 = param_23[1];
  param_1[0x2d] = param_24;
  param_1[0x2b] = lVar14;
  param_1[0x2c] = lVar3;
  lVar14 = *param_25;
  lVar3 = param_25[1];
  param_1[0x30] = param_26;
  param_1[0x2e] = lVar14;
  param_1[0x2f] = lVar3;
  lVar14 = *param_27;
  lVar3 = param_27[1];
  param_1[0x33] = param_28;
  param_1[0x31] = lVar14;
  param_1[0x32] = lVar3;
  lVar14 = *param_29;
  lVar3 = param_29[1];
  param_1[0x36] = param_30;
  param_1[0x34] = lVar14;
  param_1[0x35] = lVar3;
  lVar14 = *param_31;
  lVar3 = param_31[1];
  param_1[0x39] = param_32;
  param_1[0x37] = lVar14;
  param_1[0x38] = lVar3;
  lVar14 = *param_33;
  lVar3 = param_33[1];
  param_1[0x3c] = param_34;
  param_1[0x3a] = lVar14;
  param_1[0x3b] = lVar3;
  lVar14 = *param_35;
  lVar3 = param_35[1];
  param_1[0x3f] = param_36;
  param_1[0x3d] = lVar14;
  param_1[0x3e] = lVar3;
  lVar14 = *param_37;
  lVar3 = param_37[1];
  param_1[0x42] = param_38;
  param_1[0x40] = lVar14;
  param_1[0x41] = lVar3;
  lVar14 = *param_39;
  lVar3 = param_39[1];
  param_1[0x45] = param_40;
  param_1[0x43] = lVar14;
  param_1[0x44] = lVar3;
  lVar14 = *param_41;
  lVar3 = param_41[1];
  param_1[0x48] = param_42;
  param_1[0x46] = lVar14;
  param_1[0x47] = lVar3;
  lVar14 = *param_43;
  lVar3 = param_43[1];
  param_1[0x4b] = param_44;
  param_1[0x49] = lVar14;
  param_1[0x4a] = lVar3;
  lVar14 = *param_45;
  lVar3 = param_45[1];
  param_1[0x4e] = param_46;
  param_1[0x4c] = lVar14;
  param_1[0x4d] = lVar3;
  lVar14 = *param_47;
  lVar3 = param_47[1];
  param_1[0x51] = param_48;
  param_1[0x4f] = lVar14;
  param_1[0x50] = lVar3;
  lVar14 = *param_49;
  lVar3 = param_49[1];
  param_1[0x54] = param_50;
  param_1[0x52] = lVar14;
  param_1[0x53] = lVar3;
  lVar14 = *param_51;
  lVar3 = param_51[1];
  param_1[0x57] = param_52;
  param_1[0x55] = lVar14;
  param_1[0x56] = lVar3;
  lVar14 = *param_53;
  lVar3 = param_53[1];
  param_1[0x5a] = param_54;
  param_1[0x58] = lVar14;
  param_1[0x59] = lVar3;
  lVar14 = *param_55;
  lVar3 = param_55[1];
  param_1[0x5d] = param_56;
  param_1[0x5b] = lVar14;
  param_1[0x5c] = lVar3;
  lVar14 = *param_57;
  lVar3 = param_57[1];
  param_1[0x60] = param_58;
  param_1[0x5e] = lVar14;
  param_1[0x5f] = lVar3;
  lVar14 = *param_59;
  lVar3 = param_59[1];
  param_1[99] = param_60;
  param_1[0x61] = lVar14;
  param_1[0x62] = lVar3;
  lVar14 = *param_61;
  lVar3 = param_61[1];
  param_1[0x66] = param_62;
  param_1[100] = lVar14;
  param_1[0x65] = lVar3;
  lVar14 = *param_63;
  lVar3 = param_63[1];
  param_1[0x69] = param_64;
  param_1[0x67] = lVar14;
  param_1[0x68] = lVar3;
  lVar14 = *param_65;
  lVar3 = param_65[1];
  param_1[0x6c] = param_66;
  param_1[0x6a] = lVar14;
  param_1[0x6b] = lVar3;
  lVar14 = *param_67;
  lVar3 = param_67[1];
  param_1[0x6f] = param_68;
  param_1[0x6d] = lVar14;
  param_1[0x6e] = lVar3;
  lVar14 = *param_69;
  lVar3 = param_69[1];
  param_1[0x72] = param_70;
  param_1[0x70] = lVar14;
  param_1[0x71] = lVar3;
  lVar14 = *in_stack_000001f0;
  lVar3 = in_stack_000001f0[1];
  param_1[0x75] = in_stack_000001f8;
  param_1[0x73] = lVar14;
  param_1[0x74] = lVar3;
  lVar14 = *in_stack_00000200;
  lVar3 = in_stack_00000200[1];
  param_1[0x78] = in_stack_00000208;
  param_1[0x76] = lVar14;
  param_1[0x77] = lVar3;
  lVar14 = *in_stack_00000210;
  lVar3 = in_stack_00000210[1];
  param_1[0x7b] = in_stack_00000218;
  param_1[0x79] = lVar14;
  param_1[0x7a] = lVar3;
  lVar14 = *in_stack_00000220;
  lVar3 = in_stack_00000220[1];
  param_1[0x7e] = in_stack_00000228;
  param_1[0x7c] = lVar14;
  param_1[0x7d] = lVar3;
  lVar14 = *in_stack_00000230;
  lVar3 = in_stack_00000230[1];
  param_1[0x81] = in_stack_00000238;
  param_1[0x7f] = lVar14;
  param_1[0x80] = lVar3;
  lVar14 = *in_stack_00000240;
  lVar3 = in_stack_00000240[1];
  param_1[0x84] = in_stack_00000248;
  param_1[0x82] = lVar14;
  param_1[0x83] = lVar3;
  lVar14 = *in_stack_00000250;
  lVar3 = in_stack_00000250[1];
  param_1[0x87] = in_stack_00000258;
  param_1[0x85] = lVar14;
  param_1[0x86] = lVar3;
  lVar14 = *in_stack_00000260;
  lVar3 = in_stack_00000260[1];
  param_1[0x8a] = in_stack_00000268;
  param_1[0x88] = lVar14;
  param_1[0x89] = lVar3;
  lVar14 = *in_stack_00000270;
  lVar3 = in_stack_00000270[1];
  param_1[0x8d] = in_stack_00000278;
  param_1[0x8b] = lVar14;
  param_1[0x8c] = lVar3;
  lVar14 = *in_stack_00000280;
  lVar3 = in_stack_00000280[1];
  param_1[0x90] = in_stack_00000288;
  param_1[0x8e] = lVar14;
  param_1[0x8f] = lVar3;
  lVar14 = *in_stack_00000290;
  lVar3 = in_stack_00000290[1];
  param_1[0x93] = in_stack_00000298;
  param_1[0x91] = lVar14;
  param_1[0x92] = lVar3;
  lVar14 = *in_stack_000002a0;
  lVar3 = in_stack_000002a0[1];
  param_1[0x96] = in_stack_000002a8;
  param_1[0x94] = lVar14;
  param_1[0x95] = lVar3;
  lVar14 = *in_stack_000002b0;
  lVar3 = in_stack_000002b0[1];
  param_1[0x99] = in_stack_000002b8;
  param_1[0x97] = lVar14;
  param_1[0x98] = lVar3;
  lVar14 = *in_stack_000002c0;
  lVar3 = in_stack_000002c0[1];
  param_1[0x9c] = in_stack_000002c8;
  param_1[0x9a] = lVar14;
  param_1[0x9b] = lVar3;
  lVar14 = *in_stack_000002d0;
  lVar3 = in_stack_000002d0[1];
  param_1[0x9f] = in_stack_000002d8;
  param_1[0x9d] = lVar14;
  param_1[0x9e] = lVar3;
  lVar14 = *in_stack_000002e0;
  lVar3 = in_stack_000002e0[1];
  param_1[0xa2] = in_stack_000002e8;
  param_1[0xa0] = lVar14;
  param_1[0xa1] = lVar3;
  lVar14 = *in_stack_000002f0;
  lVar3 = in_stack_000002f0[1];
  param_1[0xa5] = in_stack_000002f8;
  param_1[0xa3] = lVar14;
  param_1[0xa4] = lVar3;
  lVar14 = *in_stack_00000300;
  lVar3 = in_stack_00000300[1];
  param_1[0xa8] = in_stack_00000308;
  param_1[0xa6] = lVar14;
  param_1[0xa7] = lVar3;
  lVar14 = *in_stack_00000310;
  lVar3 = in_stack_00000310[1];
  param_1[0xab] = in_stack_00000318;
  param_1[0xa9] = lVar14;
  param_1[0xaa] = lVar3;
  lVar14 = *in_stack_00000320;
  lVar3 = in_stack_00000320[1];
  param_1[0xae] = in_stack_00000328;
  param_1[0xac] = lVar14;
  param_1[0xad] = lVar3;
  lVar14 = *in_stack_00000330;
  lVar3 = in_stack_00000330[1];
  param_1[0xb1] = in_stack_00000338;
  param_1[0xaf] = lVar14;
  param_1[0xb0] = lVar3;
  lVar14 = *in_stack_00000340;
  lVar3 = in_stack_00000340[1];
  param_1[0xb4] = in_stack_00000348;
  param_1[0xb2] = lVar14;
  param_1[0xb3] = lVar3;
  lVar14 = *in_stack_00000350;
  lVar3 = in_stack_00000350[1];
  param_1[0xb7] = in_stack_00000358;
  param_1[0xb5] = lVar14;
  param_1[0xb6] = lVar3;
  lVar14 = *in_stack_00000360;
  lVar3 = in_stack_00000360[1];
  param_1[0xba] = in_stack_00000368;
  param_1[0xb8] = lVar14;
  param_1[0xb9] = lVar3;
  lVar14 = *in_stack_00000370;
  lVar3 = in_stack_00000370[1];
  param_1[0xbd] = in_stack_00000378;
  param_1[0xbb] = lVar14;
  param_1[0xbc] = lVar3;
  lVar14 = *in_stack_00000380;
  lVar3 = in_stack_00000380[1];
  param_1[0xc0] = in_stack_00000388;
  param_1[0xbe] = lVar14;
  param_1[0xbf] = lVar3;
  lVar14 = *in_stack_00000390;
  lVar3 = in_stack_00000390[1];
  param_1[0xc3] = in_stack_00000398;
  param_1[0xc1] = lVar14;
  param_1[0xc2] = lVar3;
  lVar14 = *in_stack_000003a0;
  lVar3 = in_stack_000003a0[1];
  param_1[0xc6] = in_stack_000003a8;
  param_1[0xc4] = lVar14;
  param_1[0xc5] = lVar3;
  lVar14 = *in_stack_000003b0;
  lVar3 = in_stack_000003b0[1];
  param_1[0xc9] = in_stack_000003b8;
  param_1[199] = lVar14;
  param_1[200] = lVar3;
  lVar14 = *in_stack_000003c0;
  lVar3 = in_stack_000003c0[1];
  param_1[0xcc] = in_stack_000003c8;
  param_1[0xca] = lVar14;
  param_1[0xcb] = lVar3;
  lVar14 = *in_stack_000003d0;
  lVar3 = in_stack_000003d0[1];
  param_1[0xcf] = in_stack_000003d8;
  param_1[0xcd] = lVar14;
  param_1[0xce] = lVar3;
  lVar14 = *in_stack_000003e0;
  lVar3 = in_stack_000003e0[1];
  param_1[0xd2] = in_stack_000003e8;
  param_1[0xd0] = lVar14;
  param_1[0xd1] = lVar3;
  lVar14 = *in_stack_000003f0;
  lVar3 = in_stack_000003f0[1];
  param_1[0xd5] = in_stack_000003f8;
  param_1[0xd3] = lVar14;
  param_1[0xd4] = lVar3;
  lVar14 = *in_stack_00000400;
  lVar3 = in_stack_00000400[1];
  param_1[0xd8] = in_stack_00000408;
  param_1[0xd6] = lVar14;
  param_1[0xd7] = lVar3;
  lVar14 = *in_stack_00000410;
  lVar3 = in_stack_00000410[1];
  param_1[0xdb] = in_stack_00000418;
  param_1[0xd9] = lVar14;
  param_1[0xda] = lVar3;
  lVar14 = *in_stack_00000420;
  lVar3 = in_stack_00000420[1];
  param_1[0xde] = in_stack_00000428;
  param_1[0xdc] = lVar14;
  param_1[0xdd] = lVar3;
  lVar14 = *in_stack_00000430;
  lVar3 = in_stack_00000430[1];
  param_1[0xe1] = in_stack_00000438;
  param_1[0xdf] = lVar14;
  param_1[0xe0] = lVar3;
  lVar14 = *in_stack_00000440;
  lVar3 = in_stack_00000440[1];
  param_1[0xe4] = in_stack_00000448;
  param_1[0xe2] = lVar14;
  param_1[0xe3] = lVar3;
  lVar14 = *in_stack_00000450;
  lVar3 = in_stack_00000450[1];
  param_1[0xe7] = in_stack_00000458;
  param_1[0xe5] = lVar14;
  param_1[0xe6] = lVar3;
  lVar14 = *in_stack_00000460;
  lVar3 = in_stack_00000460[1];
  param_1[0xea] = in_stack_00000468;
  param_1[0xe8] = lVar14;
  param_1[0xe9] = lVar3;
  lVar14 = *in_stack_00000470;
  lVar3 = in_stack_00000470[1];
  param_1[0xed] = in_stack_00000478;
  param_1[0xeb] = lVar14;
  param_1[0xec] = lVar3;
  lVar14 = *in_stack_00000480;
  lVar3 = in_stack_00000480[1];
  param_1[0xf0] = in_stack_00000488;
  param_1[0xee] = lVar14;
  param_1[0xef] = lVar3;
  lVar14 = *in_stack_00000490;
  lVar3 = in_stack_00000490[1];
  param_1[0xf3] = in_stack_00000498;
  param_1[0xf1] = lVar14;
  param_1[0xf2] = lVar3;
  lVar14 = *in_stack_000004a0;
  lVar3 = in_stack_000004a0[1];
  param_1[0xf6] = in_stack_000004a8;
  param_1[0xf4] = lVar14;
  param_1[0xf5] = lVar3;
  lVar14 = *in_stack_000004b0;
  lVar3 = in_stack_000004b0[1];
  param_1[0xf9] = in_stack_000004b8;
  param_1[0xf7] = lVar14;
  param_1[0xf8] = lVar3;
  lVar14 = *in_stack_000004c0;
  lVar3 = in_stack_000004c0[1];
  param_1[0xfc] = in_stack_000004c8;
  param_1[0xfa] = lVar14;
  param_1[0xfb] = lVar3;
  lVar14 = *in_stack_000004d0;
  lVar3 = in_stack_000004d0[1];
  param_1[0xff] = in_stack_000004d8;
  param_1[0xfd] = lVar14;
  param_1[0xfe] = lVar3;
  lVar14 = *in_stack_000004e0;
  lVar3 = in_stack_000004e0[1];
  param_1[0x102] = in_stack_000004e8;
  param_1[0x100] = lVar14;
  param_1[0x101] = lVar3;
  lVar14 = *in_stack_000004f0;
  lVar3 = in_stack_000004f0[1];
  param_1[0x105] = in_stack_000004f8;
  param_1[0x103] = lVar14;
  param_1[0x104] = lVar3;
  lVar14 = *in_stack_00000500;
  lVar3 = in_stack_00000500[1];
  param_1[0x108] = in_stack_00000508;
  param_1[0x106] = lVar14;
  param_1[0x107] = lVar3;
  lVar14 = *in_stack_00000510;
  lVar3 = in_stack_00000510[1];
  param_1[0x10b] = in_stack_00000518;
  param_1[0x109] = lVar14;
  param_1[0x10a] = lVar3;
  lVar14 = *in_stack_00000520;
  lVar3 = in_stack_00000520[1];
  param_1[0x10e] = in_stack_00000528;
  param_1[0x10c] = lVar14;
  param_1[0x10d] = lVar3;
  lVar14 = *in_stack_00000530;
  lVar3 = in_stack_00000530[1];
  param_1[0x111] = in_stack_00000538;
  param_1[0x10f] = lVar14;
  param_1[0x110] = lVar3;
  lVar14 = *in_stack_00000540;
  lVar3 = in_stack_00000540[1];
  param_1[0x114] = in_stack_00000548;
  param_1[0x112] = lVar14;
  param_1[0x113] = lVar3;
  lVar14 = *in_stack_00000550;
  lVar3 = in_stack_00000550[1];
  param_1[0x117] = in_stack_00000558;
  param_1[0x115] = lVar14;
  param_1[0x116] = lVar3;
  lVar14 = *in_stack_00000560;
  lVar3 = in_stack_00000560[1];
  param_1[0x11a] = in_stack_00000568;
  param_1[0x118] = lVar14;
  param_1[0x119] = lVar3;
  lVar14 = *in_stack_00000570;
  lVar3 = in_stack_00000570[1];
  param_1[0x11d] = in_stack_00000578;
  param_1[0x11b] = lVar14;
  param_1[0x11c] = lVar3;
  lVar14 = *in_stack_00000580;
  lVar3 = in_stack_00000580[1];
  param_1[0x120] = in_stack_00000588;
  param_1[0x11e] = lVar14;
  param_1[0x11f] = lVar3;
  lVar14 = *in_stack_00000590;
  lVar3 = in_stack_00000590[1];
  param_1[0x123] = in_stack_00000598;
  param_1[0x121] = lVar14;
  param_1[0x122] = lVar3;
  lVar14 = *in_stack_000005a0;
  lVar3 = in_stack_000005a0[1];
  param_1[0x126] = in_stack_000005a8;
  param_1[0x124] = lVar14;
  param_1[0x125] = lVar3;
  lVar14 = *in_stack_000005b0;
  lVar3 = in_stack_000005b0[1];
  param_1[0x129] = in_stack_000005b8;
  param_1[0x127] = lVar14;
  param_1[0x128] = lVar3;
  lVar14 = *in_stack_000005c0;
  lVar3 = in_stack_000005c0[1];
  param_1[300] = in_stack_000005c8;
  param_1[0x12a] = lVar14;
  param_1[299] = lVar3;
  lVar14 = *in_stack_000005d0;
  lVar3 = in_stack_000005d0[1];
  param_1[0x12f] = in_stack_000005d8;
  param_1[0x12d] = lVar14;
  param_1[0x12e] = lVar3;
  lVar14 = *in_stack_000005e0;
  lVar3 = in_stack_000005e0[1];
  param_1[0x132] = in_stack_000005e8;
  param_1[0x130] = lVar14;
  param_1[0x131] = lVar3;
  lVar14 = *in_stack_000005f0;
  lVar3 = in_stack_000005f0[1];
  param_1[0x135] = in_stack_000005f8;
  param_1[0x133] = lVar14;
  param_1[0x134] = lVar3;
  lVar14 = *in_stack_00000600;
  lVar3 = in_stack_00000600[1];
  param_1[0x138] = in_stack_00000608;
  param_1[0x136] = lVar14;
  param_1[0x137] = lVar3;
  lVar14 = *in_stack_00000610;
  lVar3 = in_stack_00000610[1];
  param_1[0x13b] = in_stack_00000618;
  param_1[0x139] = lVar14;
  param_1[0x13a] = lVar3;
  lVar14 = *in_stack_00000620;
  lVar3 = in_stack_00000620[1];
  param_1[0x13e] = in_stack_00000628;
  param_1[0x13c] = lVar14;
  param_1[0x13d] = lVar3;
  lVar14 = *in_stack_00000630;
  lVar3 = in_stack_00000630[1];
  param_1[0x141] = in_stack_00000638;
  param_1[0x13f] = lVar14;
  param_1[0x140] = lVar3;
  lVar14 = *in_stack_00000640;
  lVar3 = in_stack_00000640[1];
  param_1[0x144] = in_stack_00000648;
  param_1[0x142] = lVar14;
  param_1[0x143] = lVar3;
  lVar14 = *in_stack_00000650;
  lVar3 = in_stack_00000650[1];
  param_1[0x147] = in_stack_00000658;
  param_1[0x145] = lVar14;
  param_1[0x146] = lVar3;
  lVar14 = *in_stack_00000660;
  lVar3 = in_stack_00000660[1];
  param_1[0x14a] = in_stack_00000668;
  param_1[0x148] = lVar14;
  param_1[0x149] = lVar3;
  lVar14 = *in_stack_00000670;
  lVar3 = in_stack_00000670[1];
  param_1[0x14d] = in_stack_00000678;
  param_1[0x14b] = lVar14;
  param_1[0x14c] = lVar3;
  lVar14 = *in_stack_00000680;
  lVar3 = in_stack_00000680[1];
  param_1[0x150] = in_stack_00000688;
  param_1[0x14e] = lVar14;
  param_1[0x14f] = lVar3;
  lVar14 = *in_stack_00000690;
  lVar3 = in_stack_00000690[1];
  param_1[0x153] = in_stack_00000698;
  param_1[0x151] = lVar14;
  param_1[0x152] = lVar3;
  lVar14 = *in_stack_000006a0;
  lVar3 = in_stack_000006a0[1];
  param_1[0x156] = (long)in_stack_000006a8;
  param_1[0x154] = lVar14;
  param_1[0x155] = lVar3;
  lVar14 = *in_stack_000006b0;
  lVar3 = in_stack_000006b0[1];
  param_1[0x159] = (long)in_stack_000006b8;
  param_1[0x157] = lVar14;
  param_1[0x158] = lVar3;
  lVar14 = *in_stack_000006c0;
  lVar3 = in_stack_000006c0[1];
  param_1[0x15c] = (long)in_stack_000006c8;
  param_1[0x15b] = lVar3;
  param_1[0x15a] = lVar14;
  lVar14 = *in_stack_000006d0;
  lVar3 = in_stack_000006d0[1];
  param_1[0x15f] = (long)in_stack_000006d8;
  param_1[0x15e] = lVar3;
  param_1[0x15d] = lVar14;
  lVar14 = *in_stack_000006e0;
  lVar3 = in_stack_000006e0[1];
  param_1[0x162] = (long)in_stack_000006e8;
  param_1[0x161] = lVar3;
  param_1[0x160] = lVar14;
  lVar14 = *in_stack_000006f0;
  lVar3 = in_stack_000006f0[1];
  param_1[0x165] = (long)in_stack_000006f8;
  param_1[0x163] = lVar14;
  param_1[0x164] = lVar3;
  lVar14 = *in_stack_00000700;
  lVar3 = in_stack_00000700[1];
  param_1[0x16c] = (long)PTR_LAB_02721d88;
  puVar5 = PTR_LAB_02721d90;
  param_1[0x166] = lVar14;
  param_1[0x16d] = (long)puVar5;
  param_1[0x16e] = (long)&LAB_00f5b090;
  param_1[0x16f] = (long)&LAB_00f5b0a0;
  param_1[0x168] = (long)in_stack_00000708;
  param_1[0x167] = lVar3;
  param_1[0x169] = (long)in_stack_00000718;
  param_1[0x16b] = 0;
  param_1[0x16a] = 0;
  param_1[0x173] = 0;
  *(undefined1 *)(param_1 + 0x172) = 0;
  param_1[0x171] = 0;
  param_1[0x170] = 0;
  sVar8 = strlen(param_2);
  local_16a0 = (void *)0x0;
  local_16a8 = 0;
  uStack_16a7 = 0;
  local_16b0 = (string)0x0;
  uStack_16af = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_16b0 = SUB41((int)sVar8 << 1,0);
    pvVar22 = (void *)((ulong)&local_16b0 | 1);
    if (sVar8 != 0) goto LAB_00f7bb6c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_16b0 = (string)((byte)uVar15 | 1);
    uStack_16af = (undefined7)(uVar15 >> 8);
    local_16a8 = (undefined1)sVar8;
    uStack_16a7 = (undefined7)(sVar8 >> 8);
    local_16a0 = pvVar22;
LAB_00f7bb6c:
    memcpy(pvVar22,param_2,sVar8);
  }
  local_1678 = local_16a0;
  local_1680 = local_16a8;
  uStack_1687 = uStack_16af;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1688 = local_16b0;
  local_16b0 = (string)0x0;
  uStack_16af = 0;
  local_16a0 = (void *)0x0;
  uStack_167f = uStack_16a7;
  local_16a8 = 0;
  uStack_16a7 = 0;
  uStack_1690 = 0;
  uStack_1698 = 0;
  local_1691 = 0;
  local_1670 = PTR_LAB_02721d98;
  local_1660 = 0xffffffff;
  local_1668 = PTR_LAB_02721da0;
  pcVar21 = (char *)param_1[0xf];
  sVar8 = strlen(pcVar21);
  local_16c8 = (void *)0x0;
  local_16d0 = 0;
  uStack_16cf = 0;
  local_16d8 = 0;
  uStack_16d7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_16d8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_16d8 | 1);
    if (sVar8 != 0) goto LAB_00f7bc50;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_16d8 = (byte)uVar15 | 1;
    uStack_16d7 = (undefined7)(uVar15 >> 8);
    local_16d0 = (undefined1)sVar8;
    uStack_16cf = (undefined7)(sVar8 >> 8);
    local_16c8 = pvVar22;
LAB_00f7bc50:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1648 = local_16c8;
  local_1650 = local_16d0;
  uStack_1657 = uStack_16d7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1658 = local_16d8;
  local_16d8 = 0;
  uStack_16d7 = 0;
  local_16c8 = (void *)0x0;
  uStack_164f = uStack_16cf;
  local_16d0 = 0;
  uStack_16cf = 0;
  uStack_16b8 = 0;
  uStack_16c0 = 0;
  local_16b9 = 0;
  local_1640 = PTR_LAB_02721da8;
  local_1638 = PTR_LAB_02721db0;
  local_1630 = 0xffffffff;
  pcVar21 = (char *)param_1[0x12];
  sVar8 = strlen(pcVar21);
  local_16f0 = (void *)0x0;
  local_16f8 = 0;
  uStack_16f7 = 0;
  local_1700 = 0;
  uStack_16ff = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1700 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1700 | 1);
    if (sVar8 != 0) goto LAB_00f7bd3c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1700 = (byte)uVar15 | 1;
    uStack_16ff = (undefined7)(uVar15 >> 8);
    local_16f8 = (undefined1)sVar8;
    uStack_16f7 = (undefined7)(sVar8 >> 8);
    local_16f0 = pvVar22;
LAB_00f7bd3c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1618 = local_16f0;
  local_1620 = local_16f8;
  uStack_1627 = uStack_16ff;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1628 = local_1700;
  local_1700 = 0;
  uStack_16ff = 0;
  local_16f0 = (void *)0x0;
  uStack_161f = uStack_16f7;
  local_16f8 = 0;
  uStack_16f7 = 0;
  uStack_16e0 = 0;
  uStack_16e8 = 0;
  local_16e1 = 0;
  local_1610 = PTR_LAB_02721db8;
  local_1608 = PTR_LAB_02721dc0;
  local_1600 = 0xffffffff;
  pcVar21 = (char *)param_1[0x15];
  sVar8 = strlen(pcVar21);
  local_1718 = (void *)0x0;
  local_1720 = 0;
  uStack_171f = 0;
  local_1728 = 0;
  uStack_1727 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1728 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1728 | 1);
    if (sVar8 != 0) goto LAB_00f7be28;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1728 = (byte)uVar15 | 1;
    uStack_1727 = (undefined7)(uVar15 >> 8);
    local_1720 = (undefined1)sVar8;
    uStack_171f = (undefined7)(sVar8 >> 8);
    local_1718 = pvVar22;
LAB_00f7be28:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_15e8 = local_1718;
  local_15f0 = local_1720;
  uStack_15f7 = uStack_1727;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_15f8 = local_1728;
  local_1728 = 0;
  uStack_1727 = 0;
  local_1718 = (void *)0x0;
  uStack_15ef = uStack_171f;
  local_1720 = 0;
  uStack_171f = 0;
  uStack_1708 = 0;
  uStack_1710 = 0;
  local_1709 = 0;
  local_15e0 = PTR_LAB_02721dc8;
  local_15d8 = PTR_LAB_02721dd0;
  local_15d0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x18];
  sVar8 = strlen(pcVar21);
  local_1740 = (void *)0x0;
  local_1748 = 0;
  uStack_1747 = 0;
  local_1750 = 0;
  uStack_174f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1750 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1750 | 1);
    if (sVar8 != 0) goto LAB_00f7bf08;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1750 = (byte)uVar15 | 1;
    uStack_174f = (undefined7)(uVar15 >> 8);
    local_1748 = (undefined1)sVar8;
    uStack_1747 = (undefined7)(sVar8 >> 8);
    local_1740 = pvVar22;
LAB_00f7bf08:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_15b8 = local_1740;
  local_15c0 = local_1748;
  uStack_15c7 = uStack_174f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_15c8 = local_1750;
  local_1750 = 0;
  uStack_174f = 0;
  local_1740 = (void *)0x0;
  uStack_15bf = uStack_1747;
  local_1748 = 0;
  uStack_1747 = 0;
  uStack_1730 = 0;
  uStack_1738 = 0;
  local_1731 = 0;
  local_15b0 = PTR_LAB_02721dd8;
  local_15a8 = PTR_LAB_02721de0;
  local_15a0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x1b];
  sVar8 = strlen(pcVar21);
  local_1768 = (void *)0x0;
  local_1770 = 0;
  uStack_176f = 0;
  local_1778 = 0;
  uStack_1777 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1778 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1778 | 1);
    if (sVar8 != 0) goto LAB_00f7bfe8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1778 = (byte)uVar15 | 1;
    uStack_1777 = (undefined7)(uVar15 >> 8);
    local_1770 = (undefined1)sVar8;
    uStack_176f = (undefined7)(sVar8 >> 8);
    local_1768 = pvVar22;
LAB_00f7bfe8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1588 = local_1768;
  local_1590 = local_1770;
  uStack_1597 = uStack_1777;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1598 = local_1778;
  local_1778 = 0;
  uStack_1777 = 0;
  local_1768 = (void *)0x0;
  uStack_158f = uStack_176f;
  local_1770 = 0;
  uStack_176f = 0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  local_1759 = 0;
  local_1580 = PTR_LAB_02721de8;
  local_1578 = PTR_LAB_02721df0;
  local_1570 = 0xffffffff;
  pcVar21 = (char *)param_1[0x1e];
  sVar8 = strlen(pcVar21);
  local_1790 = (void *)0x0;
  local_1798 = 0;
  uStack_1797 = 0;
  local_17a0 = 0;
  uStack_179f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_17a0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_17a0 | 1);
    if (sVar8 != 0) goto LAB_00f7c0c8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_17a0 = (byte)uVar15 | 1;
    uStack_179f = (undefined7)(uVar15 >> 8);
    local_1798 = (undefined1)sVar8;
    uStack_1797 = (undefined7)(sVar8 >> 8);
    local_1790 = pvVar22;
LAB_00f7c0c8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1558 = local_1790;
  uStack_155f = uStack_1797;
  uStack_1560 = local_1798;
  local_1567 = uStack_179f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1568 = local_17a0;
  local_17a0 = 0;
  uStack_179f = 0;
  local_1790 = (void *)0x0;
  local_1798 = 0;
  uStack_1797 = 0;
  uStack_1780 = 0;
  uStack_1788 = 0;
  local_1781 = 0;
  local_1550 = PTR_LAB_02721df8;
  local_1548 = PTR_LAB_02721e00;
  local_1540 = 0xffffffff;
  pcVar21 = (char *)param_1[0x21];
  sVar8 = strlen(pcVar21);
  local_17b8 = (void *)0x0;
  local_17c0 = 0;
  uStack_17bf = 0;
  local_17c8 = 0;
  uStack_17c7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_17c8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_17c8 | 1);
    if (sVar8 != 0) goto LAB_00f7c1b4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_17c8 = (byte)uVar15 | 1;
    uStack_17c7 = (undefined7)(uVar15 >> 8);
    local_17c0 = (undefined1)sVar8;
    uStack_17bf = (undefined7)(sVar8 >> 8);
    local_17b8 = pvVar22;
LAB_00f7c1b4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1528 = local_17b8;
  uStack_152f = uStack_17bf;
  uStack_1530 = local_17c0;
  local_1537 = uStack_17c7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1538 = local_17c8;
  local_17c8 = 0;
  uStack_17c7 = 0;
  local_17b8 = (void *)0x0;
  local_17c0 = 0;
  uStack_17bf = 0;
  uStack_17a8 = 0;
  uStack_17b0 = 0;
  local_17a9 = 0;
  local_1520 = PTR_LAB_02721e08;
  local_1518 = PTR_LAB_02721e10;
  local_1510 = 0xffffffff;
  pcVar21 = (char *)param_1[0x24];
  sVar8 = strlen(pcVar21);
  local_17e0 = (void *)0x0;
  local_17e8 = 0;
  uStack_17e7 = 0;
  local_17f0 = 0;
  uStack_17ef = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_17f0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_17f0 | 1);
    if (sVar8 != 0) goto LAB_00f7c2a0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_17f0 = (byte)uVar15 | 1;
    uStack_17ef = (undefined7)(uVar15 >> 8);
    local_17e8 = (undefined1)sVar8;
    uStack_17e7 = (undefined7)(sVar8 >> 8);
    local_17e0 = pvVar22;
LAB_00f7c2a0:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_14f8 = local_17e0;
  uStack_14ff = uStack_17e7;
  uStack_1500 = local_17e8;
  local_1507 = uStack_17ef;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1508 = local_17f0;
  local_17f0 = 0;
  uStack_17ef = 0;
  local_17e0 = (void *)0x0;
  local_17e8 = 0;
  uStack_17e7 = 0;
  uStack_17d0 = 0;
  uStack_17d8 = 0;
  local_17d1 = 0;
  local_14f0 = PTR_LAB_02721e18;
  local_14e8 = PTR_LAB_02721e20;
  local_14e0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x27];
  sVar8 = strlen(pcVar21);
  local_1808 = (void *)0x0;
  local_1810 = 0;
  uStack_180f = 0;
  local_1818 = 0;
  uStack_1817 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1818 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1818 | 1);
    if (sVar8 != 0) goto LAB_00f7c38c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1818 = (byte)uVar15 | 1;
    uStack_1817 = (undefined7)(uVar15 >> 8);
    local_1810 = (undefined1)sVar8;
    uStack_180f = (undefined7)(sVar8 >> 8);
    local_1808 = pvVar22;
LAB_00f7c38c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_14c8 = local_1808;
  uStack_14cf = uStack_180f;
  uStack_14d0 = local_1810;
  local_14d7 = uStack_1817;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_14d8 = local_1818;
  local_1818 = 0;
  uStack_1817 = 0;
  local_1808 = (void *)0x0;
  local_1810 = 0;
  uStack_180f = 0;
  uStack_17f8 = 0;
  uStack_1800 = 0;
  local_17f9 = 0;
  local_14c0 = PTR_LAB_02721e28;
  local_14b8 = PTR_LAB_02721e30;
  local_14b0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x2a];
  sVar8 = strlen(pcVar21);
  local_1830 = (void *)0x0;
  local_1838 = 0;
  uStack_1837 = 0;
  local_1840 = 0;
  uStack_183f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1840 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1840 | 1);
    if (sVar8 != 0) goto LAB_00f7c480;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1840 = (byte)uVar15 | 1;
    uStack_183f = (undefined7)(uVar15 >> 8);
    local_1838 = (undefined1)sVar8;
    uStack_1837 = (undefined7)(sVar8 >> 8);
    local_1830 = pvVar22;
LAB_00f7c480:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1498 = local_1830;
  uStack_149f = uStack_1837;
  uStack_14a0 = local_1838;
  local_14a7 = uStack_183f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_14a8 = local_1840;
  local_1840 = 0;
  uStack_183f = 0;
  local_1830 = (void *)0x0;
  local_1838 = 0;
  uStack_1837 = 0;
  uStack_1820 = 0;
  uStack_1828 = 0;
  local_1821 = 0;
  local_1490 = PTR_LAB_02721e38;
  local_1488 = PTR_LAB_02721e40;
  local_1480 = 0xffffffff;
  pcVar21 = (char *)param_1[0x2d];
  sVar8 = strlen(pcVar21);
  local_1858 = (void *)0x0;
  local_1860 = 0;
  uStack_185f = 0;
  local_1868 = 0;
  uStack_1867 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1868 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1868 | 1);
    if (sVar8 != 0) goto LAB_00f7c56c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1868 = (byte)uVar15 | 1;
    uStack_1867 = (undefined7)(uVar15 >> 8);
    local_1860 = (undefined1)sVar8;
    uStack_185f = (undefined7)(sVar8 >> 8);
    local_1858 = pvVar22;
LAB_00f7c56c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1468 = local_1858;
  uStack_146f = uStack_185f;
  uStack_1470 = local_1860;
  local_1477 = uStack_1867;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1478 = local_1868;
  local_1868 = 0;
  uStack_1867 = 0;
  local_1858 = (void *)0x0;
  local_1860 = 0;
  uStack_185f = 0;
  uStack_1848 = 0;
  uStack_1850 = 0;
  local_1849 = 0;
  local_1460 = PTR_LAB_02721e48;
  local_1458 = PTR_LAB_02721e50;
  local_1450 = 0xffffffff;
  pcVar21 = (char *)param_1[0x30];
  sVar8 = strlen(pcVar21);
  local_1880 = (void *)0x0;
  local_1888 = 0;
  uStack_1887 = 0;
  local_1890 = 0;
  uStack_188f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1890 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1890 | 1);
    if (sVar8 != 0) goto LAB_00f7c658;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1890 = (byte)uVar15 | 1;
    uStack_188f = (undefined7)(uVar15 >> 8);
    local_1888 = (undefined1)sVar8;
    uStack_1887 = (undefined7)(sVar8 >> 8);
    local_1880 = pvVar22;
LAB_00f7c658:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1438 = local_1880;
  uStack_143f = uStack_1887;
  uStack_1440 = local_1888;
  local_1447 = uStack_188f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1448 = local_1890;
  local_1890 = 0;
  uStack_188f = 0;
  local_1880 = (void *)0x0;
  local_1888 = 0;
  uStack_1887 = 0;
  uStack_1870 = 0;
  uStack_1878 = 0;
  local_1871 = 0;
  local_1430 = PTR_LAB_02721e58;
  local_1428 = PTR_LAB_02721e60;
  local_1420 = 0xffffffff;
  pcVar21 = (char *)param_1[0x33];
  sVar8 = strlen(pcVar21);
  local_18a8 = (void *)0x0;
  local_18b0 = 0;
  uStack_18af = 0;
  local_18b8 = 0;
  uStack_18b7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_18b8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_18b8 | 1);
    if (sVar8 != 0) goto LAB_00f7c744;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_18b8 = (byte)uVar15 | 1;
    uStack_18b7 = (undefined7)(uVar15 >> 8);
    local_18b0 = (undefined1)sVar8;
    uStack_18af = (undefined7)(sVar8 >> 8);
    local_18a8 = pvVar22;
LAB_00f7c744:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1408 = local_18a8;
  uStack_140f = uStack_18af;
  uStack_1410 = local_18b0;
  local_1417 = uStack_18b7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1418 = local_18b8;
  local_18b8 = 0;
  uStack_18b7 = 0;
  local_18a8 = (void *)0x0;
  local_18b0 = 0;
  uStack_18af = 0;
  uStack_1898 = 0;
  uStack_18a0 = 0;
  local_1899 = 0;
  local_1400 = PTR_LAB_02721e68;
  local_13f8 = PTR_LAB_02721e70;
  local_13f0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x36];
  sVar8 = strlen(pcVar21);
  local_18d0 = (void *)0x0;
  local_18d8 = 0;
  uStack_18d7 = 0;
  local_18e0 = 0;
  uStack_18df = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_18e0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_18e0 | 1);
    if (sVar8 != 0) goto LAB_00f7c830;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_18e0 = (byte)uVar15 | 1;
    uStack_18df = (undefined7)(uVar15 >> 8);
    local_18d8 = (undefined1)sVar8;
    uStack_18d7 = (undefined7)(sVar8 >> 8);
    local_18d0 = pvVar22;
LAB_00f7c830:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_13d8 = local_18d0;
  uStack_13df = uStack_18d7;
  uStack_13e0 = local_18d8;
  local_13e7 = uStack_18df;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_13e8 = local_18e0;
  local_18e0 = 0;
  uStack_18df = 0;
  local_18d0 = (void *)0x0;
  local_18d8 = 0;
  uStack_18d7 = 0;
  uStack_18c0 = 0;
  uStack_18c8 = 0;
  local_18c1 = 0;
  local_13d0 = PTR_LAB_02721e78;
  local_13c8 = PTR_LAB_02721e80;
  local_13c0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x39];
  sVar8 = strlen(pcVar21);
  local_18f8 = (void *)0x0;
  local_1900 = 0;
  uStack_18ff = 0;
  local_1908 = 0;
  uStack_1907 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1908 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1908 | 1);
    if (sVar8 != 0) goto LAB_00f7c91c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1908 = (byte)uVar15 | 1;
    uStack_1907 = (undefined7)(uVar15 >> 8);
    local_1900 = (undefined1)sVar8;
    uStack_18ff = (undefined7)(sVar8 >> 8);
    local_18f8 = pvVar22;
LAB_00f7c91c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_13a8 = local_18f8;
  uStack_13af = uStack_18ff;
  uStack_13b0 = local_1900;
  local_13b7 = uStack_1907;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_13b8 = local_1908;
  local_1908 = 0;
  uStack_1907 = 0;
  local_18f8 = (void *)0x0;
  local_1900 = 0;
  uStack_18ff = 0;
  uStack_18e8 = 0;
  uStack_18f0 = 0;
  local_18e9 = 0;
  local_13a0 = PTR_LAB_02721e88;
  local_1398 = PTR_LAB_02721e90;
  local_1390 = 0xffffffff;
  pcVar21 = (char *)param_1[0x3c];
  sVar8 = strlen(pcVar21);
  local_1920 = (void *)0x0;
  local_1928 = 0;
  uStack_1927 = 0;
  local_1930 = 0;
  uStack_192f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1930 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1930 | 1);
    if (sVar8 != 0) goto LAB_00f7ca0c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1930 = (byte)uVar15 | 1;
    uStack_192f = (undefined7)(uVar15 >> 8);
    local_1928 = (undefined1)sVar8;
    uStack_1927 = (undefined7)(sVar8 >> 8);
    local_1920 = pvVar22;
LAB_00f7ca0c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1378 = local_1920;
  uStack_137f = uStack_1927;
  uStack_1380 = local_1928;
  local_1387 = uStack_192f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1388 = local_1930;
  local_1930 = 0;
  uStack_192f = 0;
  local_1920 = (void *)0x0;
  local_1928 = 0;
  uStack_1927 = 0;
  uStack_1910 = 0;
  uStack_1918 = 0;
  local_1911 = 0;
  local_1370 = PTR_LAB_02721e98;
  local_1368 = PTR_LAB_02721ea0;
  local_1360 = 0xffffffff;
  pcVar21 = (char *)param_1[0x3f];
  sVar8 = strlen(pcVar21);
  local_1948 = (void *)0x0;
  local_1950 = 0;
  uStack_194f = 0;
  local_1958 = 0;
  uStack_1957 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1958 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1958 | 1);
    if (sVar8 != 0) goto LAB_00f7caf4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1958 = (byte)uVar15 | 1;
    uStack_1957 = (undefined7)(uVar15 >> 8);
    local_1950 = (undefined1)sVar8;
    uStack_194f = (undefined7)(sVar8 >> 8);
    local_1948 = pvVar22;
LAB_00f7caf4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1348 = local_1948;
  uStack_134f = uStack_194f;
  uStack_1350 = local_1950;
  local_1357 = uStack_1957;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1358 = local_1958;
  local_1958 = 0;
  uStack_1957 = 0;
  local_1948 = (void *)0x0;
  local_1950 = 0;
  uStack_194f = 0;
  uStack_1938 = 0;
  uStack_1940 = 0;
  local_1939 = 0;
  local_1340 = PTR_LAB_02721ea8;
  local_1338 = PTR_LAB_02721eb0;
  local_1330 = 0xffffffff;
  pcVar21 = (char *)param_1[0x42];
  sVar8 = strlen(pcVar21);
  local_1970 = (void *)0x0;
  local_1978 = 0;
  uStack_1977 = 0;
  local_1980 = 0;
  uStack_197f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1980 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1980 | 1);
    if (sVar8 != 0) goto LAB_00f7cbdc;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1980 = (byte)uVar15 | 1;
    uStack_197f = (undefined7)(uVar15 >> 8);
    local_1978 = (undefined1)sVar8;
    uStack_1977 = (undefined7)(sVar8 >> 8);
    local_1970 = pvVar22;
LAB_00f7cbdc:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1318 = local_1970;
  uStack_131f = uStack_1977;
  uStack_1320 = local_1978;
  local_1327 = uStack_197f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1328 = local_1980;
  local_1980 = 0;
  uStack_197f = 0;
  local_1970 = (void *)0x0;
  local_1978 = 0;
  uStack_1977 = 0;
  uStack_1960 = 0;
  uStack_1968 = 0;
  local_1961 = 0;
  local_1310 = PTR_LAB_02721eb8;
  local_1308 = PTR_LAB_02721ec0;
  local_1300 = 0xffffffff;
  pcVar21 = (char *)param_1[0x45];
  sVar8 = strlen(pcVar21);
  local_1998 = (void *)0x0;
  local_19a0 = 0;
  uStack_199f = 0;
  local_19a8 = 0;
  uStack_19a7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_19a8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_19a8 | 1);
    if (sVar8 != 0) goto LAB_00f7ccc4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_19a8 = (byte)uVar15 | 1;
    uStack_19a7 = (undefined7)(uVar15 >> 8);
    local_19a0 = (undefined1)sVar8;
    uStack_199f = (undefined7)(sVar8 >> 8);
    local_1998 = pvVar22;
LAB_00f7ccc4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_12e8 = local_1998;
  uStack_12ef = uStack_199f;
  uStack_12f0 = local_19a0;
  local_12f7 = uStack_19a7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_12f8 = local_19a8;
  local_19a8 = 0;
  uStack_19a7 = 0;
  local_1998 = (void *)0x0;
  local_19a0 = 0;
  uStack_199f = 0;
  uStack_1988 = 0;
  uStack_1990 = 0;
  local_1989 = 0;
  local_12e0 = PTR_LAB_02721ec8;
  local_12d8 = PTR_LAB_02721ed0;
  local_12d0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x48];
  sVar8 = strlen(pcVar21);
  local_19c0 = (void *)0x0;
  local_19c8 = 0;
  uStack_19c7 = 0;
  local_19d0 = 0;
  uStack_19cf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_19d0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_19d0 | 1);
    if (sVar8 != 0) goto LAB_00f7cdac;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_19d0 = (byte)uVar15 | 1;
    uStack_19cf = (undefined7)(uVar15 >> 8);
    local_19c8 = (undefined1)sVar8;
    uStack_19c7 = (undefined7)(sVar8 >> 8);
    local_19c0 = pvVar22;
LAB_00f7cdac:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_12b8 = local_19c0;
  uStack_12bf = uStack_19c7;
  uStack_12c0 = local_19c8;
  local_12c7 = uStack_19cf;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_12c8 = local_19d0;
  local_19d0 = 0;
  uStack_19cf = 0;
  local_19c0 = (void *)0x0;
  local_19c8 = 0;
  uStack_19c7 = 0;
  uStack_19b0 = 0;
  uStack_19b8 = 0;
  local_19b1 = 0;
  local_12b0 = PTR_LAB_02721ed8;
  local_12a8 = PTR_LAB_02721ee0;
  local_12a0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x4b];
  sVar8 = strlen(pcVar21);
  local_19e8 = (void *)0x0;
  local_19f0 = 0;
  uStack_19ef = 0;
  local_19f8 = 0;
  uStack_19f7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_19f8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_19f8 | 1);
    if (sVar8 != 0) goto LAB_00f7ce94;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_19f8 = (byte)uVar15 | 1;
    uStack_19f7 = (undefined7)(uVar15 >> 8);
    local_19f0 = (undefined1)sVar8;
    uStack_19ef = (undefined7)(sVar8 >> 8);
    local_19e8 = pvVar22;
LAB_00f7ce94:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1288 = local_19e8;
  uStack_128f = uStack_19ef;
  uStack_1290 = local_19f0;
  local_1297 = uStack_19f7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1298 = local_19f8;
  local_19f8 = 0;
  uStack_19f7 = 0;
  local_19e8 = (void *)0x0;
  local_19f0 = 0;
  uStack_19ef = 0;
  uStack_19d8 = 0;
  uStack_19e0 = 0;
  local_19d9 = 0;
  local_1280 = PTR_LAB_02721ee8;
  local_1278 = PTR_LAB_02721ef0;
  local_1270 = 0xffffffff;
  pcVar21 = (char *)param_1[0x4e];
  sVar8 = strlen(pcVar21);
  local_1a10 = (void *)0x0;
  local_1a18 = 0;
  uStack_1a17 = 0;
  local_1a20 = 0;
  uStack_1a1f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1a20 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1a20 | 1);
    if (sVar8 != 0) goto LAB_00f7cf7c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1a20 = (byte)uVar15 | 1;
    uStack_1a1f = (undefined7)(uVar15 >> 8);
    local_1a18 = (undefined1)sVar8;
    uStack_1a17 = (undefined7)(sVar8 >> 8);
    local_1a10 = pvVar22;
LAB_00f7cf7c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1258 = local_1a10;
  uStack_125f = uStack_1a17;
  uStack_1260 = local_1a18;
  local_1267 = uStack_1a1f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1268 = local_1a20;
  local_1a20 = 0;
  uStack_1a1f = 0;
  local_1a10 = (void *)0x0;
  local_1a18 = 0;
  uStack_1a17 = 0;
  uStack_1a00 = 0;
  uStack_1a08 = 0;
  local_1a01 = 0;
  local_1250 = PTR_LAB_02721ef8;
  local_1248 = PTR_LAB_02721f00;
  local_1240 = 0xffffffff;
  pcVar21 = (char *)param_1[0x51];
  sVar8 = strlen(pcVar21);
  local_1a38 = (void *)0x0;
  local_1a40 = 0;
  uStack_1a3f = 0;
  local_1a48 = 0;
  uStack_1a47 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1a48 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1a48 | 1);
    if (sVar8 != 0) goto LAB_00f7d068;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1a48 = (byte)uVar15 | 1;
    uStack_1a47 = (undefined7)(uVar15 >> 8);
    local_1a40 = (undefined1)sVar8;
    uStack_1a3f = (undefined7)(sVar8 >> 8);
    local_1a38 = pvVar22;
LAB_00f7d068:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1228 = local_1a38;
  uStack_122f = uStack_1a3f;
  uStack_1230 = local_1a40;
  local_1237 = uStack_1a47;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1238 = local_1a48;
  local_1a48 = 0;
  uStack_1a47 = 0;
  local_1a38 = (void *)0x0;
  local_1a40 = 0;
  uStack_1a3f = 0;
  uStack_1a28 = 0;
  uStack_1a30 = 0;
  local_1a29 = 0;
  local_1220 = PTR_LAB_02721f08;
  local_1218 = PTR_LAB_02721f10;
  local_1210 = 0xffffffff;
  pcVar21 = (char *)param_1[0x54];
  sVar8 = strlen(pcVar21);
  local_1a60 = (void *)0x0;
  local_1a68 = 0;
  uStack_1a67 = 0;
  local_1a70 = 0;
  uStack_1a6f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1a70 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1a70 | 1);
    if (sVar8 != 0) goto LAB_00f7d150;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1a70 = (byte)uVar15 | 1;
    uStack_1a6f = (undefined7)(uVar15 >> 8);
    local_1a68 = (undefined1)sVar8;
    uStack_1a67 = (undefined7)(sVar8 >> 8);
    local_1a60 = pvVar22;
LAB_00f7d150:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_11f8 = local_1a60;
  uStack_11ff = uStack_1a67;
  uStack_1200 = local_1a68;
  local_1207 = uStack_1a6f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1208 = local_1a70;
  local_1a70 = 0;
  uStack_1a6f = 0;
  local_1a60 = (void *)0x0;
  local_1a68 = 0;
  uStack_1a67 = 0;
  uStack_1a50 = 0;
  uStack_1a58 = 0;
  local_1a51 = 0;
  local_11f0 = PTR_LAB_02721f18;
  local_11e8 = PTR_LAB_02721f20;
  local_11e0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x57];
  sVar8 = strlen(pcVar21);
  local_1a88 = (void *)0x0;
  local_1a90 = 0;
  uStack_1a8f = 0;
  local_1a98 = 0;
  uStack_1a97 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1a98 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1a98 | 1);
    if (sVar8 != 0) goto LAB_00f7d238;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1a98 = (byte)uVar15 | 1;
    uStack_1a97 = (undefined7)(uVar15 >> 8);
    local_1a90 = (undefined1)sVar8;
    uStack_1a8f = (undefined7)(sVar8 >> 8);
    local_1a88 = pvVar22;
LAB_00f7d238:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_11c8 = local_1a88;
  uStack_11cf = uStack_1a8f;
  uStack_11d0 = local_1a90;
  local_11d7 = uStack_1a97;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_11d8 = local_1a98;
  local_1a98 = 0;
  uStack_1a97 = 0;
  local_1a88 = (void *)0x0;
  local_1a90 = 0;
  uStack_1a8f = 0;
  uStack_1a78 = 0;
  uStack_1a80 = 0;
  local_1a79 = 0;
  local_11c0 = PTR_LAB_02721f28;
  local_11b8 = PTR_LAB_02721f30;
  local_11b0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x5a];
  sVar8 = strlen(pcVar21);
  local_1ab0 = (void *)0x0;
  local_1ab8 = 0;
  uStack_1ab7 = 0;
  local_1ac0 = 0;
  uStack_1abf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1ac0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1ac0 | 1);
    if (sVar8 != 0) goto LAB_00f7d320;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1ac0 = (byte)uVar15 | 1;
    uStack_1abf = (undefined7)(uVar15 >> 8);
    local_1ab8 = (undefined1)sVar8;
    uStack_1ab7 = (undefined7)(sVar8 >> 8);
    local_1ab0 = pvVar22;
LAB_00f7d320:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1198 = local_1ab0;
  uStack_119f = uStack_1ab7;
  uStack_11a0 = local_1ab8;
  local_11a7 = uStack_1abf;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_11a8 = local_1ac0;
  local_1ac0 = 0;
  uStack_1abf = 0;
  local_1ab0 = (void *)0x0;
  local_1ab8 = 0;
  uStack_1ab7 = 0;
  uStack_1aa0 = 0;
  uStack_1aa8 = 0;
  local_1aa1 = 0;
  local_1190 = PTR_LAB_02721f38;
  local_1188 = PTR_LAB_02721f40;
  local_1180 = 0xffffffff;
  pcVar21 = (char *)param_1[0x5d];
  sVar8 = strlen(pcVar21);
  local_1ad8 = (void *)0x0;
  local_1ae0 = 0;
  uStack_1adf = 0;
  local_1ae8 = 0;
  uStack_1ae7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1ae8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1ae8 | 1);
    if (sVar8 != 0) goto LAB_00f7d408;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1ae8 = (byte)uVar15 | 1;
    uStack_1ae7 = (undefined7)(uVar15 >> 8);
    local_1ae0 = (undefined1)sVar8;
    uStack_1adf = (undefined7)(sVar8 >> 8);
    local_1ad8 = pvVar22;
LAB_00f7d408:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1168 = local_1ad8;
  uStack_116f = uStack_1adf;
  uStack_1170 = local_1ae0;
  local_1177 = uStack_1ae7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1178 = local_1ae8;
  local_1ae8 = 0;
  uStack_1ae7 = 0;
  local_1ad8 = (void *)0x0;
  local_1ae0 = 0;
  uStack_1adf = 0;
  uStack_1ac8 = 0;
  uStack_1ad0 = 0;
  local_1ac9 = 0;
  local_1160 = PTR_LAB_02721f48;
  local_1158 = PTR_LAB_02721f50;
  local_1150 = 0xffffffff;
  pcVar21 = (char *)param_1[0x60];
  sVar8 = strlen(pcVar21);
  local_1b00 = (void *)0x0;
  local_1b08 = 0;
  uStack_1b07 = 0;
  local_1b10 = 0;
  uStack_1b0f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1b10 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1b10 | 1);
    if (sVar8 != 0) goto LAB_00f7d4f0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1b10 = (byte)uVar15 | 1;
    uStack_1b0f = (undefined7)(uVar15 >> 8);
    local_1b08 = (undefined1)sVar8;
    uStack_1b07 = (undefined7)(sVar8 >> 8);
    local_1b00 = pvVar22;
LAB_00f7d4f0:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1138 = local_1b00;
  uStack_113f = uStack_1b07;
  uStack_1140 = local_1b08;
  local_1147 = uStack_1b0f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1148 = local_1b10;
  local_1b10 = 0;
  uStack_1b0f = 0;
  local_1b00 = (void *)0x0;
  local_1b08 = 0;
  uStack_1b07 = 0;
  uStack_1af0 = 0;
  uStack_1af8 = 0;
  local_1af1 = 0;
  local_1130 = PTR_LAB_02721f58;
  local_1128 = PTR_LAB_02721f60;
  local_1120 = 0xffffffff;
  pcVar21 = (char *)param_1[99];
  sVar8 = strlen(pcVar21);
  local_1b28 = (void *)0x0;
  local_1b30 = 0;
  uStack_1b2f = 0;
  local_1b38 = 0;
  uStack_1b37 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1b38 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1b38 | 1);
    if (sVar8 != 0) goto LAB_00f7d5d8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1b38 = (byte)uVar15 | 1;
    uStack_1b37 = (undefined7)(uVar15 >> 8);
    local_1b30 = (undefined1)sVar8;
    uStack_1b2f = (undefined7)(sVar8 >> 8);
    local_1b28 = pvVar22;
LAB_00f7d5d8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1108 = local_1b28;
  uStack_110f = uStack_1b2f;
  uStack_1110 = local_1b30;
  local_1117 = uStack_1b37;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1118 = local_1b38;
  local_1b38 = 0;
  uStack_1b37 = 0;
  local_1b28 = (void *)0x0;
  local_1b30 = 0;
  uStack_1b2f = 0;
  uStack_1b18 = 0;
  uStack_1b20 = 0;
  local_1b19 = 0;
  local_1100 = PTR_LAB_02721f68;
  local_10f8 = PTR_LAB_02721f70;
  local_10f0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x66];
  sVar8 = strlen(pcVar21);
  local_1b50 = (void *)0x0;
  local_1b58 = 0;
  uStack_1b57 = 0;
  local_1b60 = 0;
  uStack_1b5f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1b60 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1b60 | 1);
    if (sVar8 != 0) goto LAB_00f7d6c4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1b60 = (byte)uVar15 | 1;
    uStack_1b5f = (undefined7)(uVar15 >> 8);
    local_1b58 = (undefined1)sVar8;
    uStack_1b57 = (undefined7)(sVar8 >> 8);
    local_1b50 = pvVar22;
LAB_00f7d6c4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_10d8 = local_1b50;
  uStack_10df = uStack_1b57;
  uStack_10e0 = local_1b58;
  local_10e7 = uStack_1b5f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_10e8 = local_1b60;
  local_1b60 = 0;
  uStack_1b5f = 0;
  local_1b50 = (void *)0x0;
  local_1b58 = 0;
  uStack_1b57 = 0;
  uStack_1b40 = 0;
  uStack_1b48 = 0;
  local_1b41 = 0;
  local_10d0 = PTR_LAB_02721f78;
  local_10c8 = PTR_LAB_02721f80;
  local_10c0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x69];
  sVar8 = strlen(pcVar21);
  local_1b78 = (void *)0x0;
  local_1b80 = 0;
  uStack_1b7f = 0;
  local_1b88 = 0;
  uStack_1b87 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1b88 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1b88 | 1);
    if (sVar8 != 0) goto LAB_00f7d7ac;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1b88 = (byte)uVar15 | 1;
    uStack_1b87 = (undefined7)(uVar15 >> 8);
    local_1b80 = (undefined1)sVar8;
    uStack_1b7f = (undefined7)(sVar8 >> 8);
    local_1b78 = pvVar22;
LAB_00f7d7ac:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_10a8 = local_1b78;
  uStack_10af = uStack_1b7f;
  uStack_10b0 = local_1b80;
  local_10b7 = uStack_1b87;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_10b8 = local_1b88;
  local_1b88 = 0;
  uStack_1b87 = 0;
  local_1b78 = (void *)0x0;
  local_1b80 = 0;
  uStack_1b7f = 0;
  uStack_1b68 = 0;
  uStack_1b70 = 0;
  local_1b69 = 0;
  local_10a0 = PTR_LAB_02721f88;
  local_1098 = PTR_LAB_02721f90;
  local_1090 = 0xffffffff;
  pcVar21 = (char *)param_1[0x6c];
  sVar8 = strlen(pcVar21);
  local_1ba0 = (void *)0x0;
  local_1ba8 = 0;
  uStack_1ba7 = 0;
  local_1bb0 = 0;
  uStack_1baf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1bb0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1bb0 | 1);
    if (sVar8 != 0) goto LAB_00f7d894;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1bb0 = (byte)uVar15 | 1;
    uStack_1baf = (undefined7)(uVar15 >> 8);
    local_1ba8 = (undefined1)sVar8;
    uStack_1ba7 = (undefined7)(sVar8 >> 8);
    local_1ba0 = pvVar22;
LAB_00f7d894:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1078 = local_1ba0;
  uStack_107f = uStack_1ba7;
  uStack_1080 = local_1ba8;
  local_1087 = uStack_1baf;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1088 = local_1bb0;
  local_1bb0 = 0;
  uStack_1baf = 0;
  local_1ba0 = (void *)0x0;
  local_1ba8 = 0;
  uStack_1ba7 = 0;
  uStack_1b90 = 0;
  uStack_1b98 = 0;
  local_1b91 = 0;
  local_1070 = PTR_LAB_02721f98;
  local_1068 = PTR_LAB_02721fa0;
  local_1060 = 0xffffffff;
  pcVar21 = (char *)param_1[0x6f];
  sVar8 = strlen(pcVar21);
  local_1bc8 = (void *)0x0;
  local_1bd0 = 0;
  uStack_1bcf = 0;
  local_1bd8 = 0;
  uStack_1bd7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1bd8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1bd8 | 1);
    if (sVar8 != 0) goto LAB_00f7d97c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1bd8 = (byte)uVar15 | 1;
    uStack_1bd7 = (undefined7)(uVar15 >> 8);
    local_1bd0 = (undefined1)sVar8;
    uStack_1bcf = (undefined7)(sVar8 >> 8);
    local_1bc8 = pvVar22;
LAB_00f7d97c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1048 = local_1bc8;
  uStack_104f = uStack_1bcf;
  uStack_1050 = local_1bd0;
  local_1057 = uStack_1bd7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1058 = local_1bd8;
  local_1bd8 = 0;
  uStack_1bd7 = 0;
  local_1bc8 = (void *)0x0;
  local_1bd0 = 0;
  uStack_1bcf = 0;
  uStack_1bb8 = 0;
  uStack_1bc0 = 0;
  local_1bb9 = 0;
  local_1040 = PTR_LAB_02721fa8;
  local_1038 = PTR_LAB_02721fb0;
  local_1030 = 0xffffffff;
  pcVar21 = (char *)param_1[0x72];
  sVar8 = strlen(pcVar21);
  local_1bf0 = (void *)0x0;
  local_1bf8 = 0;
  uStack_1bf7 = 0;
  local_1c00 = 0;
  uStack_1bff = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1c00 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1c00 | 1);
    if (sVar8 != 0) goto LAB_00f7da64;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1c00 = (byte)uVar15 | 1;
    uStack_1bff = (undefined7)(uVar15 >> 8);
    local_1bf8 = (undefined1)sVar8;
    uStack_1bf7 = (undefined7)(sVar8 >> 8);
    local_1bf0 = pvVar22;
LAB_00f7da64:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_1018 = local_1bf0;
  uStack_101f = uStack_1bf7;
  uStack_1020 = local_1bf8;
  local_1027 = uStack_1bff;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_1028 = local_1c00;
  local_1c00 = 0;
  uStack_1bff = 0;
  local_1bf0 = (void *)0x0;
  local_1bf8 = 0;
  uStack_1bf7 = 0;
  uStack_1be0 = 0;
  uStack_1be8 = 0;
  local_1be1 = 0;
  local_1010 = PTR_LAB_02721fb8;
  local_1008 = PTR_LAB_02721fc0;
  local_1000 = 0xffffffff;
  pcVar21 = (char *)param_1[0x75];
  sVar8 = strlen(pcVar21);
  local_1c18 = (void *)0x0;
  local_1c20 = 0;
  uStack_1c1f = 0;
  local_1c28 = 0;
  uStack_1c27 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1c28 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1c28 | 1);
    if (sVar8 != 0) goto LAB_00f7db4c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1c28 = (byte)uVar15 | 1;
    uStack_1c27 = (undefined7)(uVar15 >> 8);
    local_1c20 = (undefined1)sVar8;
    uStack_1c1f = (undefined7)(sVar8 >> 8);
    local_1c18 = pvVar22;
LAB_00f7db4c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_fe8 = local_1c18;
  uStack_fef = uStack_1c1f;
  uStack_ff0 = local_1c20;
  local_ff7 = uStack_1c27;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_ff8 = local_1c28;
  local_1c28 = 0;
  uStack_1c27 = 0;
  local_1c18 = (void *)0x0;
  local_1c20 = 0;
  uStack_1c1f = 0;
  uStack_1c08 = 0;
  uStack_1c10 = 0;
  local_1c09 = 0;
  local_fe0 = PTR_LAB_02721fc8;
  local_fd8 = PTR_LAB_02721fd0;
  local_fd0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x78];
  sVar8 = strlen(pcVar21);
  local_1c40 = (void *)0x0;
  local_1c48 = 0;
  uStack_1c47 = 0;
  local_1c50 = 0;
  uStack_1c4f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1c50 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1c50 | 1);
    if (sVar8 != 0) goto LAB_00f7dc38;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1c50 = (byte)uVar15 | 1;
    uStack_1c4f = (undefined7)(uVar15 >> 8);
    local_1c48 = (undefined1)sVar8;
    uStack_1c47 = (undefined7)(sVar8 >> 8);
    local_1c40 = pvVar22;
LAB_00f7dc38:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_fb8 = local_1c40;
  uStack_fbf = uStack_1c47;
  uStack_fc0 = local_1c48;
  local_fc7 = uStack_1c4f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_fc8 = local_1c50;
  local_1c50 = 0;
  uStack_1c4f = 0;
  local_1c40 = (void *)0x0;
  local_1c48 = 0;
  uStack_1c47 = 0;
  uStack_1c30 = 0;
  uStack_1c38 = 0;
  local_1c31 = 0;
  local_fb0 = PTR_LAB_02721fd8;
  local_fa8 = PTR_LAB_02721fe0;
  local_fa0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x7b];
  sVar8 = strlen(pcVar21);
  local_1c68 = (void *)0x0;
  local_1c70 = 0;
  uStack_1c6f = 0;
  local_1c78 = 0;
  uStack_1c77 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1c78 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1c78 | 1);
    if (sVar8 != 0) goto LAB_00f7dd20;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1c78 = (byte)uVar15 | 1;
    uStack_1c77 = (undefined7)(uVar15 >> 8);
    local_1c70 = (undefined1)sVar8;
    uStack_1c6f = (undefined7)(sVar8 >> 8);
    local_1c68 = pvVar22;
LAB_00f7dd20:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_f88 = local_1c68;
  uStack_f8f = uStack_1c6f;
  uStack_f90 = local_1c70;
  local_f97 = uStack_1c77;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_f98 = local_1c78;
  local_1c78 = 0;
  uStack_1c77 = 0;
  local_1c68 = (void *)0x0;
  local_1c70 = 0;
  uStack_1c6f = 0;
  uStack_1c58 = 0;
  uStack_1c60 = 0;
  local_1c59 = 0;
  local_f80 = PTR_LAB_02721fe8;
  local_f78 = PTR_LAB_02721ff0;
  local_f70 = 0xffffffff;
  pcVar21 = (char *)param_1[0x7e];
  sVar8 = strlen(pcVar21);
  local_1c90 = (void *)0x0;
  local_1c98 = 0;
  uStack_1c97 = 0;
  local_1ca0 = 0;
  uStack_1c9f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1ca0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1ca0 | 1);
    if (sVar8 != 0) goto LAB_00f7de08;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1ca0 = (byte)uVar15 | 1;
    uStack_1c9f = (undefined7)(uVar15 >> 8);
    local_1c98 = (undefined1)sVar8;
    uStack_1c97 = (undefined7)(sVar8 >> 8);
    local_1c90 = pvVar22;
LAB_00f7de08:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_f58 = local_1c90;
  uStack_f5f = uStack_1c97;
  uStack_f60 = local_1c98;
  local_f67 = uStack_1c9f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_f68 = local_1ca0;
  local_1ca0 = 0;
  uStack_1c9f = 0;
  local_1c90 = (void *)0x0;
  local_1c98 = 0;
  uStack_1c97 = 0;
  uStack_1c80 = 0;
  uStack_1c88 = 0;
  local_1c81 = 0;
  local_f50 = PTR_LAB_02721ff8;
  local_f48 = PTR_LAB_02722000;
  local_f40 = 0xffffffff;
  pcVar21 = (char *)param_1[0x81];
  sVar8 = strlen(pcVar21);
  local_1cb8 = (void *)0x0;
  local_1cc0 = 0;
  uStack_1cbf = 0;
  local_1cc8 = 0;
  uStack_1cc7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1cc8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1cc8 | 1);
    if (sVar8 != 0) goto LAB_00f7def0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1cc8 = (byte)uVar15 | 1;
    uStack_1cc7 = (undefined7)(uVar15 >> 8);
    local_1cc0 = (undefined1)sVar8;
    uStack_1cbf = (undefined7)(sVar8 >> 8);
    local_1cb8 = pvVar22;
LAB_00f7def0:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_f28 = local_1cb8;
  uStack_f2f = uStack_1cbf;
  uStack_f30 = local_1cc0;
  local_f37 = uStack_1cc7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_f38 = local_1cc8;
  local_1cc8 = 0;
  uStack_1cc7 = 0;
  local_1cb8 = (void *)0x0;
  local_1cc0 = 0;
  uStack_1cbf = 0;
  uStack_1ca8 = 0;
  uStack_1cb0 = 0;
  local_1ca9 = 0;
  local_f20 = PTR_LAB_02722008;
  local_f18 = PTR_LAB_02722010;
  local_f10 = 0xffffffff;
  pcVar21 = (char *)param_1[0x84];
  sVar8 = strlen(pcVar21);
  local_1ce0 = (void *)0x0;
  local_1ce8 = 0;
  uStack_1ce7 = 0;
  local_1cf0 = 0;
  uStack_1cef = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1cf0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1cf0 | 1);
    if (sVar8 != 0) goto LAB_00f7dfd8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1cf0 = (byte)uVar15 | 1;
    uStack_1cef = (undefined7)(uVar15 >> 8);
    local_1ce8 = (undefined1)sVar8;
    uStack_1ce7 = (undefined7)(sVar8 >> 8);
    local_1ce0 = pvVar22;
LAB_00f7dfd8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_ef8 = local_1ce0;
  uStack_eff = uStack_1ce7;
  uStack_f00 = local_1ce8;
  local_f07 = uStack_1cef;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_f08 = local_1cf0;
  local_1cf0 = 0;
  uStack_1cef = 0;
  local_1ce0 = (void *)0x0;
  local_1ce8 = 0;
  uStack_1ce7 = 0;
  uStack_1cd0 = 0;
  uStack_1cd8 = 0;
  local_1cd1 = 0;
  local_ef0 = PTR_LAB_02722018;
  local_ee8 = PTR_LAB_02722020;
  local_ee0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x87];
  sVar8 = strlen(pcVar21);
  local_1d08 = (void *)0x0;
  local_1d10 = 0;
  uStack_1d0f = 0;
  local_1d18 = 0;
  uStack_1d17 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1d18 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1d18 | 1);
    if (sVar8 != 0) goto LAB_00f7e0c0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1d18 = (byte)uVar15 | 1;
    uStack_1d17 = (undefined7)(uVar15 >> 8);
    local_1d10 = (undefined1)sVar8;
    uStack_1d0f = (undefined7)(sVar8 >> 8);
    local_1d08 = pvVar22;
LAB_00f7e0c0:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_ec8 = local_1d08;
  uStack_ecf = uStack_1d0f;
  uStack_ed0 = local_1d10;
  local_ed7 = uStack_1d17;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_ed8 = local_1d18;
  local_1d18 = 0;
  uStack_1d17 = 0;
  local_1d08 = (void *)0x0;
  local_1d10 = 0;
  uStack_1d0f = 0;
  uStack_1cf8 = 0;
  uStack_1d00 = 0;
  local_1cf9 = 0;
  local_ec0 = PTR_LAB_02722028;
  local_eb8 = PTR_LAB_02722030;
  local_eb0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x8a];
  sVar8 = strlen(pcVar21);
  local_1d30 = (void *)0x0;
  local_1d38 = 0;
  uStack_1d37 = 0;
  local_1d40 = 0;
  uStack_1d3f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1d40 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1d40 | 1);
    if (sVar8 != 0) goto LAB_00f7e1a8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1d40 = (byte)uVar15 | 1;
    uStack_1d3f = (undefined7)(uVar15 >> 8);
    local_1d38 = (undefined1)sVar8;
    uStack_1d37 = (undefined7)(sVar8 >> 8);
    local_1d30 = pvVar22;
LAB_00f7e1a8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_e98 = local_1d30;
  uStack_e9f = uStack_1d37;
  uStack_ea0 = local_1d38;
  local_ea7 = uStack_1d3f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_ea8 = local_1d40;
  local_1d40 = 0;
  uStack_1d3f = 0;
  local_1d30 = (void *)0x0;
  local_1d38 = 0;
  uStack_1d37 = 0;
  uStack_1d20 = 0;
  uStack_1d28 = 0;
  local_1d21 = 0;
  local_e90 = PTR_LAB_02722038;
  local_e88 = PTR_LAB_02722040;
  local_e80 = 0xffffffff;
  pcVar21 = (char *)param_1[0x8d];
  sVar8 = strlen(pcVar21);
  local_1d58 = (void *)0x0;
  local_1d60 = 0;
  uStack_1d5f = 0;
  local_1d68 = 0;
  uStack_1d67 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1d68 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1d68 | 1);
    if (sVar8 != 0) goto LAB_00f7e294;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1d68 = (byte)uVar15 | 1;
    uStack_1d67 = (undefined7)(uVar15 >> 8);
    local_1d60 = (undefined1)sVar8;
    uStack_1d5f = (undefined7)(sVar8 >> 8);
    local_1d58 = pvVar22;
LAB_00f7e294:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_e68 = local_1d58;
  uStack_e6f = uStack_1d5f;
  uStack_e70 = local_1d60;
  local_e77 = uStack_1d67;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_e78 = local_1d68;
  local_1d68 = 0;
  uStack_1d67 = 0;
  local_1d58 = (void *)0x0;
  local_1d60 = 0;
  uStack_1d5f = 0;
  uStack_1d48 = 0;
  uStack_1d50 = 0;
  local_1d49 = 0;
  local_e60 = PTR_LAB_02722048;
  local_e58 = PTR_LAB_02722050;
  local_e50 = 0xffffffff;
  pcVar21 = (char *)param_1[0x90];
  sVar8 = strlen(pcVar21);
  local_1d80 = (void *)0x0;
  local_1d88 = 0;
  uStack_1d87 = 0;
  local_1d90 = 0;
  uStack_1d8f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1d90 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1d90 | 1);
    if (sVar8 != 0) goto LAB_00f7e37c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1d90 = (byte)uVar15 | 1;
    uStack_1d8f = (undefined7)(uVar15 >> 8);
    local_1d88 = (undefined1)sVar8;
    uStack_1d87 = (undefined7)(sVar8 >> 8);
    local_1d80 = pvVar22;
LAB_00f7e37c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_e38 = local_1d80;
  uStack_e3f = uStack_1d87;
  uStack_e40 = local_1d88;
  local_e47 = uStack_1d8f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_e48 = local_1d90;
  local_1d90 = 0;
  uStack_1d8f = 0;
  local_1d80 = (void *)0x0;
  local_1d88 = 0;
  uStack_1d87 = 0;
  uStack_1d70 = 0;
  uStack_1d78 = 0;
  local_1d71 = 0;
  local_e30 = PTR_LAB_02722058;
  local_e28 = PTR_LAB_02722060;
  local_e20 = 0xffffffff;
  pcVar21 = (char *)param_1[0x93];
  sVar8 = strlen(pcVar21);
  local_1da8 = (void *)0x0;
  local_1db0 = 0;
  uStack_1daf = 0;
  local_1db8 = 0;
  uStack_1db7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1db8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1db8 | 1);
    if (sVar8 != 0) goto LAB_00f7e464;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1db8 = (byte)uVar15 | 1;
    uStack_1db7 = (undefined7)(uVar15 >> 8);
    local_1db0 = (undefined1)sVar8;
    uStack_1daf = (undefined7)(sVar8 >> 8);
    local_1da8 = pvVar22;
LAB_00f7e464:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_e08 = local_1da8;
  uStack_e0f = uStack_1daf;
  uStack_e10 = local_1db0;
  local_e17 = uStack_1db7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_e18 = local_1db8;
  local_1db8 = 0;
  uStack_1db7 = 0;
  local_1da8 = (void *)0x0;
  local_1db0 = 0;
  uStack_1daf = 0;
  uStack_1d98 = 0;
  uStack_1da0 = 0;
  local_1d99 = 0;
  local_e00 = PTR_LAB_02722068;
  local_df8 = PTR_LAB_02722070;
  local_df0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x96];
  sVar8 = strlen(pcVar21);
  local_1dd0 = (void *)0x0;
  local_1dd8 = 0;
  uStack_1dd7 = 0;
  local_1de0 = 0;
  uStack_1ddf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1de0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1de0 | 1);
    if (sVar8 != 0) goto LAB_00f7e54c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1de0 = (byte)uVar15 | 1;
    uStack_1ddf = (undefined7)(uVar15 >> 8);
    local_1dd8 = (undefined1)sVar8;
    uStack_1dd7 = (undefined7)(sVar8 >> 8);
    local_1dd0 = pvVar22;
LAB_00f7e54c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_dd8 = local_1dd0;
  uStack_ddf = uStack_1dd7;
  uStack_de0 = local_1dd8;
  local_de7 = uStack_1ddf;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_de8 = local_1de0;
  local_1de0 = 0;
  uStack_1ddf = 0;
  local_1dd0 = (void *)0x0;
  local_1dd8 = 0;
  uStack_1dd7 = 0;
  uStack_1dc0 = 0;
  uStack_1dc8 = 0;
  local_1dc1 = 0;
  local_dd0 = PTR_LAB_02722078;
  local_dc8 = PTR_LAB_02722080;
  local_dc0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x99];
  sVar8 = strlen(pcVar21);
  local_1df8 = (void *)0x0;
  local_1e00 = 0;
  uStack_1dff = 0;
  local_1e08 = 0;
  uStack_1e07 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1e08 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1e08 | 1);
    if (sVar8 != 0) goto LAB_00f7e634;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1e08 = (byte)uVar15 | 1;
    uStack_1e07 = (undefined7)(uVar15 >> 8);
    local_1e00 = (undefined1)sVar8;
    uStack_1dff = (undefined7)(sVar8 >> 8);
    local_1df8 = pvVar22;
LAB_00f7e634:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_da8 = local_1df8;
  uStack_daf = uStack_1dff;
  uStack_db0 = local_1e00;
  local_db7 = uStack_1e07;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_db8 = local_1e08;
  local_1e08 = 0;
  uStack_1e07 = 0;
  local_1df8 = (void *)0x0;
  local_1e00 = 0;
  uStack_1dff = 0;
  uStack_1de8 = 0;
  uStack_1df0 = 0;
  local_1de9 = 0;
  local_da0 = PTR_LAB_02722088;
  local_d98 = PTR_LAB_02722090;
  local_d90 = 0xffffffff;
  pcVar21 = (char *)param_1[0x9c];
  sVar8 = strlen(pcVar21);
  local_1e20 = (void *)0x0;
  local_1e28 = 0;
  uStack_1e27 = 0;
  local_1e30 = 0;
  uStack_1e2f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1e30 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1e30 | 1);
    if (sVar8 != 0) goto LAB_00f7e71c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1e30 = (byte)uVar15 | 1;
    uStack_1e2f = (undefined7)(uVar15 >> 8);
    local_1e28 = (undefined1)sVar8;
    uStack_1e27 = (undefined7)(sVar8 >> 8);
    local_1e20 = pvVar22;
LAB_00f7e71c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_d78 = local_1e20;
  uStack_d7f = uStack_1e27;
  uStack_d80 = local_1e28;
  local_d87 = uStack_1e2f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_d88 = local_1e30;
  local_1e30 = 0;
  uStack_1e2f = 0;
  local_1e20 = (void *)0x0;
  local_1e28 = 0;
  uStack_1e27 = 0;
  uStack_1e10 = 0;
  uStack_1e18 = 0;
  local_1e11 = 0;
  local_d70 = PTR_LAB_02722098;
  local_d68 = PTR_LAB_027220a0;
  local_d60 = 0xffffffff;
  pcVar21 = (char *)param_1[0x9f];
  sVar8 = strlen(pcVar21);
  local_1e48 = (void *)0x0;
  local_1e50 = 0;
  uStack_1e4f = 0;
  local_1e58 = 0;
  uStack_1e57 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1e58 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1e58 | 1);
    if (sVar8 != 0) goto LAB_00f7e808;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1e58 = (byte)uVar15 | 1;
    uStack_1e57 = (undefined7)(uVar15 >> 8);
    local_1e50 = (undefined1)sVar8;
    uStack_1e4f = (undefined7)(sVar8 >> 8);
    local_1e48 = pvVar22;
LAB_00f7e808:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_d48 = local_1e48;
  uStack_d4f = uStack_1e4f;
  uStack_d50 = local_1e50;
  local_d57 = uStack_1e57;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_d58 = local_1e58;
  local_1e58 = 0;
  uStack_1e57 = 0;
  local_1e48 = (void *)0x0;
  local_1e50 = 0;
  uStack_1e4f = 0;
  uStack_1e38 = 0;
  uStack_1e40 = 0;
  local_1e39 = 0;
  local_d40 = PTR_LAB_027220a8;
  local_d38 = PTR_LAB_027220b0;
  local_d30 = 0xffffffff;
  pcVar21 = (char *)param_1[0xa2];
  sVar8 = strlen(pcVar21);
  local_1e70 = (void *)0x0;
  local_1e78 = 0;
  uStack_1e77 = 0;
  local_1e80 = 0;
  uStack_1e7f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1e80 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1e80 | 1);
    if (sVar8 != 0) goto LAB_00f7e8f0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1e80 = (byte)uVar15 | 1;
    uStack_1e7f = (undefined7)(uVar15 >> 8);
    local_1e78 = (undefined1)sVar8;
    uStack_1e77 = (undefined7)(sVar8 >> 8);
    local_1e70 = pvVar22;
LAB_00f7e8f0:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_d18 = local_1e70;
  uStack_d1f = uStack_1e77;
  uStack_d20 = local_1e78;
  local_d27 = uStack_1e7f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_d28 = local_1e80;
  local_1e80 = 0;
  uStack_1e7f = 0;
  local_1e70 = (void *)0x0;
  local_1e78 = 0;
  uStack_1e77 = 0;
  uStack_1e60 = 0;
  uStack_1e68 = 0;
  local_1e61 = 0;
  local_d10 = PTR_LAB_027220b8;
  local_d08 = PTR_LAB_027220c0;
  local_d00 = 0xffffffff;
  pcVar21 = (char *)param_1[0xa5];
  sVar8 = strlen(pcVar21);
  local_1e98 = (void *)0x0;
  local_1ea0 = 0;
  uStack_1e9f = 0;
  local_1ea8 = 0;
  uStack_1ea7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1ea8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1ea8 | 1);
    if (sVar8 != 0) goto LAB_00f7e9d8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1ea8 = (byte)uVar15 | 1;
    uStack_1ea7 = (undefined7)(uVar15 >> 8);
    local_1ea0 = (undefined1)sVar8;
    uStack_1e9f = (undefined7)(sVar8 >> 8);
    local_1e98 = pvVar22;
LAB_00f7e9d8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_ce8 = local_1e98;
  uStack_cef = uStack_1e9f;
  uStack_cf0 = local_1ea0;
  local_cf7 = uStack_1ea7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_cf8 = local_1ea8;
  local_1ea8 = 0;
  uStack_1ea7 = 0;
  local_1e98 = (void *)0x0;
  local_1ea0 = 0;
  uStack_1e9f = 0;
  uStack_1e88 = 0;
  uStack_1e90 = 0;
  local_1e89 = 0;
  local_ce0 = PTR_LAB_027220c8;
  local_cd8 = PTR_LAB_027220d0;
  local_cd0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xa8];
  sVar8 = strlen(pcVar21);
  local_1ec0 = (void *)0x0;
  local_1ec8 = 0;
  uStack_1ec7 = 0;
  local_1ed0 = 0;
  uStack_1ecf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1ed0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1ed0 | 1);
    if (sVar8 != 0) goto LAB_00f7eac0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1ed0 = (byte)uVar15 | 1;
    uStack_1ecf = (undefined7)(uVar15 >> 8);
    local_1ec8 = (undefined1)sVar8;
    uStack_1ec7 = (undefined7)(sVar8 >> 8);
    local_1ec0 = pvVar22;
LAB_00f7eac0:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_cb8 = local_1ec0;
  uStack_cbf = uStack_1ec7;
  uStack_cc0 = local_1ec8;
  local_cc7 = uStack_1ecf;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_cc8 = local_1ed0;
  local_1ed0 = 0;
  uStack_1ecf = 0;
  local_1ec0 = (void *)0x0;
  local_1ec8 = 0;
  uStack_1ec7 = 0;
  uStack_1eb0 = 0;
  uStack_1eb8 = 0;
  local_1eb1 = 0;
  local_cb0 = PTR_LAB_027220d8;
  local_ca8 = PTR_LAB_027220e0;
  local_ca0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xab];
  sVar8 = strlen(pcVar21);
  local_1ee8 = (void *)0x0;
  local_1ef0 = 0;
  uStack_1eef = 0;
  local_1ef8 = 0;
  uStack_1ef7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1ef8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1ef8 | 1);
    if (sVar8 != 0) goto LAB_00f7eba8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1ef8 = (byte)uVar15 | 1;
    uStack_1ef7 = (undefined7)(uVar15 >> 8);
    local_1ef0 = (undefined1)sVar8;
    uStack_1eef = (undefined7)(sVar8 >> 8);
    local_1ee8 = pvVar22;
LAB_00f7eba8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_c88 = local_1ee8;
  uStack_c8f = uStack_1eef;
  uStack_c90 = local_1ef0;
  local_c97 = uStack_1ef7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_c98 = local_1ef8;
  local_1ef8 = 0;
  uStack_1ef7 = 0;
  local_1ee8 = (void *)0x0;
  local_1ef0 = 0;
  uStack_1eef = 0;
  uStack_1ed8 = 0;
  uStack_1ee0 = 0;
  local_1ed9 = 0;
  local_c80 = PTR_LAB_027220e8;
  local_c78 = PTR_LAB_027220f0;
  local_c70 = 0xffffffff;
  pcVar21 = (char *)param_1[0xae];
  sVar8 = strlen(pcVar21);
  local_1f10 = (void *)0x0;
  local_1f18 = 0;
  uStack_1f17 = 0;
  local_1f20 = 0;
  uStack_1f1f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1f20 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1f20 | 1);
    if (sVar8 != 0) goto LAB_00f7ec90;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1f20 = (byte)uVar15 | 1;
    uStack_1f1f = (undefined7)(uVar15 >> 8);
    local_1f18 = (undefined1)sVar8;
    uStack_1f17 = (undefined7)(sVar8 >> 8);
    local_1f10 = pvVar22;
LAB_00f7ec90:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_c58 = local_1f10;
  uStack_c5f = uStack_1f17;
  uStack_c60 = local_1f18;
  local_c67 = uStack_1f1f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_c68 = local_1f20;
  local_1f20 = 0;
  uStack_1f1f = 0;
  local_1f10 = (void *)0x0;
  local_1f18 = 0;
  uStack_1f17 = 0;
  uStack_1f00 = 0;
  uStack_1f08 = 0;
  local_1f01 = 0;
  local_c50 = PTR_LAB_027220f8;
  local_c48 = PTR_LAB_02722100;
  local_c40 = 0xffffffff;
  pcVar21 = (char *)param_1[0xb1];
  sVar8 = strlen(pcVar21);
  local_1f38 = (void *)0x0;
  local_1f40 = 0;
  uStack_1f3f = 0;
  local_1f48 = 0;
  uStack_1f47 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1f48 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1f48 | 1);
    if (sVar8 != 0) goto LAB_00f7ed78;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1f48 = (byte)uVar15 | 1;
    uStack_1f47 = (undefined7)(uVar15 >> 8);
    local_1f40 = (undefined1)sVar8;
    uStack_1f3f = (undefined7)(sVar8 >> 8);
    local_1f38 = pvVar22;
LAB_00f7ed78:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_c28 = local_1f38;
  uStack_c2f = uStack_1f3f;
  uStack_c30 = local_1f40;
  local_c37 = uStack_1f47;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_c38 = local_1f48;
  local_1f48 = 0;
  uStack_1f47 = 0;
  local_1f38 = (void *)0x0;
  local_1f40 = 0;
  uStack_1f3f = 0;
  uStack_1f28 = 0;
  uStack_1f30 = 0;
  local_1f29 = 0;
  local_c20 = PTR_LAB_02722108;
  local_c18 = PTR_LAB_02722110;
  local_c10 = 0xffffffff;
  pcVar21 = (char *)param_1[0xb4];
  sVar8 = strlen(pcVar21);
  local_1f60 = (void *)0x0;
  local_1f68 = 0;
  uStack_1f67 = 0;
  local_1f70 = 0;
  uStack_1f6f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1f70 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1f70 | 1);
    if (sVar8 != 0) goto LAB_00f7ee64;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1f70 = (byte)uVar15 | 1;
    uStack_1f6f = (undefined7)(uVar15 >> 8);
    local_1f68 = (undefined1)sVar8;
    uStack_1f67 = (undefined7)(sVar8 >> 8);
    local_1f60 = pvVar22;
LAB_00f7ee64:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_bf8 = local_1f60;
  uStack_bff = uStack_1f67;
  uStack_c00 = local_1f68;
  local_c07 = uStack_1f6f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_c08 = local_1f70;
  local_1f70 = 0;
  uStack_1f6f = 0;
  local_1f60 = (void *)0x0;
  local_1f68 = 0;
  uStack_1f67 = 0;
  uStack_1f50 = 0;
  uStack_1f58 = 0;
  local_1f51 = 0;
  local_bf0 = PTR_LAB_02722118;
  local_be8 = PTR_LAB_02722120;
  local_be0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xb7];
  sVar8 = strlen(pcVar21);
  local_1f88 = (void *)0x0;
  local_1f90 = 0;
  uStack_1f8f = 0;
  local_1f98 = 0;
  uStack_1f97 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1f98 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1f98 | 1);
    if (sVar8 != 0) goto LAB_00f7ef4c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1f98 = (byte)uVar15 | 1;
    uStack_1f97 = (undefined7)(uVar15 >> 8);
    local_1f90 = (undefined1)sVar8;
    uStack_1f8f = (undefined7)(sVar8 >> 8);
    local_1f88 = pvVar22;
LAB_00f7ef4c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_bc8 = local_1f88;
  uStack_bcf = uStack_1f8f;
  uStack_bd0 = local_1f90;
  local_bd7 = uStack_1f97;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_bd8 = local_1f98;
  local_1f98 = 0;
  uStack_1f97 = 0;
  local_1f88 = (void *)0x0;
  local_1f90 = 0;
  uStack_1f8f = 0;
  uStack_1f78 = 0;
  uStack_1f80 = 0;
  local_1f79 = 0;
  local_bc0 = PTR_LAB_02722128;
  local_bb8 = PTR_LAB_02722130;
  local_bb0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xba];
  sVar8 = strlen(pcVar21);
  local_1fb0 = (void *)0x0;
  local_1fb8 = 0;
  uStack_1fb7 = 0;
  local_1fc0 = 0;
  uStack_1fbf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1fc0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1fc0 | 1);
    if (sVar8 != 0) goto LAB_00f7f034;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1fc0 = (byte)uVar15 | 1;
    uStack_1fbf = (undefined7)(uVar15 >> 8);
    local_1fb8 = (undefined1)sVar8;
    uStack_1fb7 = (undefined7)(sVar8 >> 8);
    local_1fb0 = pvVar22;
LAB_00f7f034:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_b98 = local_1fb0;
  uStack_b9f = uStack_1fb7;
  uStack_ba0 = local_1fb8;
  local_ba7 = uStack_1fbf;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_ba8 = local_1fc0;
  local_1fc0 = 0;
  uStack_1fbf = 0;
  local_1fb0 = (void *)0x0;
  local_1fb8 = 0;
  uStack_1fb7 = 0;
  uStack_1fa0 = 0;
  uStack_1fa8 = 0;
  local_1fa1 = 0;
  local_b90 = PTR_LAB_02722138;
  local_b88 = PTR_LAB_02722140;
  local_b80 = 0xffffffff;
  pcVar21 = (char *)param_1[0xbd];
  sVar8 = strlen(pcVar21);
  local_1fd8 = (void *)0x0;
  local_1fe0 = 0;
  uStack_1fdf = 0;
  local_1fe8 = 0;
  uStack_1fe7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_1fe8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_1fe8 | 1);
    if (sVar8 != 0) goto LAB_00f7f11c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_1fe8 = (byte)uVar15 | 1;
    uStack_1fe7 = (undefined7)(uVar15 >> 8);
    local_1fe0 = (undefined1)sVar8;
    uStack_1fdf = (undefined7)(sVar8 >> 8);
    local_1fd8 = pvVar22;
LAB_00f7f11c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_b68 = local_1fd8;
  uStack_b6f = uStack_1fdf;
  uStack_b70 = local_1fe0;
  local_b77 = uStack_1fe7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_b78 = local_1fe8;
  local_1fe8 = 0;
  uStack_1fe7 = 0;
  local_1fd8 = (void *)0x0;
  local_1fe0 = 0;
  uStack_1fdf = 0;
  uStack_1fc8 = 0;
  uStack_1fd0 = 0;
  local_1fc9 = 0;
  local_b60 = PTR_LAB_02722148;
  local_b58 = PTR_LAB_02722150;
  local_b50 = 0xffffffff;
  pcVar21 = (char *)param_1[0xc0];
  sVar8 = strlen(pcVar21);
  local_2000 = (void *)0x0;
  local_2008 = 0;
  uStack_2007 = 0;
  local_2010 = 0;
  uStack_200f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2010 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2010 | 1);
    if (sVar8 != 0) goto LAB_00f7f204;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2010 = (byte)uVar15 | 1;
    uStack_200f = (undefined7)(uVar15 >> 8);
    local_2008 = (undefined1)sVar8;
    uStack_2007 = (undefined7)(sVar8 >> 8);
    local_2000 = pvVar22;
LAB_00f7f204:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_b38 = local_2000;
  uStack_b3f = uStack_2007;
  uStack_b40 = local_2008;
  local_b47 = uStack_200f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_b48 = local_2010;
  local_2010 = 0;
  uStack_200f = 0;
  local_2000 = (void *)0x0;
  local_2008 = 0;
  uStack_2007 = 0;
  uStack_1ff0 = 0;
  uStack_1ff8 = 0;
  local_1ff1 = 0;
  local_b30 = PTR_LAB_02722158;
  local_b28 = PTR_LAB_02722160;
  local_b20 = 0xffffffff;
  pcVar21 = (char *)param_1[0xc3];
  sVar8 = strlen(pcVar21);
  local_2028 = (void *)0x0;
  local_2030 = 0;
  uStack_202f = 0;
  local_2038 = 0;
  uStack_2037 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2038 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2038 | 1);
    if (sVar8 != 0) goto LAB_00f7f2ec;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2038 = (byte)uVar15 | 1;
    uStack_2037 = (undefined7)(uVar15 >> 8);
    local_2030 = (undefined1)sVar8;
    uStack_202f = (undefined7)(sVar8 >> 8);
    local_2028 = pvVar22;
LAB_00f7f2ec:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_b08 = local_2028;
  uStack_b0f = uStack_202f;
  uStack_b10 = local_2030;
  local_b17 = uStack_2037;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_b18 = local_2038;
  local_2038 = 0;
  uStack_2037 = 0;
  local_2028 = (void *)0x0;
  local_2030 = 0;
  uStack_202f = 0;
  uStack_2018 = 0;
  uStack_2020 = 0;
  local_2019 = 0;
  local_b00 = PTR_LAB_02722168;
  local_af8 = PTR_LAB_02722170;
  local_af0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xc6];
  sVar8 = strlen(pcVar21);
  local_2050 = (void *)0x0;
  local_2058 = 0;
  uStack_2057 = 0;
  local_2060 = 0;
  uStack_205f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2060 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2060 | 1);
    if (sVar8 != 0) goto LAB_00f7f3d8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2060 = (byte)uVar15 | 1;
    uStack_205f = (undefined7)(uVar15 >> 8);
    local_2058 = (undefined1)sVar8;
    uStack_2057 = (undefined7)(sVar8 >> 8);
    local_2050 = pvVar22;
LAB_00f7f3d8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_ad8 = local_2050;
  uStack_adf = uStack_2057;
  uStack_ae0 = local_2058;
  local_ae7 = uStack_205f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_ae8 = local_2060;
  local_2060 = 0;
  uStack_205f = 0;
  local_2050 = (void *)0x0;
  local_2058 = 0;
  uStack_2057 = 0;
  uStack_2040 = 0;
  uStack_2048 = 0;
  local_2041 = 0;
  local_ad0 = PTR_LAB_02722178;
  local_ac8 = PTR_LAB_02722180;
  local_ac0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xc9];
  sVar8 = strlen(pcVar21);
  local_2078 = (void *)0x0;
  local_2080 = 0;
  uStack_207f = 0;
  local_2088 = 0;
  uStack_2087 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2088 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2088 | 1);
    if (sVar8 != 0) goto LAB_00f7f4c0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2088 = (byte)uVar15 | 1;
    uStack_2087 = (undefined7)(uVar15 >> 8);
    local_2080 = (undefined1)sVar8;
    uStack_207f = (undefined7)(sVar8 >> 8);
    local_2078 = pvVar22;
LAB_00f7f4c0:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_aa8 = local_2078;
  uStack_aaf = uStack_207f;
  uStack_ab0 = local_2080;
  local_ab7 = uStack_2087;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_ab8 = local_2088;
  local_2088 = 0;
  uStack_2087 = 0;
  local_2078 = (void *)0x0;
  local_2080 = 0;
  uStack_207f = 0;
  uStack_2068 = 0;
  uStack_2070 = 0;
  local_2069 = 0;
  local_aa0 = PTR_LAB_02722188;
  local_a98 = PTR_LAB_02722190;
  local_a90 = 0xffffffff;
  pcVar21 = (char *)param_1[0xcc];
  sVar8 = strlen(pcVar21);
  local_20a0 = (void *)0x0;
  local_20a8 = 0;
  uStack_20a7 = 0;
  local_20b0 = 0;
  uStack_20af = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_20b0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_20b0 | 1);
    if (sVar8 != 0) goto LAB_00f7f5a8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_20b0 = (byte)uVar15 | 1;
    uStack_20af = (undefined7)(uVar15 >> 8);
    local_20a8 = (undefined1)sVar8;
    uStack_20a7 = (undefined7)(sVar8 >> 8);
    local_20a0 = pvVar22;
LAB_00f7f5a8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_a78 = local_20a0;
  uStack_a7f = uStack_20a7;
  uStack_a80 = local_20a8;
  local_a87 = uStack_20af;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_a88 = local_20b0;
  local_20b0 = 0;
  uStack_20af = 0;
  local_20a0 = (void *)0x0;
  local_20a8 = 0;
  uStack_20a7 = 0;
  uStack_2090 = 0;
  uStack_2098 = 0;
  local_2091 = 0;
  local_a70 = PTR_LAB_02722198;
  local_a68 = PTR_LAB_027221a0;
  local_a60 = 0xffffffff;
  pcVar21 = (char *)param_1[0xcf];
  sVar8 = strlen(pcVar21);
  local_20c8 = (void *)0x0;
  local_20d0 = 0;
  uStack_20cf = 0;
  local_20d8 = 0;
  uStack_20d7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_20d8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_20d8 | 1);
    if (sVar8 != 0) goto LAB_00f7f690;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_20d8 = (byte)uVar15 | 1;
    uStack_20d7 = (undefined7)(uVar15 >> 8);
    local_20d0 = (undefined1)sVar8;
    uStack_20cf = (undefined7)(sVar8 >> 8);
    local_20c8 = pvVar22;
LAB_00f7f690:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_a48 = local_20c8;
  uStack_a4f = uStack_20cf;
  uStack_a50 = local_20d0;
  local_a57 = uStack_20d7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_a58 = local_20d8;
  local_20d8 = 0;
  uStack_20d7 = 0;
  local_20c8 = (void *)0x0;
  local_20d0 = 0;
  uStack_20cf = 0;
  uStack_20b8 = 0;
  uStack_20c0 = 0;
  local_20b9 = 0;
  local_a40 = PTR_LAB_027221a8;
  local_a38 = PTR_LAB_027221b0;
  local_a30 = 0xffffffff;
  pcVar21 = (char *)param_1[0xd2];
  sVar8 = strlen(pcVar21);
  local_20f0 = (void *)0x0;
  local_20f8 = 0;
  uStack_20f7 = 0;
  local_2100 = 0;
  uStack_20ff = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2100 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2100 | 1);
    if (sVar8 != 0) goto LAB_00f7f778;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2100 = (byte)uVar15 | 1;
    uStack_20ff = (undefined7)(uVar15 >> 8);
    local_20f8 = (undefined1)sVar8;
    uStack_20f7 = (undefined7)(sVar8 >> 8);
    local_20f0 = pvVar22;
LAB_00f7f778:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_a18 = local_20f0;
  uStack_a1f = uStack_20f7;
  uStack_a20 = local_20f8;
  local_a27 = uStack_20ff;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_a28 = local_2100;
  local_2100 = 0;
  uStack_20ff = 0;
  local_20f0 = (void *)0x0;
  local_20f8 = 0;
  uStack_20f7 = 0;
  uStack_20e0 = 0;
  uStack_20e8 = 0;
  local_20e1 = 0;
  local_a10 = PTR_LAB_027221b8;
  local_a08 = PTR_LAB_027221c0;
  local_a00 = 0xffffffff;
  pcVar21 = (char *)param_1[0xd5];
  sVar8 = strlen(pcVar21);
  local_2118 = (void *)0x0;
  local_2120 = 0;
  uStack_211f = 0;
  local_2128 = 0;
  uStack_2127 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2128 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2128 | 1);
    if (sVar8 != 0) goto LAB_00f7f860;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2128 = (byte)uVar15 | 1;
    uStack_2127 = (undefined7)(uVar15 >> 8);
    local_2120 = (undefined1)sVar8;
    uStack_211f = (undefined7)(sVar8 >> 8);
    local_2118 = pvVar22;
LAB_00f7f860:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_9e8 = local_2118;
  uStack_9ef = uStack_211f;
  uStack_9f0 = local_2120;
  local_9f7 = uStack_2127;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_9f8 = local_2128;
  local_2128 = 0;
  uStack_2127 = 0;
  local_2118 = (void *)0x0;
  local_2120 = 0;
  uStack_211f = 0;
  uStack_2108 = 0;
  uStack_2110 = 0;
  local_2109 = 0;
  local_9e0 = PTR_LAB_027221c8;
  local_9d8 = PTR_LAB_027221d0;
  local_9d0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xd8];
  sVar8 = strlen(pcVar21);
  local_2140 = (void *)0x0;
  local_2148 = 0;
  uStack_2147 = 0;
  local_2150 = 0;
  uStack_214f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2150 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2150 | 1);
    if (sVar8 != 0) goto LAB_00f7f948;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2150 = (byte)uVar15 | 1;
    uStack_214f = (undefined7)(uVar15 >> 8);
    local_2148 = (undefined1)sVar8;
    uStack_2147 = (undefined7)(sVar8 >> 8);
    local_2140 = pvVar22;
LAB_00f7f948:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_9b8 = local_2140;
  uStack_9bf = uStack_2147;
  uStack_9c0 = local_2148;
  local_9c7 = uStack_214f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_9c8 = local_2150;
  local_2150 = 0;
  uStack_214f = 0;
  local_2140 = (void *)0x0;
  local_2148 = 0;
  uStack_2147 = 0;
  uStack_2130 = 0;
  uStack_2138 = 0;
  local_2131 = 0;
  local_9b0 = PTR_LAB_027221d8;
  local_9a8 = PTR_LAB_027221e0;
  local_9a0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xdb];
  sVar8 = strlen(pcVar21);
  local_2168 = (void *)0x0;
  local_2170 = 0;
  uStack_216f = 0;
  local_2178 = 0;
  uStack_2177 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2178 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2178 | 1);
    if (sVar8 != 0) goto LAB_00f7fa34;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2178 = (byte)uVar15 | 1;
    uStack_2177 = (undefined7)(uVar15 >> 8);
    local_2170 = (undefined1)sVar8;
    uStack_216f = (undefined7)(sVar8 >> 8);
    local_2168 = pvVar22;
LAB_00f7fa34:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_988 = local_2168;
  uStack_98f = uStack_216f;
  uStack_990 = local_2170;
  local_997 = uStack_2177;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_998 = local_2178;
  local_2178 = 0;
  uStack_2177 = 0;
  local_2168 = (void *)0x0;
  local_2170 = 0;
  uStack_216f = 0;
  uStack_2158 = 0;
  uStack_2160 = 0;
  local_2159 = 0;
  local_980 = PTR_LAB_027221e8;
  local_978 = PTR_LAB_027221f0;
  local_970 = 0xffffffff;
  pcVar21 = (char *)param_1[0xde];
  sVar8 = strlen(pcVar21);
  local_2190 = (void *)0x0;
  local_2198 = 0;
  uStack_2197 = 0;
  local_21a0 = 0;
  uStack_219f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_21a0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_21a0 | 1);
    if (sVar8 != 0) goto LAB_00f7fb1c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_21a0 = (byte)uVar15 | 1;
    uStack_219f = (undefined7)(uVar15 >> 8);
    local_2198 = (undefined1)sVar8;
    uStack_2197 = (undefined7)(sVar8 >> 8);
    local_2190 = pvVar22;
LAB_00f7fb1c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_958 = local_2190;
  uStack_95f = uStack_2197;
  uStack_960 = local_2198;
  local_967 = uStack_219f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_968 = local_21a0;
  local_21a0 = 0;
  uStack_219f = 0;
  local_2190 = (void *)0x0;
  local_2198 = 0;
  uStack_2197 = 0;
  uStack_2180 = 0;
  uStack_2188 = 0;
  local_2181 = 0;
  local_950 = PTR_LAB_027221f8;
  local_948 = PTR_LAB_02722200;
  local_940 = 0xffffffff;
  pcVar21 = (char *)param_1[0xe1];
  sVar8 = strlen(pcVar21);
  local_21b8 = (void *)0x0;
  local_21c0 = 0;
  uStack_21bf = 0;
  local_21c8 = 0;
  uStack_21c7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_21c8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_21c8 | 1);
    if (sVar8 != 0) goto LAB_00f7fc04;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_21c8 = (byte)uVar15 | 1;
    uStack_21c7 = (undefined7)(uVar15 >> 8);
    local_21c0 = (undefined1)sVar8;
    uStack_21bf = (undefined7)(sVar8 >> 8);
    local_21b8 = pvVar22;
LAB_00f7fc04:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_928 = local_21b8;
  uStack_92f = uStack_21bf;
  uStack_930 = local_21c0;
  local_937 = uStack_21c7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_938 = local_21c8;
  local_21c8 = 0;
  uStack_21c7 = 0;
  local_21b8 = (void *)0x0;
  local_21c0 = 0;
  uStack_21bf = 0;
  uStack_21a8 = 0;
  uStack_21b0 = 0;
  local_21a9 = 0;
  local_920 = PTR_LAB_02722208;
  local_918 = PTR_LAB_02722210;
  local_910 = 0xffffffff;
  pcVar21 = (char *)param_1[0xe4];
  sVar8 = strlen(pcVar21);
  local_21e0 = (void *)0x0;
  local_21e8 = 0;
  uStack_21e7 = 0;
  local_21f0 = 0;
  uStack_21ef = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_21f0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_21f0 | 1);
    if (sVar8 != 0) goto LAB_00f7fcec;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_21f0 = (byte)uVar15 | 1;
    uStack_21ef = (undefined7)(uVar15 >> 8);
    local_21e8 = (undefined1)sVar8;
    uStack_21e7 = (undefined7)(sVar8 >> 8);
    local_21e0 = pvVar22;
LAB_00f7fcec:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_8f8 = local_21e0;
  uStack_8ff = uStack_21e7;
  uStack_900 = local_21e8;
  local_907 = uStack_21ef;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_908 = local_21f0;
  local_21f0 = 0;
  uStack_21ef = 0;
  local_21e0 = (void *)0x0;
  local_21e8 = 0;
  uStack_21e7 = 0;
  uStack_21d0 = 0;
  uStack_21d8 = 0;
  local_21d1 = 0;
  local_8f0 = PTR_LAB_02722218;
  local_8e8 = PTR_LAB_02722220;
  local_8e0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xe7];
  sVar8 = strlen(pcVar21);
  local_2208 = (void *)0x0;
  local_2210 = 0;
  uStack_220f = 0;
  local_2218 = 0;
  uStack_2217 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2218 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2218 | 1);
    if (sVar8 != 0) goto LAB_00f7fdd4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2218 = (byte)uVar15 | 1;
    uStack_2217 = (undefined7)(uVar15 >> 8);
    local_2210 = (undefined1)sVar8;
    uStack_220f = (undefined7)(sVar8 >> 8);
    local_2208 = pvVar22;
LAB_00f7fdd4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_8c8 = local_2208;
  uStack_8cf = uStack_220f;
  uStack_8d0 = local_2210;
  local_8d7 = uStack_2217;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_8d8 = local_2218;
  local_2218 = 0;
  uStack_2217 = 0;
  local_2208 = (void *)0x0;
  local_2210 = 0;
  uStack_220f = 0;
  uStack_21f8 = 0;
  uStack_2200 = 0;
  local_21f9 = 0;
  local_8c0 = PTR_LAB_02722228;
  local_8b8 = PTR_LAB_02722230;
  local_8b0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xea];
  sVar8 = strlen(pcVar21);
  local_2230 = (void *)0x0;
  local_2238 = 0;
  uStack_2237 = 0;
  local_2240 = 0;
  uStack_223f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2240 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2240 | 1);
    if (sVar8 != 0) goto LAB_00f7febc;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2240 = (byte)uVar15 | 1;
    uStack_223f = (undefined7)(uVar15 >> 8);
    local_2238 = (undefined1)sVar8;
    uStack_2237 = (undefined7)(sVar8 >> 8);
    local_2230 = pvVar22;
LAB_00f7febc:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_898 = local_2230;
  uStack_89f = uStack_2237;
  uStack_8a0 = local_2238;
  local_8a7 = uStack_223f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_8a8 = local_2240;
  local_2240 = 0;
  uStack_223f = 0;
  local_2230 = (void *)0x0;
  local_2238 = 0;
  uStack_2237 = 0;
  uStack_2220 = 0;
  uStack_2228 = 0;
  local_2221 = 0;
  local_890 = PTR_LAB_02722238;
  local_888 = PTR_LAB_02722240;
  local_880 = 0xffffffff;
  pcVar21 = (char *)param_1[0xed];
  sVar8 = strlen(pcVar21);
  local_2258 = (void *)0x0;
  local_2260 = 0;
  uStack_225f = 0;
  local_2268 = 0;
  uStack_2267 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pbVar24 = &local_2358;
  if (sVar8 < 0x17) {
    local_2268 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2268 | 1);
    if (sVar8 != 0) goto LAB_00f7ffa8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2268 = (byte)uVar15 | 1;
    uStack_2267 = (undefined7)(uVar15 >> 8);
    local_2260 = (undefined1)sVar8;
    uStack_225f = (undefined7)(sVar8 >> 8);
    local_2258 = pvVar22;
LAB_00f7ffa8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_868 = local_2258;
  uStack_86f = uStack_225f;
  uStack_870 = local_2260;
  local_877 = uStack_2267;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_878 = local_2268;
  local_2268 = 0;
  uStack_2267 = 0;
  local_2258 = (void *)0x0;
  local_2260 = 0;
  uStack_225f = 0;
  uStack_2248 = 0;
  uStack_2250 = 0;
  local_2249 = 0;
  local_860 = PTR_LAB_02722248;
  local_858 = PTR_LAB_02722250;
  local_850 = 0xffffffff;
  pcVar21 = (char *)param_1[0xf0];
  sVar8 = strlen(pcVar21);
  local_2280 = (void *)0x0;
  local_2288 = 0;
  uStack_2287 = 0;
  local_2290 = 0;
  uStack_228f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2290 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2290 | 1);
    if (sVar8 != 0) goto LAB_00f80090;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2290 = (byte)uVar15 | 1;
    uStack_228f = (undefined7)(uVar15 >> 8);
    local_2288 = (undefined1)sVar8;
    uStack_2287 = (undefined7)(sVar8 >> 8);
    local_2280 = pvVar22;
LAB_00f80090:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_838 = local_2280;
  uStack_83f = uStack_2287;
  uStack_840 = local_2288;
  local_847 = uStack_228f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_848 = local_2290;
  local_2290 = 0;
  uStack_228f = 0;
  local_2280 = (void *)0x0;
  local_2288 = 0;
  uStack_2287 = 0;
  uStack_2270 = 0;
  uStack_2278 = 0;
  local_2271 = 0;
  local_830 = PTR_LAB_02722258;
  local_828 = PTR_LAB_02722260;
  local_820 = 0xffffffff;
  pcVar21 = (char *)param_1[0xf3];
  sVar8 = strlen(pcVar21);
  local_22a8 = (void *)0x0;
  local_22b0 = 0;
  uStack_22af = 0;
  local_22b8 = 0;
  uStack_22b7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_22b8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_22b8 | 1);
    if (sVar8 != 0) goto LAB_00f80178;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_22b8 = (byte)uVar15 | 1;
    uStack_22b7 = (undefined7)(uVar15 >> 8);
    local_22b0 = (undefined1)sVar8;
    uStack_22af = (undefined7)(sVar8 >> 8);
    local_22a8 = pvVar22;
LAB_00f80178:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_808 = local_22a8;
  uStack_80f = uStack_22af;
  uStack_810 = local_22b0;
  local_817 = uStack_22b7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_818 = local_22b8;
  local_22b8 = 0;
  uStack_22b7 = 0;
  local_22a8 = (void *)0x0;
  local_22b0 = 0;
  uStack_22af = 0;
  uStack_2298 = 0;
  uStack_22a0 = 0;
  local_2299 = 0;
  local_800 = PTR_LAB_02722268;
  local_7f8 = PTR_LAB_02722270;
  local_7f0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xf6];
  sVar8 = strlen(pcVar21);
  local_22d0 = (void *)0x0;
  local_22d8 = 0;
  uStack_22d7 = 0;
  local_22e0 = 0;
  uStack_22df = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_22e0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_22e0 | 1);
    if (sVar8 != 0) goto LAB_00f80260;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_22e0 = (byte)uVar15 | 1;
    uStack_22df = (undefined7)(uVar15 >> 8);
    local_22d8 = (undefined1)sVar8;
    uStack_22d7 = (undefined7)(sVar8 >> 8);
    local_22d0 = pvVar22;
LAB_00f80260:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_7d8 = local_22d0;
  uStack_7df = uStack_22d7;
  uStack_7e0 = local_22d8;
  local_7e7 = uStack_22df;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_7e8 = local_22e0;
  local_22e0 = 0;
  uStack_22df = 0;
  local_22d0 = (void *)0x0;
  local_22d8 = 0;
  uStack_22d7 = 0;
  uStack_22c0 = 0;
  uStack_22c8 = 0;
  local_22c1 = 0;
  local_7d0 = PTR_LAB_02722278;
  local_7c8 = PTR_LAB_02722280;
  local_7c0 = 0xffffffff;
  pcVar21 = (char *)param_1[0xf9];
  sVar8 = strlen(pcVar21);
  local_22f8 = (void *)0x0;
  local_2300 = 0;
  uStack_22ff = 0;
  local_2308 = 0;
  uStack_2307 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2308 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2308 | 1);
    if (sVar8 != 0) goto LAB_00f80348;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2308 = (byte)uVar15 | 1;
    uStack_2307 = (undefined7)(uVar15 >> 8);
    local_2300 = (undefined1)sVar8;
    uStack_22ff = (undefined7)(sVar8 >> 8);
    local_22f8 = pvVar22;
LAB_00f80348:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_7a8 = local_22f8;
  uStack_7af = uStack_22ff;
  uStack_7b0 = local_2300;
  local_7b7 = uStack_2307;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_7b8 = local_2308;
  local_2308 = 0;
  uStack_2307 = 0;
  local_22f8 = (void *)0x0;
  local_2300 = 0;
  uStack_22ff = 0;
  uStack_22e8 = 0;
  uStack_22f0 = 0;
  local_22e9 = 0;
  local_7a0 = PTR_LAB_02722288;
  local_798 = PTR_LAB_02722290;
  local_790 = 0xffffffff;
  pcVar21 = (char *)param_1[0xfc];
  sVar8 = strlen(pcVar21);
  local_2320 = (void *)0x0;
  local_2328 = 0;
  uStack_2327 = 0;
  local_2330 = 0;
  uStack_232f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2330 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2330 | 1);
    if (sVar8 != 0) goto LAB_00f80430;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2330 = (byte)uVar15 | 1;
    uStack_232f = (undefined7)(uVar15 >> 8);
    local_2328 = (undefined1)sVar8;
    uStack_2327 = (undefined7)(sVar8 >> 8);
    local_2320 = pvVar22;
LAB_00f80430:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_778 = local_2320;
  uStack_77f = uStack_2327;
  uStack_780 = local_2328;
  local_787 = uStack_232f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_788 = local_2330;
  local_2330 = 0;
  uStack_232f = 0;
  local_2320 = (void *)0x0;
  local_2328 = 0;
  uStack_2327 = 0;
  uStack_2310 = 0;
  uStack_2318 = 0;
  local_2311 = 0;
  local_770 = PTR_LAB_02722298;
  local_768 = PTR_LAB_027222a0;
  local_760 = 0xffffffff;
  pcVar21 = (char *)param_1[0xff];
  sVar8 = strlen(pcVar21);
  local_2348 = (void *)0x0;
  local_2350 = 0;
  uStack_234f = 0;
  local_2358 = 0;
  uStack_2357 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2358 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2358 | 1);
    if (sVar8 != 0) goto LAB_00f80518;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2358 = (byte)uVar15 | 1;
    uStack_2357 = (undefined7)(uVar15 >> 8);
    local_2350 = (undefined1)sVar8;
    uStack_234f = (undefined7)(sVar8 >> 8);
    local_2348 = pvVar22;
LAB_00f80518:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_748 = local_2348;
  uStack_74f = uStack_234f;
  uStack_750 = local_2350;
  local_757 = uStack_2357;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_758 = local_2358;
  local_2358 = 0;
  uStack_2357 = 0;
  local_2348 = (void *)0x0;
  local_2350 = 0;
  uStack_234f = 0;
  uStack_2338 = 0;
  uStack_2340 = 0;
  local_2339 = 0;
  local_740 = PTR_LAB_027222a8;
  local_738 = PTR_LAB_027222b0;
  local_730 = 0xffffffff;
  pcVar21 = (char *)param_1[0x102];
  sVar8 = strlen(pcVar21);
  local_2370 = (void *)0x0;
  local_2378 = 0;
  uStack_2377 = 0;
  local_2380 = 0;
  uStack_237f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2380 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2380 | 1);
    if (sVar8 != 0) goto LAB_00f80604;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2380 = (byte)uVar15 | 1;
    uStack_237f = (undefined7)(uVar15 >> 8);
    local_2378 = (undefined1)sVar8;
    uStack_2377 = (undefined7)(sVar8 >> 8);
    local_2370 = pvVar22;
LAB_00f80604:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_718 = local_2370;
  uStack_71f = uStack_2377;
  uStack_720 = local_2378;
  local_727 = uStack_237f;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_728 = local_2380;
  local_2380 = 0;
  uStack_237f = 0;
  local_2370 = (void *)0x0;
  local_2378 = 0;
  uStack_2377 = 0;
  uStack_2360 = 0;
  uStack_2368 = 0;
  local_2361 = 0;
  local_710 = PTR_LAB_027222b8;
  local_708 = PTR_LAB_027222c0;
  local_700 = 0xffffffff;
  pcVar21 = (char *)param_1[0x105];
  sVar8 = strlen(pcVar21);
  local_2398 = (void *)0x0;
  local_23a0 = 0;
  uStack_239f = 0;
  local_23a8 = 0;
  uStack_23a7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_23a8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_23a8 | 1);
    if (sVar8 != 0) goto LAB_00f806ec;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_23a8 = (byte)uVar15 | 1;
    uStack_23a7 = (undefined7)(uVar15 >> 8);
    local_23a0 = (undefined1)sVar8;
    uStack_239f = (undefined7)(sVar8 >> 8);
    local_2398 = pvVar22;
LAB_00f806ec:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_6e8 = local_2398;
  uStack_6ef = uStack_239f;
  uStack_6f0 = local_23a0;
  local_6f7 = uStack_23a7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_6f8 = local_23a8;
  local_23a8 = 0;
  uStack_23a7 = 0;
  local_2398 = (void *)0x0;
  local_23a0 = 0;
  uStack_239f = 0;
  uStack_2388 = 0;
  uStack_2390 = 0;
  local_2389 = 0;
  local_6e0 = PTR_LAB_027222c8;
  local_6d8 = PTR_LAB_027222d0;
  local_6d0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x108];
  sVar8 = strlen(pcVar21);
  local_23c0 = (void *)0x0;
  local_23c8 = 0;
  uStack_23c7 = 0;
  local_23d0 = 0;
  uStack_23cf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_23d0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_23d0 | 1);
    if (sVar8 != 0) goto LAB_00f807d4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_23d0 = (byte)uVar15 | 1;
    uStack_23cf = (undefined7)(uVar15 >> 8);
    local_23c8 = (undefined1)sVar8;
    uStack_23c7 = (undefined7)(sVar8 >> 8);
    local_23c0 = pvVar22;
LAB_00f807d4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_6b8 = local_23c0;
  uStack_6bf = uStack_23c7;
  uStack_6c0 = local_23c8;
  local_6c7 = uStack_23cf;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_6c8 = local_23d0;
  local_23d0 = 0;
  uStack_23cf = 0;
  local_23c0 = (void *)0x0;
  local_23c8 = 0;
  uStack_23c7 = 0;
  uStack_23b0 = 0;
  uStack_23b8 = 0;
  local_23b1 = 0;
  local_6b0 = PTR_LAB_027222d8;
  local_6a8 = PTR_LAB_027222e0;
  local_6a0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x10b];
  sVar8 = strlen(pcVar21);
  local_23e8 = (void *)0x0;
  local_23f0 = 0;
  uStack_23ef = 0;
  local_23f8 = 0;
  uStack_23f7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_23f8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_23f8 | 1);
    if (sVar8 != 0) goto LAB_00f808bc;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_23f8 = (byte)uVar15 | 1;
    uStack_23f7 = (undefined7)(uVar15 >> 8);
    local_23f0 = (undefined1)sVar8;
    uStack_23ef = (undefined7)(sVar8 >> 8);
    local_23e8 = pvVar22;
LAB_00f808bc:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_688 = local_23e8;
  uStack_68f = uStack_23ef;
  uStack_690 = local_23f0;
  local_697 = uStack_23f7;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  local_698 = local_23f8;
  local_23f8 = 0;
  uStack_23f7 = 0;
  local_23e8 = (void *)0x0;
  local_23f0 = 0;
  uStack_23ef = 0;
  uStack_23d8 = 0;
  uStack_23e0 = 0;
  local_23d9 = 0;
  local_680 = PTR_LAB_027222e8;
  local_678 = PTR_LAB_027222f0;
  local_670 = 0xffffffff;
  pcVar21 = (char *)param_1[0x10e];
  sVar8 = strlen(pcVar21);
  local_2410 = (void *)0x0;
  local_2418 = 0;
  uStack_2417 = 0;
  local_2420 = 0;
  uStack_241f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2420 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2420 | 1);
    if (sVar8 != 0) goto LAB_00f809a4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2420 = (byte)uVar15 | 1;
    uStack_241f = (undefined7)(uVar15 >> 8);
    local_2418 = (undefined1)sVar8;
    uStack_2417 = (undefined7)(sVar8 >> 8);
    local_2410 = pvVar22;
LAB_00f809a4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_658 = local_2410;
  uStack_65f = uStack_2417;
  local_660 = local_2418;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_668 = local_2420;
  uStack_667 = uStack_241f;
  local_2418 = 0;
  uStack_2417 = 0;
  local_2410 = (void *)0x0;
  local_2420 = 0;
  uStack_241f = 0;
  uStack_2400 = 0;
  uStack_2408 = 0;
  local_2401 = 0;
  local_650 = PTR_LAB_027222f8;
  local_648 = PTR_LAB_02722300;
  local_640 = 0xffffffff;
  pcVar21 = (char *)param_1[0x111];
  sVar8 = strlen(pcVar21);
  local_2438 = (void *)0x0;
  local_2440 = 0;
  uStack_243f = 0;
  local_2448 = 0;
  uStack_2447 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2448 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2448 | 1);
    if (sVar8 != 0) goto LAB_00f80a90;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2448 = (byte)uVar15 | 1;
    uStack_2447 = (undefined7)(uVar15 >> 8);
    local_2440 = (undefined1)sVar8;
    uStack_243f = (undefined7)(sVar8 >> 8);
    local_2438 = pvVar22;
LAB_00f80a90:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_628 = local_2438;
  uStack_62f = uStack_243f;
  local_630 = local_2440;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_638 = local_2448;
  uStack_637 = uStack_2447;
  local_2440 = 0;
  uStack_243f = 0;
  local_2438 = (void *)0x0;
  local_2448 = 0;
  uStack_2447 = 0;
  uStack_2428 = 0;
  uStack_2430 = 0;
  local_2429 = 0;
  local_620 = PTR_LAB_02722308;
  local_618 = PTR_LAB_02722310;
  local_610 = 0xffffffff;
  pcVar21 = (char *)param_1[0x114];
  sVar8 = strlen(pcVar21);
  local_2460 = (void *)0x0;
  local_2468 = 0;
  uStack_2467 = 0;
  local_2470 = 0;
  uStack_246f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2470 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2470 | 1);
    if (sVar8 != 0) goto LAB_00f80b80;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2470 = (byte)uVar15 | 1;
    uStack_246f = (undefined7)(uVar15 >> 8);
    local_2468 = (undefined1)sVar8;
    uStack_2467 = (undefined7)(sVar8 >> 8);
    local_2460 = pvVar22;
LAB_00f80b80:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_5f8 = local_2460;
  uStack_5ff = uStack_2467;
  local_600 = local_2468;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_608 = local_2470;
  uStack_607 = uStack_246f;
  local_2468 = 0;
  uStack_2467 = 0;
  local_2460 = (void *)0x0;
  local_2470 = 0;
  uStack_246f = 0;
  uStack_2450 = 0;
  uStack_2458 = 0;
  local_2451 = 0;
  local_5f0 = PTR_LAB_02722318;
  local_5e8 = PTR_LAB_02722320;
  local_5e0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x117];
  sVar8 = strlen(pcVar21);
  local_2488 = (void *)0x0;
  local_2490 = 0;
  uStack_248f = 0;
  local_2498 = 0;
  uStack_2497 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2498 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2498 | 1);
    if (sVar8 != 0) goto LAB_00f80c6c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2498 = (byte)uVar15 | 1;
    uStack_2497 = (undefined7)(uVar15 >> 8);
    local_2490 = (undefined1)sVar8;
    uStack_248f = (undefined7)(sVar8 >> 8);
    local_2488 = pvVar22;
LAB_00f80c6c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_5c8 = local_2488;
  uStack_5cf = uStack_248f;
  local_5d0 = local_2490;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_5d8 = local_2498;
  uStack_5d7 = uStack_2497;
  local_2490 = 0;
  uStack_248f = 0;
  local_2488 = (void *)0x0;
  local_2498 = 0;
  uStack_2497 = 0;
  uStack_2478 = 0;
  uStack_2480 = 0;
  local_2479 = 0;
  local_5c0 = PTR_LAB_02722328;
  local_5b8 = PTR_LAB_02722330;
  local_5b0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x11a];
  sVar8 = strlen(pcVar21);
  local_24b0 = (void *)0x0;
  local_24b8 = 0;
  uStack_24b7 = 0;
  local_24c0 = 0;
  uStack_24bf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_24c0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_24c0 | 1);
    if (sVar8 != 0) goto LAB_00f80d58;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_24c0 = (byte)uVar15 | 1;
    uStack_24bf = (undefined7)(uVar15 >> 8);
    local_24b8 = (undefined1)sVar8;
    uStack_24b7 = (undefined7)(sVar8 >> 8);
    local_24b0 = pvVar22;
LAB_00f80d58:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_598 = local_24b0;
  uStack_59f = uStack_24b7;
  local_5a0 = local_24b8;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_5a8 = local_24c0;
  uStack_5a7 = uStack_24bf;
  local_24b8 = 0;
  uStack_24b7 = 0;
  local_24b0 = (void *)0x0;
  local_24c0 = 0;
  uStack_24bf = 0;
  uStack_24a0 = 0;
  uStack_24a8 = 0;
  local_24a1 = 0;
  local_590 = PTR_LAB_02722338;
  local_588 = PTR_LAB_02722340;
  local_580 = 0xffffffff;
  pcVar21 = (char *)param_1[0x11d];
  sVar8 = strlen(pcVar21);
  local_24d8 = (void *)0x0;
  local_24e0 = 0;
  uStack_24df = 0;
  local_24e8 = 0;
  uStack_24e7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_24e8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_24e8 | 1);
    if (sVar8 != 0) goto LAB_00f80e44;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_24e8 = (byte)uVar15 | 1;
    uStack_24e7 = (undefined7)(uVar15 >> 8);
    local_24e0 = (undefined1)sVar8;
    uStack_24df = (undefined7)(sVar8 >> 8);
    local_24d8 = pvVar22;
LAB_00f80e44:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_568 = local_24d8;
  uStack_56f = uStack_24df;
  local_570 = local_24e0;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_578 = local_24e8;
  uStack_577 = uStack_24e7;
  local_24e0 = 0;
  uStack_24df = 0;
  local_24d8 = (void *)0x0;
  local_24e8 = 0;
  uStack_24e7 = 0;
  uStack_24c8 = 0;
  uStack_24d0 = 0;
  local_24c9 = 0;
  local_560 = PTR_LAB_02722348;
  local_558 = PTR_LAB_02722350;
  local_550 = 0xffffffff;
  pcVar21 = (char *)param_1[0x120];
  sVar8 = strlen(pcVar21);
  local_2500 = (void *)0x0;
  local_2508 = 0;
  uStack_2507 = 0;
  local_2510 = 0;
  uStack_250f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2510 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2510 | 1);
    if (sVar8 != 0) goto LAB_00f80f30;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2510 = (byte)uVar15 | 1;
    uStack_250f = (undefined7)(uVar15 >> 8);
    local_2508 = (undefined1)sVar8;
    uStack_2507 = (undefined7)(sVar8 >> 8);
    local_2500 = pvVar22;
LAB_00f80f30:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_538 = local_2500;
  uStack_53f = uStack_2507;
  local_540 = local_2508;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_548 = local_2510;
  uStack_547 = uStack_250f;
  local_2508 = 0;
  uStack_2507 = 0;
  local_2500 = (void *)0x0;
  local_2510 = 0;
  uStack_250f = 0;
  uStack_24f0 = 0;
  uStack_24f8 = 0;
  local_24f1 = 0;
  local_530 = PTR_LAB_02722358;
  local_528 = PTR_LAB_02722360;
  local_520 = 0xffffffff;
  pcVar21 = (char *)param_1[0x123];
  sVar8 = strlen(pcVar21);
  local_2528 = (void *)0x0;
  local_2530 = 0;
  uStack_252f = 0;
  local_2538 = 0;
  uStack_2537 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2538 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2538 | 1);
    if (sVar8 != 0) goto LAB_00f8101c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2538 = (byte)uVar15 | 1;
    uStack_2537 = (undefined7)(uVar15 >> 8);
    local_2530 = (undefined1)sVar8;
    uStack_252f = (undefined7)(sVar8 >> 8);
    local_2528 = pvVar22;
LAB_00f8101c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_508 = local_2528;
  uStack_50f = uStack_252f;
  local_510 = local_2530;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_518 = local_2538;
  uStack_517 = uStack_2537;
  local_2530 = 0;
  uStack_252f = 0;
  local_2528 = (void *)0x0;
  local_2538 = 0;
  uStack_2537 = 0;
  uStack_2518 = 0;
  uStack_2520 = 0;
  local_2519 = 0;
  local_500 = PTR_LAB_02722368;
  local_4f8 = PTR_LAB_02722370;
  local_4f0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x126];
  sVar8 = strlen(pcVar21);
  local_2550 = (void *)0x0;
  local_2558 = 0;
  uStack_2557 = 0;
  local_2560 = 0;
  uStack_255f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2560 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2560 | 1);
    if (sVar8 != 0) goto LAB_00f81108;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2560 = (byte)uVar15 | 1;
    uStack_255f = (undefined7)(uVar15 >> 8);
    local_2558 = (undefined1)sVar8;
    uStack_2557 = (undefined7)(sVar8 >> 8);
    local_2550 = pvVar22;
LAB_00f81108:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_4d8 = local_2550;
  uStack_4df = uStack_2557;
  local_4e0 = local_2558;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_4e8 = local_2560;
  uStack_4e7 = uStack_255f;
  local_2558 = 0;
  uStack_2557 = 0;
  local_2550 = (void *)0x0;
  local_2560 = 0;
  uStack_255f = 0;
  uStack_2540 = 0;
  uStack_2548 = 0;
  local_2541 = 0;
  local_4d0 = PTR_LAB_02722378;
  local_4c8 = PTR_LAB_02722380;
  local_4c0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x129];
  sVar8 = strlen(pcVar21);
  local_2578 = (void *)0x0;
  local_2580 = 0;
  uStack_257f = 0;
  local_2588 = 0;
  uStack_2587 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2588 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2588 | 1);
    if (sVar8 != 0) goto LAB_00f811f8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2588 = (byte)uVar15 | 1;
    uStack_2587 = (undefined7)(uVar15 >> 8);
    local_2580 = (undefined1)sVar8;
    uStack_257f = (undefined7)(sVar8 >> 8);
    local_2578 = pvVar22;
LAB_00f811f8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_4a8 = local_2578;
  uStack_4af = uStack_257f;
  local_4b0 = local_2580;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_4b8 = local_2588;
  uStack_4b7 = uStack_2587;
  local_2580 = 0;
  uStack_257f = 0;
  local_2578 = (void *)0x0;
  local_2588 = 0;
  uStack_2587 = 0;
  uStack_2568 = 0;
  uStack_2570 = 0;
  local_2569 = 0;
  local_4a0 = PTR_LAB_02722388;
  local_498 = PTR_LAB_02722390;
  local_490 = 0xffffffff;
  pcVar21 = (char *)param_1[300];
  sVar8 = strlen(pcVar21);
  local_25a0 = (void *)0x0;
  local_25a8 = 0;
  uStack_25a7 = 0;
  local_25b0 = 0;
  uStack_25af = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_25b0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_25b0 | 1);
    if (sVar8 != 0) goto LAB_00f812e4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_25b0 = (byte)uVar15 | 1;
    uStack_25af = (undefined7)(uVar15 >> 8);
    local_25a8 = (undefined1)sVar8;
    uStack_25a7 = (undefined7)(sVar8 >> 8);
    local_25a0 = pvVar22;
LAB_00f812e4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_478 = local_25a0;
  uStack_47f = uStack_25a7;
  local_480 = local_25a8;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_488 = local_25b0;
  uStack_487 = uStack_25af;
  local_25a8 = 0;
  uStack_25a7 = 0;
  local_25a0 = (void *)0x0;
  local_25b0 = 0;
  uStack_25af = 0;
  uStack_2590 = 0;
  uStack_2598 = 0;
  local_2591 = 0;
  local_470 = PTR_LAB_02722398;
  local_468 = PTR_LAB_027223a0;
  local_460 = 0xffffffff;
  pcVar21 = (char *)param_1[0x12f];
  sVar8 = strlen(pcVar21);
  local_25c8 = (void *)0x0;
  local_25d0 = 0;
  uStack_25cf = 0;
  local_25d8 = 0;
  uStack_25d7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_25d8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_25d8 | 1);
    if (sVar8 != 0) goto LAB_00f813d0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_25d8 = (byte)uVar15 | 1;
    uStack_25d7 = (undefined7)(uVar15 >> 8);
    local_25d0 = (undefined1)sVar8;
    uStack_25cf = (undefined7)(sVar8 >> 8);
    local_25c8 = pvVar22;
LAB_00f813d0:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_448 = local_25c8;
  uStack_44f = uStack_25cf;
  local_450 = local_25d0;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_458 = local_25d8;
  uStack_457 = uStack_25d7;
  local_25d0 = 0;
  uStack_25cf = 0;
  local_25c8 = (void *)0x0;
  local_25d8 = 0;
  uStack_25d7 = 0;
  uStack_25b8 = 0;
  uStack_25c0 = 0;
  local_25b9 = 0;
  local_440 = PTR_LAB_027223a8;
  local_438 = PTR_LAB_027223b0;
  local_430 = 0xffffffff;
  pcVar21 = (char *)param_1[0x132];
  sVar8 = strlen(pcVar21);
  local_25f0 = (void *)0x0;
  local_25f8 = 0;
  uStack_25f7 = 0;
  local_2600 = 0;
  uStack_25ff = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2600 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2600 | 1);
    if (sVar8 != 0) goto LAB_00f814bc;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2600 = (byte)uVar15 | 1;
    uStack_25ff = (undefined7)(uVar15 >> 8);
    local_25f8 = (undefined1)sVar8;
    uStack_25f7 = (undefined7)(sVar8 >> 8);
    local_25f0 = pvVar22;
LAB_00f814bc:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_418 = local_25f0;
  uStack_41f = uStack_25f7;
  local_420 = local_25f8;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_428 = local_2600;
  uStack_427 = uStack_25ff;
  local_25f8 = 0;
  uStack_25f7 = 0;
  local_25f0 = (void *)0x0;
  local_2600 = 0;
  uStack_25ff = 0;
  uStack_25e0 = 0;
  uStack_25e8 = 0;
  local_25e1 = 0;
  local_410 = PTR_LAB_027223b8;
  local_408 = PTR_LAB_027223c0;
  local_400 = 0xffffffff;
  pcVar21 = (char *)param_1[0x135];
  sVar8 = strlen(pcVar21);
  local_2618 = (void *)0x0;
  local_2620 = 0;
  uStack_261f = 0;
  local_2628 = 0;
  uStack_2627 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2628 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2628 | 1);
    if (sVar8 != 0) goto LAB_00f815a8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2628 = (byte)uVar15 | 1;
    uStack_2627 = (undefined7)(uVar15 >> 8);
    local_2620 = (undefined1)sVar8;
    uStack_261f = (undefined7)(sVar8 >> 8);
    local_2618 = pvVar22;
LAB_00f815a8:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_3e8 = local_2618;
  uStack_3ef = uStack_261f;
  local_3f0 = local_2620;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_3f8 = local_2628;
  uStack_3f7 = uStack_2627;
  local_2620 = 0;
  uStack_261f = 0;
  local_2618 = (void *)0x0;
  local_2628 = 0;
  uStack_2627 = 0;
  uStack_2608 = 0;
  uStack_2610 = 0;
  local_2609 = 0;
  local_3e0 = PTR_LAB_027223c8;
  local_3d8 = PTR_LAB_027223d0;
  local_3d0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x138];
  sVar8 = strlen(pcVar21);
  local_2640 = (void *)0x0;
  local_2648 = 0;
  uStack_2647 = 0;
  local_2650 = 0;
  uStack_264f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2650 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2650 | 1);
    if (sVar8 != 0) goto LAB_00f81694;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2650 = (byte)uVar15 | 1;
    uStack_264f = (undefined7)(uVar15 >> 8);
    local_2648 = (undefined1)sVar8;
    uStack_2647 = (undefined7)(sVar8 >> 8);
    local_2640 = pvVar22;
LAB_00f81694:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_3b8 = local_2640;
  uStack_3bf = uStack_2647;
  local_3c0 = local_2648;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_3c8 = local_2650;
  uStack_3c7 = uStack_264f;
  local_2648 = 0;
  uStack_2647 = 0;
  local_2640 = (void *)0x0;
  local_2650 = 0;
  uStack_264f = 0;
  uStack_2630 = 0;
  uStack_2638 = 0;
  local_2631 = 0;
  local_3b0 = PTR_LAB_027223d8;
  local_3a8 = PTR_LAB_027223e0;
  local_3a0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x13b];
  sVar8 = strlen(pcVar21);
  local_2668 = (void *)0x0;
  local_2670 = 0;
  uStack_266f = 0;
  local_2678 = 0;
  uStack_2677 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2678 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2678 | 1);
    if (sVar8 != 0) goto LAB_00f81784;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2678 = (byte)uVar15 | 1;
    uStack_2677 = (undefined7)(uVar15 >> 8);
    local_2670 = (undefined1)sVar8;
    uStack_266f = (undefined7)(sVar8 >> 8);
    local_2668 = pvVar22;
LAB_00f81784:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_388 = local_2668;
  uStack_38f = uStack_266f;
  local_390 = local_2670;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_398 = local_2678;
  uStack_397 = uStack_2677;
  local_2670 = 0;
  uStack_266f = 0;
  local_2668 = (void *)0x0;
  local_2678 = 0;
  uStack_2677 = 0;
  uStack_2658 = 0;
  uStack_2660 = 0;
  local_2659 = 0;
  local_380 = PTR_LAB_027223e8;
  local_378 = PTR_LAB_027223f0;
  local_370 = 0xffffffff;
  pcVar21 = (char *)param_1[0x13e];
  sVar8 = strlen(pcVar21);
  local_2690 = (void *)0x0;
  local_2698 = 0;
  uStack_2697 = 0;
  local_26a0 = 0;
  uStack_269f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_26a0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_26a0 | 1);
    if (sVar8 != 0) goto LAB_00f81870;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_26a0 = (byte)uVar15 | 1;
    uStack_269f = (undefined7)(uVar15 >> 8);
    local_2698 = (undefined1)sVar8;
    uStack_2697 = (undefined7)(sVar8 >> 8);
    local_2690 = pvVar22;
LAB_00f81870:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_358 = local_2690;
  uStack_35f = uStack_2697;
  local_360 = local_2698;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_368 = local_26a0;
  uStack_367 = uStack_269f;
  local_2698 = 0;
  uStack_2697 = 0;
  local_2690 = (void *)0x0;
  local_26a0 = 0;
  uStack_269f = 0;
  uStack_2680 = 0;
  uStack_2688 = 0;
  local_2681 = 0;
  local_350 = PTR_LAB_027223f8;
  local_348 = PTR_LAB_02722400;
  local_340 = 0xffffffff;
  pcVar21 = (char *)param_1[0x141];
  sVar8 = strlen(pcVar21);
  local_26b8 = (void *)0x0;
  local_26c0 = 0;
  uStack_26bf = 0;
  local_26c8 = 0;
  uStack_26c7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_26c8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_26c8 | 1);
    if (sVar8 != 0) goto LAB_00f8195c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_26c8 = (byte)uVar15 | 1;
    uStack_26c7 = (undefined7)(uVar15 >> 8);
    local_26c0 = (undefined1)sVar8;
    uStack_26bf = (undefined7)(sVar8 >> 8);
    local_26b8 = pvVar22;
LAB_00f8195c:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_328 = local_26b8;
  uStack_32f = uStack_26bf;
  local_330 = local_26c0;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_338 = local_26c8;
  uStack_337 = uStack_26c7;
  local_26c0 = 0;
  uStack_26bf = 0;
  local_26b8 = (void *)0x0;
  local_26c8 = 0;
  uStack_26c7 = 0;
  uStack_26a8 = 0;
  uStack_26b0 = 0;
  local_26a9 = 0;
  local_320 = PTR_LAB_02722408;
  local_318 = PTR_LAB_02722410;
  local_310 = 0xffffffff;
  pcVar21 = (char *)param_1[0x144];
  sVar8 = strlen(pcVar21);
  local_26e0 = (void *)0x0;
  local_26e8 = 0;
  uStack_26e7 = 0;
  local_26f0 = 0;
  uStack_26ef = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_26f0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_26f0 | 1);
    if (sVar8 != 0) goto LAB_00f81a48;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_26f0 = (byte)uVar15 | 1;
    uStack_26ef = (undefined7)(uVar15 >> 8);
    local_26e8 = (undefined1)sVar8;
    uStack_26e7 = (undefined7)(sVar8 >> 8);
    local_26e0 = pvVar22;
LAB_00f81a48:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_2f8 = local_26e0;
  uStack_2ff = uStack_26e7;
  local_300 = local_26e8;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_308 = local_26f0;
  uStack_307 = uStack_26ef;
  local_26e8 = 0;
  uStack_26e7 = 0;
  local_26e0 = (void *)0x0;
  local_26f0 = 0;
  uStack_26ef = 0;
  uStack_26d0 = 0;
  uStack_26d8 = 0;
  local_26d1 = 0;
  local_2f0 = PTR_LAB_02722418;
  local_2e8 = PTR_LAB_02722420;
  local_2e0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x147];
  sVar8 = strlen(pcVar21);
  local_2708 = (void *)0x0;
  local_2710 = 0;
  uStack_270f = 0;
  local_2718 = 0;
  uStack_2717 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2718 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2718 | 1);
    if (sVar8 != 0) goto LAB_00f81b34;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2718 = (byte)uVar15 | 1;
    uStack_2717 = (undefined7)(uVar15 >> 8);
    local_2710 = (undefined1)sVar8;
    uStack_270f = (undefined7)(sVar8 >> 8);
    local_2708 = pvVar22;
LAB_00f81b34:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_2c8 = local_2708;
  uStack_2cf = uStack_270f;
  local_2d0 = local_2710;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_2d8 = local_2718;
  uStack_2d7 = uStack_2717;
  local_2710 = 0;
  uStack_270f = 0;
  local_2708 = (void *)0x0;
  local_2718 = 0;
  uStack_2717 = 0;
  uStack_26f8 = 0;
  uStack_2700 = 0;
  local_26f9 = 0;
  local_2c0 = PTR_LAB_02722428;
  local_2b8 = PTR_LAB_02722430;
  local_2b0 = 0xffffffff;
  pcVar21 = (char *)param_1[0x14a];
  sVar8 = strlen(pcVar21);
  local_2730 = (void *)0x0;
  local_2738 = 0;
  uStack_2737 = 0;
  local_2740 = 0;
  uStack_273f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2740 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2740 | 1);
    if (sVar8 != 0) goto LAB_00f81c20;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2740 = (byte)uVar15 | 1;
    uStack_273f = (undefined7)(uVar15 >> 8);
    local_2738 = (undefined1)sVar8;
    uStack_2737 = (undefined7)(sVar8 >> 8);
    local_2730 = pvVar22;
LAB_00f81c20:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_298 = local_2730;
  uStack_29f = uStack_2737;
  local_2a0 = local_2738;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_2a8 = local_2740;
  uStack_2a7 = uStack_273f;
  local_2738 = 0;
  uStack_2737 = 0;
  local_2730 = (void *)0x0;
  local_2740 = 0;
  uStack_273f = 0;
  uStack_2720 = 0;
  uStack_2728 = 0;
  local_2721 = 0;
  local_290 = PTR_LAB_02722438;
  local_288 = PTR_LAB_02722440;
  local_280 = 0xffffffff;
  pcVar21 = (char *)param_1[0x14d];
  sVar8 = strlen(pcVar21);
  local_2760 = 0;
  uStack_275f = 0;
  local_2758 = (void *)0x0;
  local_2768 = 0;
  uStack_2767 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2768 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2768 | 1);
    if (sVar8 != 0) goto LAB_00f81d04;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2768 = (byte)uVar15 | 1;
    uStack_2767 = (undefined7)(uVar15 >> 8);
    local_2760 = (undefined1)sVar8;
    uStack_275f = (undefined7)(sVar8 >> 8);
    local_2758 = pvVar22;
LAB_00f81d04:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_268 = local_2758;
  uStack_26f = uStack_275f;
  local_270 = local_2760;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_278 = local_2768;
  uStack_277 = uStack_2767;
  local_2760 = 0;
  uStack_275f = 0;
  local_2758 = (void *)0x0;
  local_2768 = 0;
  uStack_2767 = 0;
  uStack_2748 = 0;
  uStack_2750 = 0;
  local_2749 = 0;
  local_260 = PTR_LAB_02722448;
  local_258 = PTR_LAB_02722450;
  local_250 = 0xffffffff;
  pcVar21 = (char *)param_1[0x150];
  sVar8 = strlen(pcVar21);
  local_2788 = 0;
  uStack_2787 = 0;
  local_2780 = (void *)0x0;
  local_2790 = 0;
  uStack_278f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2790 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2790 | 1);
    if (sVar8 != 0) goto LAB_00f81dec;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2790 = (byte)uVar15 | 1;
    uStack_278f = (undefined7)(uVar15 >> 8);
    local_2788 = (undefined1)sVar8;
    uStack_2787 = (undefined7)(sVar8 >> 8);
    local_2780 = pvVar22;
LAB_00f81dec:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_238 = local_2780;
  uStack_23f = uStack_2787;
  local_240 = local_2788;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_248 = local_2790;
  uStack_247 = uStack_278f;
  local_2788 = 0;
  uStack_2787 = 0;
  local_2780 = (void *)0x0;
  local_2790 = 0;
  uStack_278f = 0;
  uStack_2770 = 0;
  uStack_2778 = 0;
  local_2771 = 0;
  local_230 = PTR_LAB_02722458;
  local_228 = PTR_LAB_02722460;
  local_220 = 0xffffffff;
  pcVar21 = (char *)param_1[0x153];
  sVar8 = strlen(pcVar21);
  local_27b0 = 0;
  uStack_27af = 0;
  local_27a8 = (void *)0x0;
  local_27b8 = 0;
  uStack_27b7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_27b8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_27b8 | 1);
    if (sVar8 != 0) goto LAB_00f81ed4;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_27b8 = (byte)uVar15 | 1;
    local_27b0 = (undefined1)sVar8;
    uStack_27af = (undefined7)(sVar8 >> 8);
    uStack_27b7 = (undefined7)(uVar15 >> 8);
    local_27a8 = pvVar22;
LAB_00f81ed4:
    memcpy(pvVar22,pcVar21,sVar8);
  }
  local_208 = local_27a8;
  uStack_20f = uStack_27af;
  local_210 = local_27b0;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_218 = local_27b8;
  local_27b0 = 0;
  uStack_27af = 0;
  uStack_217 = uStack_27b7;
  local_27b8 = 0;
  uStack_27b7 = 0;
  uStack_2798 = 0;
  local_27a8 = (void *)0x0;
  uStack_27a0 = 0;
  local_2799 = 0;
  local_200 = PTR_LAB_02722468;
  local_1f8 = PTR_LAB_02722470;
  local_1f0 = 0xffffffff;
  sVar8 = strlen(in_stack_000006a8);
  local_27d8 = 0;
  uStack_27d7 = 0;
  local_27d0 = (void *)0x0;
  local_27e0 = 0;
  uStack_27df = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_27e0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_27e0 | 1);
    if (sVar8 != 0) goto LAB_00f81fb0;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_27e0 = (byte)uVar15 | 1;
    uStack_27df = (undefined7)(uVar15 >> 8);
    local_27d8 = (undefined1)sVar8;
    uStack_27d7 = (undefined7)(sVar8 >> 8);
    local_27d0 = pvVar22;
LAB_00f81fb0:
    memcpy(pvVar22,in_stack_000006a8,sVar8);
  }
  local_1d8 = local_27d0;
  uStack_1df = uStack_27d7;
  local_1e0 = local_27d8;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_1e8 = local_27e0;
  local_27d8 = 0;
  uStack_27d7 = 0;
  uStack_1e7 = uStack_27df;
  local_27e0 = 0;
  uStack_27df = 0;
  uStack_27c0 = 0;
  local_27d0 = (void *)0x0;
  uStack_27c8 = 0;
  local_27c1 = 0;
  local_1d0 = PTR_LAB_02722478;
  local_1c8 = PTR_LAB_02722480;
  local_1c0 = 0xffffffff;
  sVar8 = strlen(in_stack_000006b8);
  local_2800 = 0;
  uStack_27ff = 0;
  local_27f8 = (void *)0x0;
  local_2808 = 0;
  uStack_2807 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2808 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2808 | 1);
    if (sVar8 != 0) goto LAB_00f82090;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2808 = (byte)uVar15 | 1;
    uStack_2807 = (undefined7)(uVar15 >> 8);
    local_2800 = (undefined1)sVar8;
    uStack_27ff = (undefined7)(sVar8 >> 8);
    local_27f8 = pvVar22;
LAB_00f82090:
    memcpy(pvVar22,in_stack_000006b8,sVar8);
  }
  local_1a8 = local_27f8;
  uStack_1af = uStack_27ff;
  local_1b0 = local_2800;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_1b8 = local_2808;
  local_2800 = 0;
  uStack_27ff = 0;
  uStack_1b7 = uStack_2807;
  local_2808 = 0;
  uStack_2807 = 0;
  uStack_27e8 = 0;
  local_27f8 = (void *)0x0;
  uStack_27f0 = 0;
  local_27e9 = 0;
  local_1a0 = PTR_LAB_02722488;
  local_198 = PTR_LAB_02722490;
  local_190 = 0xffffffff;
  sVar8 = strlen(in_stack_000006c8);
  local_2828 = 0;
  uStack_2827 = 0;
  local_2820 = (void *)0x0;
  local_2830 = 0;
  uStack_282f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2830 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2830 | 1);
    if (sVar8 != 0) goto LAB_00f8216c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2830 = (byte)uVar15 | 1;
    uStack_282f = (undefined7)(uVar15 >> 8);
    local_2828 = (undefined1)sVar8;
    uStack_2827 = (undefined7)(sVar8 >> 8);
    local_2820 = pvVar22;
LAB_00f8216c:
    memcpy(pvVar22,in_stack_000006c8,sVar8);
  }
  local_178 = local_2820;
  uStack_17f = uStack_2827;
  local_180 = local_2828;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_188 = local_2830;
  local_2828 = 0;
  uStack_2827 = 0;
  uStack_187 = uStack_282f;
  local_2830 = 0;
  uStack_282f = 0;
  uStack_2810 = 0;
  local_2820 = (void *)0x0;
  uStack_2818 = 0;
  local_2811 = 0;
  local_170 = PTR_LAB_02722498;
  local_168 = PTR_LAB_027224a0;
  local_160 = 0xffffffff;
  sVar8 = strlen(in_stack_000006d8);
  local_2850 = 0;
  uStack_284f = 0;
  local_2848 = (void *)0x0;
  local_2858 = 0;
  uStack_2857 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2858 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2858 | 1);
    if (sVar8 != 0) goto LAB_00f8224c;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2858 = (byte)uVar15 | 1;
    uStack_2857 = (undefined7)(uVar15 >> 8);
    local_2850 = (undefined1)sVar8;
    uStack_284f = (undefined7)(sVar8 >> 8);
    local_2848 = pvVar22;
LAB_00f8224c:
    memcpy(pvVar22,in_stack_000006d8,sVar8);
  }
  local_148 = local_2848;
  uStack_14f = uStack_284f;
  local_150 = local_2850;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_158 = local_2858;
  local_2850 = 0;
  uStack_284f = 0;
  uStack_157 = uStack_2857;
  local_2858 = 0;
  uStack_2857 = 0;
  uStack_2838 = 0;
  local_2848 = (void *)0x0;
  uStack_2840 = 0;
  local_2839 = 0;
  local_140 = PTR_LAB_027224a8;
  local_138 = PTR_LAB_027224b0;
  local_130 = 0xffffffff;
  sVar8 = strlen(in_stack_000006e8);
  local_2878 = 0;
  uStack_2877 = 0;
  local_2870 = (void *)0x0;
  local_2880 = 0;
  uStack_287f = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2880 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_2880 | 1);
    if (sVar8 != 0) goto LAB_00f82328;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_2880 = (byte)uVar15 | 1;
    uStack_287f = (undefined7)(uVar15 >> 8);
    local_2878 = (undefined1)sVar8;
    uStack_2877 = (undefined7)(sVar8 >> 8);
    local_2870 = pvVar22;
LAB_00f82328:
    memcpy(pvVar22,in_stack_000006e8,sVar8);
  }
  local_118 = local_2870;
  uStack_11f = uStack_2877;
  local_120 = local_2878;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_128 = local_2880;
  local_2878 = 0;
  uStack_2877 = 0;
  uStack_127 = uStack_287f;
  local_2880 = 0;
  uStack_287f = 0;
  uStack_2860 = 0;
  local_2870 = (void *)0x0;
  uStack_2868 = 0;
  local_2861 = 0;
  local_110 = PTR_LAB_027224b8;
  local_108 = PTR_LAB_027224c0;
  local_100 = 0xffffffff;
  sVar8 = strlen(in_stack_000006f8);
  local_28a0 = 0;
  uStack_289f = 0;
  local_2898 = (void *)0x0;
  local_28a8 = 0;
  uStack_28a7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_28a8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_28a8 | 1);
    if (sVar8 != 0) goto LAB_00f82410;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_28a8 = (byte)uVar15 | 1;
    uStack_28a7 = (undefined7)(uVar15 >> 8);
    local_28a0 = (undefined1)sVar8;
    uStack_289f = (undefined7)(sVar8 >> 8);
    local_2898 = pvVar22;
LAB_00f82410:
    memcpy(pvVar22,in_stack_000006f8,sVar8);
  }
  local_e8 = local_2898;
  uStack_ef = uStack_289f;
  local_f0 = local_28a0;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_f8 = local_28a8;
  local_28a0 = 0;
  uStack_289f = 0;
  uStack_f7 = uStack_28a7;
  local_28a8 = 0;
  uStack_28a7 = 0;
  uStack_2888 = 0;
  local_2898 = (void *)0x0;
  uStack_2890 = 0;
  local_2889 = 0;
  local_e0 = PTR_LAB_027224c8;
  local_d8 = PTR_LAB_027224d0;
  local_d0 = 0xffffffff;
  sVar8 = strlen(in_stack_00000708);
  local_28c8 = 0;
  uStack_28c7 = 0;
  local_28c0 = (void *)0x0;
  local_28d0 = 0;
  uStack_28cf = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_28d0 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_28d0 | 1);
    if (sVar8 != 0) goto LAB_00f824ec;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_28d0 = (byte)uVar15 | 1;
    uStack_28cf = (undefined7)(uVar15 >> 8);
    local_28c8 = (undefined1)sVar8;
    uStack_28c7 = (undefined7)(sVar8 >> 8);
    local_28c0 = pvVar22;
LAB_00f824ec:
    memcpy(pvVar22,in_stack_00000708,sVar8);
  }
  local_b8 = local_28c0;
  uStack_bf = uStack_28c7;
  local_c0 = local_28c8;
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  bStack_c8 = local_28d0;
  local_28c8 = 0;
  uStack_28c7 = 0;
  uStack_c7 = uStack_28cf;
  local_28d0 = 0;
  uStack_28cf = 0;
  uStack_28b0 = 0;
  local_28c0 = (void *)0x0;
  uStack_28b8 = 0;
  local_28b1 = 0;
  local_b0 = PTR_LAB_027224d8;
  local_a8 = PTR_LAB_027224e0;
  local_a0 = 0xffffffff;
  sVar8 = strlen(in_stack_00000718);
  local_28f0 = 0;
  uStack_28ef = 0;
  local_28e8 = (void *)0x0;
  local_28f8 = 0;
  uStack_28f7 = 0;
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_28f8 = (byte)((int)sVar8 << 1);
    pvVar22 = (void *)((ulong)&local_28f8 | 1);
    if (sVar8 == 0) goto LAB_00f825d8;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar22 = operator_new(uVar15);
    local_28f8 = (byte)uVar15 | 1;
    uStack_28f7 = (undefined7)(uVar15 >> 8);
    local_28f0 = (undefined1)sVar8;
    uStack_28ef = (undefined7)(sVar8 >> 8);
    local_28e8 = pvVar22;
  }
  memcpy(pvVar22,in_stack_00000718,sVar8);
LAB_00f825d8:
  *(undefined1 *)((long)pvVar22 + sVar8) = 0;
  psVar20 = &local_1688;
  local_98 = local_28f8;
  uStack_28d8 = uStack_28ef;
  uStack_28e0 = uStack_28f7;
  local_28d9 = local_28f0;
  uStack_97 = uStack_28f7;
  local_90 = local_28f0;
  uStack_8f = uStack_28ef;
  local_80 = PTR_LAB_027224e8;
  local_70 = 0xffffffff;
  plVar1 = param_1 + 3;
  local_78 = PTR_LAB_027224f0;
  local_88 = local_28e8;
  do {
    uVar15 = *(ulong *)(psVar20 + 8);
    psVar4 = *(string **)(psVar20 + 0x10);
    if (((byte)*psVar20 & 1) == 0) {
      psVar4 = psVar20 + 1;
      uVar15 = (ulong)((byte)*psVar20 >> 1);
    }
    pbVar9 = (byte *)FUN_00f5c860(&local_16b0,psVar4,uVar15);
    pbVar23 = (byte *)param_1[2];
    if (pbVar23 != (byte *)0x0) {
      pbVar19 = pbVar23 + -1;
      if (((ulong)pbVar19 & (ulong)pbVar23) == 0) {
        pbVar24 = (byte *)((ulong)pbVar19 & (ulong)pbVar9);
        plVar13 = *(long **)(*plVar12 + (long)pbVar24 * 8);
      }
      else {
        pbVar24 = pbVar9;
        if (pbVar23 <= pbVar9) {
          uVar15 = 0;
          if (pbVar23 != (byte *)0x0) {
            uVar15 = (ulong)pbVar9 / (ulong)pbVar23;
          }
          pbVar24 = pbVar9 + -(uVar15 * (long)pbVar23);
        }
        plVar13 = *(long **)(*plVar12 + (long)pbVar24 * 8);
      }
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        psVar4 = psVar20 + 1;
        sVar8 = (ulong)((byte)*psVar20 >> 1);
        if (((byte)*psVar20 & 1) != 0) {
          psVar4 = *(string **)(psVar20 + 0x10);
          sVar8 = *(size_t *)(psVar20 + 8);
        }
        if (((ulong)pbVar19 & (ulong)pbVar23) == 0) {
          if (sVar8 == 0) {
            do {
              if ((byte *)plVar13[1] != pbVar9 &&
                  (byte *)((ulong)plVar13[1] & (ulong)pbVar19) != pbVar24) break;
              uVar15 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
              if ((*(byte *)(plVar13 + 2) & 1) != 0) {
                uVar15 = plVar13[3];
              }
              if (uVar15 == 0) goto LAB_00f829f8;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              if ((byte *)plVar13[1] != pbVar9 &&
                  (byte *)((ulong)plVar13[1] & (ulong)pbVar19) != pbVar24) break;
              bVar6 = *(byte *)(plVar13 + 2);
              sVar2 = (ulong)(bVar6 >> 1);
              if ((bVar6 & 1) != 0) {
                sVar2 = plVar13[3];
              }
              if (sVar2 == sVar8) {
                if ((bVar6 & 1) == 0) {
                  psVar11 = (string *)((long)plVar13 + 0x11);
                  lVar14 = -(ulong)(bVar6 >> 1);
                  psVar18 = psVar4;
                  while (*psVar11 == *psVar18) {
                    psVar11 = psVar11 + 1;
                    psVar18 = psVar18 + 1;
                    lVar14 = lVar14 + 1;
                    if (lVar14 == 0) goto LAB_00f829f8;
                  }
                }
                else {
                  iVar7 = memcmp((void *)plVar13[4],psVar4,sVar8);
                  if (iVar7 == 0) goto LAB_00f829f8;
                }
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
        else if (sVar8 == 0) {
          do {
            pbVar19 = (byte *)plVar13[1];
            if (pbVar19 != pbVar9) {
              if (pbVar23 <= pbVar19) {
                uVar15 = 0;
                if (pbVar23 != (byte *)0x0) {
                  uVar15 = (ulong)pbVar19 / (ulong)pbVar23;
                }
                pbVar19 = pbVar19 + -(uVar15 * (long)pbVar23);
              }
              if (pbVar19 != pbVar24) break;
            }
            uVar15 = (ulong)(*(byte *)(plVar13 + 2) >> 1);
            if ((*(byte *)(plVar13 + 2) & 1) != 0) {
              uVar15 = plVar13[3];
            }
            if (uVar15 == 0) goto LAB_00f829f8;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            pbVar19 = (byte *)plVar13[1];
            if (pbVar19 != pbVar9) {
              if (pbVar23 <= pbVar19) {
                uVar15 = 0;
                if (pbVar23 != (byte *)0x0) {
                  uVar15 = (ulong)pbVar19 / (ulong)pbVar23;
                }
                pbVar19 = pbVar19 + -(uVar15 * (long)pbVar23);
              }
              if (pbVar19 != pbVar24) break;
            }
            bVar6 = *(byte *)(plVar13 + 2);
            sVar2 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar2 = plVar13[3];
            }
            if (sVar2 == sVar8) {
              if ((bVar6 & 1) == 0) {
                psVar11 = (string *)((long)plVar13 + 0x11);
                lVar14 = -(ulong)(bVar6 >> 1);
                psVar18 = psVar4;
                while (*psVar11 == *psVar18) {
                  psVar11 = psVar11 + 1;
                  psVar18 = psVar18 + 1;
                  lVar14 = lVar14 + 1;
                  if (lVar14 == 0) goto LAB_00f829f8;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar13[4],psVar4,sVar8);
                if (iVar7 == 0) goto LAB_00f829f8;
              }
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    plVar13 = operator_new(0x40);
    std::string::string((string *)(plVar13 + 2),psVar20);
    lVar14 = *(long *)(psVar20 + 0x18);
    lVar3 = *(long *)(psVar20 + 0x20);
    lVar16 = *(long *)(psVar20 + 0x28);
    *plVar13 = 0;
    plVar13[1] = (long)pbVar9;
    plVar13[5] = lVar14;
    plVar13[6] = lVar3;
    plVar13[7] = lVar16;
    if ((pbVar23 == (byte *)0x0) ||
       (*(float *)(param_1 + 5) * (float)pbVar23 < (float)(param_1[4] + 1))) {
      if (pbVar23 < (byte *)0x3) {
        uVar15 = 1;
      }
      else {
        uVar15 = (ulong)(((ulong)(pbVar23 + -1) & (ulong)pbVar23) != 0);
      }
      uVar17 = (ulong)((float)(param_1[4] + 1) / *(float *)(param_1 + 5));
      uVar15 = uVar15 | (long)pbVar23 << 1;
      if (uVar17 <= uVar15) {
        uVar17 = uVar15;
      }
      FUN_00f5cee0(plVar12,uVar17);
      pbVar23 = (byte *)param_1[2];
      if (((ulong)(pbVar23 + -1) & (ulong)pbVar23) == 0) {
        pbVar24 = (byte *)((ulong)(pbVar23 + -1) & (ulong)pbVar9);
        lVar14 = *plVar12;
        plVar10 = *(long **)(lVar14 + (long)pbVar24 * 8);
        goto joined_r0x00f8289c;
      }
      if (pbVar9 < pbVar23) {
        lVar14 = *plVar12;
        plVar10 = *(long **)(lVar14 + (long)pbVar9 * 8);
        pbVar24 = pbVar9;
        goto joined_r0x00f8289c;
      }
      uVar15 = 0;
      if (pbVar23 != (byte *)0x0) {
        uVar15 = (ulong)pbVar9 / (ulong)pbVar23;
      }
      pbVar24 = pbVar9 + -(uVar15 * (long)pbVar23);
      lVar14 = *plVar12;
      plVar10 = *(long **)(lVar14 + (long)pbVar24 * 8);
      if (plVar10 != (long *)0x0) goto LAB_00f8282c;
LAB_00f828b8:
      *plVar13 = *plVar1;
      *plVar1 = (long)plVar13;
      *(long **)(lVar14 + (long)pbVar24 * 8) = plVar1;
      if (*plVar13 != 0) {
        pbVar9 = *(byte **)(*plVar13 + 8);
        if (((ulong)(pbVar23 + -1) & (ulong)pbVar23) == 0) {
          pbVar9 = (byte *)((ulong)pbVar9 & (ulong)(pbVar23 + -1));
        }
        else if (pbVar23 <= pbVar9) {
          uVar15 = 0;
          if (pbVar23 != (byte *)0x0) {
            uVar15 = (ulong)pbVar9 / (ulong)pbVar23;
          }
          pbVar9 = pbVar9 + -(uVar15 * (long)pbVar23);
        }
        plVar10 = (long *)(*plVar12 + (long)pbVar9 * 8);
        goto LAB_00f829e8;
      }
    }
    else {
      lVar14 = *plVar12;
      plVar10 = *(long **)(lVar14 + (long)pbVar24 * 8);
joined_r0x00f8289c:
      if (plVar10 == (long *)0x0) goto LAB_00f828b8;
LAB_00f8282c:
      *plVar13 = *plVar10;
LAB_00f829e8:
      *plVar10 = (long)plVar13;
    }
    param_1[4] = param_1[4] + 1;
LAB_00f829f8:
    psVar20 = psVar20 + 0x30;
    if (psVar20 == asStack_68) {
      lVar14 = FUN_00f54b20();
      FUN_00f61630(plVar12,lVar14);
      FUN_00f61630(plVar12,lVar14 + 0x18);
      FUN_00f61630(plVar12,lVar14 + 0x30);
      FUN_00f61630(plVar12,lVar14 + 0x48);
      FUN_00f61630(plVar12,lVar14 + 0x60);
      FUN_00f61630(plVar12,lVar14 + 0x78);
      FUN_00f61630(plVar12,lVar14 + 0x90);
      FUN_00f61630(plVar12,lVar14 + 0xa8);
      FUN_00f61630(plVar12,lVar14 + 0xc0);
      FUN_00f61630(plVar12,lVar14 + 0xd8);
      FUN_00f61630(plVar12,lVar14 + 0xf0);
      FUN_00f61630(plVar12,lVar14 + 0x108);
      FUN_00f61630(plVar12,lVar14 + 0x120);
      FUN_00f61630(plVar12,lVar14 + 0x138);
      FUN_00f61630(plVar12,lVar14 + 0x150);
      FUN_00f61630(plVar12,lVar14 + 0x168);
      FUN_00f61630(plVar12,lVar14 + 0x180);
      FUN_00f61630(plVar12,lVar14 + 0x198);
      FUN_00f61630(plVar12,lVar14 + 0x1b0);
      FUN_00f61630(plVar12,lVar14 + 0x1c8);
      FUN_00f61630(plVar12,lVar14 + 0x1e0);
      FUN_00f61630(plVar12,lVar14 + 0x1f8);
      FUN_00f61630(plVar12,lVar14 + 0x210);
      FUN_00f61630(plVar12,lVar14 + 0x228);
      FUN_00f61630(plVar12,lVar14 + 0x240);
      FUN_00f61630(plVar12,lVar14 + 600);
      FUN_00f61630(plVar12,lVar14 + 0x270);
      FUN_00f61630(plVar12,lVar14 + 0x288);
      FUN_00f61630(plVar12,lVar14 + 0x2a0);
      FUN_00f61630(plVar12,lVar14 + 0x2b8);
      FUN_00f61630(plVar12,lVar14 + 0x2d0);
      FUN_00f61630(plVar12,lVar14 + 0x2e8);
      bVar6 = FUN_00f87f20(param_1);
      *(byte *)(param_1 + 0xb) = bVar6 & 1;
      lVar14 = 0x1620;
      do {
        if ((*(byte *)((long)&uStack_16b8 + lVar14) & 1) != 0) {
          operator_delete(*(void **)(&local_16a8 + lVar14));
        }
        lVar14 = lVar14 + -0x30;
      } while (lVar14 != 0);
      return;
    }
  } while( true );
}


