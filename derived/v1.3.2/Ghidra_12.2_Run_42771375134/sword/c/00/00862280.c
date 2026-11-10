/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00862280; name: FUN_00862280
 */


long * FUN_00862280(long *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  if (param_1 + 1 == param_2) {
LAB_00862334:
    plVar13 = (long *)*param_2;
    plVar10 = param_2;
    if ((long *)*param_1 == param_2) {
LAB_00862454:
      if (plVar13 == (long *)0x0) {
        *param_3 = (long)param_2;
        return param_2;
      }
      *param_3 = (long)plVar10;
      return plVar10 + 1;
    }
    if (plVar13 == (long *)0x0) {
      plVar12 = param_2;
      do {
        plVar10 = (long *)plVar12[2];
        bVar6 = (long *)*plVar10 == plVar12;
        plVar12 = plVar10;
      } while (bVar6);
    }
    else {
      plVar12 = plVar13;
      do {
        plVar10 = plVar12;
        plVar12 = (long *)plVar10[1];
      } while ((long *)plVar10[1] != (long *)0x0);
    }
    bVar4 = *(byte *)(plVar10 + 4);
    bVar5 = *param_5;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(param_5 + 8);
    }
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = plVar10[5];
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 != 0) {
      pvVar9 = (void *)plVar10[6];
      if ((bVar4 & 1) == 0) {
        pvVar9 = (void *)((long)plVar10 + 0x21);
      }
      pbVar8 = *(byte **)(param_5 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar8 = param_5 + 1;
      }
      iVar7 = memcmp(pvVar9,pbVar8,sVar3);
      if (iVar7 != 0) {
        if (iVar7 < 0) goto LAB_00862454;
        goto LAB_00862424;
      }
    }
    if (uVar1 < uVar2) goto LAB_00862454;
    goto LAB_00862424;
  }
  bVar4 = *(byte *)(param_2 + 4);
  bVar5 = *param_5;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = param_2[5];
  }
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(param_5 + 8);
  }
  sVar3 = uVar2;
  if (uVar1 <= uVar2) {
    sVar3 = uVar1;
  }
  if (sVar3 == 0) {
LAB_0086232c:
    if (uVar1 < uVar2) goto LAB_00862334;
    if (sVar3 != 0) {
      pvVar9 = (void *)param_2[6];
      pbVar8 = *(byte **)(param_5 + 0x10);
      if ((bVar4 & 1) == 0) {
        pvVar9 = (void *)((long)param_2 + 0x21);
      }
      if ((bVar5 & 1) == 0) {
        pbVar8 = param_5 + 1;
      }
      goto LAB_00862380;
    }
LAB_00862478:
    if (uVar1 <= uVar2) {
LAB_00862398:
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
  }
  else {
    pbVar8 = *(byte **)(param_5 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar8 = param_5 + 1;
    }
    pvVar9 = (void *)param_2[6];
    if ((bVar4 & 1) == 0) {
      pvVar9 = (void *)((long)param_2 + 0x21);
    }
    iVar7 = memcmp(pbVar8,pvVar9,sVar3);
    if (iVar7 == 0) goto LAB_0086232c;
    if (iVar7 < 0) goto LAB_00862334;
LAB_00862380:
    iVar7 = memcmp(pvVar9,pbVar8,sVar3);
    if (iVar7 == 0) goto LAB_00862478;
    if (-1 < iVar7) goto LAB_00862398;
  }
  plVar10 = (long *)param_2[1];
  if (plVar10 == (long *)0x0) {
    plVar10 = param_2 + 2;
    plVar13 = (long *)*plVar10;
    if ((long *)*plVar13 != param_2) {
      do {
        lVar11 = *plVar10;
        plVar10 = (long *)(lVar11 + 0x10);
        plVar13 = (long *)*plVar10;
      } while (*plVar13 != lVar11);
    }
  }
  else {
    do {
      plVar13 = plVar10;
      plVar10 = (long *)*plVar13;
    } while ((long *)*plVar13 != (long *)0x0);
  }
  if (plVar13 != param_1 + 1) {
    bVar4 = *(byte *)(plVar13 + 4);
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = plVar13[5];
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 != 0) {
      pbVar8 = *(byte **)(param_5 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar8 = param_5 + 1;
      }
      pvVar9 = (void *)plVar13[6];
      if ((bVar4 & 1) == 0) {
        pvVar9 = (void *)((long)plVar13 + 0x21);
      }
      iVar7 = memcmp(pbVar8,pvVar9,sVar3);
      if (iVar7 != 0) {
        if (iVar7 < 0) goto LAB_0086252c;
        goto LAB_00862424;
      }
    }
    if (uVar2 <= uVar1) {
LAB_00862424:
      plVar10 = (long *)FUN_00862020(param_1,param_3,param_5);
      return plVar10;
    }
  }
LAB_0086252c:
  if (param_2[1] == 0) {
    *param_3 = (long)param_2;
    return param_2 + 1;
  }
  *param_3 = (long)plVar13;
  return plVar13;
}


