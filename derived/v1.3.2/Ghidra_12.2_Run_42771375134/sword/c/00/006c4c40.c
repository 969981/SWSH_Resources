/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c4c40; name: FUN_006c4c40
 */


void FUN_006c4c40(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  lVar9 = param_1[1] - *param_1 >> 3;
  uVar8 = lVar9 + 1;
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar8 == 0) {
      lVar4 = 0;
      goto LAB_006c4ce0;
    }
  }
  else {
    uVar8 = 0x1fffffffffffffff;
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 3,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006c4ce0:
  puVar1 = PTR_DAT_02710860;
  lVar10 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_006c4e1c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar11 = (long *)(lVar4 + lVar9 * 8);
  plVar12 = plVar11 + 1;
  *plVar11 = *param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar7 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  if (plVar6 == plVar7) {
    plVar6 = plVar7;
  }
  else {
    do {
      lVar2 = param_1[3];
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_006c4e1c;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      lVar2 = plVar6[-1];
      plVar6[-1] = 0;
      plVar6 = plVar6 + -1;
      plVar11 = plVar11 + -1;
      *plVar11 = lVar2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    } while (plVar7 != plVar6);
    plVar7 = (long *)*param_1;
    plVar6 = (long *)param_1[1];
  }
  lVar9 = param_1[2];
  *param_1 = (long)plVar11;
  param_1[1] = (long)plVar12;
  param_1[2] = lVar4 + uVar8 * 8;
  while (plVar6 != plVar7) {
    plVar6 = plVar6 + -1;
    puVar3 = (undefined8 *)*plVar6;
    *plVar6 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)();
    }
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006c4dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar7,lVar9 - (long)plVar7,8);
  return;
}


