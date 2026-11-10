/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035f750; name: FUN_0035f750
 */


bool FUN_0035f750(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_300 [464];
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
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_128 = 0;
                    /* try { // try from 0035f7a8 to 0035f833 has its CatchHandler @ 0035f8b8 */
  local_118 = local_130;
  FUN_00215710(auStack_300);
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
  FUN_0035f930(auStack_300,&local_f8,0);
  cVar1 = local_44[0];
  if (((-1 < (long)local_120) && ((local_120 & 0x7fffffff00000000) != 0)) && (local_128 != 0)) {
                    /* try { // try from 0035f860 to 0035f863 has its CatchHandler @ 0035f8b4 */
    (**(code **)(*(long *)*local_130 + 0x18))();
  }
  if (((-1 < (long)local_108) && ((local_108 & 0x7fffffff00000000) != 0)) && (local_110 != 0)) {
                    /* try { // try from 0035f88c to 0035f88f has its CatchHandler @ 0035f8b0 */
    (**(code **)(*(long *)*local_118 + 0x18))();
  }
  return cVar1 == '\0';
}


