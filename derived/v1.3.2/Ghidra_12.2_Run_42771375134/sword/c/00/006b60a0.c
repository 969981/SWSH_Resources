/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b60a0; name: FUN_006b60a0
 */


void FUN_006b60a0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 5)) {
    return;
  }
  plVar6 = param_1 + 3;
  lVar7 = param_1[1] - *param_1 >> 5;
  lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,param_2 << 5,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)*plVar6 + 0xb8))();
    puVar8 = (undefined8 *)(lVar7 * 0x20);
    lVar7 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 == lVar7) goto LAB_006b61ac;
  }
  else {
    puVar8 = (undefined8 *)(lVar2 + lVar7 * 0x20);
    lVar7 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 == lVar7) {
LAB_006b61ac:
      lVar11 = lVar7;
      puVar10 = puVar8;
      goto LAB_006b61b4;
    }
  }
  puVar1 = PTR_DAT_02710860;
  puVar9 = puVar8;
  do {
    lVar12 = *plVar6;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar4 = *(undefined8 *)(lVar11 + -0x20);
    *(undefined8 *)(lVar11 + -0x20) = 0;
    puVar10 = puVar9 + -4;
    *puVar10 = uVar4;
    uVar4 = *(undefined8 *)(lVar11 + -0x18);
    uVar5 = *(undefined8 *)(lVar11 + -8);
    puVar9[-2] = *(undefined8 *)(lVar11 + -0x10);
    puVar9[-1] = uVar5;
    puVar9[-3] = uVar4;
    lVar11 = lVar11 + -0x20;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar9 = puVar10;
  } while (lVar7 != lVar11);
  lVar7 = param_1[1];
  lVar11 = *param_1;
LAB_006b61b4:
  lVar3 = param_1[2];
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar8;
  param_1[2] = lVar2 + param_2 * 0x20;
  while (lVar7 != lVar11) {
    lVar7 = lVar7 + -0x20;
    FUN_006b5650(plVar6,lVar7);
  }
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006b6218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar6 + 0x18))((long *)*plVar6,lVar11,lVar3 - lVar11,8);
  return;
}


