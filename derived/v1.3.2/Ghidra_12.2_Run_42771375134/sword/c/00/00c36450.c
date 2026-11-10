/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c36450; name: FUN_00c36450
 */


void FUN_00c36450(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  uVar6 = param_1[5];
  lVar10 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  uVar5 = lVar4 >> 2;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if ((ulong)(lVar4 >> 3) < uVar6 >> 1) {
    uVar6 = uVar1;
  }
  if (uVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar6 << 3,8);
  }
  puVar2 = PTR_DAT_02710860;
  lVar11 = param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00c36658:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar11 = *param_2;
  plVar9 = (long *)(lVar4 + lVar10 * 8);
  *plVar9 = lVar11;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar7 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  plVar12 = plVar9;
  if (plVar8 == plVar7) {
    plVar8 = plVar7;
  }
  else {
    do {
      lVar3 = param_1[4];
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c36658;
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar3;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar3 = plVar8[-1];
      plVar8 = plVar8 + -1;
      plVar12[-1] = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      plVar12 = plVar12 + -1;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    } while (plVar7 != plVar8);
    plVar7 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
  }
  lVar10 = param_1[2];
  *param_1 = (long)plVar12;
  param_1[1] = (long)(plVar9 + 1);
  param_1[2] = lVar4 + uVar6 * 8;
  if (plVar8 != plVar7) {
    do {
      plVar9 = plVar8 + -1;
      if (*plVar9 != 0) {
        (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
        plVar8[-1] = 0;
      }
      plVar8 = plVar9;
    } while (plVar7 != plVar9);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c36638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],plVar7,lVar10 - (long)plVar7,8);
  return;
}


