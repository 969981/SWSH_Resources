/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013128c0; name: FUN_013128c0
 */


void FUN_013128c0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = param_1[1];
  lVar7 = *param_1;
  lVar6 = lVar11 - lVar7;
  if ((ulong)((param_1[2] - lVar7 >> 4) * -0x71c71c71c71c71c7) <=
      (ulong)((lVar6 >> 4) * -0x71c71c71c71c71c7)) {
    return;
  }
  if (lVar6 == 0) {
    lVar4 = 0;
    lVar6 = lVar4;
    if (lVar11 != lVar7) goto LAB_0131295c;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar6,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    lVar7 = *param_1;
    lVar11 = param_1[1];
    lVar4 = lVar4 + (lVar6 >> 4) * 0x10;
    lVar6 = lVar4;
    if (lVar11 != lVar7) {
LAB_0131295c:
      puVar3 = PTR_DAT_02710860;
      lVar4 = 0;
      do {
        lVar12 = param_1[3];
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar12 = lVar11 + lVar4;
        uVar2 = *(undefined8 *)(lVar12 + -0x90);
        uVar8 = *(undefined8 *)(lVar12 + -0x88);
        lVar1 = lVar6 + lVar4;
        *(undefined8 *)(lVar1 + -0x80) = 0;
        *(undefined8 *)(lVar1 + -0x70) = 0;
        *(undefined8 *)(lVar1 + -0x68) = 0;
        *(undefined8 *)(lVar1 + -0x78) = 0;
        *(undefined8 *)(lVar1 + -0x90) = uVar2;
        *(undefined8 *)(lVar1 + -0x88) = uVar8;
        if (*(code **)(lVar12 + -0x68) != (code *)0x0) {
          (**(code **)(lVar12 + -0x68))(lVar12 + -0x60,lVar1 + -0x60);
          uVar8 = *(undefined8 *)(lVar12 + -0x80);
          uVar10 = *(undefined8 *)(lVar12 + -0x68);
          uVar2 = *(undefined8 *)(lVar12 + -0x78);
          *(undefined8 *)(lVar1 + -0x70) = *(undefined8 *)(lVar12 + -0x70);
          *(undefined8 *)(lVar1 + -0x68) = uVar10;
          *(undefined8 *)(lVar1 + -0x80) = uVar8;
          *(undefined8 *)(lVar1 + -0x78) = uVar2;
          pcVar9 = *(code **)(lVar12 + -0x78);
          if (pcVar9 != (code *)0x0) {
            *(undefined8 *)(lVar12 + -0x70) = 0;
            *(undefined8 *)(lVar12 + -0x68) = 0;
            *(undefined8 *)(lVar12 + -0x80) = 0;
            *(undefined8 *)(lVar12 + -0x78) = 0;
            (*pcVar9)(lVar12 + -0x60);
          }
        }
        lVar4 = lVar4 + -0x90;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      } while (lVar7 - lVar11 != lVar4);
      lVar11 = *param_1;
      lVar4 = lVar6 + lVar4;
      lVar7 = param_1[1];
      goto LAB_01312a3c;
    }
  }
  lVar7 = lVar11;
  lVar6 = lVar4;
LAB_01312a3c:
  lVar5 = param_1[2];
  param_1[2] = lVar6;
  *param_1 = lVar4;
  param_1[1] = lVar6;
  while (lVar6 = lVar7, lVar6 != lVar11) {
    pcVar9 = *(code **)(lVar6 + -0x78);
    lVar7 = lVar6 + -0x90;
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(lVar6 + -0x70) = 0;
      *(undefined8 *)(lVar6 + -0x68) = 0;
      *(undefined8 *)(lVar6 + -0x80) = 0;
      *(undefined8 *)(lVar6 + -0x78) = 0;
      (*pcVar9)(lVar6 + -0x60);
    }
  }
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01312aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar11,lVar5 - lVar11,0x10);
  return;
}


