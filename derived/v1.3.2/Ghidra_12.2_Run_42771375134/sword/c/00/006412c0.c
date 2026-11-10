/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006412c0; name: FUN_006412c0
 */


long * FUN_006412c0(long param_1,uint param_2,undefined8 param_3,int param_4,undefined4 param_5,
                   long param_6)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  long *local_548;
  undefined1 *local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  ulong local_520;
  undefined1 local_518 [1024];
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar17 = (long)*(int *)(param_1 + 0x3e0c);
  lVar18 = *(long *)(param_1 + (ulong)param_2 * 0x50 + 0x3e38);
  piVar19 = (int *)(lVar18 + lVar17 * 0x60 + 8);
  iVar2 = *piVar19;
  if ((iVar2 < 0) || (piVar20 = (int *)(lVar18 + lVar17 * 0x60 + 0x20), *piVar20 <= iVar2)) {
    plVar15 = (long *)0x0;
LAB_00641398:
    plVar14 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                                (*(long **)(param_1 + 8),0x18,0x10,
                                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_DrawContext_Impl.cpp"
                                 ,0x1097);
    *(undefined4 *)(plVar14 + 2) = 0;
    *plVar14 = 0;
    plVar14[1] = 0;
    lVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0xf0))(*(long **)(param_1 + 0x18),0,0);
    plVar14[1] = lVar7;
    local_a0 = 0x100000000;
    uStack_98 = 0;
    uStack_b8 = 0;
    local_90 = 0;
    local_c0 = 0x100000;
    local_a8._0_4_ = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    if (param_2 == 0) {
      local_a8._0_4_ = 4;
    }
    else if (param_2 == 1) {
      local_a8._0_4_ = 1;
    }
    else if (param_2 == 2) {
      local_a8._0_4_ = 2;
    }
    local_b0 = 2;
    local_a8 = CONCAT44(0x10000,(undefined4)local_a8);
    uVar4 = FUN_006636d0(10,2,(undefined4)local_a8,0x10000);
    local_90 = CONCAT44(local_90._4_4_,uVar4) & 0xfffffffffffffff8 | 2;
    local_a0 = CONCAT44(0x400,(undefined4)local_a0);
    uVar8 = (**(code **)(*(long *)plVar14[1] + 0x40))((long *)plVar14[1],&local_c0);
    if ((uVar8 & 1) == 0) {
      if ((long *)plVar14[1] != (long *)0x0) {
        (**(code **)(*(long *)plVar14[1] + 0x18))();
        plVar14[1] = 0;
      }
    }
    else {
      lVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0x1d8))(*(long **)(param_1 + 0x18),0,0,0);
      *plVar14 = lVar7;
      local_110 = 0;
      local_108 = 1;
      local_f4 = 0;
      local_104 = 0;
      local_102 = 0;
      local_d8 = 0;
      local_e8 = 0;
      local_cc = 0xffffffffffffffff;
      local_d4 = 0xffffffffffffffff;
      local_114 = 0x100000;
      local_540 = local_518;
      local_fc = (undefined4)local_a8;
      local_f8 = local_a8._4_4_;
      local_100 = (undefined4)local_b0;
      local_e0 = plVar14[1];
      local_548 = *(long **)(param_1 + 8);
      local_538 = 0;
      uStack_530 = 0;
      local_528 = 0x400;
      local_520 = 1;
      local_118 = param_5;
      if (local_548 == (long *)0x0) {
        lVar7 = FUN_005bc740();
        if (lVar7 == 0) {
          local_548 = (long *)FUN_005bc6f0();
          *local_540 = 0;
          goto joined_r0x00641750;
        }
        local_548 = (long *)FUN_005bc740();
        *local_540 = 0;
        if (param_2 != 0) goto LAB_00641530;
LAB_00641590:
        lVar7 = lVar18 + lVar17 * 0x60;
        uVar4 = *(undefined4 *)(param_1 + 0x3e0c);
        pcVar10 = "DirectMapBuffer::CB_%d_%d";
LAB_006415bc:
        FUN_005c9140(&local_548,pcVar10,uVar4,*(undefined4 *)(lVar7 + 0x20));
      }
      else {
        local_518[0] = 0;
joined_r0x00641750:
        if (param_2 == 0) goto LAB_00641590;
LAB_00641530:
        if (param_2 == 2) {
          lVar7 = lVar18 + lVar17 * 0x60;
          uVar4 = *(undefined4 *)(param_1 + 0x3e0c);
          pcVar10 = "DirectMapBuffer::IB_%d_%d";
          goto LAB_006415bc;
        }
        if (param_2 == 1) {
          lVar7 = lVar18 + lVar17 * 0x60;
          uVar4 = *(undefined4 *)(param_1 + 0x3e0c);
          pcVar10 = "DirectMapBuffer::VB_%d_%d";
          goto LAB_006415bc;
        }
      }
      puVar1 = PTR_DAT_02713e78;
      if (local_540 != (undefined1 *)0x0) {
        puVar1 = local_540;
      }
      (**(code **)(*(long *)(*plVar14 + 8) + 0x10))((long *)(*plVar14 + 8),puVar1);
      uVar8 = (**(code **)(*(long *)*plVar14 + 0xa8))((long *)*plVar14,&local_118);
      if ((uVar8 & 1) == 0) {
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 0x18))();
          *plVar14 = 0;
        }
        if ((long *)plVar14[1] != (long *)0x0) {
          (**(code **)(*(long *)plVar14[1] + 0x18))();
          plVar14[1] = 0;
        }
        bVar3 = true;
      }
      else {
        lVar7 = lVar18 + lVar17 * 0x60;
        puVar16 = (ulong *)(lVar7 + 0x20);
        uVar8 = *puVar16;
        *piVar19 = (int)uVar8;
        uVar13 = *(ulong *)(lVar7 + 0x28);
        plVar15 = plVar14;
        if (uVar13 <= uVar8) {
          lVar12 = *(long *)(lVar18 + lVar17 * 0x60 + 0x50);
          if (lVar12 == 0) {
            lVar12 = uVar13 * 2;
            if (lVar12 == 0) {
              lVar12 = 1;
            }
            uVar8 = FUN_00642b50(lVar7 + 0x10,lVar12,1);
          }
          else {
            uVar8 = FUN_00642b50(lVar7 + 0x10,lVar12 + uVar13,1);
          }
          if ((uVar8 & 1) == 0) {
            lVar18 = lVar18 + lVar17 * 0x60;
            bVar3 = false;
            *puVar16 = 0;
            *(undefined8 *)(lVar18 + 0x40) = 0;
            *(undefined8 *)(lVar18 + 0x48) = 0;
            goto joined_r0x006416c4;
          }
          uVar8 = *puVar16;
        }
        lVar18 = lVar18 + lVar17 * 0x60;
        *(long **)(*(long *)(lVar18 + 0x38) + uVar8 * 8) = plVar14;
        uVar8 = *puVar16;
        *puVar16 = uVar8 + 1;
        bVar3 = false;
        *(long *)(lVar18 + 0x40) = *(long *)(lVar18 + 0x38);
        *(ulong *)(lVar18 + 0x48) = *(long *)(lVar18 + 0x38) + (uVar8 + 1) * 8;
      }
