/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014dee70; name: FUN_014dee70
 */


void FUN_014dee70(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x68) == 1) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x70),1);
    iVar1 = *(int *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x80),uVar2);
    iVar1 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x90),uVar2);
    iVar1 = *(int *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (iVar1 == 1) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = 1;
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0xa0),uVar2);
    iVar1 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (iVar1 != 1) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return;
  }
  uVar2 = 3;
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar2 = 1;
  }
  FUN_010364c0(*(undefined8 *)(param_1 + 0xb0),uVar2);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}


