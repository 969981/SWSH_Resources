/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914dd0; name: FUN_00914dd0
 */


void FUN_00914dd0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar7 = param_1[5];
  lVar5 = param_1[1] - *param_1 >> 3;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar1 = lVar5 * -0x705eccb7e0f1e713 + 1;
  if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar6 = lVar4 * 0x1f4266903e1c31da;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if ((ulong)(lVar4 * -0x705eccb7e0f1e713) < uVar7 >> 1) {
    uVar7 = uVar1;
  }
  if (uVar7 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar7 * 0x2728,8);
  }
  puVar2 = PTR_DAT_02710860;
  lVar11 = param_1[4];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00915004:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
  lVar11 = lVar4 + lVar5 * 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_00915110(lVar11,param_2);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar10 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar5 = lVar11;
  if (puVar9 == puVar10) {
    puVar9 = puVar10;
  }
  else {
    do {
      lVar8 = param_1[4];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00915004;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
      puVar9 = puVar9 + -0x4e5;
      lVar5 = lVar5 + -0x2728;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_00915110(lVar5,puVar9);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (puVar10 != puVar9);
    puVar10 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
  }
  lVar3 = param_1[2];
  param_1[2] = lVar4 + uVar7 * 0x2728;
  *param_1 = lVar5;
  param_1[1] = lVar11 + 0x2728;
  if (puVar9 != puVar10) {
    lVar5 = (long)puVar10 - (long)puVar9;
    do {
      puVar9 = puVar9 + -0x4e5;
      (**(code **)*puVar9)(puVar9);
      lVar5 = lVar5 + 0x2728;
    } while (lVar5 != 0);
  }
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00914fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],puVar10,lVar3 - (long)puVar10,8);
  return;
}


