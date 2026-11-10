/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fbbd0; name: FUN_005fbbd0
 */


undefined8 FUN_005fbbd0(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  ulong local_c0 [12];
  
  param_1[6] = param_2;
  param_1[0x71] = param_2;
  param_1[0x18] = *param_3;
  lVar11 = param_3[1];
  lVar19 = param_3[2];
  lVar21 = param_3[4];
  param_1[0x1b] = param_3[3];
  param_1[0x1c] = lVar21;
  param_1[0x19] = lVar11;
  param_1[0x1a] = lVar19;
  lVar11 = param_3[5];
  lVar19 = param_3[6];
  lVar21 = param_3[8];
  param_1[0x1f] = param_3[7];
  param_1[0x20] = lVar21;
  param_1[0x1d] = lVar11;
  param_1[0x1e] = lVar19;
  uVar10 = (**(code **)(*(long *)param_1[4] + 0x2a8))();
  iVar5 = *(int *)((long)param_3 + 0x1c);
  lVar11 = (**(code **)(*(long *)param_1[2] + 0x38))
                     ((long *)param_1[2],0x180,0x10,
                      "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                      ,0x85);
  param_1[0x33] = lVar11;
  if (lVar11 == 0) {
    return 0;
  }
  plVar16 = param_1 + 0x51;
  uVar1 = (long)iVar5 + 2;
  (**(code **)PTR_DAT_027143f8)(plVar16);
  (**(code **)PTR_DAT_02714400)(plVar16,uVar10);
  (**(code **)PTR_DAT_02714408)(plVar16,9);
  (**(code **)PTR_DAT_02714410)(plVar16,1);
  uVar9 = FUN_00662f90((int)param_3[4]);
  (**(code **)PTR_DAT_02714418)(plVar16,uVar9);
  puVar7 = PTR_DAT_02714420;
  (**(code **)PTR_DAT_02714420)(plVar16,0x780,0x438);
  lVar11 = (**(code **)PTR_DAT_02714428)(plVar16);
  param_1[0x72] = lVar11;
  (**(code **)puVar7)(plVar16,*(undefined4 *)((long)param_3 + 0xc),(int)param_3[2]);
  puVar2 = (ulong *)(param_1 + 0x36);
  iVar18 = (int)uVar1;
  if (param_1[0x36] != uVar1) {
    if ((uVar1 < (ulong)param_1[0x37]) ||
       (uVar12 = FUN_005fe300(param_1 + 0x34,uVar1,1), (uVar12 & 1) != 0)) {
      *puVar2 = uVar1;
      if (iVar18 != 0) {
        param_1[0x3a] = param_1[0x39];
        param_1[0x3b] = param_1[0x39] + uVar1 * 8;
        goto LAB_005fbd90;
      }
    }
    else {
      param_1[0x36] = 0;
    }
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
LAB_005fbd90:
  puVar3 = (ulong *)(param_1 + 0x40);
  if (param_1[0x40] != uVar1) {
    if ((uVar1 < (ulong)param_1[0x41]) ||
       (uVar12 = FUN_005fe4a0(param_1 + 0x3e,uVar1,1), (uVar12 & 1) != 0)) {
      *puVar3 = uVar1;
      if (iVar18 != 0) {
        param_1[0x44] = param_1[0x43];
        param_1[0x45] = param_1[0x43] + uVar1 * 8;
        goto LAB_005fbdec;
      }
    }
    else {
      param_1[0x40] = 0;
    }
    param_1[0x45] = 0;
    param_1[0x44] = 0;
  }
LAB_005fbdec:
  lVar11 = (**(code **)PTR_DAT_02714430)(plVar16);
  uVar20 = (int)(lVar11 + -1) + (int)param_1[0x72] & (uint)-lVar11;
  plVar13 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
  plVar13 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13,0,0);
  param_1[0x48] = (long)plVar13;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0x400000000;
  local_c0[9] = 0xffffffffffffffff;
  local_c0[10] = 0xffffffffffffffff;
  local_c0[1] = 0;
  local_c0[0] = (ulong)((uVar20 + (int)lVar11) * iVar18);
  local_c0[5] = 0;
  local_c0[6] = 0xa1;
  local_c0[7] = 0;
  local_c0[8] = 0;
  uVar12 = (**(code **)(*plVar13 + 0x40))(plVar13,local_c0);
  if ((uVar12 & 1) != 0) {
    if (-2 < iVar5) {
      lVar19 = 0;
      plVar13 = param_1 + 0x39;
      plVar4 = param_1 + 0x43;
      plVar22 = param_1 + 0x49;
      do {
        uVar12 = FUN_00653070(param_1[0x48],(long)(int)uVar20,lVar11,plVar22);
        if ((uVar12 & 1) == 0) {
          return 0;
        }
        plVar22[1] = lVar11 + -1 + *plVar22 & -lVar11;
        puVar14 = (undefined8 *)
                  (**(code **)(*(long *)param_1[2] + 0x38))
                            ((long *)param_1[2],0xc0,0x10,
                             "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                             ,0xb6);
        puVar14[0x16] = 0;
        puVar14[0x17] = 0;
        lVar21 = lVar19 * 8;
        puVar14[0x14] = 0;
        puVar14[0x15] = 0;
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        *(undefined8 **)(param_1[0x39] + lVar21) = puVar14;
        uVar15 = (**(code **)(*(long *)param_1[0x48] + 0x80))();
        (**(code **)PTR_DAT_02714438)(plVar16,uVar15,plVar22[1]);
        cVar8 = (**(code **)PTR_DAT_02714440)(*(undefined8 *)(param_1[0x39] + lVar21),plVar16);
        puVar7 = PTR_DAT_02714490;
        if (cVar8 != '\x01') {
          if ((int)lVar19 != 0) {
            lVar21 = 0;
            lVar11 = 0;
            do {
              (**(code **)puVar7)(*(undefined8 *)(*plVar13 + lVar21));
              lVar17 = *(long *)(*plVar13 + lVar21);
              if (lVar17 != 0) {
                plVar16 = (long *)param_1[2];
                if (plVar16 == (long *)0x0) {
                  puVar14 = (undefined8 *)(*plVar13 + lVar11 * 8);
                }
                else {
                  (**(code **)(*plVar16 + 0x48))
                            (plVar16,lVar17,
                             "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                             ,0xbe);
                  puVar14 = (undefined8 *)(*plVar13 + lVar21);
                }
                *puVar14 = 0;
              }
              lVar17 = *(long *)(*plVar4 + lVar21);
              if (lVar17 != 0) {
                plVar16 = (long *)param_1[2];
                if (plVar16 == (long *)0x0) {
                  puVar14 = (undefined8 *)(*plVar4 + lVar11 * 8);
                }
                else {
                  (**(code **)(*plVar16 + 0x48))
                            (plVar16,lVar17,
                             "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                             ,0xbf);
                  puVar14 = (undefined8 *)(*plVar4 + lVar21);
                }
                *puVar14 = 0;
              }
              lVar11 = lVar11 + 1;
              lVar21 = lVar21 + 8;
            } while (lVar19 != lVar11);
          }
          if (((*(byte *)(param_1 + 0x3d) & 1) == 0) && (*plVar13 != 0)) {
            plVar16 = (long *)param_1[0x35];
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x48))
                        (plVar16,*plVar13,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *plVar13 = 0;
          }
          *puVar2 = 0;
          param_1[0x37] = 0;
          param_1[0x3d] = 0;
          *plVar13 = 0;
          param_1[0x3a] = 0;
          param_1[0x3b] = 0;
          if (((*(byte *)(param_1 + 0x47) & 1) == 0) && (*plVar4 != 0)) {
            plVar16 = (long *)param_1[0x3f];
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x48))
                        (plVar16,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *plVar4 = 0;
          }
          *puVar3 = 0;
          param_1[0x41] = 0;
          param_1[0x47] = 0;
          *plVar4 = 0;
          param_1[0x44] = 0;
          param_1[0x45] = 0;
          return 0;
        }
        puVar14 = (undefined8 *)
                  (**(code **)(*(long *)param_1[2] + 0x38))
                            ((long *)param_1[2],0x28,0x10,
                             "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                             ,200);
        puVar14[3] = 0;
        puVar14[4] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        *(undefined8 **)(param_1[0x43] + lVar21) = puVar14;
        (**(code **)PTR_DAT_02713ad8)(*(undefined8 *)(param_1[0x43] + lVar21));
        uVar15 = *(undefined8 *)(param_1[0x43] + lVar21);
        uVar9 = (**(code **)PTR_DAT_02713af0)(*(undefined8 *)(param_1[0x39] + lVar21));
        (**(code **)PTR_DAT_02713af8)(uVar15,uVar9);
        uVar15 = *(undefined8 *)(param_1[0x43] + lVar21);
        uVar9 = (**(code **)PTR_DAT_02713ae0)(*(undefined8 *)(param_1[0x39] + lVar21));
        (**(code **)PTR_DAT_02713ae8)(uVar15,0,uVar9);
        uVar15 = *(undefined8 *)(param_1[0x43] + lVar21);
        uVar9 = (**(code **)PTR_DAT_02713b00)(*(undefined8 *)(param_1[0x39] + lVar21));
        (**(code **)PTR_DAT_02713b08)(uVar15,uVar9);
        lVar19 = lVar19 + 1;
        plVar22 = plVar22 + 2;
      } while (lVar19 < (long)uVar1);
    }
    plVar13 = param_1 + 0x61;
    (**(code **)PTR_DAT_02714448)(plVar13);
    (**(code **)PTR_DAT_02714450)(plVar13,uVar10);
    (**(code **)PTR_DAT_02714458)(plVar13,param_2);
    plVar16 = param_1 + 0x39;
    (**(code **)PTR_DAT_02714460)(plVar13,uVar1 & 0xffffffff,*plVar16);
    (**(code **)PTR_DAT_02714468)(plVar13,*(undefined4 *)((long)param_3 + 0x3c));
    cVar8 = (**(code **)PTR_DAT_02714470)(param_1[0x33],plVar13);
    puVar7 = PTR_DAT_02714490;
    if (cVar8 != '\x01') {
      if (-2 < iVar5) {
        lVar19 = 0;
        lVar11 = 0;
        do {
          (**(code **)puVar7)(*(undefined8 *)(*plVar16 + lVar19));
          lVar21 = *(long *)(*plVar16 + lVar19);
          if (lVar21 != 0) {
            plVar13 = (long *)param_1[2];
            if (plVar13 == (long *)0x0) {
              puVar14 = (undefined8 *)(*plVar16 + lVar11 * 8);
            }
            else {
              (**(code **)(*plVar13 + 0x48))
                        (plVar13,lVar21,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                         ,0xdd);
              puVar14 = (undefined8 *)(*plVar16 + lVar19);
            }
            *puVar14 = 0;
          }
          lVar21 = *(long *)(param_1[0x43] + lVar19);
          if (lVar21 != 0) {
            plVar13 = (long *)param_1[2];
            if (plVar13 == (long *)0x0) {
              puVar14 = (undefined8 *)(param_1[0x43] + lVar11 * 8);
            }
            else {
              (**(code **)(*plVar13 + 0x48))
                        (plVar13,lVar21,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                         ,0xde);
              puVar14 = (undefined8 *)(param_1[0x43] + lVar19);
            }
            *puVar14 = 0;
          }
          lVar11 = lVar11 + 1;
          lVar19 = lVar19 + 8;
        } while (lVar11 < (long)uVar1);
      }
      if (((*(byte *)(param_1 + 0x3d) & 1) == 0) && (*plVar16 != 0)) {
        plVar13 = (long *)param_1[0x35];
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x48))
                    (plVar13,*plVar16,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar16 = 0;
      }
      *puVar2 = 0;
      param_1[0x37] = 0;
      param_1[0x3d] = 0;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      *plVar16 = 0;
      plVar16 = param_1 + 0x43;
      if (((*(byte *)(param_1 + 0x47) & 1) == 0) && (*plVar16 != 0)) {
        plVar13 = (long *)param_1[0x3f];
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x48))
                    (plVar13,*plVar16,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar16 = 0;
      }
      *puVar3 = 0;
      param_1[0x41] = 0;
      param_1[0x47] = 0;
      *plVar16 = 0;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x73) = 1;
    FUN_005fc580(param_1);
    FUN_005fc840(param_1);
    *(int *)(param_1 + 0x2e) = *(int *)((long)param_1 + 0x11c);
    if (0 < *(int *)((long)param_1 + 0x11c)) {
      lVar11 = 0;
      do {
        plVar16 = (long *)(**(code **)(*(long *)param_1[2] + 0x38))
                                    ((long *)param_1[2],0x30,0x10,
                                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_Canvas_Impl.cpp"
                                     ,0x503);
        FUN_00655170(plVar16,param_1[2],param_1[4]);
        FUN_00655210(plVar16,1);
        (**(code **)(*plVar16 + 0x40))(plVar16);
        lVar19 = param_1[lVar11 + 0x2a];
        plVar13 = (long *)(**(code **)(*plVar16 + 0x50))(plVar16);
        *plVar13 = lVar19;
        (**(code **)(*plVar16 + 0x48))(plVar16);
        param_1[lVar11 + 0x2f] = (long)plVar16;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[0x2e]);
    }
    plVar16 = param_1 + 0x69;
    cVar8 = (**(code **)PTR_DAT_02714478)(plVar16,uVar10);
    if (cVar8 == '\x01') {
      (**(code **)PTR_DAT_02714480)(param_1[0x33],plVar16,(long)param_1 + 0x114);
      iVar5 = *(int *)((long)param_1 + 0x114) + 1;
      iVar6 = 0;
      if (iVar18 != 0) {
        iVar6 = iVar5 / iVar18;
      }
      *(int *)(param_1 + 0x23) = iVar5 - iVar6 * iVar18;
      (**(code **)PTR_DAT_02714488)(plVar16,0xffffffffffffffff);
      return 1;
    }
  }
  return 0;
}


