/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00661a20; name: FUN_00661a20
 */


undefined8 FUN_00661a20(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = (long)*(int *)(param_1 + 0x230) * (long)*(int *)(param_1 + 0x22c);
  if (*(ulong *)(param_1 + 0x248) == uVar5) {
LAB_00661a88:
    if (0 < (int)uVar5) {
      lVar6 = 0;
      lVar7 = 0;
      do {
        FUN_0065cc10(*(long *)(param_1 + 0x260) + lVar6,*(undefined8 *)(param_1 + 0x28));
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x118;
      } while (lVar7 < *(int *)(param_1 + 0x248));
    }
    iVar3 = *(int *)(param_1 + 0x230);
  }
  else {
    if ((uVar5 < *(ulong *)(param_1 + 0x250)) ||
       (uVar1 = FUN_006629f0(param_1 + 0x238,uVar5,1), (uVar1 & 1) != 0)) {
      *(ulong *)(param_1 + 0x248) = uVar5;
      if ((int)uVar5 != 0) {
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x260);
        *(ulong *)(param_1 + 0x270) = *(long *)(param_1 + 0x260) + uVar5 * 0x118;
        goto LAB_00661a88;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x248) = 0;
    }
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    iVar3 = *(int *)(param_1 + 0x230);
  }
  if (0 < iVar3) {
    iVar2 = *(int *)(param_1 + 0x22c);
    iVar4 = 0;
    do {
      if (0 < iVar2) {
        iVar3 = 0;
        do {
          FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar3 + iVar4 * iVar2) * 0x118,param_1,
                       iVar3,iVar4);
          iVar2 = *(int *)(param_1 + 0x22c);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
        iVar3 = *(int *)(param_1 + 0x230);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return 1;
}


