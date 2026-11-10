/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1d670; name: FUN_00e1d670
 */


void FUN_00e1d670(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  lVar9 = param_1[1] - *param_1 >> 4;
  uVar6 = lVar9 + 1;
  if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 4) < 0x7ffffffffffffff) {
    uVar5 = lVar4 >> 3;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (uVar6 == 0) {
      lVar4 = 0;
      goto LAB_00e1d714;
    }
  }
  else {
    uVar6 = 0xfffffffffffffff;
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 4,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00e1d714:
  puVar1 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00e1d8a0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  uVar3 = *param_2;
  puVar10 = (undefined8 *)(lVar4 + lVar9 * 0x10);
  *param_2 = 0;
  puVar12 = puVar10 + 2;
  *puVar10 = uVar3;
  *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(param_2 + 1);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar7 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  if (plVar13 == plVar7) {
    plVar13 = plVar7;
  }
  else {
    lVar9 = 0;
    do {
      lVar11 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00e1d8a0;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar11 = *(long *)((long)plVar13 + lVar9 + -0x10);
      *(long *)((long)puVar10 + lVar9 + -0x10) = lVar11;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      *(undefined1 *)((long)puVar10 + lVar9 + -8) = *(undefined1 *)((long)plVar13 + lVar9 + -8);
      lVar9 = lVar9 + -0x10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while ((long)plVar7 - (long)plVar13 != lVar9);
    plVar7 = (long *)*param_1;
    puVar10 = (undefined8 *)((long)puVar10 + lVar9);
    plVar13 = (long *)param_1[1];
  }
  lVar9 = param_1[2];
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar12;
  param_1[2] = lVar4 + uVar6 * 0x10;
  if (plVar13 != plVar7) {
    do {
      plVar8 = plVar13 + -2;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        plVar13[-2] = 0;
      }
      plVar13 = plVar8;
    } while (plVar7 != plVar8);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e1d87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar9 - (long)plVar7,8);
  return;
}


