/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc3760; name: FUN_00fc3760
 */


void FUN_00fc3760(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar7 = lVar9 + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
      goto LAB_00fc3800;
    }
  }
  else {
    uVar7 = 0x1fffffffffffffff;
  }
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 3,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00fc3800:
  puVar1 = PTR_DAT_02710860;
  lVar10 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00fc3974:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar10 = *param_2;
  plVar8 = (long *)(lVar3 + lVar9 * 8);
  *plVar8 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar5 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  plVar11 = plVar8;
  if (plVar6 == plVar5) {
    plVar6 = plVar5;
  }
  else {
    do {
      lVar2 = param_1[3];
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00fc3974;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      lVar2 = plVar6[-1];
      plVar6 = plVar6 + -1;
      plVar11[-1] = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      plVar11 = plVar11 + -1;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    } while (plVar5 != plVar6);
    plVar5 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
  }
  lVar9 = param_1[2];
  *param_1 = (long)plVar11;
  param_1[1] = (long)(plVar8 + 1);
  param_1[2] = lVar3 + uVar7 * 8;
  if (plVar6 != plVar5) {
    do {
      plVar8 = plVar6 + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        plVar6[-1] = 0;
      }
      plVar6 = plVar8;
    } while (plVar5 != plVar8);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fc3954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar5,lVar9 - (long)plVar5,8);
  return;
}


