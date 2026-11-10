/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00728ab0; name: FUN_00728ab0
 */


void FUN_00728ab0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  puVar2 = PTR_DAT_02710860;
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 6)) {
    while( true ) {
      lVar4 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar8 + 0x80)) break;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar4;
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 0x40;
      if (param_2 == 0) {
        return;
      }
    }
LAB_00728cac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar8 = param_1[1] - *param_1 >> 6;
  uVar11 = lVar8 + param_2;
  if (uVar11 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  if ((ulong)(lVar4 >> 6) < 0x1ffffffffffffff) {
    uVar5 = lVar4 >> 5;
    if (uVar11 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 == 0) {
      lVar4 = 0;
      goto LAB_00728b98;
    }
  }
  else {
    uVar11 = 0x3ffffffffffffff;
  }
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar11 << 6,0x10);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_00728b98:
  puVar2 = PTR_DAT_02710860;
  puVar10 = (undefined8 *)(lVar4 + lVar8 * 0x40);
  puVar12 = puVar10;
  do {
    lVar13 = param_1[3];
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00728cac;
    puVar12 = puVar12 + 8;
    param_2 = param_2 - 1;
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar13;
  } while (param_2 != 0);
  lVar8 = *param_1;
  lVar13 = param_1[1];
  puVar9 = puVar10;
  if (lVar13 != lVar8) {
    do {
      lVar14 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00728cac;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar14;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar7 = *(undefined8 *)(lVar13 + -0x38);
      uVar6 = *(undefined8 *)(lVar13 + -0x30);
      uVar1 = *(undefined8 *)(lVar13 + -0x28);
      puVar10 = puVar9 + -8;
      *puVar10 = *(undefined8 *)(lVar13 + -0x40);
      puVar9[-6] = uVar6;
      puVar9[-5] = uVar1;
      puVar9[-7] = uVar7;
      uVar6 = *(undefined8 *)(lVar13 + -0x18);
      puVar9[-1] = *(undefined8 *)(lVar13 + -8);
      uVar7 = *(undefined8 *)(lVar13 + -0x10);
      puVar9[-4] = *(undefined8 *)(lVar13 + -0x20);
      puVar9[-3] = uVar6;
      puVar9[-2] = uVar7;
      lVar13 = lVar13 + -0x40;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar9 = puVar10;
    } while (lVar8 != lVar13);
    lVar8 = *param_1;
  }
  lVar13 = param_1[2];
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar12;
  param_1[2] = lVar4 + uVar11 * 0x40;
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00728c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar13 - lVar8,0x10);
  return;
}


