/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01559650; name: FUN_01559650
 */


void FUN_01559650(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 7)) {
    return;
  }
  lVar10 = param_1[1] - *param_1 >> 7;
  lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 7,0x10);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    lVar8 = *param_1;
    lVar12 = param_1[1];
    lVar10 = lVar10 * 0x80;
    lVar13 = lVar10;
    if (lVar12 != lVar8) goto LAB_015596cc;
  }
  else {
    lVar8 = *param_1;
    lVar12 = param_1[1];
    lVar10 = lVar4 + lVar10 * 0x80;
    lVar13 = lVar10;
    if (lVar12 != lVar8) {
LAB_015596cc:
      puVar3 = PTR_DAT_02710860;
      lVar10 = 0;
      do {
        lVar11 = param_1[3];
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        lVar11 = lVar13 + lVar10;
        lVar1 = lVar12 + lVar10;
        *(undefined8 *)(lVar11 + -0x80) = 0;
        *(undefined8 *)(lVar11 + -0x70) = 0;
        *(undefined8 *)(lVar11 + -0x68) = 0;
        *(undefined8 *)(lVar11 + -0x78) = 0;
        if (*(code **)(lVar1 + -0x68) != (code *)0x0) {
          (**(code **)(lVar1 + -0x68))(lVar1 + -0x60,lVar11 + -0x60);
          uVar6 = *(undefined8 *)(lVar1 + -0x80);
          uVar9 = *(undefined8 *)(lVar1 + -0x68);
          uVar2 = *(undefined8 *)(lVar1 + -0x78);
          *(undefined8 *)(lVar11 + -0x70) = *(undefined8 *)(lVar1 + -0x70);
          *(undefined8 *)(lVar11 + -0x68) = uVar9;
          *(undefined8 *)(lVar11 + -0x80) = uVar6;
          *(undefined8 *)(lVar11 + -0x78) = uVar2;
          pcVar7 = *(code **)(lVar1 + -0x78);
          if (pcVar7 != (code *)0x0) {
            *(undefined8 *)(lVar1 + -0x70) = 0;
            *(undefined8 *)(lVar1 + -0x68) = 0;
            *(undefined8 *)(lVar1 + -0x80) = 0;
            *(undefined8 *)(lVar1 + -0x78) = 0;
            (*pcVar7)(lVar1 + -0x60);
          }
        }
        lVar10 = lVar10 + -0x80;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      } while (lVar8 - lVar12 != lVar10);
      lVar8 = param_1[1];
      lVar10 = lVar13 + lVar10;
      lVar12 = *param_1;
      goto LAB_015597b8;
    }
  }
  lVar12 = lVar8;
  lVar13 = lVar10;
LAB_015597b8:
  lVar5 = param_1[2];
  *param_1 = lVar10;
  param_1[1] = lVar13;
  param_1[2] = lVar4 + param_2 * 0x80;
  while (lVar10 = lVar8, lVar10 != lVar12) {
    pcVar7 = *(code **)(lVar10 + -0x78);
    lVar8 = lVar10 + -0x80;
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar10 + -0x70) = 0;
      *(undefined8 *)(lVar10 + -0x68) = 0;
      *(undefined8 *)(lVar10 + -0x80) = 0;
      *(undefined8 *)(lVar10 + -0x78) = 0;
      (*pcVar7)(lVar10 + -0x60);
    }
  }
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01559830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar12,lVar5 - lVar12,0x10);
  return;
}


