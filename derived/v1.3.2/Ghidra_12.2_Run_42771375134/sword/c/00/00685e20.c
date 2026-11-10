/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00685e20; name: FUN_00685e20
 */


void FUN_00685e20(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined1 auStack_28 [8];
  
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (*(ulong *)(param_3 + 0x10) == uVar6) {
LAB_00685e7c:
    iVar1 = *(int *)(param_2 + 0x10);
  }
  else {
    if ((uVar6 < *(ulong *)(param_3 + 0x18)) ||
       (uVar2 = FUN_006870f0(param_3,uVar6,1), (uVar2 & 1) != 0)) {
      *(ulong *)(param_3 + 0x10) = uVar6;
      if (uVar6 != 0) {
        *(long *)(param_3 + 0x30) = *(long *)(param_3 + 0x28);
        *(ulong *)(param_3 + 0x38) = *(long *)(param_3 + 0x28) + uVar6 * 8;
        goto LAB_00685e7c;
      }
    }
    else {
      uVar6 = 0;
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x38) = 0;
    iVar1 = *(int *)(param_2 + 0x10);
  }
  iVar5 = (int)uVar6;
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      lVar4 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar4) =
           *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar4);
    } while (lVar3 < *(int *)(param_2 + 0x10));
    iVar5 = (int)*(undefined8 *)(param_3 + 0x10);
  }
  FUN_006869c0(auStack_28,(long)iVar5,*(undefined8 *)(param_3 + 0x28));
  if (0 < *(int *)(param_3 + 0x10)) {
    lVar3 = 0;
    do {
      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + lVar3 * 8) + 0xc0) = lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_3 + 0x10));
  }
  return;
}


