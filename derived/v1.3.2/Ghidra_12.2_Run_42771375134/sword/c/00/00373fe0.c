/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00373fe0; name: FUN_00373fe0
 */


bool FUN_00373fe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_4c8 [872];
  undefined8 *local_160;
  long local_158;
  ulong local_150;
  undefined8 *local_148;
  long local_140;
  ulong local_138;
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
  undefined8 **local_c8;
  undefined8 **local_c0;
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
  char local_54 [4];
  
  local_130 = (**(code **)(*param_4 + 0x20))(param_4);
  local_160 = &local_130;
  local_140 = 0;
  local_138 = 0;
  local_158 = 0;
  local_150 = 0;
                    /* try { // try from 00374044 to 00374123 has its CatchHandler @ 003741b0 */
  local_148 = local_160;
  FUN_00394020(auStack_4c8);
  local_118 = param_1[2];
  local_128 = *param_1;
  local_120 = param_1[1];
  local_54[0] = '\0';
  local_80 = 1;
  uStack_70 = 0;
  local_68 = 0;
  local_110 = local_128;
  local_108 = local_120;
  local_100 = local_118;
  local_f8 = local_128;
  local_f0 = local_120;
  local_e8 = local_118;
  local_e0 = local_128;
  local_d8 = local_120;
  local_d0 = local_118;
  local_c8 = &local_148;
  local_c0 = &local_160;
  local_b8 = local_128;
  local_b0 = local_120;
  local_a8 = local_118;
  uStack_a0 = param_2;
  local_98 = param_3;
  plStack_90 = param_4;
  local_88 = param_5;
  local_78 = local_54;
  FUN_00374330(auStack_4c8,&local_c8,0);
  local_80 = 1;
  local_68 = 0;
  local_b8 = local_f8;
  local_b0 = local_f0;
  uStack_70 = 0;
  local_a8 = local_e8;
  local_c8 = &local_148;
  local_c0 = &local_160;
  uStack_a0 = param_2;
  local_98 = param_3;
  plStack_90 = param_4;
  local_88 = param_5;
  local_78 = local_54;
  FUN_00374220(auStack_4c8,&local_c8,0);
  cVar1 = local_54[0];
  if (((-1 < (long)local_150) && ((local_150 & 0x7fffffff00000000) != 0)) && (local_158 != 0)) {
                    /* try { // try from 00374150 to 00374153 has its CatchHandler @ 003741ac */
    (**(code **)(*(long *)*local_160 + 0x18))();
  }
  if (((-1 < (long)local_138) && ((local_138 & 0x7fffffff00000000) != 0)) && (local_140 != 0)) {
                    /* try { // try from 0037417c to 0037417f has its CatchHandler @ 003741a8 */
    (**(code **)(*(long *)*local_148 + 0x18))();
  }
  return cVar1 == '\0';
}


