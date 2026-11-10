/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006617e0; name: FUN_006617e0
 */


undefined8 FUN_006617e0(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *(int *)(param_1 + 0x22c);
  uVar4 = (long)iVar3 * 6;
  if (*(ulong *)(param_1 + 0x248) == uVar4) {
LAB_00661848:
    if (0 < iVar3) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        FUN_0065cc10(*(long *)(param_1 + 0x260) + lVar5,*(undefined8 *)(param_1 + 0x28));
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x118;
      } while (lVar6 < *(int *)(param_1 + 0x248));
    }
    iVar3 = *(int *)(param_1 + 0x22c);
  }
  else {
    if ((uVar4 < *(ulong *)(param_1 + 0x250)) ||
       (uVar1 = FUN_006629f0(param_1 + 0x238,uVar4,1), (uVar1 & 1) != 0)) {
      *(ulong *)(param_1 + 0x248) = uVar4;
      if (iVar3 != 0) {
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x260);
        *(long *)(param_1 + 0x270) = *(long *)(param_1 + 0x260) + (long)iVar3 * 0x690;
        goto LAB_00661848;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x248) = 0;
    }
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    iVar3 = *(int *)(param_1 + 0x22c);
  }
  if (0 < iVar3) {
    lVar6 = 0;
    iVar3 = 0;
    do {
      FUN_0065d3b0(*(long *)(param_1 + 0x260) + lVar6,param_1,iVar3,0);
      iVar2 = *(int *)(param_1 + 0x22c);
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 0x118;
    } while (iVar3 < iVar2);
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar2 + iVar3) * 0x118,param_1,iVar3,1);
        iVar2 = *(int *)(param_1 + 0x22c);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
      if (0 < iVar2) {
        iVar3 = 0;
        do {
          FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar3 + iVar2 * 2) * 0x118,param_1,iVar3,
                       2);
          iVar2 = *(int *)(param_1 + 0x22c);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
        if (0 < iVar2) {
          iVar3 = 0;
          do {
            FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar3 + iVar2 * 3) * 0x118,param_1,
                         iVar3,3);
            iVar2 = *(int *)(param_1 + 0x22c);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
          if (0 < iVar2) {
            iVar3 = 0;
            do {
              FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar3 + iVar2 * 4) * 0x118,param_1,
                           iVar3,4);
              iVar2 = *(int *)(param_1 + 0x22c);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar2);
            if (0 < iVar2) {
              iVar3 = 0;
              do {
                FUN_0065d3b0(*(long *)(param_1 + 0x260) + (long)(iVar3 + iVar2 * 5) * 0x118,param_1,
                             iVar3,5);
                iVar2 = *(int *)(param_1 + 0x22c);
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar2);
            }
          }
        }
      }
    }
  }
  return 1;
}


