/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00756f00; name: FUN_00756f00
 */


void FUN_00756f00(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_02710860;
  lVar7 = *param_1;
  lVar8 = param_1[1];
  if (lVar8 == lVar7) {
    lVar9 = param_2[1];
  }
  else {
    lVar9 = param_2[1];
    do {
      lVar5 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *(undefined8 *)(lVar9 + -0x70) = *(undefined8 *)(lVar8 + -0x70);
      *(undefined8 *)(lVar9 + -0x68) = *(undefined8 *)(lVar8 + -0x68);
      *(undefined8 *)(lVar9 + -0x60) = *(undefined8 *)(lVar8 + -0x60);
      lVar5 = *(long *)(lVar8 + -0x58);
      *(long *)(lVar9 + -0x58) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar9 + -0x48) = *(undefined8 *)(lVar8 + -0x48);
      *(undefined8 *)(lVar9 + -0x50) = *(undefined8 *)(lVar8 + -0x50);
      *(undefined8 *)(lVar9 + -0x38) = *(undefined8 *)(lVar8 + -0x38);
      *(undefined8 *)(lVar9 + -0x40) = *(undefined8 *)(lVar8 + -0x40);
      plVar3 = *(long **)(lVar8 + -0x18);
      *(undefined8 *)(lVar9 + -0x30) = 0;
      *(undefined8 *)(lVar9 + -0x28) = 0;
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined4 *)(lVar9 + -8) = 0;
      *(long **)(lVar9 + -0x18) = plVar3;
      *(undefined8 *)(lVar9 + -0x10) = 0;
      lVar5 = *(long *)(lVar8 + -0x28) - *(long *)(lVar8 + -0x30);
      if (lVar5 != 0) {
        uVar6 = (lVar5 >> 6) * 0x6db6db6db6db6db7;
        if (0x92492492492492 < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar5,0x10);
        if (lVar4 == 0) {
          (**(code **)(**(long **)(lVar9 + -0x18) + 0xb8))();
        }
        *(long *)(lVar9 + -0x30) = lVar4;
        *(long *)(lVar9 + -0x28) = lVar4;
        *(long *)(lVar9 + -0x20) = lVar4 + (lVar5 >> 6) * 0x40;
        FUN_007570e0((undefined8 *)(lVar9 + -0x30),*(undefined8 *)(lVar8 + -0x30),
                     *(undefined8 *)(lVar8 + -0x28),uVar6);
      }
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar8 = lVar8 + -0x70;
      lVar9 = param_2[1] + -0x70;
      param_2[1] = lVar9;
    } while (lVar7 != lVar8);
    lVar7 = *param_1;
  }
  *param_1 = lVar9;
  param_2[1] = lVar7;
  lVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}


