/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007846e0; name: FUN_007846e0
 */


void FUN_007846e0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  
  uVar7 = param_1[5];
  lVar10 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 2;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if ((ulong)(lVar5 >> 3) < uVar7 >> 1) {
    uVar7 = uVar1;
  }
  if (uVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar7 << 3,8);
  }
  puVar2 = PTR_DAT_02710860;
  lVar13 = param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_007848d4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  uVar4 = *param_2;
  puVar12 = (undefined8 *)(lVar5 + lVar10 * 8);
  *param_2 = 0;
  puVar14 = puVar12 + 1;
  *puVar12 = uVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar8 = (long *)*param_1;
  plVar11 = (long *)param_1[1];
  if (plVar11 == plVar8) {
    plVar11 = plVar8;
  }
  else {
    do {
      lVar3 = param_1[4];
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_007848d4;
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar3;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar3 = plVar11[-1];
      plVar11 = plVar11 + -1;
      puVar12[-1] = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      puVar12 = puVar12 + -1;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    } while (plVar8 != plVar11);
    plVar8 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
  }
  lVar10 = param_1[2];
  *param_1 = (long)puVar12;
  param_1[1] = (long)puVar14;
  param_1[2] = lVar5 + uVar7 * 8;
  if (plVar11 != plVar8) {
    do {
      plVar9 = plVar11 + -1;
      if (*plVar9 != 0) {
        (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
        plVar11[-1] = 0;
      }
      plVar11 = plVar9;
    } while (plVar8 != plVar9);
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007848b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],plVar8,lVar10 - (long)plVar8,8);
  return;
}


