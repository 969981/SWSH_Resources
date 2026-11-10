/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00352960; name: FUN_00352960
 */


bool FUN_00352960(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [32];
  undefined1 auStack_298 [32];
  undefined1 auStack_278 [32];
  undefined1 auStack_258 [32];
  undefined1 auStack_238 [88];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [88];
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
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined1 local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char local_44 [4];
  
  local_138 = (**(code **)(*param_4 + 0x20))(param_4);
  local_168 = &local_138;
  local_140 = 0;
  local_148 = 0;
  local_158 = 0;
  local_160 = 0;
                    /* try { // try from 003529b4 to 00352b2b has its CatchHandler @ 00352bb4 */
  local_150 = local_168;
  FUN_00214dc0(auStack_2d0);
  local_120 = param_1[2];
  local_130 = *param_1;
  local_128 = param_1[1];
  local_44[0] = '\0';
  local_b8 = &local_150;
  local_b0 = &local_168;
  local_68 = local_44;
  local_70 = 1;
  uStack_60 = 0;
  local_58 = 0;
  local_118 = local_130;
  local_110 = local_128;
  local_108 = local_120;
  local_100 = local_130;
  local_f8 = local_128;
  local_f0 = local_120;
  local_e8 = local_130;
  local_e0 = local_128;
  local_d8 = local_120;
  local_d0 = local_130;
  local_c8 = local_128;
  local_c0 = local_120;
  local_a8 = local_130;
  local_a0 = local_128;
  local_98 = local_120;
  uStack_90 = param_2;
  local_88 = param_3;
  plStack_80 = param_4;
  local_78 = param_5;
  FUN_00352c20(&local_b8,auStack_2b8,1);
  FUN_00352e50(&local_b8,auStack_298,2);
  FUN_00353010(&local_b8,auStack_278,3);
  FUN_00353240(&local_b8,auStack_258,4);
  FUN_00353470(&local_b8,auStack_238,5);
  local_b8 = &local_150;
  local_b0 = &local_168;
  local_a8 = local_130;
  local_a0 = local_128;
  local_98 = local_120;
  local_70 = 1;
  local_68 = local_44;
  uStack_60 = 0;
  local_58 = 0;
  uStack_90 = param_2;
  local_88 = param_3;
  plStack_80 = param_4;
  local_78 = param_5;
  FUN_00353850(&local_b8,auStack_1e0,8);
  FUN_00353a50(&local_b8,auStack_1c0,9);
  cVar1 = local_44[0];
  if (((-1 < (long)local_158) && ((local_158 & 0x7fffffff00000000) != 0)) && (local_160 != 0)) {
                    /* try { // try from 00352b58 to 00352b5b has its CatchHandler @ 00352bb0 */
    (**(code **)(*(long *)*local_168 + 0x18))();
  }
  if (((-1 < (long)local_140) && ((local_140 & 0x7fffffff00000000) != 0)) && (local_148 != 0)) {
                    /* try { // try from 00352b84 to 00352b87 has its CatchHandler @ 00352bac */
    (**(code **)(*(long *)*local_150 + 0x18))();
  }
  return cVar1 == '\0';
}


