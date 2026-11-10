/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f10390; name: FUN_00f10390
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_00f10390(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
  puVar1 = PTR_DAT_02710860;
  plVar5 = (long *)param_1[1];
  if (plVar5 < (long *)param_1[2]) {
    if (param_2 != plVar5) {
      plVar7 = plVar5 + -1;
      if (plVar7 < plVar5) {
        plVar8 = plVar7;
        plVar10 = plVar5;
        do {
          lVar12 = param_1[3];
          lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00f107b4;
          *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar12;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
          lVar12 = *plVar8;
          plVar9 = plVar8 + 1;
          *plVar8 = 0;
          *plVar10 = lVar12;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
          plVar10 = (long *)(param_1[1] + 8);
          param_1[1] = (long)plVar10;
          plVar8 = plVar9;
        } while (plVar9 < plVar5);
      }
      if ((long)plVar5 - (long)(param_2 + 1) != 0) {
        lVar2 = ((long)plVar5 - (long)(param_2 + 1) >> 3) << 3;
        do {
          if (*plVar7 != 0) {
            (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
            *plVar7 = 0;
          }
          lVar12 = lVar2 + -8;
          lVar3 = *(long *)((long)param_2 + lVar2 + -8);
          *(undefined8 *)((long)param_2 + lVar2 + -8) = 0;
          *plVar7 = lVar3;
          plVar7 = plVar7 + -1;
          lVar2 = lVar12;
        } while (lVar12 != 0);
      }
      plVar5 = param_3;
      if ((param_2 <= param_3) && (plVar5 = param_3 + 1, (long *)param_1[1] <= param_3)) {
        plVar5 = param_3;
      }
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar12 = *param_2;
      *param_2 = lVar2;
      if (lVar12 == 0) {
        return param_2;
      }
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
      return param_2;
    }
    lVar12 = param_1[3];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar12;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar12 = *param_3;
      *param_2 = lVar12;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      param_1[1] = param_1[1] + 8;
      return param_2;
    }
    goto LAB_00f107b4;
  }
  lVar2 = *param_1;
  uVar11 = ((long)plVar5 - lVar2 >> 3) + 1;
  if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar12 = param_1[2] - lVar2;
  lVar2 = (long)param_2 - lVar2;
  uVar6 = lVar2 >> 3;
  plVar5 = param_1 + 3;
  local_68 = plVar5;
  if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar12 >> 2;
    if (uVar11 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 != 0) goto LAB_00f10548;
    lVar12 = 0;
  }
  else {
    uVar11 = 0x1fffffffffffffff;
LAB_00f10548:
    local_70 = 0;
    lVar12 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar11 << 3,8);
    if (lVar12 == 0) {
      (**(code **)(*(long *)*plVar5 + 0xb8))();
    }
  }
  plVar7 = (long *)(lVar12 + uVar6 * 8);
  local_70 = lVar12 + uVar11 * 8;
  local_88 = lVar12;
  local_80 = plVar7;
  local_78 = plVar7;
  if (uVar6 == uVar11) {
    if (lVar2 < 1) {
      uVar6 = lVar2 >> 2;
      if (lVar2 == 0) {
        uVar6 = 1;
      }
      if (uVar6 == 0) {
        local_70 = 0;
        lVar2 = 0;
      }
      else {
        lVar2 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar6 << 3,8);
        if (lVar2 == 0) {
          (**(code **)(*(long *)*plVar5 + 0xb8))();
        }
        local_70 = lVar2 + uVar6 * 8;
      }
      plVar7 = (long *)(lVar2 + (uVar6 >> 2) * 8);
      local_88 = lVar2;
      local_80 = plVar7;
      local_78 = plVar7;
      if (lVar12 != 0) {
        (**(code **)(*(long *)*plVar5 + 0x18))((long *)*plVar5,lVar12,uVar11 << 3,8);
      }
    }
    else {
      uVar11 = uVar6 + 2;
      if (-1 < (long)(uVar6 + 1)) {
        uVar11 = uVar6 + 1;
      }
      plVar7 = (long *)((long)plVar7 + (uVar11 & 0x3ffffffffffffffe) * -4);
      local_80 = plVar7;
      local_78 = plVar7;
    }
  }
  lVar12 = *plVar5;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar12;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar12 = *param_3;
    *plVar7 = lVar12;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    local_78 = local_78 + 1;
    plVar7 = (long *)FUN_01591660(param_1,&local_88,param_2);
    plVar5 = local_80;
    while (local_78 != plVar5) {
      plVar8 = local_78 + -1;
      plVar10 = local_78 + -1;
      local_78 = plVar8;
      if (*plVar10 != 0) {
        (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
        *plVar8 = 0;
      }
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,local_88,local_70 - local_88,8);
    }
    return plVar7;
  }
LAB_00f107b4:
                    /* WARNING: Subroutine does not return */
  abort();
}


