/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054c420; name: FUN_0054c420
 */


undefined4 FUN_0054c420(long param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  int local_a0 [2];
  char *local_98;
  int local_90 [2];
  char *local_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  plVar11 = *(long **)(param_1 + 0x80);
  local_68 = 0;
  FUN_00550f60(auStack_70);
  local_78 = 0;
  FUN_00550f60(auStack_80);
  local_88 = (char *)0x0;
  FUN_00550f60(local_90);
  local_98 = (char *)0x0;
  FUN_00550f60(local_a0);
  FUN_00551290(auStack_b0,param_2 + 8);
  FUN_005519b0(auStack_c0,auStack_b0,&DAT_01d47193,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff
               ,0xffffffff);
  FUN_00551670(auStack_70,auStack_c0);
  FUN_00551380(auStack_c0);
  FUN_005519b0(auStack_c0,auStack_b0,&DAT_01d47193,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff
               ,0xffffffff);
  FUN_00551670(auStack_80,auStack_c0);
  FUN_00551380(auStack_c0);
  FUN_00551290(auStack_c0,param_2 + 0x20);
  FUN_005519b0(auStack_d0,auStack_c0,&DAT_01d47193,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff
               ,0xffffffff);
  FUN_00551670(local_90,auStack_d0);
  FUN_00551380(auStack_d0);
  FUN_005519b0(auStack_d0,auStack_c0,&DAT_01d47193,&DAT_01ce7c90,&DAT_01d47198,0xffffffff,0xffffffff
               ,0xffffffff);
  FUN_00551670(local_a0,auStack_d0);
  FUN_00551380(auStack_d0);
  FUN_00551380(auStack_c0);
  FUN_00551380(auStack_b0);
  if (*(long *)(param_1 + 0x348) != 0) {
    if (*(int *)(param_1 + 0x368) != 6) {
      lVar12 = 0;
      do {
        if (local_90[0] <= lVar12) {
          uVar5 = atoi(local_88);
          uVar9 = (ulong)uVar5;
          goto LAB_0054c684;
        }
        pbVar1 = (byte *)(local_88 + lVar12);
      } while ((0x2f < *pbVar1) && (lVar12 = lVar12 + 1, *pbVar1 < 0x3a));
      if (0 < *(int *)(param_1 + 0x350)) {
        lVar12 = 0;
        uVar9 = 0;
        do {
          iVar3 = FUN_00552890(local_90,*(long *)(param_1 + 0x370) + lVar12);
          if (iVar3 != 0) goto LAB_0054c684;
          uVar9 = uVar9 + 1;
          lVar12 = lVar12 + 0x100;
        } while ((long)uVar9 < (long)*(int *)(param_1 + 0x350));
      }
      goto LAB_0054c6b4;
    }
    iVar3 = 0;
    lVar12 = 0;
    goto LAB_0054c764;
  }
  iVar3 = 0;
  plVar11 = (long *)0x0;
  plVar8 = (long *)0x0;
  plVar7 = (long *)0x0;
  iVar4 = 0;
  lVar13 = 0;
  lVar12 = 0;
  goto LAB_0054c5e8;
LAB_0054c684:
  if ((int)uVar9 < 0) {
LAB_0054c6b4:
    iVar3 = 0;
    lVar12 = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x370) + (long)(int)uVar9 * 0x100;
    uVar5 = atoi((char *)(lVar13 + 0xe0));
    lVar12 = *(long *)(param_1 + 0x378) + (ulong)uVar5;
    iVar3 = atoi((char *)(lVar13 + 0xf0));
  }
  lVar13 = 0;
  do {
    if (local_a0[0] <= lVar13) {
      uVar5 = atoi(local_98);
      uVar9 = (ulong)uVar5;
      goto LAB_0054c730;
    }
    pbVar1 = (byte *)(local_98 + lVar13);
  } while ((0x2f < *pbVar1) && (lVar13 = lVar13 + 1, *pbVar1 < 0x3a));
  if (0 < *(int *)(param_1 + 0x350)) {
    lVar13 = 0;
    uVar9 = 0;
    do {
      iVar4 = FUN_00552890(local_a0,*(long *)(param_1 + 0x370) + lVar13);
      if (iVar4 != 0) goto LAB_0054c730;
      uVar9 = uVar9 + 1;
      lVar13 = lVar13 + 0x100;
    } while ((long)uVar9 < (long)*(int *)(param_1 + 0x350));
  }
LAB_0054c764:
  iVar4 = 0;
  lVar13 = 0;
  goto LAB_0054c768;
LAB_0054c730:
  if ((int)uVar9 < 0) goto LAB_0054c764;
  lVar2 = *(long *)(param_1 + 0x370) + (long)(int)uVar9 * 0x100;
  uVar5 = atoi((char *)(lVar2 + 0xe0));
  lVar13 = *(long *)(param_1 + 0x378) + (ulong)uVar5;
  iVar4 = atoi((char *)(lVar2 + 0xf0));
LAB_0054c768:
  plVar7 = (long *)(**(code **)(*plVar11 + 0x150))(plVar11,1,0,0,0);
  if (plVar7 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,iVar3,lVar12,1);
  }
  plVar8 = (long *)(**(code **)(*plVar11 + 0x150))(plVar11,2,0,0,0);
  if (plVar8 == (long *)0x0) {
    uVar6 = 0;
LAB_0054c8cc:
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if ((((uVar5 & 1) == 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0))
    {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: ",
                   0x13ea);
      FUN_00517ae0("CTinyEffect::CreateProgram(): pSiGfxDevice->CreateShader() failed: \"%s\".\n",
                   local_68);
    }
    if ((uVar6 & 1) == 0) {
      uVar10 = 0xffffffff;
      if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0054c984;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: ",
                   0x13ef);
      FUN_00517ae0("CTinyEffect::CreateProgram(): pSiGfxDevice->CreateShader() failed: \"%s\".\n",
                   local_78);
    }
  }
  else {
    uVar6 = (**(code **)(*plVar8 + 0x90))(plVar8,iVar4,lVar13,1);
    if ((uVar5 & uVar6 & 1) == 0) goto LAB_0054c8cc;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x168))(plVar11,0,0,0);
    if (plVar11 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar11 + 0x90))(plVar11,plVar7,plVar8,0,0,0);
      if ((uVar9 & 1) != 0) {
LAB_0054c5e8:
        *(long **)(param_2 + 0x30) = plVar7;
        *(long **)(param_2 + 0x38) = plVar8;
        *(long **)(param_2 + 0x40) = plVar11;
        *(long *)(param_2 + 0x58) = lVar12;
        *(long *)(param_2 + 0x60) = lVar13;
        uVar10 = 0xfffffffc;
        if ((plVar7 != (long *)0x0 && plVar8 != (long *)0x0) && plVar11 != (long *)0x0) {
          uVar10 = 0;
        }
        *(int *)(param_2 + 0x4c) = iVar3;
        *(int *)(param_2 + 0x50) = iVar4;
        goto LAB_0054c984;
      }
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    uVar10 = 0xffffffff;
    if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0054c984;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX ERROR: ",
                 0x1408);
    FUN_00517ae0("CTinyEffect::CreateProgram(): pSiGfxShaderProgram->Create() failed.\n");
  }
  uVar10 = 0xffffffff;
LAB_0054c984:
  FUN_00551380(local_a0);
  FUN_00551380(local_90);
  FUN_00551380(auStack_80);
  FUN_00551380(auStack_70);
  return uVar10;
}


