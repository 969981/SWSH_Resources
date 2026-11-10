/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00702660; name: FUN_00702660
 */


long * FUN_00702660(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  puVar1 = PTR_DAT_02710860;
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    if (param_2 == plVar4) {
      lVar13 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar13 = *param_3;
        *param_3 = 0;
        *param_2 = lVar13;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        param_1[1] = param_1[1] + 8;
        return param_2;
      }
LAB_0070292c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar8 = plVar4 + -1;
    if (plVar8 < plVar4) {
      plVar9 = plVar8;
      plVar12 = plVar4;
      do {
        lVar13 = param_1[3];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0070292c;
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar13 = *plVar9;
        plVar10 = plVar9 + 1;
        *plVar9 = 0;
        *plVar12 = lVar13;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        plVar12 = (long *)(param_1[1] + 8);
        param_1[1] = (long)plVar12;
        plVar9 = plVar10;
      } while (plVar10 < plVar4);
    }
    if ((long)plVar4 - (long)(param_2 + 1) != 0) {
      lVar3 = ((long)plVar4 - (long)(param_2 + 1) >> 3) << 3;
      do {
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          *plVar8 = 0;
        }
        lVar13 = lVar3 + -8;
        lVar5 = *(long *)((long)param_2 + lVar3 + -8);
        *(undefined8 *)((long)param_2 + lVar3 + -8) = 0;
        *plVar8 = lVar5;
        lVar3 = lVar13;
        plVar8 = plVar8 + -1;
      } while (lVar13 != 0);
    }
    if (*param_2 != 0) {
      (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
      *param_2 = 0;
    }
    lVar3 = *param_3;
    *param_3 = 0;
    *param_2 = lVar3;
    return param_2;
  }
  lVar3 = *param_1;
  uVar11 = ((long)plVar4 - lVar3 >> 3) + 1;
  if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar13 = param_1[2] - lVar3;
  plVar4 = param_1 + 3;
  local_68 = plVar4;
  if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar13 >> 2;
    if (uVar11 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      local_88 = 0;
      goto LAB_00702818;
    }
  }
  else {
    uVar11 = 0x1fffffffffffffff;
  }
  local_70 = 0;
  local_88 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,uVar11 << 3,8);
  if (local_88 == 0) {
    (**(code **)(*(long *)*plVar4 + 0xb8))();
  }
LAB_00702818:
  local_80 = (undefined8 *)(local_88 + ((long)param_2 - lVar3 >> 3) * 8);
  local_70 = local_88 + uVar11 * 8;
  local_78 = local_80;
  FUN_00706620(&local_88,param_3);
  plVar4 = (long *)FUN_00706890(param_1,&local_88,param_2);
  puVar2 = local_80;
  while (local_78 != puVar2) {
    puVar7 = local_78 + -1;
    plVar8 = local_78 + -1;
    local_78 = puVar7;
    if (*plVar8 != 0) {
      (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      *puVar7 = 0;
    }
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,8);
  }
  return plVar4;
}


