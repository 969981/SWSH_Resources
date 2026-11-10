/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007204b0; name: FUN_007204b0
 */


void FUN_007204b0(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_02710860;
  puVar5 = (undefined4 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 2)) {
    while( true ) {
      lVar3 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar6 + 0x80)) break;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar5 = *param_3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar5 = (undefined4 *)(param_1[1] + 4);
      param_2 = param_2 - 1;
      param_1[1] = (long)puVar5;
      if (param_2 == 0) {
        return;
      }
    }
LAB_007206c4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = (long)puVar5 - *param_1 >> 2;
  uVar7 = lVar6 + param_2;
  if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 2) < 0x1fffffffffffffff) {
    uVar4 = lVar3 >> 1;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      lVar3 = 0;
      goto LAB_007205bc;
    }
  }
  else {
    uVar7 = 0x3fffffffffffffff;
  }
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 2,4);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_007205bc:
  puVar1 = PTR_DAT_02710860;
  puVar5 = (undefined4 *)(lVar3 + lVar6 * 4);
  puVar8 = puVar5;
  do {
    lVar10 = param_1[3];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_007206c4;
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    puVar9 = puVar8 + 1;
    *puVar8 = *param_3;
    param_2 = param_2 - 1;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    puVar8 = puVar9;
  } while (param_2 != 0);
  lVar6 = *param_1;
  lVar10 = param_1[1];
  if (lVar10 != lVar6) {
    do {
      lVar11 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_007206c4;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar11;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = *(undefined4 *)(lVar10 + -4);
      lVar10 = lVar10 + -4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (lVar6 != lVar10);
    lVar6 = *param_1;
  }
  lVar10 = param_1[2];
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar9;
  param_1[2] = lVar3 + uVar7 * 4;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007206a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar10 - lVar6,4);
  return;
}


