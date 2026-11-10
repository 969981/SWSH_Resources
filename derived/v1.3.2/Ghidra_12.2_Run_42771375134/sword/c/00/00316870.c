/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00316870; name: FUN_00316870
 */


bool FUN_00316870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_2b8 [48];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [56];
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
                    /* try { // try from 003168c8 to 003169df has its CatchHandler @ 00316a68 */
  local_120 = local_138;
  FUN_00215bc0(auStack_2b8);
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
  FUN_00324f90(&local_100,auStack_288,2);
  FUN_00325190(&local_100,auStack_268,3);
  FUN_00325350(&local_100,auStack_248,4);
  FUN_00325510(&local_100,auStack_228,5);
  FUN_003256a0(&local_100,auStack_208,6);
  FUN_00325850(&local_100,auStack_1e8,7);
  FUN_00325a00(&local_100,auStack_1c8,8);
  FUN_00325bc0(&local_100,auStack_190,10);
  cVar1 = local_44[0];
  if (((-1 < (long)local_128) && ((local_128 & 0x7fffffff00000000) != 0)) && (local_130 != 0)) {
                    /* try { // try from 00316a0c to 00316a0f has its CatchHandler @ 00316a64 */
    (**(code **)(*(long *)*local_138 + 0x18))();
  }
  if (((-1 < (long)local_110) && ((local_110 & 0x7fffffff00000000) != 0)) && (local_118 != 0)) {
                    /* try { // try from 00316a38 to 00316a3b has its CatchHandler @ 00316a60 */
    (**(code **)(*(long *)*local_120 + 0x18))();
  }
  return cVar1 == '\0';
}


