/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003501b0; name: FUN_003501b0
 */


bool FUN_003501b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [88];
  undefined8 *local_138;
  long local_130;
  ulong local_128;
  undefined8 *local_120;
  long local_118;
  ulong local_110;
  undefined8 local_108;
  undefined8 **local_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_44 [4];
  
  local_108 = (**(code **)(*param_4 + 0x20))(param_4);
  local_138 = &local_108;
  local_110 = 0;
  local_118 = 0;
  local_128 = 0;
  local_130 = 0;
                    /* try { // try from 00350208 to 003502fb has its CatchHandler @ 00350384 */
  local_120 = local_138;
  FUN_00214280(auStack_248);
  local_e0 = param_1[2];
  local_f0 = *param_1;
  local_e8 = param_1[1];
  local_b0 = local_44;
  local_100 = &local_120;
  local_f8 = &local_138;
  uStack_a8 = 0;
  local_44[0] = '\0';
  local_a0 = 0;
  local_b8 = 1;
  uStack_d8 = param_2;
  local_d0 = param_3;
  plStack_c8 = param_4;
  local_c0 = param_5;
  uStack_98 = local_f0;
  local_90 = local_e8;
  local_88 = local_e0;
  local_80 = local_f0;
  local_78 = local_e8;
  local_70 = local_e0;
  local_68 = local_f0;
  local_60 = local_e8;
  local_58 = local_e0;
  FUN_003503f0(&local_100,auStack_230,1);
  FUN_003505a0(&local_100,auStack_210,2);
  FUN_00350750(&local_100,auStack_1f0,3);
  FUN_00350900(&local_100,auStack_1d0,4);
  FUN_00350ac0(&local_100,auStack_1b0,5);
  FUN_00350c80(&local_100,auStack_190,6);
  cVar1 = local_44[0];
  if (((-1 < (long)local_128) && ((local_128 & 0x7fffffff00000000) != 0)) && (local_130 != 0)) {
                    /* try { // try from 00350328 to 0035032b has its CatchHandler @ 00350380 */
    (**(code **)(*(long *)*local_138 + 0x18))();
  }
  if (((-1 < (long)local_110) && ((local_110 & 0x7fffffff00000000) != 0)) && (local_118 != 0)) {
                    /* try { // try from 00350354 to 00350357 has its CatchHandler @ 0035037c */
    (**(code **)(*(long *)*local_120 + 0x18))();
  }
  return cVar1 == '\0';
}


