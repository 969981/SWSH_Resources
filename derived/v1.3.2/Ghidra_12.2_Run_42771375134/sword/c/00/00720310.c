/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00720310; name: FUN_00720310
 */


void FUN_00720310(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_02710860;
  lVar6 = *param_1;
  lVar1 = param_1[1];
  if (lVar1 == lVar6) {
    lVar7 = param_2[1];
  }
  else {
    lVar7 = param_2[1];
    lVar8 = 0;
    do {
      lVar9 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
      lVar9 = lVar1 + lVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *(undefined8 *)(lVar7 + -0x110) = *(undefined8 *)(lVar9 + -0x110);
      *(undefined8 *)(lVar7 + -0x108) = *(undefined8 *)(lVar9 + -0x108);
      *(undefined8 *)(lVar7 + -0x100) = *(undefined8 *)(lVar9 + -0x100);
      lVar5 = *(long *)(lVar9 + -0xf8);
      *(long *)(lVar7 + -0xf8) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar7 + -0xf0) = *(undefined8 *)(lVar9 + -0xf0);
      *(undefined8 *)(lVar7 + -0xe8) = *(undefined8 *)(lVar9 + -0xe8);
      *(undefined8 *)(lVar7 + -0xe0) = *(undefined8 *)(lVar9 + -0xe0);
      lVar5 = *(long *)(lVar9 + -0xd8);
      *(long *)(lVar7 + -0xd8) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      memcpy((void *)(lVar7 + -0xd0),(void *)(lVar9 + -0xd0),0x85);
      FUN_007192a0(lVar7 + -0x48,lVar9 + -0x48);
      *(undefined8 *)(lVar7 + -0x18) = *(undefined8 *)(lVar9 + -0x18);
      uVar2 = *(undefined4 *)(lVar9 + -0x10);
      *(undefined1 *)(lVar7 + -0xc) = *(undefined1 *)(lVar9 + -0xc);
      *(undefined4 *)(lVar7 + -0x10) = uVar2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar8 = lVar8 + -0x110;
      lVar7 = param_2[1] + -0x110;
      param_2[1] = lVar7;
    } while (lVar6 - lVar1 != lVar8);
    lVar6 = *param_1;
  }
  *param_1 = lVar7;
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


