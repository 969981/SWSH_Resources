/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1cb30; name: FUN_00e1cb30
 */


void FUN_00e1cb30(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_02710860;
  lVar6 = *param_1;
  lVar1 = param_1[1];
  if (lVar1 == lVar6) {
    lVar8 = param_2[1];
  }
  else {
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      lVar10 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar10 = lVar1 + lVar9;
      lVar9 = lVar9 + -0x68;
      uVar7 = *(undefined8 *)(lVar10 + -0x60);
      *(undefined8 *)(lVar8 + -0x68) = *(undefined8 *)(lVar10 + -0x68);
      *(undefined8 *)(lVar8 + -0x60) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x58);
      uVar2 = *(undefined8 *)(lVar10 + -0x50);
      uVar3 = *(undefined8 *)(lVar10 + -0x40);
      *(undefined8 *)(lVar8 + -0x48) = *(undefined8 *)(lVar10 + -0x48);
      *(undefined8 *)(lVar8 + -0x40) = uVar3;
      *(undefined8 *)(lVar8 + -0x58) = uVar7;
      *(undefined8 *)(lVar8 + -0x50) = uVar2;
      *(undefined4 *)(lVar8 + -0x38) = *(undefined4 *)(lVar10 + -0x38);
      *(undefined2 *)(lVar8 + -0x34) = *(undefined2 *)(lVar10 + -0x34);
      *(undefined4 *)(lVar8 + -0x30) = *(undefined4 *)(lVar10 + -0x30);
      *(undefined1 *)(lVar8 + -0x2c) = *(undefined1 *)(lVar10 + -0x2c);
      *(undefined1 *)(lVar8 + -0x2b) = *(undefined1 *)(lVar10 + -0x2b);
      *(undefined4 *)(lVar8 + -0x28) = *(undefined4 *)(lVar10 + -0x28);
      *(undefined4 *)(lVar8 + -0x24) = *(undefined4 *)(lVar10 + -0x24);
      *(undefined4 *)(lVar8 + -0x20) = *(undefined4 *)(lVar10 + -0x20);
      uVar7 = *(undefined8 *)(lVar10 + -0x18);
      *(undefined1 *)(lVar8 + -0x10) = *(undefined1 *)(lVar10 + -0x10);
      *(undefined8 *)(lVar8 + -0x18) = uVar7;
      *(undefined8 *)(lVar8 + -8) = *(undefined8 *)(lVar10 + -8);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      lVar8 = param_2[1] + -0x68;
      param_2[1] = lVar8;
    } while (lVar6 - lVar1 != lVar9);
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


