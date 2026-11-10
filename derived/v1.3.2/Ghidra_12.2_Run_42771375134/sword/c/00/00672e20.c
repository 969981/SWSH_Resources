/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00672e20; name: FUN_00672e20
 */


undefined8 FUN_00672e20(long param_1,long *param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long *__s;
  void *__s_00;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  FUN_00682fc0(param_2,(long)param_3);
  uVar4 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2,1);
  uVar6 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  uVar7 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  uVar8 = (**(code **)(*param_2 + 0xf8))(param_2,1);
  uVar9 = (**(code **)(*param_2 + 0xd8))(param_2,1);
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                              (*(long **)(param_1 + 8),0x140,0x10,
                               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Impl.cpp"
                               ,0x358);
  lVar14 = *(long *)(param_1 + 8);
  *plVar10 = 0;
  plVar10[1] = 0;
  puVar1 = PTR_DAT_02714600 + 0x10;
  plVar10[2] = (long)puVar1;
  plVar10[3] = 0;
  puVar2 = PTR_DAT_02714328;
  plVar10[4] = 0;
  plVar10[5] = (long)puVar1;
  plVar10[6] = 0;
  plVar10[10] = (long)(puVar2 + 0x10);
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[0xb] = lVar14;
  plVar10[0xc] = 0;
  plVar10[0xf] = 0;
  plVar10[0xd] = 0;
  plVar10[0xe] = 1;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = 0;
  if (lVar14 == 0) {
    lVar11 = FUN_005bc6f0();
    plVar10[0xb] = lVar11;
  }
  plVar10[0x14] = (long)(puVar2 + 0x10);
  plVar10[0x15] = lVar14;
  plVar10[0x17] = 0;
  plVar10[0x18] = 1;
  plVar10[0x16] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  if (lVar14 == 0) {
    lVar14 = FUN_005bc6f0();
    plVar10[0x15] = lVar14;
  }
  plVar10[0x1e] = (long)(PTR_DAT_02713f98 + 0x10);
  plVar10[0x23] = 0;
  plVar10[0x1f] = 0;
  plVar10[0x20] = 0;
  plVar10[0x21] = 0;
  plVar10[0x22] = 0x30;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x24] = 0;
  plVar10[0x25] = 0;
  lVar14 = FUN_005bc6f0();
  plVar10[0x1f] = lVar14;
  __s = plVar10 + 9;
  *__s = 0;
  *(undefined4 *)((long)plVar10 + 0x44) = uVar4;
  if ((int)uVar6 < 5) {
    *(uint *)((long)plVar10 + 0x1c) = uVar6;
    plVar10[4] = (long)__s;
    if (0 < (int)uVar6) goto LAB_00673088;
  }
  else {
    uVar13 = (ulong)(int)uVar6;
    if (plVar10[0xc] == uVar13) {
LAB_00673078:
      __s = (long *)plVar10[0xf];
      *(uint *)((long)plVar10 + 0x1c) = uVar6;
      plVar10[4] = (long)__s;
    }
    else {
      if ((uVar13 < (ulong)plVar10[0xd]) ||
         (uVar12 = FUN_005ea2b0(plVar10 + 10,uVar13,1), (uVar12 & 1) != 0)) {
        plVar10[0xc] = uVar13;
        plVar10[0x10] = plVar10[0xf];
        plVar10[0x11] = plVar10[0xf] + uVar13;
        goto LAB_00673078;
      }
      plVar10[0xc] = 0;
      plVar10[0x10] = 0;
      plVar10[0x11] = 0;
      __s = (long *)plVar10[0xf];
      *(uint *)((long)plVar10 + 0x1c) = uVar6;
      plVar10[4] = (long)__s;
    }
    if (__s != (long *)0x0) {
LAB_00673088:
                    /* WARNING: Subroutine does not return */
      memset(__s,0,(long)(int)uVar6);
    }
  }
  if ((int)uVar7 < 5) {
    __s_00 = (void *)((long)plVar10 + 0x4c);
    *(uint *)((long)plVar10 + 0x34) = uVar7;
    plVar10[7] = (long)__s_00;
    if (0 < (int)uVar7) goto LAB_0067311c;
  }
  else {
    uVar13 = (ulong)(int)uVar7;
    if (plVar10[0x16] == uVar13) {
LAB_0067310c:
      __s_00 = (void *)plVar10[0x19];
      *(uint *)((long)plVar10 + 0x34) = uVar7;
      plVar10[7] = (long)__s_00;
    }
    else {
      if ((uVar13 < (ulong)plVar10[0x17]) ||
         (uVar12 = FUN_005ea2b0(plVar10 + 0x14,uVar13,1), (uVar12 & 1) != 0)) {
        plVar10[0x16] = uVar13;
        plVar10[0x1a] = plVar10[0x19];
        plVar10[0x1b] = plVar10[0x19] + uVar13;
        goto LAB_0067310c;
      }
      plVar10[0x16] = 0;
      plVar10[0x1a] = 0;
      plVar10[0x1b] = 0;
      __s_00 = (void *)plVar10[0x19];
      *(uint *)((long)plVar10 + 0x34) = uVar7;
      plVar10[7] = (long)__s_00;
    }
    if (__s_00 != (void *)0x0) {
LAB_0067311c:
                    /* WARNING: Subroutine does not return */
      memset(__s_00,0,(long)(int)uVar7);
    }
  }
  *(undefined4 *)(plVar10 + 8) = uVar8;
  *(undefined4 *)(plVar10 + 3) = uVar5;
  if (0 < (int)uVar6) {
    uVar13 = 0;
    do {
      uVar3 = (**(code **)(*param_2 + 0xe8))(param_2,1);
      *(undefined1 *)(plVar10[4] + uVar13) = uVar3;
      uVar13 = uVar13 + 1;
    } while (uVar6 != uVar13);
  }
  if (0 < (int)uVar7) {
    uVar13 = 0;
    do {
      uVar3 = (**(code **)(*param_2 + 0xe8))(param_2,1);
      *(undefined1 *)(plVar10[7] + uVar13) = uVar3;
      uVar13 = uVar13 + 1;
    } while (uVar7 != uVar13);
  }
  uVar13 = (ulong)(int)uVar9;
  if (plVar10[0x20] != uVar13) {
    if ((uVar13 < (ulong)plVar10[0x21]) ||
       (uVar12 = FUN_005d04d0(plVar10 + 0x1e,uVar13,1), (uVar12 & 1) != 0)) {
      plVar10[0x20] = uVar13;
      if (uVar9 == 0) {
        plVar10[0x24] = 0;
        plVar10[0x25] = 0;
        lVar14 = *(long *)(param_1 + 0x90);
        goto joined_r0x00673274;
      }
      plVar10[0x24] = plVar10[0x23];
      plVar10[0x25] = plVar10[0x23] + uVar13 * 0x30;
    }
    else {
      plVar10[0x20] = 0;
      plVar10[0x24] = 0;
      plVar10[0x25] = 0;
    }
  }
  if (0 < (int)uVar9) {
    lVar14 = 0;
    uVar13 = (ulong)uVar9;
    do {
      FUN_00682fc0(param_2,(long)param_3);
      (**(code **)(*param_2 + 0x118))(param_2,plVar10[0x23] + lVar14,1);
      lVar14 = lVar14 + 0x30;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  lVar14 = *(long *)(param_1 + 0x90);
joined_r0x00673274:
  if (lVar14 == 0) {
    *(long **)(param_1 + 0x90) = plVar10;
  }
  else {
    *(long **)(*(long *)(param_1 + 0x98) + 8) = plVar10;
    *plVar10 = *(long *)(param_1 + 0x98);
  }
  *(long **)(param_1 + 0x98) = plVar10;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  *(long **)(*(long *)(param_1 + 0xd0) + (long)param_5 * 8) = plVar10;
  return 1;
}


