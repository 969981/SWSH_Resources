/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00661b50; name: FUN_00661b50
 */


undefined8 FUN_00661b50(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  lVar4 = (long)*(int *)(param_1 + 0x22c) * (long)*(int *)(param_1 + 0x230);
  uVar6 = lVar4 * 6;
  if (*(ulong *)(param_1 + 0x248) == uVar6) {
LAB_00661bd0:
    if (0 < (int)uVar6) {
      lVar7 = 0;
      lVar4 = 0;
      do {
        FUN_0065cc10(*(long *)(param_1 + 0x260) + lVar7,*(undefined8 *)(param_1 + 0x28));
        lVar4 = lVar4 + 1;
        lVar7 = lVar7 + 0x118;
      } while (lVar4 < *(int *)(param_1 + 0x248));
    }
    iVar9 = *(int *)(param_1 + 0x230);
  }
  else {
    if ((uVar6 < *(ulong *)(param_1 + 0x250)) ||
       (uVar2 = FUN_006629f0(param_1 + 0x238,uVar6,1), (uVar2 & 1) != 0)) {
      *(ulong *)(param_1 + 0x248) = uVar6;
      if ((int)uVar6 != 0) {
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x260);
        *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x260) + lVar4 * 0x690;
        goto LAB_00661bd0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x248) = 0;
    }
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    iVar9 = *(int *)(param_1 + 0x230);
  }
  if (0 < iVar9) {
    iVar3 = *(int *)(param_1 + 0x22c);
    iVar10 = 0;
    iVar9 = 0;
    iVar12 = 1;
    iVar13 = 2;
    iVar14 = 3;
    iVar5 = 4;
    iVar11 = 5;
    do {
      uVar1 = iVar9 * 6;
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar8 + iVar10 * iVar3) * 0x118,param_1,
                       iVar8,uVar1);
          iVar3 = *(int *)(param_1 + 0x22c);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar3);
        if (0 < iVar3) {
          iVar8 = 0;
          do {
            FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar8 + iVar12 * iVar3) * 0x118,param_1
                         ,iVar8,uVar1 | 1);
            iVar3 = *(int *)(param_1 + 0x22c);
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar3);
          if (0 < iVar3) {
            iVar8 = 0;
            do {
              FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar8 + iVar13 * iVar3) * 0x118,
                           param_1,iVar8,uVar1 + 2);
              iVar3 = *(int *)(param_1 + 0x22c);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar3);
            if (0 < iVar3) {
              iVar8 = 0;
              do {
                FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar8 + iVar14 * iVar3) * 0x118,
                             param_1,iVar8,uVar1 + 3);
                iVar3 = *(int *)(param_1 + 0x22c);
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar3);
              if (0 < iVar3) {
                iVar8 = 0;
                do {
                  FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar8 + iVar5 * iVar3) * 0x118,
                               param_1,iVar8,uVar1 + 4);
                  iVar3 = *(int *)(param_1 + 0x22c);
                  iVar8 = iVar8 + 1;
                } while (iVar8 < iVar3);
              }
            }
          }
        }
      }
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar8 + iVar11 * iVar3) * 0x118,param_1,
                       iVar8,uVar1 + 5);
          iVar3 = *(int *)(param_1 + 0x22c);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar3);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 6;
      iVar12 = iVar12 + 6;
      iVar13 = iVar13 + 6;
      iVar14 = iVar14 + 6;
      iVar11 = iVar11 + 6;
      iVar5 = iVar5 + 6;
    } while (iVar9 < *(int *)(param_1 + 0x230));
  }
  return 1;
}


