/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00753bf0; name: FUN_00753bf0
 */


void FUN_00753bf0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 6)) {
    return;
  }
  lVar7 = param_1[1] - *param_1 >> 6;
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 6,0x10);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar8 = (undefined8 *)(lVar7 * 0x40);
    lVar7 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 != lVar7) goto LAB_00753c68;
  }
  else {
    puVar8 = (undefined8 *)(lVar3 + lVar7 * 0x40);
    lVar7 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 != lVar7) {
LAB_00753c68:
      puVar2 = PTR_DAT_02710860;
      puVar9 = puVar8;
      do {
        lVar12 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        uVar6 = *(undefined8 *)(lVar11 + -0x38);
        uVar5 = *(undefined8 *)(lVar11 + -0x30);
        uVar1 = *(undefined8 *)(lVar11 + -0x28);
        puVar10 = puVar9 + -8;
        *puVar10 = *(undefined8 *)(lVar11 + -0x40);
        puVar9[-6] = uVar5;
        puVar9[-5] = uVar1;
        puVar9[-7] = uVar6;
        uVar5 = *(undefined8 *)(lVar11 + -0x18);
        puVar9[-1] = *(undefined8 *)(lVar11 + -8);
        uVar6 = *(undefined8 *)(lVar11 + -0x10);
        puVar9[-4] = *(undefined8 *)(lVar11 + -0x20);
        puVar9[-3] = uVar5;
        puVar9[-2] = uVar6;
        lVar11 = lVar11 + -0x40;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        puVar9 = puVar10;
      } while (lVar7 != lVar11);
      lVar7 = *param_1;
      goto LAB_00753d10;
    }
  }
  puVar10 = puVar8;
LAB_00753d10:
  lVar11 = param_1[2];
  param_1[2] = lVar3 + param_2 * 0x40;
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar8;
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00753d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,lVar11 - lVar7,0x10);
  return;
}


