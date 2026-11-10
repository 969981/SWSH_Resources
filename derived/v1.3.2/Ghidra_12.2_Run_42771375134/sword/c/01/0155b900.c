/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155b900; name: FUN_0155b900
 */


void FUN_0155b900(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar7 = lVar9 + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
      goto LAB_0155b9a0;
    }
  }
  else {
    uVar7 = 0x1fffffffffffffff;
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 3,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_0155b9a0:
  puVar1 = PTR_DAT_02710860;
  lVar12 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_0155bb00:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar12;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  uVar3 = *param_2;
  puVar11 = (undefined8 *)(lVar4 + lVar9 * 8);
  *param_2 = 0;
  puVar13 = puVar11 + 1;
  *puVar11 = uVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar6 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  if (plVar10 == plVar6) {
    plVar10 = plVar6;
  }
  else {
    do {
      lVar2 = param_1[3];
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0155bb00;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      lVar2 = plVar10[-1];
      plVar10 = plVar10 + -1;
      puVar11[-1] = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      puVar11 = puVar11 + -1;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    } while (plVar6 != plVar10);
    plVar6 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
  }
  lVar9 = param_1[2];
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar13;
  param_1[2] = lVar4 + uVar7 * 8;
  if (plVar10 != plVar6) {
    do {
      plVar8 = plVar10 + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        plVar10[-1] = 0;
      }
      plVar10 = plVar8;
    } while (plVar6 != plVar8);
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0155bae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar6,lVar9 - (long)plVar6,8);
  return;
}


