/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc0aa0; name: FUN_00fc0aa0
 */


void FUN_00fc0aa0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_02710860;
  lVar9 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar9) {
    lVar7 = param_2[1];
  }
  else {
    lVar7 = param_2[1];
    pcVar8 = (char *)(lVar3 + -0x90);
    lVar9 = lVar9 - lVar3;
    do {
      lVar10 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *(undefined1 *)(lVar7 + -0x150) = 0;
      if (pcVar8[-0xc0] != '\0') {
        memcpy((void *)(lVar7 + -0x140),pcVar8 + -0xb0,0xb0);
        *(undefined1 *)(lVar7 + -0x150) = 1;
      }
      *(undefined1 *)(lVar7 + -0x90) = 0;
      if (*pcVar8 != '\0') {
        uVar4 = *(undefined8 *)(pcVar8 + 4);
        *(undefined8 *)(lVar7 + -0x84) = *(undefined8 *)(pcVar8 + 0xc);
        *(undefined8 *)(lVar7 + -0x8c) = uVar4;
        uVar4 = *(undefined8 *)(pcVar8 + 0x14);
        uVar5 = *(undefined8 *)(pcVar8 + 0x1c);
        uVar6 = *(undefined8 *)(pcVar8 + 0x24);
        *(undefined8 *)(lVar7 + -100) = *(undefined8 *)(pcVar8 + 0x2c);
        *(undefined8 *)(lVar7 + -0x6c) = uVar6;
        *(undefined8 *)(lVar7 + -0x74) = uVar5;
        *(undefined8 *)(lVar7 + -0x7c) = uVar4;
        uVar4 = *(undefined8 *)(pcVar8 + 0x34);
        uVar5 = *(undefined8 *)(pcVar8 + 0x3c);
        uVar6 = *(undefined8 *)(pcVar8 + 0x44);
        *(undefined4 *)(lVar7 + -0x44) = *(undefined4 *)(pcVar8 + 0x4c);
        *(undefined8 *)(lVar7 + -0x4c) = uVar6;
        *(undefined8 *)(lVar7 + -0x54) = uVar5;
        *(undefined8 *)(lVar7 + -0x5c) = uVar4;
        *(undefined1 *)(lVar7 + -0x90) = 1;
      }
      *(undefined1 *)(lVar7 + -0x40) = 0;
      if (pcVar8[0x50] != '\0') {
        *(undefined8 *)(lVar7 + -0x3c) = *(undefined8 *)(pcVar8 + 0x54);
        *(undefined1 *)(lVar7 + -0x40) = 1;
      }
      *(undefined1 *)(lVar7 + -0x30) = 0;
      if (pcVar8[0x60] != '\0') {
        *(undefined8 *)(lVar7 + -0x28) = *(undefined8 *)(pcVar8 + 0x68);
        uVar4 = *(undefined8 *)(pcVar8 + 0x70);
        uVar6 = *(undefined8 *)(pcVar8 + 0x78);
        uVar5 = *(undefined8 *)(pcVar8 + 0x80);
        uVar1 = *(undefined8 *)(pcVar8 + 0x88);
        *(undefined1 *)(lVar7 + -0x30) = 1;
        *(undefined8 *)(lVar7 + -0x10) = uVar5;
        *(undefined8 *)(lVar7 + -8) = uVar1;
        *(undefined8 *)(lVar7 + -0x20) = uVar4;
        *(undefined8 *)(lVar7 + -0x18) = uVar6;
      }
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      lVar7 = param_2[1] + -0x150;
      pcVar8 = pcVar8 + -0x150;
      lVar9 = lVar9 + 0x150;
      param_2[1] = lVar7;
    } while (lVar9 != 0);
    lVar9 = *param_1;
  }
  *param_1 = lVar7;
  param_2[1] = lVar9;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return;
}


