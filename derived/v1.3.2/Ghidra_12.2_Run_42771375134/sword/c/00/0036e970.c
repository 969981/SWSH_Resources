/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0036e970; name: FUN_0036e970
 */


bool FUN_0036e970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_430 [496];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [56];
  undefined8 *local_168;
  long local_160;
  ulong local_158;
  undefined8 *local_150;
  long local_148;
  ulong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char local_cc [4];
  undefined8 **local_c8;
  undefined8 **ppuStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined1 local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_138 = (**(code **)(*param_4 + 0x20))(param_4);
  local_168 = &local_138;
  local_148 = 0;
  local_140 = 0;
  local_160 = 0;
  local_158 = 0;
                    /* try { // try from 0036e9d4 to 0036eb17 has its CatchHandler @ 0036eba4 */
  local_150 = local_168;
  FUN_00394590(auStack_430);
  local_120 = param_1[2];
  local_130 = *param_1;
  local_128 = param_1[1];
  local_cc[0] = '\0';
  local_68 = 0;
  uStack_70 = 0;
  local_80 = 1;
  local_118 = local_130;
  local_110 = local_128;
  local_108 = local_120;
  local_100 = local_130;
  local_f8 = local_128;
  local_f0 = local_120;
  local_e8 = local_130;
  local_e0 = local_128;
  local_d8 = local_120;
  local_c8 = &local_150;
  ppuStack_c0 = &local_168;
  local_b8 = local_130;
  local_b0 = local_128;
  local_a8 = local_120;
  uStack_a0 = param_2;
  local_98 = param_3;
  plStack_90 = param_4;
  local_88 = param_5;
  local_78 = local_cc;
  FUN_0036ec10(auStack_430,&local_c8,0);
  local_80 = 1;
  local_68 = 0;
  local_b8 = local_100;
  local_b0 = local_f8;
  local_a8 = local_f0;
  uStack_70 = 0;
  local_c8 = &local_150;
  ppuStack_c0 = &local_168;
  uStack_a0 = param_2;
  local_98 = param_3;
  plStack_90 = param_4;
  local_88 = param_5;
  local_78 = local_cc;
  FUN_003708d0(&local_c8,auStack_240,1);
  FUN_00370a80(&local_c8,auStack_220,2);
  FUN_00370c30(&local_c8,auStack_200,3);
  FUN_00370de0(&local_c8,auStack_1e0,4);
  FUN_00370f90(&local_c8,auStack_1c0,5);
  FUN_00371140(&local_c8,auStack_1a0,6);
  cVar1 = local_cc[0];
  if (((-1 < (long)local_158) && ((local_158 & 0x7fffffff00000000) != 0)) && (local_160 != 0)) {
                    /* try { // try from 0036eb44 to 0036eb47 has its CatchHandler @ 0036eba0 */
    (**(code **)(*(long *)*local_168 + 0x18))();
  }
  if (((-1 < (long)local_140) && ((local_140 & 0x7fffffff00000000) != 0)) && (local_148 != 0)) {
                    /* try { // try from 0036eb70 to 0036eb73 has its CatchHandler @ 0036eb9c */
    (**(code **)(*(long *)*local_150 + 0x18))();
  }
  return cVar1 == '\0';
}


