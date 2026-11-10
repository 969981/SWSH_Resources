/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00deb1a0; name: FUN_00deb1a0
 */


void FUN_00deb1a0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar6;
  float fVar7;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_28;
  
  uVar1 = FUN_00e45920(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 & 1) != 0) {
switchD_00deb25c_caseD_3:
    *(undefined1 *)(param_1 + 0x154) = 0;
    return;
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x88) + 0x418);
  if (((plVar2 != *(long **)(*(long *)(param_1 + 0x88) + 0x420)) && (lVar3 = *plVar2, lVar3 != 0))
     && (puVar4 = *(undefined8 **)(lVar3 + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00c781c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar4 = puVar4 + -10;
        goto LAB_00deb238;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_00deb238:
  local_28 = FUN_0069d2b0(puVar4);
  switch(*(undefined4 *)(param_1 + 0x150)) {
  case 0:
    local_60 = 0x82ee073b369575c6;
    local_58 = "fi_runturn01";
    local_50 = 0xc;
    local_48 = 0;
    (**(code **)(**(long **)(param_1 + 0x88) + 0x1b0))(*(long **)(param_1 + 0x88),&local_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    goto LAB_00deb38c;
  case 1:
    uVar1 = FUN_006b94c0(&local_28);
    if ((uVar1 & 1) != 0) {
      return;
    }
    (**(code **)(**(long **)(param_1 + 0x88) + 0x1a8))
              (*(long **)(param_1 + 0x88),PTR_DAT_0271ecf0,0);
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
switchD_00deb25c_caseD_2:
    plVar2 = (long *)FUN_006b92e0(&local_28);
    if (*plVar2 == -0x7d11f8c4c96a8a3a) {
      fVar5 = (float)FUN_006b9480(&local_28);
      fVar6 = fVar5;
      if (1.0 < fVar5) {
        fVar6 = 1.0;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar5) {
        fVar7 = fVar6;
      }
      FUN_00a92cd0(*(float *)(param_1 + 0x164) +
                   fVar7 * ((float)((ulong)*(undefined8 *)(param_1 + 0x170) >> 0x20) -
                           *(float *)(param_1 + 0x164)),*(undefined8 *)(param_1 + 0x170),
                   (int)*(undefined8 *)(param_1 + 0x178));
      lVar3 = *(long *)(param_1 + 0x88);
      *(undefined8 *)(lVar3 + 0xa8) = extraout_var_00;
      *(ulong *)(lVar3 + 0xa0) = CONCAT44(extraout_var,extraout_s0);
      *(undefined1 *)(lVar3 + 0xc0) = 1;
      if (1.0 <= fVar7) {
        (**(code **)(**(long **)(param_1 + 0x88) + 0x180))
                  (*(undefined4 *)PTR_DAT_0271ecc0,*(long **)(param_1 + 0x88),PTR_DAT_0271e870);
LAB_00deb38c:
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      }
    }
switchD_00deb25c_default:
    return;
  case 2:
    goto switchD_00deb25c_caseD_2;
  case 3:
    goto switchD_00deb25c_caseD_3;
  default:
    goto switchD_00deb25c_default;
  }
}


