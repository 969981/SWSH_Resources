/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0034f200; name: FUN_0034f200
 */


void FUN_0034f200(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *local_1a0;
  long local_198;
  ulong local_190;
  undefined1 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long lStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [88];
  
  local_1a0 = *(undefined8 **)(param_3 + 0x10);
  local_190 = 0;
  local_198 = 0;
                    /* try { // try from 0034f234 to 0034f2bf has its CatchHandler @ 0034f308 */
  FUN_00214280(auStack_150);
  local_158 = 0;
  uStack_160 = 0;
  local_188 = (undefined1 *)&local_1a0;
  uStack_180 = param_2;
  local_178 = param_1;
  lStack_170 = param_3;
  local_168 = param_4;
  FUN_0034f350(&local_188,auStack_138,1);
  FUN_0034f4e0(&local_188,auStack_118,2);
  FUN_0034f670(&local_188,auStack_f8,3);
  FUN_0034f800(&local_188,auStack_d8,4);
  FUN_0034fa70(&local_188,auStack_b8,5);
  FUN_0034fc90(&local_188,auStack_98,6);
  if (((-1 < (long)local_190) && ((local_190 & 0x7fffffff00000000) != 0)) && (local_198 != 0)) {
                    /* try { // try from 0034f2e8 to 0034f2eb has its CatchHandler @ 0034f304 */
    (**(code **)(*(long *)*local_1a0 + 0x18))();
  }
  return;
}


