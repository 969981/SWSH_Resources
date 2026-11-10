/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcf110; name: FUN_00dcf110
 */


void FUN_00dcf110(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xa98) != -1) {
    uVar1 = *(undefined8 *)PTR_DAT_0271e8d0;
    if (*(long *)(param_1 + 0x238) != 0) {
      FUN_01015160(uVar1,param_1 + 0x230);
    }
    if (*(long *)(param_1 + 0x458) != 0) {
      FUN_00dcf1b0(uVar1,param_1 + 0x450,*(undefined4 *)(param_1 + 0xa98));
    }
    if (*(long *)(param_1 + 0x8b8) != 0) {
      FUN_01015690(uVar1,param_1 + 0x8b0,*(undefined4 *)(param_1 + 0xa98));
    }
    if (*(long *)(param_1 + 0x698) != 0) {
      FUN_01015bc0(uVar1,param_1 + 0x690,*(undefined4 *)(param_1 + 0xa98));
      return;
    }
  }
  return;
}


