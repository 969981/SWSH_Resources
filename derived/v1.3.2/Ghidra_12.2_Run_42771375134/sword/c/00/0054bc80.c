/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054bc80; name: FUN_0054bc80
 */


int FUN_0054bc80(long param_1,long param_2,int param_3,uint param_4,ulong param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  size_t *psVar7;
  size_t *__s;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  size_t __n;
  long lVar17;
  int iVar18;
  long *plVar19;
  int local_84;
  char acStack_78 [16];
  long *local_68;
  
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713be8 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",0x19b4
                );
    FUN_00517ae0("CTinyEffect::CreateGlobalParameter():\nstrName: %s\neType: %d\nnElements: %d\n",
                 *(undefined8 *)(param_2 + 8),param_3,param_4);
  }
  if ((param_5 & 1) == 0) {
    local_84 = -1;
  }
  else {
    local_84 = FUN_0054b280(param_1,*(undefined8 *)(param_2 + 8),0);
    if (-1 < local_84) {
      return local_84;
    }
  }
  puVar4 = PTR_PTR_02713988;
  uVar3 = param_4;
  if (param_4 == 0) {
    uVar3 = 1;
  }
  uVar2 = param_4;
  if ((int)param_4 < 1) {
    uVar2 = uVar3;
  }
  lVar15 = *(long *)(param_1 + 0x330) - *(long *)(param_1 + 0x328);
  lVar17 = lVar15 >> 3;
  uVar12 = lVar17 + (int)uVar2;
  if ((ulong)(*(long *)(param_1 + 0x338) - *(long *)(param_1 + 0x328) >> 3) < uVar12) {
    lVar16 = uVar12 * 8;
    lVar5 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,lVar16,"../src/GPU/GPUMemoryAllocator.h",
                         0x1b8,0);
    puVar8 = *(undefined8 **)(param_1 + 0x328);
    puVar11 = *(undefined8 **)(param_1 + 0x330);
    puVar1 = (undefined8 *)(lVar5 + lVar17 * 8);
    lVar16 = lVar5 + lVar16;
    if (puVar11 == puVar8) {
      *(undefined8 **)(param_1 + 0x328) = puVar1;
      *(undefined8 **)(param_1 + 0x330) = puVar1;
      *(long *)(param_1 + 0x338) = lVar16;
    }
    else {
      uVar12 = (long)puVar11 + (-8 - (long)puVar8);
      uVar3 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
      puVar13 = puVar1;
      if ((uVar3 & 3) != 0) {
        lVar17 = -((ulong)uVar3 & 3);
        do {
          puVar11 = puVar11 + -1;
          lVar17 = lVar17 + 1;
          puVar13 = puVar13 + -1;
          *puVar13 = *puVar11;
        } while (lVar17 != 0);
      }
      if (0x17 < uVar12) {
        puVar13 = puVar13 + -2;
        do {
          puVar13[1] = puVar11[-1];
          *puVar13 = puVar11[-2];
          puVar13[-1] = puVar11[-3];
          puVar11 = puVar11 + -4;
          puVar13[-2] = *puVar11;
          puVar13 = puVar13 + -4;
        } while (puVar8 != puVar11);
      }
      puVar8 = *(undefined8 **)(param_1 + 0x328);
      *(ulong *)(param_1 + 0x328) = lVar5 + ((lVar15 + -8) - (uVar12 & 0xfffffffffffffff8));
      *(undefined8 **)(param_1 + 0x330) = puVar1;
      *(long *)(param_1 + 0x338) = lVar16;
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_005b9b10(*(undefined8 *)puVar4);
    }
  }
  if (0 < (int)uVar2) {
    uVar3 = param_3 - 1;
    uVar12 = 0;
    plVar19 = (long *)0x0;
    uVar14 = uVar2;
    do {
      plVar6 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x50,
                                    "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",
                                    0x19e7,0);
      *plVar6 = param_1;
      FUN_00550fe0(plVar6 + 1,&DAT_01d38550);
      *(undefined1 *)(plVar6 + 3) = 0;
      plVar6[7] = 0;
      FUN_00550f60(plVar6 + 6);
      *(undefined2 *)(plVar6 + 8) = 0;
      plVar6[9] = 0;
      *(undefined4 *)((long)plVar6 + 0x1c) = 0;
      iVar18 = (int)uVar12;
      local_68 = plVar6;
      if (*(undefined8 **)(param_1 + 0x330) == *(undefined8 **)(param_1 + 0x338)) {
        FUN_00550880((long *)(param_1 + 0x328),&local_68);
        if (iVar18 == 0) goto LAB_0054bf64;
LAB_0054bf20:
        *(uint *)((long)local_68 + 0x2c) = uVar14;
        *(int *)((long)local_68 + 0x1c) = param_3;
        if (uVar3 < 4) goto LAB_0054bf38;
LAB_0054bf9c:
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        **(undefined8 **)(param_1 + 0x330) = plVar6;
        *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + 8;
        if (iVar18 != 0) goto LAB_0054bf20;
LAB_0054bf64:
        *(uint *)((long)local_68 + 0x2c) = uVar2;
        local_84 = (int)((ulong)(*(long *)(param_1 + 0x330) - *(long *)(param_1 + 0x328)) >> 3) + -1
        ;
        *(int *)((long)local_68 + 0x1c) = param_3;
        plVar19 = local_68;
        if (3 < uVar3) goto LAB_0054bf9c;
LAB_0054bf38:
        uVar9 = *(undefined4 *)(&DAT_01d4ae70 + (long)(int)uVar3 * 4);
        uVar10 = *(undefined4 *)(&DAT_01d49f90 + (long)(int)uVar3 * 4);
      }
      *(undefined4 *)(local_68 + 4) = uVar9;
      *(undefined4 *)((long)local_68 + 0x24) = uVar9;
      *(undefined4 *)(local_68 + 5) = uVar10;
      FUN_00551670(local_68 + 1,param_2);
      FUN_00551670(local_68 + 6,param_2);
      *(bool *)((long)local_68 + 0x41) = 0 < (int)param_4;
      if (0 < (int)param_4) {
        sprintf(acStack_78,"[%d]",uVar12);
        FUN_00551930(local_68 + 6,acStack_78);
      }
      if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713be8 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                     0x1a10);
        FUN_00517ae0("\nm_strName       : %s\nm_strElementName: %s\n",local_68[2],local_68[7]);
      }
      if (iVar18 == 0) {
        *(undefined1 *)(local_68 + 8) = 1;
        __n = (long)(int)local_68[4] * (long)(int)uVar2;
        psVar7 = (size_t *)
                 FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,__n + 8,
                              "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",0x1a1e,0)
        ;
        __s = psVar7;
        if (psVar7 != (size_t *)0x0) {
          __s = psVar7 + 1;
          *psVar7 = __n;
        }
        local_68[9] = (long)__s;
                    /* WARNING: Subroutine does not return */
        memset(__s,0,__n);
      }
      *(undefined1 *)(local_68 + 8) = 0;
      local_68[9] = plVar19[9] + (long)(int)local_68[4] * (long)iVar18;
      uVar12 = (ulong)(iVar18 + 1U);
      uVar14 = uVar14 - 1;
    } while (iVar18 + 1U != uVar2);
  }
  return local_84;
}


