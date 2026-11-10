/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b36e0; name: FUN_006b36e0
 */


void FUN_006b36e0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((ulong)((param_1[2] - *param_1 >> 4) * -0x5555555555555555) < param_2) {
    lVar7 = param_1[1] - *param_1 >> 4;
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x30,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar3 = PTR_DAT_02710860;
    lVar8 = lVar4 + lVar7 * 0x10;
    lVar10 = *param_1;
    lVar11 = param_1[1];
    if (lVar11 == lVar10) {
      lVar7 = lVar8;
      lVar11 = lVar10;
    }
    else {
      lVar12 = 0;
      do {
        lVar9 = param_1[3];
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar9 = lVar11 + lVar12;
        lVar1 = lVar4 + lVar7 * 0x10 + lVar12;
        *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(lVar9 + -0x30);
        *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(lVar9 + -0x28);
        *(undefined8 *)(lVar1 + -0x20) = *(undefined8 *)(lVar9 + -0x20);
        *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar9 + -0x18);
        lVar6 = *(long *)(lVar9 + -0x10);
        *(long *)(lVar1 + -0x10) = lVar6;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        uVar2 = *(undefined4 *)(lVar9 + -8);
        *(undefined1 *)(lVar1 + -4) = *(undefined1 *)(lVar9 + -4);
        *(undefined4 *)(lVar1 + -8) = uVar2;
        lVar12 = lVar12 + -0x30;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      } while (lVar10 - lVar11 != lVar12);
      lVar10 = *param_1;
      lVar7 = lVar4 + lVar7 * 0x10 + lVar12;
      lVar11 = param_1[1];
    }
    lVar12 = param_1[2];
    *param_1 = lVar7;
    param_1[1] = lVar8;
    param_1[2] = lVar4 + param_2 * 0x30;
    while (lVar4 = lVar11, lVar4 != lVar10) {
      lVar11 = lVar4 + -0x30;
      if (*(long *)(lVar4 + -0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0x10) = 0;
      }
    }
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006b38dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar10,lVar12 - lVar10,8);
      return;
    }
  }
  return;
}


