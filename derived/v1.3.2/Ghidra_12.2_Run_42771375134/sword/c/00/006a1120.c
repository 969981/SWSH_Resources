/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a1120; name: FUN_006a1120
 */


void FUN_006a1120(long *param_1,ulong param_2)

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
  long lVar10;
  long lVar11;
  
  if ((ulong)((param_1[2] - *param_1 >> 4) * -0x5555555555555555) < param_2) {
    lVar6 = param_1[1] - *param_1 >> 4;
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x30,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar2 = PTR_DAT_02710860;
    lVar7 = lVar3 + lVar6 * 0x10;
    lVar9 = *param_1;
    lVar10 = param_1[1];
    if (lVar10 == lVar9) {
      lVar6 = lVar7;
      lVar10 = lVar9;
    }
    else {
      lVar11 = 0;
      do {
        lVar8 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar8 = lVar10 + lVar11;
        lVar1 = lVar3 + lVar6 * 0x10 + lVar11;
        *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(lVar8 + -0x30);
        *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(lVar8 + -0x28);
        *(undefined8 *)(lVar1 + -0x20) = *(undefined8 *)(lVar8 + -0x20);
        *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar8 + -0x18);
        lVar5 = *(long *)(lVar8 + -0x10);
        *(long *)(lVar1 + -0x10) = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar8 + -8);
        lVar11 = lVar11 + -0x30;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while (lVar9 - lVar10 != lVar11);
      lVar9 = *param_1;
      lVar6 = lVar3 + lVar6 * 0x10 + lVar11;
      lVar10 = param_1[1];
    }
    lVar11 = param_1[2];
    *param_1 = lVar6;
    param_1[1] = lVar7;
    param_1[2] = lVar3 + param_2 * 0x30;
    while (lVar3 = lVar10, lVar3 != lVar9) {
      lVar10 = lVar3 + -0x30;
      if (*(long *)(lVar3 + -0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + -0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -0x10) = 0;
      }
    }
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006a1314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar9,lVar11 - lVar9,8);
      return;
    }
  }
  return;
}


