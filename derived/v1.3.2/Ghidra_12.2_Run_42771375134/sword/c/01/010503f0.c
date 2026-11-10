/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010503f0; name: FUN_010503f0
 */


void FUN_010503f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  
  if ((param_2 != 0) && (uVar1 = FUN_0069d0c0(), (uVar1 & 1) != 0)) {
    local_28 = FUN_0069d160(param_2,param_3);
    if ((local_28 & 0xff) != 0) {
      FUN_0069d190(param_1,param_2,&local_28);
    }
  }
  return;
}


