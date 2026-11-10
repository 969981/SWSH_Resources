/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f3950; name: FUN_011f3950
 */


undefined8 * FUN_011f3950(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  size_t __n;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  puVar6 = PTR_DAT_02710860;
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    if (param_2 != puVar8) {
      puVar10 = puVar8 + -0x10;
      if (puVar10 < puVar8) {
        puVar12 = puVar8;
        do {
          lVar13 = param_1[3];
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_011f3da8;
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          uVar3 = *puVar10;
          uVar4 = puVar10[1];
          uVar5 = puVar10[3];
          puVar12[2] = puVar10[2];
          puVar12[3] = uVar5;
          *puVar12 = uVar3;
          puVar12[1] = uVar4;
          uVar3 = puVar10[4];
          uVar4 = puVar10[5];
          uVar5 = puVar10[7];
          puVar12[6] = puVar10[6];
          puVar12[7] = uVar5;
          puVar12[4] = uVar3;
          puVar12[5] = uVar4;
          uVar3 = puVar10[8];
          uVar4 = puVar10[9];
          uVar5 = puVar10[0xb];
          puVar12[10] = puVar10[10];
          puVar12[0xb] = uVar5;
          puVar12[8] = uVar3;
          puVar12[9] = uVar4;
          uVar3 = puVar10[0xc];
          uVar4 = puVar10[0xd];
          puVar1 = puVar10 + 0xe;
          uVar5 = puVar10[0xf];
          puVar10 = puVar10 + 0x10;
          puVar12[0xe] = *puVar1;
          puVar12[0xf] = uVar5;
          puVar12[0xc] = uVar3;
          puVar12[0xd] = uVar4;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          puVar12 = (undefined8 *)(param_1[1] + 0x80);
          param_1[1] = (long)puVar12;
        } while (puVar10 < puVar8);
      }
      __n = (long)puVar8 - (long)(param_2 + 0x10);
      if (__n != 0) {
        memmove(puVar8 + ((long)__n >> 7) * -0x10,param_2,__n);
      }
      puVar8 = param_3;
      if ((param_2 <= param_3) && (puVar8 = param_3 + 0x10, (undefined8 *)param_1[1] <= param_3)) {
        puVar8 = param_3;
      }
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      uVar5 = puVar8[3];
      param_2[2] = puVar8[2];
      param_2[3] = uVar5;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      uVar3 = puVar8[4];
      uVar4 = puVar8[5];
      uVar5 = puVar8[7];
      param_2[6] = puVar8[6];
      param_2[7] = uVar5;
      param_2[4] = uVar3;
      param_2[5] = uVar4;
      uVar3 = puVar8[8];
      uVar4 = puVar8[9];
      uVar5 = puVar8[0xb];
      param_2[10] = puVar8[10];
      param_2[0xb] = uVar5;
      param_2[8] = uVar3;
      param_2[9] = uVar4;
      uVar3 = puVar8[0xc];
      uVar4 = puVar8[0xd];
      uVar5 = puVar8[0xf];
      param_2[0xe] = puVar8[0xe];
      param_2[0xf] = uVar5;
      param_2[0xc] = uVar3;
      param_2[0xd] = uVar4;
      return param_2;
    }
    lVar13 = param_1[3];
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar7 + 0x80) < 0x10) {
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[3];
      param_2[2] = param_3[2];
      param_2[3] = uVar5;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      uVar3 = param_3[4];
      uVar4 = param_3[5];
      uVar5 = param_3[7];
      param_2[6] = param_3[6];
      param_2[7] = uVar5;
      param_2[4] = uVar3;
      param_2[5] = uVar4;
      uVar3 = param_3[8];
      uVar4 = param_3[9];
      uVar5 = param_3[0xb];
      param_2[10] = param_3[10];
      param_2[0xb] = uVar5;
      param_2[8] = uVar3;
      param_2[9] = uVar4;
      uVar3 = param_3[0xc];
      uVar4 = param_3[0xd];
      uVar5 = param_3[0xf];
      param_2[0xe] = param_3[0xe];
      param_2[0xf] = uVar5;
      param_2[0xc] = uVar3;
      param_2[0xd] = uVar4;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      param_1[1] = param_1[1] + 0x80;
      return param_2;
    }
    goto LAB_011f3da8;
  }
  lVar7 = *param_1;
  uVar14 = ((long)puVar8 - lVar7 >> 7) + 1;
  if (uVar14 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar13 = param_1[2] - lVar7;
  lVar7 = (long)param_2 - lVar7;
  uVar11 = lVar7 >> 7;
  plVar2 = param_1 + 3;
  local_68 = plVar2;
  if ((ulong)(lVar13 >> 7) < 0xffffffffffffff) {
    uVar9 = lVar13 >> 6;
    if (uVar14 <= uVar9) {
      uVar14 = uVar9;
    }
    if (uVar14 != 0) goto LAB_011f3b18;
    lVar13 = 0;
  }
  else {
    uVar14 = 0x1ffffffffffffff;
LAB_011f3b18:
    local_70 = 0;
    lVar13 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar14 << 7,8);
    if (lVar13 == 0) {
      (**(code **)(*(long *)*plVar2 + 0xb8))();
    }
  }
  puVar8 = (undefined8 *)(lVar13 + uVar11 * 0x80);
  local_70 = lVar13 + uVar14 * 0x80;
  local_88 = lVar13;
  local_80 = puVar8;
  local_78 = puVar8;
  if (uVar11 == uVar14) {
    if (lVar7 < 1) {
      uVar11 = lVar7 >> 6;
      if (lVar7 == 0) {
        uVar11 = 1;
      }
      if (uVar11 == 0) {
        local_70 = 0;
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar11 << 7,8);
        if (lVar7 == 0) {
          (**(code **)(*(long *)*plVar2 + 0xb8))();
        }
        local_70 = lVar7 + uVar11 * 0x80;
      }
      puVar8 = (undefined8 *)(lVar7 + (uVar11 >> 2) * 0x80);
      local_88 = lVar7;
      local_80 = puVar8;
      local_78 = puVar8;
      if (lVar13 != 0) {
        (**(code **)(*(long *)*plVar2 + 0x18))((long *)*plVar2,lVar13,uVar14 << 7,8);
      }
    }
    else {
      uVar14 = uVar11 + 2;
      if (-1 < (long)(uVar11 + 1)) {
        uVar14 = uVar11 + 1;
      }
      puVar8 = puVar8 + (uVar14 & 0x3fffffffffffffe) * -8;
      local_80 = puVar8;
      local_78 = puVar8;
    }
  }
  lVar13 = *plVar2;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[3];
    puVar8[2] = param_3[2];
    puVar8[3] = uVar5;
    *puVar8 = uVar3;
    puVar8[1] = uVar4;
    uVar3 = param_3[4];
    uVar4 = param_3[5];
    uVar5 = param_3[7];
    puVar8[6] = param_3[6];
    puVar8[7] = uVar5;
    puVar8[4] = uVar3;
    puVar8[5] = uVar4;
    uVar3 = param_3[8];
    uVar4 = param_3[9];
    uVar5 = param_3[0xb];
    puVar8[10] = param_3[10];
    puVar8[0xb] = uVar5;
    puVar8[8] = uVar3;
    puVar8[9] = uVar4;
    uVar3 = param_3[0xc];
    uVar4 = param_3[0xd];
    uVar5 = param_3[0xf];
    puVar8[0xe] = param_3[0xe];
    puVar8[0xf] = uVar5;
    puVar8[0xc] = uVar3;
    puVar8[0xd] = uVar4;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_78 = local_78 + 0x10;
    puVar8 = (undefined8 *)FUN_011f4070(param_1,&local_88,param_2);
    if (local_78 != local_80) {
      local_78 = (undefined8 *)
                 ((long)local_78 +
                 (~((long)local_78 + (-0x80 - (long)local_80)) & 0xffffffffffffff80U));
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,8);
    }
    return puVar8;
  }
LAB_011f3da8:
                    /* WARNING: Subroutine does not return */
  abort();
}


