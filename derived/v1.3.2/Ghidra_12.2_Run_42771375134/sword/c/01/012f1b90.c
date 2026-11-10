/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f1b90; name: FUN_012f1b90
 */


void FUN_012f1b90(long param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *param_2;
  if (*(int *)(param_1 + 0x158) == iVar2) {
    piVar3 = (int *)(param_1 + 0x158);
  }
  else if (*(int *)(param_1 + 0x170) == iVar2) {
    piVar3 = (int *)(param_1 + 0x170);
  }
  else if (*(int *)(param_1 + 0x188) == iVar2) {
    piVar3 = (int *)(param_1 + 0x188);
  }
  else if (*(int *)(param_1 + 0x1a0) == iVar2) {
    piVar3 = (int *)(param_1 + 0x1a0);
  }
  else if (*(int *)(param_1 + 0x1b8) == iVar2) {
    piVar3 = (int *)(param_1 + 0x1b8);
  }
  else if (*(int *)(param_1 + 0x1d0) == iVar2) {
    piVar3 = (int *)(param_1 + 0x1d0);
  }
  else if (*(int *)(param_1 + 0x1e8) == iVar2) {
    piVar3 = (int *)(param_1 + 0x1e8);
  }
  else if (*(int *)(param_1 + 0x200) == iVar2) {
    piVar3 = (int *)(param_1 + 0x200);
  }
  else if (*(int *)(param_1 + 0x218) == iVar2) {
    piVar3 = (int *)(param_1 + 0x218);
  }
  else if (*(int *)(param_1 + 0x230) == iVar2) {
    piVar3 = (int *)(param_1 + 0x230);
  }
  else if (*(int *)(param_1 + 0x248) == iVar2) {
    piVar3 = (int *)(param_1 + 0x248);
  }
  else if (*(int *)(param_1 + 0x260) == iVar2) {
    piVar3 = (int *)(param_1 + 0x260);
  }
  else if (*(int *)(param_1 + 0x278) == iVar2) {
    piVar3 = (int *)(param_1 + 0x278);
  }
  else if (*(int *)(param_1 + 0x290) == iVar2) {
    piVar3 = (int *)(param_1 + 0x290);
  }
  else if (*(int *)(param_1 + 0x2a8) == iVar2) {
    piVar3 = (int *)(param_1 + 0x2a8);
  }
  else if (*(int *)(param_1 + 0x2c0) == iVar2) {
    piVar3 = (int *)(param_1 + 0x2c0);
  }
  else if (*(int *)(param_1 + 0x2d8) == iVar2) {
    piVar3 = (int *)(param_1 + 0x2d8);
  }
  else {
    piVar3 = (int *)(param_1 + 0x2f0);
    if (*piVar3 != iVar2) {
      lVar4 = param_1 + *(long *)(param_1 + 0x308) * 0x18;
      uVar1 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(lVar4 + 0x160) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(lVar4 + 0x168) = uVar5;
      *(undefined8 *)(lVar4 + 0x158) = uVar1;
      *(ulong *)(param_1 + 0x308) = (*(long *)(param_1 + 0x308) + 1U) % 0x12;
      return;
    }
  }
  uVar1 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(piVar3 + 4) = uVar5;
  *(undefined8 *)piVar3 = uVar1;
  return;
}


