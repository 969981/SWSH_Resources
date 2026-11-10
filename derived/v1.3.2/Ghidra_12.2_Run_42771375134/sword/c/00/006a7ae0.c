/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a7ae0; name: FUN_006a7ae0
 */


void FUN_006a7ae0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_02710860;
  lVar5 = *param_1;
  if (param_1[1] == lVar5) {
    lVar6 = param_2[1];
  }
  else {
    lVar6 = param_2[1];
    lVar7 = param_1[1];
    do {
      lVar8 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *(undefined8 *)(lVar6 + -0x68) = *(undefined8 *)(lVar7 + -0x68);
      *(undefined8 *)(lVar6 + -0x70) = *(undefined8 *)(lVar7 + -0x70);
      *(undefined8 *)(lVar6 + -0x60) = *(undefined8 *)(lVar7 + -0x60);
      *(undefined8 *)(lVar6 + -0x58) = *(undefined8 *)(lVar7 + -0x58);
      *(undefined8 *)(lVar6 + -0x50) = *(undefined8 *)(lVar7 + -0x50);
      lVar8 = *(long *)(lVar7 + -0x48);
      *(long *)(lVar6 + -0x48) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar6 + -0x40) = *(undefined8 *)(lVar7 + -0x40);
      *(undefined8 *)(lVar6 + -0x38) = *(undefined8 *)(lVar7 + -0x38);
      *(undefined8 *)(lVar6 + -0x30) = *(undefined8 *)(lVar7 + -0x30);
      lVar8 = *(long *)(lVar7 + -0x28);
      lVar9 = lVar7 + -0x70;
      *(long *)(lVar6 + -0x28) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      uVar3 = *(undefined8 *)(lVar7 + -0x18);
      *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(lVar7 + -8);
      uVar4 = *(undefined8 *)(lVar7 + -0x10);
      *(undefined8 *)(lVar6 + -0x20) = *(undefined8 *)(lVar7 + -0x20);
      *(undefined8 *)(lVar6 + -0x18) = uVar3;
      *(undefined8 *)(lVar6 + -0x10) = uVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar6 = param_2[1] + -0x70;
      param_2[1] = lVar6;
      lVar7 = lVar9;
    } while (lVar5 != lVar9);
    lVar5 = *param_1;
  }
  *param_1 = lVar6;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}


