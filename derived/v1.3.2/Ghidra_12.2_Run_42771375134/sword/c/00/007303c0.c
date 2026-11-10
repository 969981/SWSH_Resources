/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007303c0; name: FUN_007303c0
 */


void FUN_007303c0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  lVar7 = param_1[1] - *param_1 >> 4;
  uVar9 = lVar7 + 1;
  if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 4) < 0x7ffffffffffffff) {
    uVar6 = lVar5 >> 3;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      lVar5 = 0;
      goto LAB_00730460;
    }
  }
  else {
    uVar9 = 0xfffffffffffffff;
  }
  lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar9 << 4,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00730460:
  puVar2 = PTR_DAT_02710860;
  lVar11 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_007305e8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
  puVar1 = (undefined8 *)(lVar5 + lVar7 * 0x10);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = 0xffffffff;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar8 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  if (plVar12 == plVar8) {
    puVar4 = puVar1;
    plVar12 = plVar8;
  }
  else {
    lVar7 = 0;
    do {
      lVar11 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_007305e8;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar11 = *(long *)((long)plVar12 + lVar7 + -0x10);
      *(long *)((long)puVar1 + lVar7 + -0x10) = lVar11;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      *(undefined8 *)((long)puVar1 + lVar7 + -8) = *(undefined8 *)((long)plVar12 + lVar7 + -8);
      lVar7 = lVar7 + -0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while ((long)plVar8 - (long)plVar12 != lVar7);
    plVar8 = (long *)*param_1;
    puVar4 = (undefined8 *)((long)puVar1 + lVar7);
    plVar12 = (long *)param_1[1];
  }
  lVar7 = param_1[2];
  *param_1 = (long)puVar4;
  param_1[1] = (long)(puVar1 + 2);
  param_1[2] = lVar5 + uVar9 * 0x10;
  if (plVar12 != plVar8) {
    do {
      plVar10 = plVar12 + -2;
      if (*plVar10 != 0) {
        (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
        plVar12[-2] = 0;
      }
      plVar12 = plVar10;
    } while (plVar8 != plVar10);
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007305c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar8,lVar7 - (long)plVar8,8);
  return;
}


