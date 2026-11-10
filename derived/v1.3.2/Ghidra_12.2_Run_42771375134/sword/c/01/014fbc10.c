/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fbc10; name: FUN_014fbc10
 */


undefined8 FUN_014fbc10(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  while (((*(char *)(param_1 + 0x3f8) != '\0' ||
          (*(int *)(param_2 + 0x1c) != *(int *)(param_1 + 0x24c))) ||
         (*(long *)(param_2 + 0x1a8) != *(long *)(param_1 + 0x3d8)))) {
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x1d0;
    if (299 < uVar1) {
      return 0;
    }
  }
  return 1;
}


