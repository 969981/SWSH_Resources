/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a05e0; name: FUN_010a05e0
 */


void FUN_010a05e0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  if ((ulong)((param_1[2] - *param_1 >> 2) * -0x79435e50d79435e5) < param_2) {
    lVar6 = param_1[1] - *param_1 >> 2;
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x4c,4);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    puVar2 = PTR_DAT_02710860;
    lVar9 = lVar3 + lVar6 * 4;
    lVar5 = *param_1;
    lVar7 = param_1[1];
    if (lVar7 == lVar5) {
      lVar7 = lVar5;
      lVar6 = lVar9;
    }
    else {
      lVar13 = 0;
      do {
        lVar12 = param_1[3];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar12 = lVar7 + lVar13;
        lVar1 = lVar3 + lVar6 * 4 + lVar13;
        *(undefined1 *)(lVar1 + -0x4c) = *(undefined1 *)(lVar12 + -0x4c);
        *(undefined1 *)(lVar1 + -0x48) = 0;
        if (*(char *)(lVar12 + -0x48) != '\0') {
          uVar8 = *(undefined8 *)(lVar12 + -0x44);
          uVar10 = *(undefined8 *)(lVar12 + -0x3c);
          uVar11 = *(undefined8 *)(lVar12 + -0x34);
          *(undefined4 *)(lVar1 + -0x2c) = *(undefined4 *)(lVar12 + -0x2c);
          *(undefined8 *)(lVar1 + -0x34) = uVar11;
          *(undefined8 *)(lVar1 + -0x3c) = uVar10;
          *(undefined8 *)(lVar1 + -0x44) = uVar8;
          *(undefined1 *)(lVar1 + -0x48) = 1;
        }
        *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(lVar12 + -0x28);
        uVar11 = *(undefined8 *)(lVar12 + -0x10);
        uVar8 = *(undefined8 *)(lVar12 + -0x20);
        uVar10 = *(undefined8 *)(lVar12 + -0x18);
        *(undefined8 *)(lVar1 + -0xb) = *(undefined8 *)(lVar12 + -0xb);
        *(undefined8 *)(lVar1 + -0x18) = uVar10;
        *(undefined8 *)(lVar1 + -0x10) = uVar11;
        *(undefined8 *)(lVar1 + -0x20) = uVar8;
        lVar13 = lVar13 + -0x4c;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while (lVar5 - lVar7 != lVar13);
      lVar5 = *param_1;
      lVar7 = param_1[1];
      lVar6 = lVar3 + lVar6 * 4 + lVar13;
    }
    *param_1 = lVar6;
    param_1[1] = lVar9;
    lVar6 = param_1[2];
    param_1[2] = lVar3 + param_2 * 0x4c;
    while (lVar3 = lVar7, lVar3 != lVar5) {
      lVar7 = lVar3 + -0x4c;
      if (*(char *)(lVar3 + -0x48) != '\0') {
        *(undefined1 *)(lVar3 + -0x48) = 0;
      }
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010a07dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar5,lVar6 - lVar5,4);
      return;
    }
  }
  return;
}


