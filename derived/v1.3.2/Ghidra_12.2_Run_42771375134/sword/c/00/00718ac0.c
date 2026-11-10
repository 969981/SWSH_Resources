/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00718ac0; name: FUN_00718ac0
 */


void FUN_00718ac0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if ((ulong)((param_1[2] - *param_1 >> 5) * -0x5555555555555555) < param_2) {
    lVar8 = param_1[1] - *param_1 >> 5;
    lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x60,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar4 = PTR_DAT_02710860;
    lVar9 = lVar5 + lVar8 * 0x20;
    lVar12 = *param_1;
    lVar13 = param_1[1];
    if (lVar13 == lVar12) {
      lVar8 = lVar9;
      lVar13 = lVar12;
    }
    else {
      lVar14 = 0;
      do {
        lVar11 = param_1[3];
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        lVar11 = lVar13 + lVar14;
        lVar1 = lVar5 + lVar8 * 0x20 + lVar14;
        *(undefined8 *)(lVar1 + -0x58) = *(undefined8 *)(lVar11 + -0x58);
        *(undefined8 *)(lVar1 + -0x60) = *(undefined8 *)(lVar11 + -0x60);
        *(undefined8 *)(lVar1 + -0x48) = *(undefined8 *)(lVar11 + -0x48);
        *(undefined8 *)(lVar1 + -0x50) = *(undefined8 *)(lVar11 + -0x50);
        *(undefined8 *)(lVar1 + -0x40) = *(undefined8 *)(lVar11 + -0x40);
        *(undefined8 *)(lVar1 + -0x38) = *(undefined8 *)(lVar11 + -0x38);
        *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(lVar11 + -0x30);
        lVar7 = *(long *)(lVar11 + -0x28);
        *(long *)(lVar1 + -0x28) = lVar7;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        uVar2 = *(undefined8 *)(lVar11 + -0x20);
        uVar3 = *(undefined8 *)(lVar11 + -0x18);
        uVar10 = *(undefined8 *)(lVar11 + -0x10);
        *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar11 + -8);
        *(undefined8 *)(lVar1 + -0x20) = uVar2;
        *(undefined8 *)(lVar1 + -0x18) = uVar3;
        *(undefined8 *)(lVar1 + -0x10) = uVar10;
        lVar14 = lVar14 + -0x60;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      } while (lVar12 - lVar13 != lVar14);
      lVar12 = *param_1;
      lVar8 = lVar5 + lVar8 * 0x20 + lVar14;
      lVar13 = param_1[1];
    }
    lVar14 = param_1[2];
    *param_1 = lVar8;
    param_1[1] = lVar9;
    param_1[2] = lVar5 + param_2 * 0x60;
    while (lVar5 = lVar13, lVar5 != lVar12) {
      lVar13 = lVar5 + -0x60;
      if (*(long *)(lVar5 + -0x28) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar5 + -0x28) + 0x48) + 0x18))();
        *(undefined8 *)(lVar5 + -0x28) = 0;
      }
    }
    if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00718cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar12,lVar14 - lVar12,0x10);
      return;
    }
  }
  return;
}


