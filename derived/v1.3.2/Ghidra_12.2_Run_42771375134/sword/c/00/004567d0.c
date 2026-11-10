/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004567d0; name: FUN_004567d0
 */


undefined8 FUN_004567d0(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  do {
    uVar1 = FUN_004b3780(param_1 + 0x18,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    param_1 = *(long *)(param_1 + 0x80);
  } while (param_1 != 0);
  return 0;
}


