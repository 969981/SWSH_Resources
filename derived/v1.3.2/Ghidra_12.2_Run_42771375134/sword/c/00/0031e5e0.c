/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031e5e0; name: FUN_0031e5e0
 */


bool FUN_0031e5e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [32];
  undefined1 auStack_5f0 [32];
  undefined1 auStack_5d0 [32];
  undefined1 auStack_5b0 [32];
  undefined1 auStack_590 [1088];
  undefined8 *local_150;
  long local_148;
  ulong local_140;
  undefined8 *local_138;
  long local_130;
  ulong local_128;
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
  
  local_120 = (**(code **)(*param_4 + 0x20))(param_4);
  local_150 = &local_120;
  local_130 = 0;
  local_128 = 0;
  local_148 = 0;
  local_140 = 0;
                    /* try { // try from 0031e640 to 0031e793 has its CatchHandler @ 0031e81c */
  local_138 = local_150;
  FUN_002164e0(auStack_628);
  local_108 = param_1[2];
  local_110 = param_1[1];
  local_118 = *param_1;
  local_b8 = &local_138;
  local_b0 = &local_150;
  local_68 = local_44;
  local_44[0] = '\0';
  uStack_60 = 0;
  local_58 = 0;
  local_70 = 1;
  local_100 = local_118;
  local_f8 = local_110;
  local_f0 = local_108;
  local_e8 = local_118;
  local_e0 = local_110;
  local_d8 = local_108;
  local_d0 = local_118;
  local_c8 = local_110;
  local_c0 = local_108;
  local_a8 = local_118;
  local_a0 = local_110;
  local_98 = local_108;
  uStack_90 = param_2;
  local_88 = param_3;
  plStack_80 = param_4;
  local_78 = param_5;
  FUN_0033d8b0(&local_b8,auStack_610,1);
  FUN_0033dae0(&local_b8,auStack_5f0,2);
  FUN_0033dca0(&local_b8,auStack_5d0,3);
  FUN_0033ded0(&local_b8,auStack_5b0,4);
  FUN_0033e100(&local_b8,auStack_590,5);
  local_b8 = &local_138;
  local_b0 = &local_150;
  local_a8 = local_e8;
  local_a0 = local_e0;
  local_98 = local_d8;
  local_70 = 1;
  local_68 = local_44;
  local_58 = 0;
  uStack_60 = 0;
  uStack_90 = param_2;
  local_88 = param_3;
  plStack_80 = param_4;
  local_78 = param_5;
  FUN_0033d6a0(auStack_628,&local_b8,0);
  cVar1 = local_44[0];
  if (((-1 < (long)local_140) && ((local_140 & 0x7fffffff00000000) != 0)) && (local_148 != 0)) {
                    /* try { // try from 0031e7c0 to 0031e7c3 has its CatchHandler @ 0031e818 */
    (**(code **)(*(long *)*local_150 + 0x18))();
  }
  if (((-1 < (long)local_128) && ((local_128 & 0x7fffffff00000000) != 0)) && (local_130 != 0)) {
                    /* try { // try from 0031e7ec to 0031e7ef has its CatchHandler @ 0031e814 */
    (**(code **)(*(long *)*local_138 + 0x18))();
  }
  return cVar1 == '\0';
}


