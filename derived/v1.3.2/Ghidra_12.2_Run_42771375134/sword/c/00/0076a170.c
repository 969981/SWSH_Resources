/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076a170; name: FUN_0076a170
 */


void FUN_0076a170(long param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  int iStack_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined1 local_84;
  undefined4 local_80;
  uint local_74;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  puVar4 = PTR_DAT_02710910;
  *(uint *)(param_1 + 0x54) = param_2;
  *(int *)(param_1 + 0x58) = param_3;
  uVar14 = *(undefined8 *)(*(long *)puVar4 + 0x168);
  iVar6 = FUN_006f82b0(uVar14);
  iVar7 = FUN_006f8330(uVar14);
  puVar4 = PTR_DAT_02710860;
  plVar15 = *(long **)(param_1 + 8);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar8 + 0x80) < 0x10) {
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar15;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x140,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    puVar5 = PTR_DAT_027154f0;
    fVar16 = ((float)(int)param_2 / (float)param_3) / ((float)iVar6 / (float)iVar7);
    FUN_0076a7e0(plVar9,4,0x60,*(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10));
    puVar1 = PTR_DAT_02716098 + 0x50;
    *plVar9 = (long)(PTR_DAT_02716098 + 0x10);
    plVar9[1] = (long)plVar15;
    plVar9[9] = (long)puVar1;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0x140;
    plVar9[4] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (plVar9 != (long *)0x0) {
      (**(code **)(plVar9[9] + 0x10))();
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    plVar15 = plVar9 + 0xb;
    *(long **)(param_1 + 0x60) = plVar9;
    pfVar10 = (float *)thunk_FUN_0199c7e0(plVar15);
    *pfVar10 = -fVar16;
    pfVar10[1] = 1.0;
    pfVar10[2] = 0.0;
    pfVar10[3] = 1.0;
    pfVar10[4] = 0.0;
    pfVar10[5] = 0.0;
    pfVar10[6] = -fVar16;
    pfVar10[7] = -1.0;
    pfVar10[8] = 0.0;
    pfVar10[9] = 1.0;
    pfVar10[10] = 0.0;
    pfVar10[0xb] = 1.0;
    pfVar10[0xc] = fVar16;
    pfVar10[0xd] = 1.0;
    pfVar10[0xe] = 0.0;
    pfVar10[0xf] = 1.0;
    pfVar10[0x10] = 1.0;
    pfVar10[0x11] = 0.0;
    pfVar10[0x12] = fVar16;
    pfVar10[0x13] = -1.0;
    pfVar10[0x14] = 0.0;
    pfVar10[0x15] = 1.0;
    pfVar10[0x16] = 1.0;
    pfVar10[0x17] = 1.0;
    FUN_0199c810(plVar15,0,0x60);
    FUN_0199c800(plVar15);
    (**(code **)PTR_DAT_02713a38)(*(undefined8 *)PTR_DAT_027155e8,0x38,&local_74);
    plVar9 = *(long **)(param_1 + 8);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      uVar2 = 0;
      if (local_74 != 0) {
        uVar2 = param_2 / local_74;
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar2 = local_74 + (uVar2 * local_74 - param_2);
      uVar3 = 0;
      if (local_74 != 0) {
        uVar3 = uVar2 / local_74;
      }
      uVar13 = (ulong)(int)(((uVar2 - uVar3 * local_74) + param_2) * param_3);
      plVar11 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x140,8);
      if (plVar11 == (long *)0x0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_00799060(plVar11,3,uVar13 + (uVar13 >> 1),*(undefined8 *)(*(long *)puVar5 + 0x10));
      puVar1 = PTR_DAT_027160a0 + 0x50;
      *plVar11 = (long)(PTR_DAT_027160a0 + 0x10);
      plVar11[1] = (long)plVar9;
      plVar11[9] = (long)puVar1;
      plVar11[2] = (long)plVar11;
      plVar11[3] = 0x140;
      plVar11[4] = 8;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      if (plVar11 != (long *)0x0) {
        (**(code **)(plVar11[9] + 0x10))();
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      *(long **)(param_1 + 0x88) = plVar11;
      local_94 = 0xb0100000008;
      local_8c = 0x100000001;
      local_84 = 0;
      local_9c = 0x800000201;
      local_b0 = CONCAT44(param_3,param_2);
      local_80 = 0;
      local_a8 = 0x201;
      local_b8 = 0;
      plVar9 = *(long **)(param_1 + 8);
      local_a4 = param_2;
      iStack_a0 = param_3;
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (*(ulong *)(lVar8 + 0x80) < 0x10) {
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        lVar12 = (**(code **)(*plVar9 + 0x10))(plVar9,0x4a8,8);
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0xb8))(plVar9);
        }
        FUN_006fdd90(lVar12,&local_b8);
        *(long **)(lVar12 + 8) = plVar9;
        *(long *)(lVar12 + 0x10) = lVar12;
        *(undefined8 *)(lVar12 + 0x18) = 0x4a8;
        *(undefined8 *)(lVar12 + 0x20) = 8;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x90) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x90) = 0;
        }
        if ((int)param_2 < 0) {
          param_2 = param_2 + 1;
        }
        local_a4 = (int)param_2 >> 1;
        *(long *)(param_1 + 0x90) = lVar12;
        if (param_3 < 0) {
          param_3 = param_3 + 1;
        }
        iStack_a0 = param_3 >> 1;
        local_9c = CONCAT44(local_9c._4_4_,0x901);
        local_b0 = CONCAT44(iStack_a0,local_a4);
        local_a8 = 0x901;
        plVar9 = *(long **)(param_1 + 8);
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (*(ulong *)(lVar8 + 0x80) < 0x10) {
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          lVar12 = (**(code **)(*plVar9 + 0x10))(plVar9,0x4a8,8);
          if (lVar12 == 0) {
            (**(code **)(*plVar9 + 0xb8))(plVar9);
          }
          FUN_006fdd90(lVar12,&local_b8);
          *(long **)(lVar12 + 8) = plVar9;
          *(long *)(lVar12 + 0x10) = lVar12;
          *(undefined8 *)(lVar12 + 0x18) = 0x4a8;
          *(undefined8 *)(lVar12 + 0x20) = 8;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0x98) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x98) = 0;
          }
          *(long *)(param_1 + 0x98) = lVar12;
          *(undefined1 *)(param_1 + 0x1d1) = 1;
          thunk_FUN_0199c800(plVar15);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


