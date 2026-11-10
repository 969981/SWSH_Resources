/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218400; name: FUN_01218400
 */


void FUN_01218400(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 6)) {
    return;
  }
  lVar8 = param_1[1] - *param_1 >> 6;
  lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 6,8);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar9 = (undefined8 *)(lVar8 * 0x40);
    lVar8 = *param_1;
    lVar12 = param_1[1];
    if (lVar12 != lVar8) goto LAB_01218478;
  }
  else {
    puVar9 = (undefined8 *)(lVar6 + lVar8 * 0x40);
    lVar8 = *param_1;
    lVar12 = param_1[1];
    if (lVar12 != lVar8) {
LAB_01218478:
      puVar5 = PTR_DAT_02710860;
      puVar10 = puVar9;
      do {
        lVar13 = param_1[3];
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        uVar3 = *(undefined8 *)(lVar12 + -0x38);
        uVar2 = *(undefined8 *)(lVar12 + -0x30);
        uVar4 = *(undefined8 *)(lVar12 + -0x28);
        puVar11 = puVar10 + -8;
        *puVar11 = *(undefined8 *)(lVar12 + -0x40);
        puVar10[-6] = uVar2;
        puVar10[-5] = uVar4;
        puVar10[-7] = uVar3;
        uVar2 = *(undefined8 *)(lVar12 + -0x20);
        uVar3 = *(undefined8 *)(lVar12 + -0x18);
        puVar1 = (undefined8 *)(lVar12 + -0x10);
        uVar4 = *(undefined8 *)(lVar12 + -8);
        lVar12 = lVar12 + -0x40;
        puVar10[-2] = *puVar1;
        puVar10[-1] = uVar4;
        puVar10[-4] = uVar2;
        puVar10[-3] = uVar3;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        puVar10 = puVar11;
      } while (lVar8 != lVar12);
      lVar8 = *param_1;
      goto LAB_01218514;
    }
  }
  puVar11 = puVar9;
LAB_01218514:
  lVar12 = param_1[2];
  param_1[2] = lVar6 + param_2 * 0x40;
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar9;
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01218558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar12 - lVar8,8);
  return;
}


