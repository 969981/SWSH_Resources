/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c5c70; name: FUN_010c5c70
 */


void FUN_010c5c70(long *param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  uVar7 = ((long)param_3 - (long)param_2 >> 3) * -0x5555555555555555;
  lVar4 = param_1[2];
  plVar6 = (long *)*param_1;
  if ((ulong)((lVar4 - (long)plVar6 >> 3) * -0x5555555555555555) < uVar7) {
    if (plVar6 != (long *)0x0) {
      plVar3 = (long *)param_1[1];
      if ((long *)param_1[1] == plVar6) {
        plVar3 = plVar6;
      }
      else {
        do {
          if (plVar3[-1] != 0) {
            (**(code **)(*(long *)(plVar3[-1] + 0x48) + 0x18))();
            plVar3[-1] = 0;
          }
          if (plVar3[-2] != 0) {
            (**(code **)(*(long *)(plVar3[-2] + 0x48) + 0x18))();
            plVar3[-2] = 0;
          }
          plVar9 = plVar3 + -3;
          if (plVar3[-3] != 0) {
            (**(code **)(*(long *)(plVar3[-3] + 0x48) + 0x18))();
            plVar3[-3] = 0;
          }
          plVar3 = plVar9;
        } while (plVar6 != plVar9);
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
    if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (lVar4 >> 3) * 0x5555555555555556;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    uVar5 = 0xaaaaaaaaaaaaaaa;
    if ((ulong)((lVar4 >> 3) * -0x5555555555555555) < 0x555555555555555) {
      uVar5 = uVar7;
    }
    plVar6 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 * 0x18,8);
    if (plVar6 == (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)(plVar6 + uVar5 * 3);
    puVar2 = PTR_DAT_02710860;
    for (; param_2 != param_3; param_2 = param_2 + 3) {
      lVar8 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_010c6090:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar8 = *param_2;
      *plVar6 = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar8 = param_2[1];
      plVar6[1] = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar8 = param_2[2];
      plVar6[2] = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      plVar6 = (long *)(param_1[1] + 0x18);
      param_1[1] = (long)plVar6;
    }
  }
  else {
    uVar5 = (param_1[1] - (long)plVar6 >> 3) * -0x5555555555555555;
    plVar3 = (long *)((long)param_2 + (param_1[1] - (long)plVar6));
    puVar1 = (undefined4 *)PTR_DAT_02710860;
    plVar9 = plVar3;
    if (uVar7 <= uVar5) {
      plVar9 = param_3;
    }
    for (; PTR_DAT_02710860 = (undefined *)puVar1, plVar9 != param_2; param_2 = param_2 + 3) {
      lVar4 = *param_2;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar8 = *plVar6;
      *plVar6 = lVar4;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      lVar4 = param_2[1];
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar8 = plVar6[1];
      plVar6[1] = lVar4;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      lVar4 = param_2[2];
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar8 = plVar6[2];
      plVar6[2] = lVar4;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      plVar6 = plVar6 + 3;
      puVar1 = (undefined4 *)PTR_DAT_02710860;
    }
    if (uVar5 < uVar7) {
      if (plVar9 != param_3) {
        plVar6 = (long *)param_1[1];
        do {
          lVar8 = param_1[3];
          lVar4 = nn::os::GetTlsValue(*puVar1);
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_010c6090;
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          lVar8 = *plVar3;
          *plVar6 = lVar8;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
          }
          lVar8 = plVar3[1];
          plVar6[1] = lVar8;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
          }
          lVar8 = plVar3[2];
          plVar6[2] = lVar8;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
          }
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
          plVar3 = plVar3 + 3;
          plVar6 = (long *)(param_1[1] + 0x18);
          param_1[1] = (long)plVar6;
        } while (plVar3 != param_3);
      }
    }
    else {
      plVar3 = (long *)param_1[1];
      while (plVar9 = plVar3, plVar9 != plVar6) {
        if (plVar9[-1] != 0) {
          (**(code **)(*(long *)(plVar9[-1] + 0x48) + 0x18))();
          plVar9[-1] = 0;
        }
        if (plVar9[-2] != 0) {
          (**(code **)(*(long *)(plVar9[-2] + 0x48) + 0x18))();
          plVar9[-2] = 0;
        }
        plVar3 = plVar9 + -3;
        if (plVar9[-3] != 0) {
          (**(code **)(*(long *)(plVar9[-3] + 0x48) + 0x18))();
          plVar9[-3] = 0;
        }
      }
      param_1[1] = (long)plVar6;
    }
  }
  return;
}


