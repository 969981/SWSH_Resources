/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00740d00; name: FUN_00740d00
 */


void FUN_00740d00(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_1[1];
  lVar6 = *param_1;
  lVar4 = lVar5 - lVar6;
  if ((ulong)((param_1[2] - lVar6 >> 4) * -0x1084210842108421) <=
      (ulong)((lVar4 >> 4) * -0x1084210842108421)) {
    return;
  }
  if (lVar4 == 0) {
    lVar2 = 0;
    lVar4 = lVar2;
    if (lVar5 == lVar6) goto LAB_00740e14;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar4,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lVar6 = *param_1;
    lVar5 = param_1[1];
    lVar2 = lVar2 + (lVar4 >> 4) * 0x10;
    lVar4 = lVar2;
    if (lVar5 == lVar6) {
LAB_00740e14:
      lVar6 = lVar5;
      lVar4 = lVar2;
      goto LAB_00740e1c;
    }
  }
  puVar1 = PTR_DAT_02710860;
  lVar2 = lVar4;
  do {
    lVar7 = param_1[3];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
    lVar5 = lVar5 + -0x1f0;
    lVar2 = lVar2 + -0x1f0;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_0071c9a0(lVar2,lVar5);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  } while (lVar6 != lVar5);
  lVar5 = param_1[1];
  lVar6 = *param_1;
LAB_00740e1c:
  *param_1 = lVar2;
  param_1[1] = lVar4;
  lVar2 = param_1[2];
  param_1[2] = lVar4;
  while (lVar5 != lVar6) {
    lVar5 = lVar5 + -0x1f0;
    FUN_00784490(lVar5);
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00740e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar2 - lVar6,0x10);
  return;
}


