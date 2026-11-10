/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc6d90; name: FUN_00dc6d90
 */


undefined8 FUN_00dc6d90(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00db5e90();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x3d8) != 0) && (*(char *)(*(long *)(param_1 + 0x3d8) + 0x170) == '\0'))
  {
    return 0;
  }
  if ((*(long **)(param_1 + 0x618) == (long *)0x0) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x618) + 0x40))(), (uVar1 & 1) != 0)) {
    return 1;
  }
  return 0;
}


