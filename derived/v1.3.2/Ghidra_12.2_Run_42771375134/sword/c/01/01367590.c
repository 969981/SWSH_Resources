/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01367590; name: FUN_01367590
 */


void FUN_01367590(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  lVar8 = param_1[1] - *param_1 >> 4;
  uVar7 = lVar8 + 1;
  if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  plVar1 = param_1 + 3;
  if ((ulong)(lVar4 >> 4) < 0x7ffffffffffffff) {
    uVar5 = lVar4 >> 3;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
      goto LAB_01367638;
    }
  }
  else {
    uVar7 = 0xfffffffffffffff;
  }
  lVar4 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar7 << 4,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
LAB_01367638:
  lVar8 = lVar4 + lVar8 * 0x10;
  FUN_013677a0(plVar1,lVar8,param_2);
  puVar2 = PTR_DAT_02710860;
  plVar9 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  if (plVar12 == plVar9) {
    lVar11 = lVar8;
    plVar12 = plVar9;
  }
  else {
    lVar11 = 0;
    do {
      lVar10 = *plVar1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar10 = *(long *)((long)plVar12 + lVar11 + -0x10);
      *(long *)(lVar8 + lVar11 + -0x10) = lVar10;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar8 + lVar11 + -8) = *(undefined8 *)((long)plVar12 + lVar11 + -8);
      lVar11 = lVar11 + -0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while ((long)plVar9 - (long)plVar12 != lVar11);
    plVar9 = (long *)*param_1;
    lVar11 = lVar8 + lVar11;
    plVar12 = (long *)param_1[1];
  }
  lVar3 = param_1[2];
  *param_1 = lVar11;
  param_1[1] = lVar8 + 0x10;
  param_1[2] = lVar4 + uVar7 * 0x10;
  if (plVar12 != plVar9) {
    do {
      plVar6 = plVar12 + -2;
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        plVar12[-2] = 0;
      }
      plVar12 = plVar6;
    } while (plVar9 != plVar6);
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0136776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,plVar9,lVar3 - (long)plVar9,8);
  return;
}


