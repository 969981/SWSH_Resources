/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007407f0; name: FUN_007407f0
 */


void FUN_007407f0(long *param_1)

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
  
  lVar8 = param_1[1];
  lVar7 = *param_1;
  lVar6 = lVar8 - lVar7;
  if ((ulong)((param_1[2] - lVar7 >> 3) * -0x5555555555555555) <=
      (ulong)((lVar6 >> 3) * -0x5555555555555555)) {
    return;
  }
  if (lVar6 == 0) {
    lVar3 = 0;
    lVar6 = lVar3;
    if (lVar8 != lVar7) goto LAB_00740884;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar6,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lVar7 = *param_1;
    lVar8 = param_1[1];
    lVar3 = lVar3 + (lVar6 >> 3) * 8;
    lVar6 = lVar3;
    if (lVar8 != lVar7) {
LAB_00740884:
      puVar2 = PTR_DAT_02710860;
      lVar3 = 0;
      do {
        lVar9 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar9 = lVar8 + lVar3;
        lVar1 = lVar6 + lVar3;
        *(undefined4 *)(lVar1 + -0x18) = *(undefined4 *)(lVar9 + -0x18);
        lVar5 = *(long *)(lVar9 + -0x10);
        *(long *)(lVar1 + -0x10) = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar9 = *(long *)(lVar9 + -8);
        *(long *)(lVar1 + -8) = lVar9;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        lVar3 = lVar3 + -0x18;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while (lVar7 - lVar8 != lVar3);
      lVar8 = *param_1;
      lVar3 = lVar6 + lVar3;
      lVar7 = param_1[1];
      goto LAB_00740940;
    }
  }
  lVar7 = lVar8;
  lVar6 = lVar3;
LAB_00740940:
  lVar4 = param_1[2];
  param_1[2] = lVar6;
  *param_1 = lVar3;
  param_1[1] = lVar6;
  while (lVar6 = lVar7, lVar6 != lVar8) {
    if (*(long *)(lVar6 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar6 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar6 + -8) = 0;
    }
    lVar7 = lVar6 + -0x18;
    if (*(long *)(lVar6 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar6 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar6 + -0x10) = 0;
    }
  }
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007409c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar8,lVar4 - lVar8,8);
  return;
}


