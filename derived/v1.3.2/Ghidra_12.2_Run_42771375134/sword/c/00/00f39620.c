/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f39620; name: FUN_00f39620
 */


/* WARNING: Removing unreachable block (ram,0x00f397a8) */

int FUN_00f39620(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long local_90 [16];
  
  plVar9 = *(long **)(param_1 + 0x38);
  plVar1 = (long *)(param_1 + 0x40);
  if (plVar9 == plVar1) {
    return 0;
  }
  iVar4 = 0;
  plVar7 = plVar9;
  do {
    while( true ) {
      if (plVar7[4] == *param_2) goto LAB_00f396b8;
      iVar4 = iVar4 + 1;
      plVar11 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) break;
      do {
        plVar7 = plVar11;
        plVar11 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
LAB_00f3969c:
      if (plVar7 == plVar1) goto LAB_00f396b4;
    }
    plVar11 = plVar7 + 2;
    plVar12 = (long *)*plVar11;
    if ((long *)*plVar12 != plVar7) {
      do {
        lVar10 = *plVar11;
        plVar11 = (long *)(lVar10 + 0x10);
        plVar7 = (long *)*plVar11;
      } while (*plVar7 != lVar10);
      goto LAB_00f3969c;
    }
    plVar7 = plVar12;
  } while (plVar12 != plVar1);
LAB_00f396b4:
  iVar4 = -1;
LAB_00f396b8:
  iVar5 = 0;
  do {
    if (plVar9[4] == *param_3) {
      iVar6 = 0;
      if ((iVar4 != -1) && (iVar5 != -1)) {
        local_90[0xe] = 0;
        local_90[0xf] = 0;
        local_90[0xc] = 0;
        local_90[0xd] = 0;
        local_90[10] = 0;
        local_90[0xb] = 0;
        local_90[8] = 0;
        local_90[9] = 0;
        local_90[6] = 0;
        local_90[7] = 0;
        local_90[4] = 0;
        local_90[5] = 0;
        local_90[2] = 0;
        local_90[3] = 0;
        local_90[0] = 0;
        local_90[1] = 0;
        uVar3 = FUN_00f37770();
        if (uVar3 == 0) {
          iVar6 = 0;
        }
        else {
          if (uVar3 == 1) {
            lVar8 = 0;
            iVar6 = 0;
          }
          else {
            iVar6 = 0;
            lVar10 = 0;
            do {
              lVar8 = lVar10 + 2;
              iVar6 = *(int *)(local_90[lVar10 + 1] + 0x78) +
                      *(int *)(local_90[lVar10] + 0x78) + iVar6;
              lVar10 = lVar8;
            } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar8);
            if ((uVar3 & 1) == 0) {
              return iVar6;
            }
          }
          iVar6 = *(int *)(local_90[lVar8] + 0x78) + iVar6;
        }
      }
      return iVar6;
    }
    iVar5 = iVar5 + 1;
    plVar7 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      plVar7 = plVar9 + 2;
      bVar2 = *(long **)*plVar7 != plVar9;
      plVar9 = (long *)*plVar7;
      if (bVar2) {
        do {
          lVar10 = *plVar7;
          plVar7 = (long *)(lVar10 + 0x10);
          plVar9 = (long *)*plVar7;
        } while (*(long *)*plVar7 != lVar10);
      }
    }
    else {
      do {
        plVar9 = plVar7;
        plVar7 = (long *)*plVar9;
      } while (plVar7 != (long *)0x0);
    }
  } while (plVar9 != plVar1);
  return 0;
}


