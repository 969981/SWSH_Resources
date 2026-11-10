/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01050450; name: FUN_01050450
 */


void FUN_01050450(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong local_28;
  
  if (param_1 != 0) {
    uVar1 = FUN_0069d0c0();
    if ((uVar1 & 1) != 0) {
      local_28 = FUN_0069d1d0(param_1,param_2);
      if ((local_28 & 0xff) != 0) {
        FUN_0069d200(param_1,&local_28,param_3 & 1);
      }
    }
  }
  return;
}


