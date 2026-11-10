/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d9b30; name: FUN_006d9b30
 */


void FUN_006d9b30(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar8 = lVar9 + 1;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
      goto LAB_006d9bd0;
    }
  }
  else {
    uVar8 = 0x1fffffffffffffff;
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 3,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006d9bd0:
  puVar1 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_006d9d30:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar12;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  uVar4 = *param_2;
  puVar11 = (undefined8 *)(lVar5 + lVar9 * 8);
  *param_2 = 0;
  puVar13 = puVar11 + 1;
  *puVar11 = uVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar7 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  if (plVar10 == plVar7) {
    plVar10 = plVar7;
  }
  else {
    do {
      lVar2 = param_1[3];
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_006d9d30;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      plVar3 = (long *)plVar10[-1];
      plVar10 = plVar10 + -1;
      puVar11[-1] = plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      puVar11 = puVar11 + -1;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    } while (plVar7 != plVar10);
    plVar7 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
  }
  lVar9 = param_1[2];
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar13;
  param_1[2] = lVar5 + uVar8 * 8;
  if (plVar10 != plVar7) {
    do {
      plVar3 = plVar10 + -1;
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x18))();
        plVar10[-1] = 0;
      }
      plVar10 = plVar3;
    } while (plVar7 != plVar3);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar9 - (long)plVar7,8);
  return;
}


