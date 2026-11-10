/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b68f0; name: FUN_012b68f0
 */


void FUN_012b68f0(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  if (2 < param_2) {
    if ((param_2 == 10) && (uVar2 = FUN_0087d3e0(*(undefined8 *)(param_1 + 0x58)), 0x1e < uVar2)) {
      return;
    }
    goto LAB_012b6a1c;
  }
  cVar1 = FUN_00878ac0(*(undefined8 *)(param_1 + 0x58));
  if (cVar1 == -1) {
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
    return;
  }
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  uVar2 = FUN_0087a5f0(*(undefined8 *)(param_1 + 0x58));
  if (uVar2 < 10) {
    lVar4 = 0;
LAB_012b69f0:
    iVar3 = (&DAT_02168c14)[lVar4 * 2];
  }
  else {
    if (uVar2 < 0x14) {
      lVar4 = 1;
      goto LAB_012b69f0;
    }
    if (uVar2 < 0x1e) {
      lVar4 = 2;
      goto LAB_012b69f0;
    }
    if (uVar2 < 0x28) {
      lVar4 = 3;
      goto LAB_012b69f0;
    }
    if (uVar2 < 0x32) {
      lVar4 = 4;
      goto LAB_012b69f0;
    }
    if (uVar2 < 0x3c) {
      lVar4 = 5;
      goto LAB_012b69f0;
    }
    if (uVar2 < 0x65) {
      lVar4 = 6;
      goto LAB_012b69f0;
    }
    iVar3 = 0;
  }
  uVar2 = *(int *)(param_1 + 0x124) + iVar3;
  if (0x19063f < uVar2) {
    uVar2 = 0x190640;
  }
  *(uint *)(param_1 + 0x124) = uVar2;
LAB_012b6a1c:
  lVar4 = (long)(int)param_2 * 0xc;
  uVar2 = *(uint *)(&DAT_02168af0 + lVar4);
  iVar3 = *(int *)(&DAT_02168af4 + lVar4);
  FUN_012b66a0(param_1,*(undefined4 *)(&DAT_02168aec + lVar4));
  if (uVar2 != 0 && *(char *)(param_1 + 0x54) == '\0') {
    if ((int)uVar2 < 1) {
      FUN_0087d5a0(*(undefined8 *)(param_1 + 0x58),-uVar2 & 0xff);
    }
    else {
      FUN_0087d560(*(undefined8 *)(param_1 + 0x58),uVar2 & 0xff);
    }
  }
  if (iVar3 == 0) {
    return;
  }
  if (iVar3 < 1) {
    FUN_00878b30(*(undefined8 *)(param_1 + 0x58),-iVar3);
    return;
  }
  FUN_00878af0(*(undefined8 *)(param_1 + 0x58),iVar3);
  return;
}


