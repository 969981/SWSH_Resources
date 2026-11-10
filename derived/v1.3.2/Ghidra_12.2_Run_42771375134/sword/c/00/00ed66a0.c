/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed66a0; name: FUN_00ed66a0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 * FUN_00ed66a0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  size_t __n;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  puVar3 = PTR_DAT_02710860;
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    if (param_2 != puVar12) {
      puVar9 = puVar12 + -6;
      if (puVar9 < puVar12) {
        puVar11 = puVar12;
        do {
          lVar13 = param_1[3];
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00ed6b08;
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          puVar11[1] = puVar9[1];
          *puVar11 = *puVar9;
          uVar5 = puVar9[3];
          puVar11[5] = puVar9[5];
          uVar8 = puVar9[4];
          puVar11[2] = puVar9[2];
          puVar11[3] = uVar5;
          puVar11[4] = uVar8;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          puVar9 = puVar9 + 6;
          puVar11 = (undefined8 *)(param_1[1] + 0x30);
          param_1[1] = (long)puVar11;
        } while (puVar9 < puVar12);
      }
      __n = (long)puVar12 - (long)(param_2 + 6);
      if (__n != 0) {
        lVar4 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        memmove(puVar12 + ((lVar4 >> 3) - (lVar4 >> 0x3f)) * 6,param_2,__n);
      }
      puVar12 = param_3;
      if ((param_2 <= param_3) && (puVar12 = param_3 + 6, (undefined8 *)param_1[1] <= param_3)) {
        puVar12 = param_3;
      }
      uVar5 = puVar12[1];
      uVar2 = *(undefined4 *)(puVar12 + 4);
      param_2[3] = puVar12[3];
      param_2[1] = uVar5;
      *param_2 = *puVar12;
      uVar5 = puVar12[2];
      *(undefined4 *)(param_2 + 4) = uVar2;
      param_2[2] = uVar5;
      return param_2;
    }
    lVar13 = param_1[3];
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      param_2[1] = param_3[1];
      *param_2 = *param_3;
      uVar5 = param_3[3];
      param_2[5] = param_3[5];
      uVar8 = param_3[4];
      param_2[2] = param_3[2];
      param_2[3] = uVar5;
      param_2[4] = uVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      param_1[1] = param_1[1] + 0x30;
      return param_2;
    }
    goto LAB_00ed6b08;
  }
  lVar4 = *param_1;
  uVar14 = 0x555555555555555;
  uVar7 = ((long)puVar12 - lVar4 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar15 = (long)param_2 - lVar4;
  lVar4 = param_1[2] - lVar4 >> 4;
  lVar13 = lVar15 >> 4;
  uVar10 = lVar13 * -0x5555555555555555;
  plVar1 = param_1 + 3;
  local_68 = plVar1;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar6 = lVar4 * 0x5555555555555556;
    uVar14 = uVar7;
    if (uVar7 <= uVar6) {
      uVar14 = uVar6;
    }
    if (uVar14 != 0) goto LAB_00ed6874;
    lVar4 = 0;
  }
  else {
LAB_00ed6874:
    local_70 = 0;
    lVar4 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar14 * 0x30,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  puVar12 = (undefined8 *)(lVar4 + lVar13 * 0x10);
  local_70 = lVar4 + uVar14 * 0x30;
  local_88 = lVar4;
  local_80 = puVar12;
  local_78 = puVar12;
  if (uVar10 == uVar14) {
    if (lVar15 < 1) {
      uVar7 = lVar13 * 0x5555555555555556;
      if (lVar15 == 0) {
        uVar7 = 1;
      }
      if (uVar7 == 0) {
        local_70 = 0;
        lVar13 = 0;
      }
      else {
        lVar13 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 * 0x30,0x10);
        if (lVar13 == 0) {
          (**(code **)(*(long *)*plVar1 + 0xb8))();
        }
        local_70 = lVar13 + uVar7 * 0x30;
      }
      puVar12 = (undefined8 *)(lVar13 + (uVar7 >> 2) * 0x30);
      local_88 = lVar13;
      local_80 = puVar12;
      local_78 = puVar12;
      if (lVar4 != 0) {
        (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,lVar4,uVar14 * 0x30,0x10);
      }
    }
    else {
      lVar4 = uVar10 + 2;
      if (-1 < (long)(uVar10 + 1)) {
        lVar4 = uVar10 + 1;
      }
      puVar12 = puVar12 + (lVar4 >> 1) * -6;
      local_80 = puVar12;
      local_78 = puVar12;
    }
  }
  lVar13 = *plVar1;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    puVar12[1] = param_3[1];
    *puVar12 = *param_3;
    uVar5 = param_3[3];
    puVar12[5] = param_3[5];
    uVar8 = param_3[4];
    puVar12[2] = param_3[2];
    puVar12[3] = uVar5;
    puVar12[4] = uVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    local_78 = local_78 + 6;
    puVar12 = (undefined8 *)FUN_00ed7140(param_1,&local_88,param_2);
    if (local_78 != local_80) {
      local_78 = local_78 +
                 ((ulong)((long)local_78 + (-0x30 - (long)local_80)) / 0x30 ^ 0xffffffffffffffff) *
                 6;
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,0x10);
    }
    return puVar12;
  }
LAB_00ed6b08:
                    /* WARNING: Subroutine does not return */
  abort();
}


