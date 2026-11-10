/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9b90; name: FUN_008f9b90
 */


void FUN_008f9b90(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if ((*(int *)(param_1 + 0x16c) == 8) || ((param_4 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x16c) = param_2;
    *(undefined4 *)(param_1 + 0x170) = param_3;
    if (*(long *)(param_1 + 0x758) != 0) {
      FUN_009caee0(*(long *)(param_1 + 0x758));
      return;
    }
  }
  return;
}


