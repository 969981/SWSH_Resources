/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010504b0; name: FUN_010504b0
 */


void FUN_010504b0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  
  if ((param_1 != 0) && (uVar1 = FUN_0069d0c0(), (uVar1 & 1) != 0)) {
    local_28 = FUN_0069d250(param_1,param_2);
    if ((local_28 & 0xff) != 0) {
      FUN_0069d260(param_1,&local_28);
    }
  }
  return;
}


