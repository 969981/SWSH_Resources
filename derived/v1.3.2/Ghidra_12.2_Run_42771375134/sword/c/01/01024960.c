/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01024960; name: FUN_01024960
 */


void FUN_01024960(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *param_1;
  if (param_1[1] == lVar5) {
    lVar6 = param_2[1];
  }
  else {
    lVar6 = param_2[1];
    lVar7 = param_1[1];
    do {
      lVar8 = param_1[3];
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = lVar8;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
      uVar4 = *(undefined8 *)(lVar7 + -0x40);
      *(undefined8 *)(lVar6 + -0x30) = 0xcbf29ce484222645;
      *(undefined1 **)(lVar6 + -0x28) = &DAT_01d38550;
      *(undefined4 *)(lVar6 + -0x10) = 0;
      *(undefined8 *)(lVar6 + -0x40) = uVar4;
      *(undefined8 *)(lVar6 + -0x38) = 0;
      *(undefined8 *)(lVar6 + -0x20) = 0;
      *(undefined8 *)(lVar6 + -0x18) = 0;
      *(undefined8 *)(lVar6 + -0x30) = *(undefined8 *)(lVar7 + -0x30);
      *(undefined8 *)(lVar6 + -0x28) = *(undefined8 *)(lVar7 + -0x28);
      *(undefined8 *)(lVar6 + -0x20) = *(undefined8 *)(lVar7 + -0x20);
      lVar8 = *(long *)(lVar7 + -0x18);
      if (lVar8 == 0) {
        *(undefined8 *)(lVar6 + -0x18) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        lVar2 = *(long *)(lVar6 + -0x18);
        *(long *)(lVar6 + -0x18) = lVar8;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
      }
      *(undefined4 *)(lVar6 + -0x10) = *(undefined4 *)(lVar7 + -0x10);
      lVar8 = lVar7 + -0x40;
      if (*(long *)(lVar7 + -0x20) == 0) {
        *(undefined8 *)(lVar6 + -0x38) = *(undefined8 *)(lVar7 + -0x38);
      }
      else {
        lVar2 = *(long *)(lVar7 + -0x38);
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        lVar3 = *(long *)(lVar6 + -0x38);
        *(long *)(lVar6 + -0x38) = lVar2;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
      }
      *(undefined8 *)(lVar6 + -8) = *(undefined8 *)(lVar7 + -8);
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
      lVar6 = param_2[1] + -0x40;
      param_2[1] = lVar6;
      lVar7 = lVar8;
    } while (lVar5 != lVar8);
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