joined_r0x006416c4:
      if ((local_520 & 1) == 0) {
        if ((local_540 != (undefined1 *)0x0) && (local_548 != (long *)0x0)) {
          (**(code **)(*local_548 + 0x48))
                    (local_548,local_540,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
        }
        local_540 = (undefined1 *)0x0;
      }
      if (!bVar3) goto LAB_006416fc;
    }
    plVar15 = (long *)0x0;
  }
  else {
    plVar14 = (long *)(lVar18 + lVar17 * 0x60 + 0x38);
    plVar15 = *(long **)(*plVar14 + (long)iVar2 * 8);
    if (plVar15 == (long *)0x0) goto LAB_00641398;
    plVar5 = (long *)(**(code **)(*(long *)*plVar15 + 0x98))();
    piVar6 = (int *)(**(code **)(*plVar5 + 0x38))();
    if (*piVar6 - (int)plVar15[2] < param_4) {
      iVar2 = *piVar19;
      iVar11 = (int)((long)iVar2 + 1);
      *piVar19 = iVar11;
      if (*piVar20 <= iVar11) goto LAB_00641398;
      plVar15 = *(long **)(*plVar14 + ((long)iVar2 + 1) * 8);
      *(undefined4 *)(plVar15 + 2) = 0;
    }
LAB_006416fc:
    uVar9 = (**(code **)PTR_DAT_02714658)(*plVar15 + 0xd0);
    *(undefined8 *)(param_6 + 0x20) = uVar9;
  }
  return plVar15;
}


