/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006dca10; name: FUN_006dca10
 */


void FUN_006dca10(long *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 5)) {
    return;
  }
  lVar5 = param_1[1] - *param_1 >> 5;
  lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 5,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    lVar6 = *param_1;
    lVar8 = param_1[1];
    lVar5 = lVar5 * 0x20;
    lVar7 = lVar5;
    if (lVar8 != lVar6) goto LAB_006dca88;
  }
  else {
    lVar6 = *param_1;
    lVar8 = param_1[1];
    lVar5 = lVar3 + lVar5 * 0x20;
    lVar7 = lVar5;
    if (lVar8 != lVar6) {
LAB_006dca88:
      puVar2 = PTR_DAT_02710860;
      lVar5 = 0;
      do {
        lVar9 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar9 = lVar8 + lVar5;
        lVar1 = lVar7 + lVar5;
        *(undefined8 *)(lVar1 + -0x20) = *(undefined8 *)(lVar9 + -0x20);
        *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar9 + -0x18);
        *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar9 + -0x10);
        lVar9 = *(long *)(lVar9 + -8);
        *(long *)(lVar1 + -8) = lVar9;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        lVar5 = lVar5 + -0x20;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while (lVar6 - lVar8 != lVar5);
      lVar6 = *param_1;
      lVar5 = lVar7 + lVar5;
      lVar8 = param_1[1];
      goto LAB_006dcb48;
    }
  }
  lVar7 = lVar5;
  lVar8 = lVar6;
LAB_006dcb48:
  lVar4 = param_1[2];
  *param_1 = lVar5;
  param_1[1] = lVar7;
  param_1[2] = lVar3 + param_2 * 0x20;
  while (lVar5 = lVar8, lVar5 != lVar6) {
    lVar8 = lVar5 + -0x20;
    if (*(long *)(lVar5 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + -8) = 0;
    }
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006dcbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar4 - lVar6,8);
  return;
}


