/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00734f70; name: FUN_00734f70
 */


void FUN_00734f70(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_02710860;
  lVar6 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 == lVar6) {
    lVar8 = param_2[1];
  }
  else {
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      lVar10 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar10 = lVar2 + lVar9;
      lVar5 = *(long *)(lVar10 + -0x40);
      *(long *)(lVar8 + -0x40) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar8 + -0x38) = *(undefined8 *)(lVar10 + -0x38);
      *(undefined8 *)(lVar8 + -0x30) = *(undefined8 *)(lVar10 + -0x30);
      *(undefined8 *)(lVar8 + -0x28) = *(undefined8 *)(lVar10 + -0x28);
      lVar5 = *(long *)(lVar10 + -0x20);
      *(long *)(lVar8 + -0x20) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      uVar1 = *(undefined8 *)(lVar10 + -0x18);
      uVar7 = *(undefined8 *)(lVar10 + -8);
      *(undefined8 *)(lVar8 + -0x10) = *(undefined8 *)(lVar10 + -0x10);
      *(undefined8 *)(lVar8 + -8) = uVar7;
      *(undefined8 *)(lVar8 + -0x18) = uVar1;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar9 = lVar9 + -0x40;
      lVar8 = param_2[1] + -0x40;
      param_2[1] = lVar8;
    } while (lVar6 - lVar2 != lVar9);
    lVar6 = *param_1;
  }
  *param_1 = lVar8;
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}


