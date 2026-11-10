/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00318c80; name: FUN_00318c80
 */


bool FUN_00318c80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [64];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined8 *local_130;
  long local_128;
  ulong local_120;
  undefined8 *local_118;
  long local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 **local_f8;
  undefined8 **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_44 [4];
  
  local_100 = (**(code **)(*param_4 + 0x20))(param_4);
  local_130 = &local_100;
  local_108 = 0;
  local_110 = 0;
  local_120 = 0;
  local_128 = 0;
                    /* try { // try from 00318cd4 to 00318dbb has its CatchHandler @ 00318e40 */
  local_118 = local_130;
  FUN_00217860(auStack_210);
  local_d8 = param_1[2];
  local_e8 = *param_1;
  uStack_e0 = param_1[1];
  local_a8 = local_44;
  local_f8 = &local_118;
  local_f0 = &local_130;
  uStack_a0 = 0;
  local_44[0] = '\0';
  local_b0 = 1;
  local_98 = 0;
  uStack_d0 = param_2;
  local_c8 = param_3;
  plStack_c0 = param_4;
  local_b8 = param_5;
  local_90 = local_e8;
  uStack_88 = uStack_e0;
  local_80 = local_d8;
  uStack_78 = local_e8;
  local_70 = uStack_e0;
  local_68 = local_d8;
  local_60 = local_e8;
  local_58 = uStack_e0;
  local_50 = local_d8;
  FUN_00327d30(&local_f8,auStack_210,0);
  FUN_00327f60(&local_f8,auStack_1f0,1);
  FUN_00328190(&local_f8,auStack_1d0,2);
  FUN_00328350(&local_f8,auStack_190,4);
  FUN_00328500(&local_f8,auStack_170,5);
  FUN_003286b0(&local_f8,auStack_150,6);
  cVar1 = local_44[0];
  if (((-1 < (long)local_120) && ((local_120 & 0x7fffffff00000000) != 0)) && (local_128 != 0)) {
                    /* try { // try from 00318de8 to 00318deb has its CatchHandler @ 00318e3c */
    (**(code **)(*(long *)*local_130 + 0x18))();
  }
  if (((-1 < (long)local_108) && ((local_108 & 0x7fffffff00000000) != 0)) && (local_110 != 0)) {
                    /* try { // try from 00318e14 to 00318e17 has its CatchHandler @ 00318e38 */
    (**(code **)(*(long *)*local_118 + 0x18))();
  }
  return cVar1 == '\0';
}


