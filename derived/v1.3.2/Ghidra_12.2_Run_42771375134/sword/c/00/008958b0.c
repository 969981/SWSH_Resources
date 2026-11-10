/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008958b0; name: FUN_008958b0
 */


undefined8 FUN_008958b0(float param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((0.0 < param_1) && (param_1 <= 1.0)) {
    uVar1 = 1;
    *(float *)(param_2 + 0x58) = param_1;
  }
  return uVar1;
}


