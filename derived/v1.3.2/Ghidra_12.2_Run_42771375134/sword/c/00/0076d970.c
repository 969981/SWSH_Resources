/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076d970; name: FUN_0076d970
 */


int FUN_0076d970(long *param_1,long *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  
  lVar11 = *param_1;
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    lVar3 = lVar11 + *(int *)(lVar11 + 0x10);
  }
  lVar3 = lVar3 + (int)param_1[8];
  uVar1 = *(uint *)(lVar11 + 0x24);
  iVar12 = 0;
  if (*(short *)(lVar11 + 10) != 0) {
    iVar12 = (int)(*(int *)(lVar11 + 0x28) - uVar1) / (int)*(short *)(lVar11 + 10);
  }
  if ((param_2 != (long *)0x0) && (pbVar6 = (byte *)*param_2, pbVar6 != (byte *)0x0)) {
    if (param_3 == -1) {
      lVar5 = 0;
      do {
        uVar8 = (uint)*pbVar6;
        if (*pbVar6 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            pbVar6 = pbVar6 + 1;
            uVar7 = uVar7 * 0x83 ^ uVar8;
            uVar8 = (uint)*pbVar6;
          } while (uVar8 != 0);
        }
        *(uint *)(lVar3 + lVar5 * 4) = uVar7;
        lVar5 = lVar5 + 1;
        pbVar6 = (byte *)param_2[lVar5 * 2];
      } while (pbVar6 != (byte *)0x0);
    }
    else {
      lVar5 = 0;
      do {
        if (param_3 <= lVar5) break;
        uVar8 = (uint)*pbVar6;
        if (*pbVar6 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            pbVar6 = pbVar6 + 1;
            uVar7 = uVar7 * 0x83 ^ uVar8;
            uVar8 = (uint)*pbVar6;
          } while (uVar8 != 0);
        }
        *(uint *)(lVar3 + lVar5 * 4) = uVar7;
        lVar5 = lVar5 + 1;
        pbVar6 = (byte *)param_2[lVar5 * 2];
      } while (pbVar6 != (byte *)0x0);
    }
  }
  if (0 < iVar12) {
    plVar13 = (long *)(lVar11 + (ulong)uVar1);
    if (param_2 != (long *)0x0) {
      iVar4 = 0;
      iVar2 = 0;
LAB_0076da8c:
      if (*plVar13 == 0) {
        if (*param_2 != 0) {
          if (param_3 == -1) {
            lVar5 = 0;
            plVar9 = param_2 + 2;
            do {
              if ((int)plVar13[1] == *(int *)(lVar3 + lVar5 * 4)) goto LAB_0076daf8;
              lVar10 = *plVar9;
              lVar5 = lVar5 + 1;
              plVar9 = plVar9 + 2;
            } while (lVar10 != 0);
          }
          else {
            lVar5 = 0;
            plVar9 = param_2 + 2;
            do {
              if (param_3 <= lVar5) break;
              if ((int)plVar13[1] == *(int *)(lVar3 + lVar5 * 4)) goto LAB_0076daf8;
              lVar10 = *plVar9;
              lVar5 = lVar5 + 1;
              plVar9 = plVar9 + 2;
            } while (lVar10 != 0);
          }
        }
        goto LAB_0076db0c;
      }
      goto LAB_0076db10;
    }
    iVar2 = 0;
    do {
      while (*plVar13 != 0) {
        plVar13 = (long *)((long)plVar13 + (long)*(short *)(lVar11 + 10));
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) goto LAB_0076db74;
      }
      printf("\nError NotFound [0x%08x]\n",*(uint *)(plVar13 + 1));
      iVar2 = 0x13;
      plVar13 = (long *)((long)plVar13 + (long)*(short *)(lVar11 + 10));
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
LAB_0076db74:
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x1000;
  return 0;
LAB_0076daf8:
  if (param_2[lVar5 * 2 + 1] == 0) {
LAB_0076db0c:
    iVar2 = 0x13;
  }
  else {
    *plVar13 = param_2[lVar5 * 2 + 1];
  }
LAB_0076db10:
  iVar4 = iVar4 + 1;
  plVar13 = (long *)((long)plVar13 + (long)*(short *)(lVar11 + 10));
  if (iVar4 == iVar12) goto LAB_0076db74;
  goto LAB_0076da8c;
}


