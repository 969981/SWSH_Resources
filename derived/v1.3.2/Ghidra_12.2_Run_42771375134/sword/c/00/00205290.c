/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00205290; name: FUN_00205290
 */


void FUN_00205290(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  
  lVar1 = param_1 + 0x50;
  uVar5 = FUN_003f8ae0(lVar1);
  lVar6 = FUN_003f8b10(lVar1);
  if ((uVar5 & 0xffff) != 0) {
    uVar10 = 0;
    do {
      lVar7 = (**(code **)*param_2)(param_2,1,*(undefined2 *)(lVar6 + uVar10 * 2));
      FUN_003f8db0(lVar1,uVar10 & 0xffffffff,*(undefined4 *)(lVar7 + 0x48));
      uVar10 = uVar10 + 1;
    } while ((uVar5 & 0xffff) != uVar10);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar8 = (**(code **)*param_2)(param_2,0x80000000);
    *(undefined8 *)(param_1 + 0x28) = uVar8;
  }
  FUN_003f8df0(lVar1,param_2);
  piVar9 = (int *)(param_1 + 0x98);
  iVar2 = *piVar9;
  if (iVar2 == 6) {
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0x40) + 0x38);
    }
    lVar6 = *(long *)(piVar9 + 2);
  }
  else if (iVar2 == 5) {
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0x40) + 0x38);
    }
    lVar6 = *(long *)(piVar9 + 10);
  }
  else {
    if (iVar2 != 4) goto LAB_002053ac;
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0x40) + 0x38);
    }
    lVar6 = *(long *)(piVar9 + 8);
  }
  if (lVar6 != 0) {
    FUN_003ff470(lVar6 + 0x18);
  }
LAB_002053ac:
  if ((*(byte *)(param_1 + 0x38) >> 1 & 1) == 0) {
    uVar4 = FUN_003f8ae0(lVar1);
    plVar3 = (long *)PTR_DAT_02711040;
  }
  else {
    uVar4 = *(ushort *)(*(long *)(param_1 + 0x40) + 0x8c);
    plVar3 = (long *)PTR_DAT_02711040;
  }
  PTR_DAT_02711040 = (undefined *)plVar3;
  if (uVar4 != 0) {
    uVar10 = 0;
    do {
      lVar6 = *plVar3;
      if ((*(byte *)(param_1 + 0x38) >> 1 & 1) == 0) {
        lVar7 = FUN_003f8b10(lVar1);
      }
      else {
        lVar7 = *(long *)(param_1 + 0x40);
        if (*(short *)(lVar7 + 0x8c) == 1) {
          lVar7 = lVar7 + 0x88;
        }
        else {
          lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x2020) + (ulong)*(uint *)(lVar7 + 0x88) * 2
          ;
        }
      }
      FUN_003ff470(*(long *)(*(long *)(lVar6 + 0x50) + (ulong)*(ushort *)(lVar7 + uVar10 * 2) * 8) +
                   0x20);
      uVar10 = uVar10 + 1;
    } while (uVar4 != uVar10);
  }
  return;
}


