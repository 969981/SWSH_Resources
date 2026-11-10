/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9b330; name: FUN_00d9b330
 */


undefined8 FUN_00d9b330(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x364) == 2) {
    if (*(int *)(param_1 + 0x36c) == -1) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x36c) - *(int *)(param_1 + 0x3a0);
    uVar2 = FUN_00786ee0(*(undefined8 *)(param_1 + 0x358),iVar1);
    if ((((uVar2 & 1) == 0) ||
        (uVar2 = FUN_00787110(*(undefined8 *)(param_1 + 0x358),iVar1), (uVar2 & 1) == 0)) ||
       (uVar2 = FUN_00787320(*(undefined8 *)(param_1 + 0x358),iVar1), (uVar2 & 1) != 0)) {
      FUN_00d9be00(param_1,*(undefined4 *)(param_1 + 0x360));
    }
    if (*(int *)(param_1 + 0x364) != 3) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x364) != 3) {
      return 1;
    }
    if (*(int *)(param_1 + 0x378) == -1) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x378) - *(int *)(param_1 + 0x3a0);
  uVar2 = FUN_00786ee0(*(undefined8 *)(param_1 + 0x358),iVar1);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = FUN_00787110(*(undefined8 *)(param_1 + 0x358),iVar1), (uVar2 & 1) == 0)) ||
     (uVar2 = FUN_00787320(*(undefined8 *)(param_1 + 0x358),iVar1), (uVar2 & 1) != 0)) {
    return 0;
  }
  return 1;
}


