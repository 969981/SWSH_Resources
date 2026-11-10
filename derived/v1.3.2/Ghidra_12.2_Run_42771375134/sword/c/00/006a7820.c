/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a7820; name: FUN_006a7820
 */


void FUN_006a7820(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_02710860;
  lVar4 = *param_1;
  if (param_1[1] == lVar4) {
    lVar5 = param_2[1];
  }
  else {
    lVar5 = param_2[1];
    lVar6 = param_1[1];
    do {
      lVar7 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar1 = *(undefined8 *)(lVar6 + -0x50);
      *(undefined8 *)(lVar5 + -0x58) = *(undefined8 *)(lVar6 + -0x58);
      *(undefined8 *)(lVar5 + -0x50) = uVar1;
      *(undefined8 *)(lVar5 + -0x48) = *(undefined8 *)(lVar6 + -0x48);
      *(undefined8 *)(lVar5 + -0x40) = *(undefined8 *)(lVar6 + -0x40);
      *(undefined8 *)(lVar5 + -0x38) = *(undefined8 *)(lVar6 + -0x38);
      lVar7 = *(long *)(lVar6 + -0x30);
      *(long *)(lVar5 + -0x30) = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar5 + -0x28) = *(undefined8 *)(lVar6 + -0x28);
      *(undefined8 *)(lVar5 + -0x20) = *(undefined8 *)(lVar6 + -0x20);
      *(undefined8 *)(lVar5 + -0x18) = *(undefined8 *)(lVar6 + -0x18);
      lVar7 = *(long *)(lVar6 + -0x10);
      lVar8 = lVar6 + -0x58;
      *(long *)(lVar5 + -0x10) = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      *(undefined2 *)(lVar5 + -8) = *(undefined2 *)(lVar6 + -8);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      lVar5 = param_2[1] + -0x58;
      param_2[1] = lVar5;
      lVar6 = lVar8;
    } while (lVar4 != lVar8);
    lVar4 = *param_1;
  }
  *param_1 = lVar5;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}


