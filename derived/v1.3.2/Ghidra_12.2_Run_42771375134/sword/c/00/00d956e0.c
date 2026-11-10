/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d956e0; name: FUN_00d956e0
 */


undefined8 FUN_00d956e0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x5d4) == 2) {
    iVar1 = *(int *)(param_1 + 0x5dc);
    if (iVar1 == -1) {
      return 1;
    }
    uVar3 = FUN_00786ee0(*(undefined8 *)(param_1 + 0x5c8),iVar1);
    if ((((uVar3 & 1) == 0) ||
        (uVar3 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),iVar1), (uVar3 & 1) == 0)) ||
       (uVar3 = FUN_00787320(*(undefined8 *)(param_1 + 0x5c8),iVar1), (uVar3 & 1) != 0)) {
      FUN_00d967d0(param_1,*(undefined4 *)(param_1 + 0x5d0));
    }
    if (*(int *)(param_1 + 0x5d4) != 3) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x5d4) != 3) {
      return 1;
    }
    if (*(int *)(param_1 + 0x5e8) == -1) {
      return 1;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x5e8);
  uVar3 = FUN_00786ee0(*(undefined8 *)(param_1 + 0x5c8),uVar2);
  if ((((uVar3 & 1) == 0) ||
      (uVar3 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),uVar2), (uVar3 & 1) == 0)) ||
     (uVar3 = FUN_00787320(*(undefined8 *)(param_1 + 0x5c8),uVar2), (uVar3 & 1) != 0)) {
    return 0;
  }
  return 1;
}


