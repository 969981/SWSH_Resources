/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00318a50; name: FUN_00318a50
 */


void FUN_00318a50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *local_170;
  long local_168;
  ulong local_160;
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  local_170 = *(undefined8 **)(param_3 + 0x10);
  local_160 = 0;
  local_168 = 0;
                    /* try { // try from 00318a84 to 00318b0b has its CatchHandler @ 00318b54 */
  FUN_00217860(auStack_120);
  local_128 = 0;
  uStack_130 = 0;
  local_158 = (undefined1 *)&local_170;
  uStack_150 = param_2;
  local_148 = param_1;
  lStack_140 = param_3;
  local_138 = param_4;
  FUN_00326e30(&local_158,auStack_120,0);
  FUN_00327030(&local_158,auStack_100,1);
  FUN_00327230(&local_158,auStack_e0,2);
  FUN_003273d0(&local_158,auStack_a0,4);
  FUN_00327560(&local_158,auStack_80,5);
  FUN_003276f0(&local_158,auStack_60,6);
  if (((-1 < (long)local_160) && ((local_160 & 0x7fffffff00000000) != 0)) && (local_168 != 0)) {
                    /* try { // try from 00318b34 to 00318b37 has its CatchHandler @ 00318b50 */
    (**(code **)(*(long *)*local_170 + 0x18))();
  }
  return;
}


