/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00781f00; name: FUN_00781f00
 */


void FUN_00781f00(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = *param_1;
  if (param_1[1] == lVar3) {
    lVar4 = param_2[1];
  }
  else {
    lVar4 = param_2[1];
    lVar5 = param_1[1];
    do {
      lVar6 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *(undefined8 *)(lVar4 + -0x50) = *(undefined8 *)(lVar5 + -0x50);
      *(undefined8 *)(lVar4 + -0x48) = *(undefined8 *)(lVar5 + -0x48);
      *(undefined8 *)(lVar4 + -0x40) = *(undefined8 *)(lVar5 + -0x40);
      *(undefined8 *)(lVar4 + -0x38) = *(undefined8 *)(lVar5 + -0x38);
      lVar6 = *(long *)(lVar5 + -0x30);
      *(long *)(lVar4 + -0x30) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar4 + -0x28) = *(undefined8 *)(lVar5 + -0x28);
      *(undefined8 *)(lVar4 + -0x20) = *(undefined8 *)(lVar5 + -0x20);
      *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(lVar5 + -0x18);
      lVar6 = *(long *)(lVar5 + -0x10);
      lVar7 = lVar5 + -0x50;
      *(long *)(lVar4 + -0x10) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(lVar5 + -8);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar4 = param_2[1] + -0x50;
      param_2[1] = lVar4;
      lVar5 = lVar7;
    } while (lVar3 != lVar7);
    lVar3 = *param_1;
  }
  *param_1 = lVar4;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}


