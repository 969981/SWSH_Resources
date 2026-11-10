/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c24c0; name: FUN_006c24c0
 */


void FUN_006c24c0(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined1 *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar13 = 0x333333333333333;
  uVar1 = lVar4 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 4;
  if ((ulong)(lVar6 * -0x3333333333333333) < 0x199999999999999) {
    uVar7 = lVar6 * -0x6666666666666666;
    uVar13 = uVar1;
    if (uVar1 <= uVar7) {
      uVar13 = uVar7;
    }
    if (uVar13 == 0) {
      lVar6 = 0;
      goto LAB_006c2594;
    }
  }
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar13 * 0x50,0x10);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
LAB_006c2594:
  puVar2 = PTR_DAT_02710860;
  lVar8 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_006c271c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar12 = (undefined8 *)(lVar6 + lVar4 * 0x10);
  FUN_006c2730(puVar12,*param_2,*param_3,*param_4,*param_5,*param_6,*param_7);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar4 = *param_1;
  lVar3 = param_1[1];
  puVar9 = puVar12;
  puVar10 = puVar12;
  if (lVar3 != lVar4) {
    do {
      lVar11 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_006c271c;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar11;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar5 = *(undefined8 *)(lVar3 + -0x48);
      puVar10 = puVar9 + -10;
      *puVar10 = *(undefined8 *)(lVar3 + -0x50);
      puVar9[-9] = uVar5;
      uVar5 = *(undefined8 *)(lVar3 + -0x38);
      puVar9[-5] = *(undefined8 *)(lVar3 + -0x28);
      puVar9[-7] = uVar5;
      uVar5 = *(undefined8 *)(lVar3 + -0x18);
      puVar9[-1] = *(undefined8 *)(lVar3 + -8);
      puVar9[-3] = uVar5;
      uVar5 = *(undefined8 *)(lVar3 + -0x40);
      puVar9[-6] = *(undefined8 *)(lVar3 + -0x30);
      puVar9[-8] = uVar5;
      uVar5 = *(undefined8 *)(lVar3 + -0x20);
      puVar9[-2] = *(undefined8 *)(lVar3 + -0x10);
      puVar9[-4] = uVar5;
      lVar3 = lVar3 + -0x50;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      puVar9 = puVar10;
    } while (lVar4 != lVar3);
    lVar4 = *param_1;
  }
  *param_1 = (long)puVar10;
  param_1[1] = (long)(puVar12 + 10);
  lVar3 = param_1[2];
  param_1[2] = lVar6 + uVar13 * 0x50;
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006c26f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar3 - lVar4,0x10);
  return;
}


