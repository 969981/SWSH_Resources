/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01401170; name: FUN_01401170
 */


void FUN_01401170(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x55c);
  if (iVar1 == 3) {
    FUN_008c8f10(*(undefined8 *)(param_1 + 0x78));
    FUN_008c61d0(*(undefined8 *)(param_1 + 0x78),0);
    FUN_008c7d10(*(undefined8 *)(param_1 + 0x78));
    FUN_013fd010(*(undefined8 *)(param_1 + 0x88),
                 *(int *)(*(long *)(param_1 + 0x78) +
                          (long)*(int *)(*(long *)(param_1 + 0x78) + 0x640) * 4 + 0x64c) != 3);
    FUN_013ff9c0(param_1);
    FUN_01400d40(param_1);
    return;
  }
  if (iVar1 == 2) {
    FUN_014019e0(param_1);
    return;
  }
  if (iVar1 == 1) {
    FUN_01401840(param_1);
    return;
  }
  return;
}


