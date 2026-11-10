/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066cad0; name: FUN_0066cad0
 */


undefined8 FUN_0066cad0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  lVar4 = (**(code **)(*param_2 + 0x40))(param_2);
  puVar2 = PTR_DAT_02713e78;
  puVar1 = PTR_DAT_02713e78;
  if (*(undefined **)(lVar4 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(lVar4 + 8);
  }
  lVar4 = (**(code **)(*param_1 + 0xa8))(param_1,puVar1);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(long *)(lVar4 + 0x58) == 0) {
    return 0;
  }
  param_2[0x16] = (long)param_1;
  if (*(undefined **)(lVar4 + 0x10) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar4 + 0x10);
  }
  (**(code **)(*param_2 + 0x38))(param_2,puVar2);
  *(int *)((long)param_2 + 0x54) = (int)param_1[0x13];
  *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)((long)param_1 + 0x7c);
  *(long *)((long)param_2 + 0x94) = param_1[0x10];
  plVar5 = *(long **)(lVar4 + 0x58);
  param_2[0x15] = (long)plVar5;
  (**(code **)(*plVar5 + 0x10))();
  plVar5 = *(long **)(lVar4 + 0xb0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((long *)param_2[0x22] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0x22] + 0x18))();
  }
  param_2[0x22] = (long)plVar5;
  iVar3 = (**(code **)(*(long *)param_2[0x15] + 0x40))();
  if ((-1 < iVar3) && (iVar3 < (int)param_1[0x48])) {
    plVar5 = *(long **)(param_1[0x4b] + (long)iVar3 * 8);
    param_2[0x14] = (long)plVar5;
    (**(code **)(*plVar5 + 0x10))();
  }
  param_2[0x17] = lVar4;
  uVar13 = *(ulong *)(lVar4 + 0x70);
  if (param_2[0x1a] != uVar13) {
    if ((uVar13 < (ulong)param_2[0x1b]) ||
       (uVar6 = FUN_0066f7d0(param_2 + 0x18,uVar13,1), (uVar6 & 1) != 0)) {
      param_2[0x1a] = uVar13;
      if (uVar13 != 0) {
        param_2[0x1e] = param_2[0x1d];
        param_2[0x1f] = param_2[0x1d] + uVar13 * 8;
        iVar3 = *(int *)(lVar4 + 0x70);
        goto joined_r0x0066cc68;
      }
    }
    else {
      param_2[0x1a] = 0;
    }
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
  }
  iVar3 = *(int *)(lVar4 + 0x70);
joined_r0x0066cc68:
  if (0 < iVar3) {
    puVar1 = PTR_DAT_02714d38 + 0x10;
    lVar12 = 0;
    puVar2 = PTR_DAT_02714d40 + 0x10;
    do {
      lVar14 = *(long *)(*(long *)(lVar4 + 0x88) + lVar12 * 8);
      plVar5 = (long *)(**(code **)(*(long *)param_2[1] + 0x38))
                                 ((long *)param_2[1],0xb0,0x10,
                                  "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                                  ,0x8eb);
      lVar16 = param_2[1];
      *plVar5 = 0;
      *(undefined4 *)(plVar5 + 1) = 0;
      plVar5[2] = (long)puVar1;
      plVar5[3] = lVar16;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[6] = 0x18;
      plVar15 = plVar5 + 7;
      *plVar15 = 0;
      plVar5[10] = 0;
      plVar5[0xb] = 0;
      plVar5[8] = 0;
      plVar5[9] = 0;
      if (lVar16 == 0) {
        lVar7 = FUN_005bc6f0();
        plVar5[3] = lVar7;
      }
      plVar5[0xc] = (long)puVar2;
      plVar5[0xd] = lVar16;
      puVar11 = (ulong *)(plVar5 + 0xe);
      *puVar11 = 0;
      plVar5[0xf] = 0;
      plVar5[0x10] = 8;
      plVar5[0x11] = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      if (lVar16 == 0) {
        lVar16 = FUN_005bc6f0();
        plVar5[0xd] = lVar16;
      }
      *(long **)(param_2[0x1d] + lVar12 * 8) = plVar5;
      *plVar5 = lVar14;
      *(int *)(plVar5 + 1) = (int)lVar12;
      uVar13 = *(ulong *)(lVar14 + 0xa80);
      if (plVar5[4] != uVar13) {
        if ((uVar13 < (ulong)plVar5[5]) ||
           (uVar6 = FUN_0066f970(plVar5 + 2,uVar13,1), (uVar6 & 1) != 0)) {
          plVar5[4] = uVar13;
          if (uVar13 != 0) {
            plVar5[8] = plVar5[7];
            plVar5[9] = plVar5[7] + uVar13 * 0x18;
            goto LAB_0066cdb0;
          }
        }
        else {
          plVar5[4] = 0;
        }
        plVar5[8] = 0;
        plVar5[9] = 0;
      }
LAB_0066cdb0:
      uVar13 = *(ulong *)(lVar14 + 0xad0);
      if (*puVar11 == uVar13) {
LAB_0066cdf8:
        uVar8 = *(undefined8 *)(lVar14 + 0xa80);
        iVar3 = (int)uVar8;
      }
      else {
        if ((uVar13 < (ulong)plVar5[0xf]) ||
           (uVar6 = FUN_0066fbf0(plVar5 + 0xc,uVar13,1), (uVar6 & 1) != 0)) {
          *puVar11 = uVar13;
          if (uVar13 != 0) {
            plVar5[0x12] = plVar5[0x11];
            plVar5[0x13] = plVar5[0x11] + uVar13 * 8;
            goto LAB_0066cdf8;
          }
        }
        else {
          plVar5[0xe] = 0;
        }
        plVar5[0x12] = 0;
        plVar5[0x13] = 0;
        uVar8 = *(undefined8 *)(lVar14 + 0xa80);
        iVar3 = (int)uVar8;
      }
      if (0 < iVar3) {
        lVar7 = 0;
        lVar16 = 0;
        do {
          lVar10 = *(long *)(*(long *)(lVar14 + 0xa98) + lVar16 * 8);
          if (lVar10 != 0) {
            lVar9 = *plVar15;
            *(long *)(lVar9 + lVar7 + 8) = lVar10;
            *(long **)(lVar9 + lVar7 + 0x10) = plVar5;
            uVar8 = *(undefined8 *)(lVar14 + 0xa80);
          }
          lVar16 = lVar16 + 1;
          lVar7 = lVar7 + 0x18;
        } while (lVar16 < (int)uVar8);
        if (0 < (int)uVar8) {
          lVar16 = 0;
          do {
            lVar7 = *(long *)(*(long *)(lVar14 + 0xae8) + lVar16 * 8);
            if (lVar7 != 0) {
              *(long *)(plVar5[0x11] + lVar16 * 8) = *plVar15 + (long)*(int *)(lVar7 + 0x114) * 0x18
              ;
              uVar8 = *(undefined8 *)(lVar14 + 0xa80);
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < (int)uVar8);
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(lVar4 + 0x70));
  }
  param_2[0x2d] = (long)(param_1 + 0x1c7);
  return 1;
}


