/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb7630; name: FUN_00cb7630
 */


void FUN_00cb7630(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_02710860;
  lVar4 = *param_1;
  if (param_1[1] == lVar4) {
    lVar5 = param_2[1];
  }
  else {
    lVar5 = param_2[1];
    lVar6 = param_1[1];
    do {
      lVar7 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar7;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *(undefined4 *)(lVar5 + -8) = 0;
      *(undefined8 *)(lVar5 + -0x30) = 0;
      *(undefined8 *)(lVar5 + -0x28) = 0xcbf29ce484222645;
      *(undefined1 **)(lVar5 + -0x20) = &DAT_01d38550;
      *(undefined8 *)(lVar5 + -0x18) = 0;
      *(undefined8 *)(lVar5 + -0x10) = 0;
      *(undefined8 *)(lVar5 + -0x28) = *(undefined8 *)(lVar6 + -0x28);
      *(undefined8 *)(lVar5 + -0x20) = *(undefined8 *)(lVar6 + -0x20);
      *(undefined8 *)(lVar5 + -0x18) = *(undefined8 *)(lVar6 + -0x18);
      lVar7 = *(long *)(lVar6 + -0x10);
      if (lVar7 == 0) {
        *(undefined8 *)(lVar5 + -0x10) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        lVar3 = *(long *)(lVar5 + -0x10);
        *(long *)(lVar5 + -0x10) = lVar7;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
      }
      *(undefined4 *)(lVar5 + -8) = *(undefined4 *)(lVar6 + -8);
      lVar7 = lVar6 + -0x30;
      if (*(long *)(lVar6 + -0x18) == 0) {
        *(undefined8 *)(lVar5 + -0x30) = *(undefined8 *)(lVar6 + -0x30);
      }
      else {
        lVar6 = *(long *)(lVar6 + -0x30);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar3 = *(long *)(lVar5 + -0x30);
        *(long *)(lVar5 + -0x30) = lVar6;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
      }
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar5 = param_2[1] + -0x30;
      param_2[1] = lVar5;
      lVar6 = lVar7;
    } while (lVar4 != lVar7);
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


