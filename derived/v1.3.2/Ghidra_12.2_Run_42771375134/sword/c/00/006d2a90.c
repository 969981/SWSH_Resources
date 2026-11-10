/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d2a90; name: FUN_006d2a90
 */


void FUN_006d2a90(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar5 = lVar6 + 1;
  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
      goto LAB_006d2b30;
    }
  }
  else {
    uVar5 = 0x1fffffffffffffff;
  }
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar5 << 3,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006d2b30:
  puVar1 = PTR_DAT_02710860;
  lVar8 = param_1[3];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_006d2c38:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  puVar7 = (undefined8 *)(lVar3 + lVar6 * 8);
  puVar9 = puVar7 + 1;
  *puVar7 = *param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar6 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != lVar6) {
    do {
      lVar10 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_006d2c38;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      puVar7 = puVar7 + -1;
      *puVar7 = *(undefined8 *)(lVar2 + -8);
      lVar2 = lVar2 + -8;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    } while (lVar6 != lVar2);
    lVar6 = *param_1;
  }
  lVar2 = param_1[2];
  param_1[2] = lVar3 + uVar5 * 8;
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar9;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006d2c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar2 - lVar6,8);
  return;
}


