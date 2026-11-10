/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776c70; name: FUN_00776c70
 */


ulong FUN_00776c70(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar1 = FUN_00776cc0(), (int)uVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0xd0))
              (*(long **)(param_1 + 0x80),uVar1 & 0xffffffff,0,4);
    uVar1 = 1;
  }
  return uVar1;
}


