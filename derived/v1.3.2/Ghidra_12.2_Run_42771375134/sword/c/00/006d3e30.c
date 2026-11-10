/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d3e30; name: FUN_006d3e30
 */


undefined8 * FUN_006d3e30(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  size_t __n;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  puVar5 = PTR_DAT_02710860;
  if ((long)param_4 - (long)param_3 < 1) {
    return param_2;
  }
  puVar6 = (undefined8 *)param_1[1];
  lVar12 = (long)param_4 - (long)param_3 >> 3;
  if (lVar12 <= param_1[2] - (long)puVar6 >> 3) {
    lVar9 = (long)puVar6 - (long)param_2 >> 3;
    puVar7 = puVar6;
    if (lVar9 < lVar12) {
      puVar3 = param_3 + lVar9;
      if (puVar3 != param_4) {
        puVar10 = puVar3;
        do {
          lVar14 = param_1[3];
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_006d41d8;
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar14;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          puVar11 = puVar10 + 1;
          *puVar7 = *puVar10;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          puVar7 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar7;
          puVar10 = puVar11;
        } while (param_4 != puVar11);
      }
      if ((long)puVar6 - (long)param_2 < 1) {
        return param_2;
      }
      puVar10 = puVar7 + -lVar12;
      puVar4 = (undefined4 *)PTR_DAT_02710860;
    }
    else {
      puVar10 = puVar6 + -lVar12;
      puVar3 = param_4;
      puVar4 = (undefined4 *)PTR_DAT_02710860;
    }
    PTR_DAT_02710860 = (undefined *)puVar4;
    if (puVar10 < puVar6) {
      puVar11 = puVar7;
      do {
        lVar14 = param_1[3];
        lVar9 = nn::os::GetTlsValue(*puVar4);
        if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_006d41d8;
        *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar14;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        puVar13 = puVar10 + 1;
        *puVar11 = *puVar10;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        puVar11 = (undefined8 *)(param_1[1] + 8);
        param_1[1] = (long)puVar11;
        puVar10 = puVar13;
      } while (puVar13 < puVar6);
    }
    __n = (long)puVar7 - (long)(param_2 + lVar12);
    if (__n != 0) {
      memmove(puVar7 + -((long)__n >> 3),param_2,__n);
    }
    if ((long)puVar3 - (long)param_3 == 0) {
      return param_2;
    }
    uVar15 = ((long)puVar3 - (long)param_3) - 8;
    uVar1 = ((uint)(uVar15 >> 3) & 0x1fffffff) + 1;
    puVar6 = param_2;
    if ((uVar1 & 3) != 0) {
      lVar12 = -((ulong)uVar1 & 3);
      puVar7 = param_2;
      puVar10 = param_3;
      do {
        param_3 = puVar10 + 1;
        lVar12 = lVar12 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar10;
        puVar7 = puVar6;
        puVar10 = param_3;
      } while (lVar12 != 0);
    }
    if (uVar15 < 0x18) {
      return param_2;
    }
    do {
      *puVar6 = *param_3;
      puVar6[1] = param_3[1];
      puVar6[2] = param_3[2];
      puVar7 = param_3 + 3;
      param_3 = param_3 + 4;
      puVar6[3] = *puVar7;
      puVar6 = puVar6 + 4;
    } while (param_3 != puVar3);
    return param_2;
  }
  lVar9 = *param_1;
  uVar15 = lVar12 + ((long)puVar6 - lVar9 >> 3);
  if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar12 = param_1[2] - lVar9;
  plVar2 = param_1 + 3;
  local_68 = plVar2;
  if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
    uVar8 = lVar12 >> 2;
    if (uVar15 <= uVar8) {
      uVar15 = uVar8;
    }
    if (uVar15 == 0) {
      local_88 = 0;
      goto LAB_006d4090;
    }
  }
  else {
    uVar15 = 0x1fffffffffffffff;
  }
  local_70 = 0;
  local_88 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar15 << 3,8);
  if (local_88 == 0) {
    (**(code **)(*(long *)*plVar2 + 0xb8))();
  }
LAB_006d4090:
  puVar5 = PTR_DAT_02710860;
  puVar6 = (undefined8 *)(local_88 + ((long)param_2 - lVar9 >> 3) * 8);
  local_70 = local_88 + uVar15 * 8;
  local_80 = puVar6;
  while( true ) {
    local_78 = puVar6;
    if (param_3 == param_4) {
      puVar6 = (undefined8 *)FUN_006d4520(param_1,&local_88,param_2);
      if (local_78 != local_80) {
        local_78 = (undefined8 *)
                   ((long)local_78 +
                   (~((long)local_78 + (-8 - (long)local_80)) & 0xfffffffffffffff8U));
      }
      if (local_88 != 0) {
        (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,8);
      }
      return puVar6;
    }
    lVar9 = *plVar2;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) break;
    *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar9;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *puVar6 = *param_3;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    puVar6 = local_78 + 1;
    param_3 = param_3 + 1;
  }
LAB_006d41d8:
                    /* WARNING: Subroutine does not return */
  abort();
}


