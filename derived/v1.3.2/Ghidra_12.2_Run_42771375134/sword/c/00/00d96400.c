/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d96400; name: FUN_00d96400
 */


bool FUN_00d96400(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x5d0) != 1) {
    return *(int *)(param_1 + 0x60c) <= *(int *)(param_1 + 0x608);
  }
  if (*(int *)(param_1 + 0x5d4) == 3) {
    iVar1 = *(int *)(param_1 + 0x5e8);
    if ((((iVar1 != -1) &&
         (uVar2 = FUN_00786ee0(*(undefined8 *)(param_1 + 0x5c8),iVar1), (uVar2 & 1) != 0)) &&
        (uVar2 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),iVar1), (uVar2 & 1) != 0)) &&
       (uVar2 = FUN_00787320(*(undefined8 *)(param_1 + 0x5c8),iVar1), (uVar2 & 1) == 0)) {
      return false;
    }
  }
  else if (((*(int *)(param_1 + 0x5d4) == 2) && (iVar1 = *(int *)(param_1 + 0x5dc), iVar1 != -1)) &&
          ((uVar2 = FUN_00786ee0(*(undefined8 *)(param_1 + 0x5c8),iVar1), (uVar2 & 1) != 0 &&
           ((uVar2 = FUN_00787110(*(undefined8 *)(param_1 + 0x5c8),iVar1), (uVar2 & 1) != 0 &&
            (uVar2 = FUN_00787320(*(undefined8 *)(param_1 + 0x5c8),iVar1), (uVar2 & 1) == 0)))))) {
    return false;
  }
  return true;
}


