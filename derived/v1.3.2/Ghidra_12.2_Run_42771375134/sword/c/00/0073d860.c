/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073d860; name: FUN_0073d860
 */


uint FUN_0073d860(long param_1,undefined4 *param_2,undefined8 *param_3,ulong *param_4,long param_5,
                 ulong *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  
  local_70 = 0;
  local_68 = 0;
  local_78[0] = *param_2;
  plVar12 = *(long **)(param_1 + 0x10);
  uVar15 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
  uVar14 = *param_4;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0073dd08;
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x1b0,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_00721450(lVar7,param_1 + 0x818,6,(int)uVar14,1,uVar15);
  *(long **)(lVar7 + 8) = plVar12;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x1b0;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  lVar6 = local_68;
  uVar14 = *param_6;
  local_70 = lVar7;
  if (uVar14 == 0) {
    local_68 = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    lVar6 = 0;
  }
  else {
    plVar12 = *(long **)(param_1 + 0x10);
    uVar15 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0073dd08;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,0x140,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    FUN_0071dad0(lVar6,uVar14 & 0xffffffff,uVar15);
    *(long **)(lVar6 + 8) = plVar12;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x140;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    lVar7 = local_70;
    local_68 = lVar6;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0x98) + 0x58);
  puVar8 = (undefined8 *)thunk_FUN_0199c7e0(lVar7);
  if (*param_4 == 0) {
    if (lVar7 != 0) goto LAB_0073dadc;
  }
  else {
    uVar14 = 0;
    do {
      uVar15 = *param_3;
      uVar2 = param_3[1];
      iVar4 = *(int *)(lVar7 + 0x68);
      uVar3 = param_3[3];
      uVar14 = uVar14 + 1;
      puVar8[2] = param_3[2];
      puVar8[3] = uVar3;
      *puVar8 = uVar15;
      puVar8[1] = uVar2;
      uVar15 = param_3[4];
      uVar2 = param_3[5];
      puVar1 = param_3 + 6;
      uVar3 = param_3[7];
      param_3 = param_3 + 8;
      puVar8[6] = *puVar1;
      puVar8[7] = uVar3;
      puVar8[4] = uVar15;
      puVar8[5] = uVar2;
      puVar8 = (undefined8 *)((long)puVar8 + (long)iVar4);
    } while (uVar14 < *param_4);
LAB_0073dadc:
    thunk_FUN_0199c800(lVar7);
  }
  if (*param_6 != 0) {
    puVar9 = (undefined2 *)thunk_FUN_0199c7e0(lVar6 + 0x58);
    if (*param_6 != 0) {
      uVar14 = 0;
      do {
        iVar4 = *(int *)(lVar6 + 0xc0);
        *puVar9 = *(undefined2 *)(param_5 + uVar14 * 2);
        uVar14 = uVar14 + 1;
        puVar9 = (undefined2 *)((long)puVar9 + (long)iVar4);
      } while (uVar14 < *param_6);
    }
    thunk_FUN_0199c800(lVar6 + 0x58);
  }
  lVar6 = local_70;
  puVar11 = *(undefined4 **)(param_1 + 0x790);
  lVar7 = *(long *)(param_1 + 0x788);
  uVar5 = (int)((ulong)((long)puVar11 - lVar7) >> 3) * -0x55555555;
  if (uVar5 != 0) {
    uVar14 = 0;
    plVar12 = (long *)(lVar7 + 0x10);
    do {
      plVar13 = (long *)(lVar7 + uVar14 * 0x18 + 8);
      uVar10 = (uint)uVar14;
      if (*plVar13 == 0) {
        *(undefined4 *)(plVar12 + -2) = local_78[0];
        if (local_70 == 0) {
          *plVar13 = 0;
          lVar6 = local_68;
        }
        else {
          (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
          lVar7 = *plVar13;
          *plVar13 = lVar6;
          lVar6 = local_68;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
            lVar6 = local_68;
          }
        }
        local_68 = lVar6;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar7 = *plVar12;
        *plVar12 = lVar6;
        uVar5 = uVar10;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        goto joined_r0x0073dd00;
      }
      uVar14 = (ulong)(uVar10 + 1);
      plVar12 = plVar12 + 3;
    } while (uVar10 + 1 < uVar5);
  }
  if (*(undefined4 **)(param_1 + 0x798) == puVar11) {
    FUN_00740520(param_1 + 0x788,local_78);
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x7a0);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_0073dd08:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar15;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar11 = local_78[0];
    *(long *)(puVar11 + 2) = local_70;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    *(long *)(puVar11 + 4) = local_68;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *(long *)(param_1 + 0x790) = *(long *)(param_1 + 0x790) + 0x18;
  }
joined_r0x0073dd00:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return uVar5;
}


