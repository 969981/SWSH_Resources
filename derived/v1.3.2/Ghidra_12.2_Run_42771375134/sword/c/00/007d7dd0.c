/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d7dd0; name: FUN_007d7dd0
 */


void FUN_007d7dd0(long *param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  uVar7 = (long)param_3 - (long)param_2 >> 3;
  lVar4 = param_1[2];
  plVar6 = (long *)*param_1;
  if ((ulong)(lVar4 - (long)plVar6 >> 3) < uVar7) {
    if (plVar6 != (long *)0x0) {
      if ((long *)param_1[1] == plVar6) {
        plVar3 = plVar6;
      }
      else {
        plVar3 = (long *)param_1[1];
        do {
          plVar8 = plVar3 + -1;
          if (*plVar8 != 0) {
            (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
            plVar3[-1] = 0;
          }
          plVar3 = plVar8;
        } while (plVar6 != plVar8);
        lVar4 = param_1[2];
        plVar3 = (long *)*param_1;
      }
      param_1[1] = (long)plVar6;
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar3,lVar4 - (long)plVar3,8);
      lVar4 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    if (uVar7 >> 0x3d != 0) {
LAB_007d7fdc:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
      uVar5 = lVar4 >> 2;
      if ((uVar7 <= uVar5) && (uVar7 = uVar5, uVar5 >> 0x3d != 0)) goto LAB_007d7fdc;
    }
    else {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar6 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 3,8);
    if (plVar6 == (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    param_1[2] = (long)(plVar6 + uVar7);
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    puVar2 = PTR_DAT_02710860;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      lVar9 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_007d80b8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar9 = *param_2;
      *plVar6 = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      plVar6 = (long *)(param_1[1] + 8);
      param_1[1] = (long)plVar6;
    }
  }
  else {
    uVar5 = param_1[1] - (long)plVar6 >> 3;
    plVar3 = (long *)((long)param_2 + (param_1[1] - (long)plVar6));
    puVar1 = (undefined4 *)PTR_DAT_02710860;
    plVar8 = plVar3;
    if (uVar7 <= uVar5) {
      plVar8 = param_3;
    }
    for (; PTR_DAT_02710860 = (undefined *)puVar1, plVar8 != param_2; param_2 = param_2 + 1) {
      lVar4 = *param_2;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar9 = *plVar6;
      *plVar6 = lVar4;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
      }
      plVar6 = plVar6 + 1;
      puVar1 = (undefined4 *)PTR_DAT_02710860;
    }
    if (uVar5 < uVar7) {
      if (plVar8 != param_3) {
        plVar6 = (long *)param_1[1];
        do {
          lVar9 = param_1[3];
          lVar4 = nn::os::GetTlsValue(*puVar1);
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_007d80b8;
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          lVar9 = *plVar3;
          *plVar6 = lVar9;
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
          }
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          plVar3 = plVar3 + 1;
          plVar6 = (long *)(param_1[1] + 8);
          param_1[1] = (long)plVar6;
        } while (param_3 != plVar3);
      }
    }
    else {
      if ((long *)param_1[1] != plVar6) {
        plVar3 = (long *)param_1[1];
        do {
          plVar8 = plVar3 + -1;
          if (*plVar8 != 0) {
            (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
            plVar3[-1] = 0;
          }
          plVar3 = plVar8;
        } while (plVar6 != plVar8);
      }
      param_1[1] = (long)plVar6;
    }
  }
  return;
}


