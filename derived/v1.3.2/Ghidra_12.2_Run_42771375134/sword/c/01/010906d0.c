/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010906d0; name: FUN_010906d0
 */


void FUN_010906d0(long *param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  long lVar10;
  
  lVar6 = param_1[1] - *param_1;
  if (lVar6 < -2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = lVar6 >> 1;
  uVar1 = lVar6 + 1;
  uVar5 = param_1[2] - *param_1;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (0x3ffffffffffffffe < (ulong)((long)uVar5 >> 1)) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 << 1,2);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
  }
  puVar2 = PTR_DAT_02710860;
  lVar8 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01090874:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  puVar7 = (undefined2 *)(lVar3 + lVar6 * 2);
  puVar9 = puVar7 + 1;
  *puVar7 = *param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar6 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 != lVar6) {
    do {
      lVar10 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01090874;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      puVar7 = puVar7 + -1;
      *puVar7 = *(undefined2 *)(lVar4 + -2);
      lVar4 = lVar4 + -2;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    } while (lVar6 != lVar4);
    lVar6 = *param_1;
  }
  lVar4 = param_1[2];
  param_1[2] = lVar3 + uVar1 * 2;
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar9;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01090854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar4 - lVar6,2);
  return;
}


