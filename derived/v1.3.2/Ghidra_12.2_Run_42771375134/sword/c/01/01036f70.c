/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01036f70; name: FUN_01036f70
 */


void FUN_01036f70(long param_1)

{
  ulong uVar1;
  undefined8 local_18;
  
  param_1 = param_1 + 0x100;
  uVar1 = FUN_00ffcf70(param_1);
  if ((uVar1 & 1) == 0) {
    FUN_00ffcaf0(param_1,1);
  }
  local_18 = 0xba1856e575f066b0;
  FUN_00ffd010(param_1,&local_18);
  return;
}


