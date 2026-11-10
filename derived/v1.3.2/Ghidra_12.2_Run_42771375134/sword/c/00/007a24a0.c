/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a24a0; name: FUN_007a24a0
 */


void FUN_007a24a0(long param_1,undefined8 param_2,byte param_3)

{
  byte *pbVar1;
  undefined8 local_18;
  
  local_18 = param_2;
  pbVar1 = (byte *)FUN_007a24d0(param_1 + 0x1c0,&local_18);
  *pbVar1 = param_3 & 1;
  return;
}


