/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01212320; name: FUN_01212320
 */


void FUN_01212320(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long local_68;
  
  lVar8 = param_1[8];
  local_68 = param_2;
  if (lVar8 != 0) {
    local_68 = FUN_012127c0(param_1,lVar8,param_4,param_2);
  }
  puVar2 = PTR_DAT_02710860;
  if (param_5 != 0) {
    puVar7 = (undefined1 *)(local_68 + 0x1b0);
    lVar9 = param_5;
    do {
      uVar10 = *param_1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *(undefined4 *)(puVar7 + -0x1b0) = *param_6;
      puVar7[-0x1a0] = 0;
      puVar7[-0x1a0] = *(undefined1 *)(param_6 + 4);
      puVar7[-0x198] = 0;
      if (*(char *)(param_6 + 6) != '\0') {
        *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(param_6 + 8);
        puVar7[-0x198] = 1;
      }
      puVar7[-0x188] = 0;
      if (*(char *)(param_6 + 10) != '\0') {
        uVar6 = *(undefined8 *)((long)param_6 + 0x3a);
        uVar5 = *(undefined8 *)((long)param_6 + 0x32);
        uVar10 = *(undefined8 *)((long)param_6 + 0x2a);
        *(undefined8 *)(puVar7 + -0x16e) = *(undefined8 *)((long)param_6 + 0x42);
        *(undefined8 *)(puVar7 + -0x176) = uVar6;
        *(undefined8 *)(puVar7 + -0x17e) = uVar5;
        *(undefined8 *)(puVar7 + -0x186) = uVar10;
        puVar7[-0x188] = 1;
      }
      puVar7[-0x164] = 0;
      if (*(char *)(param_6 + 0x13) != '\0') {
        uVar10 = *(undefined8 *)(param_6 + 0x14);
        *(undefined8 *)(puVar7 + -0x158) = *(undefined8 *)(param_6 + 0x16);
        *(undefined8 *)(puVar7 + -0x160) = uVar10;
        puVar7[-0x164] = 1;
      }
      puVar7[-0x150] = 0;
      if (*(char *)(param_6 + 0x18) != '\0') {
        uVar10 = *(undefined8 *)(param_6 + 0x19);
        uVar5 = *(undefined8 *)(param_6 + 0x1b);
        *(undefined8 *)(puVar7 + -0x13c) = *(undefined8 *)(param_6 + 0x1d);
        *(undefined8 *)(puVar7 + -0x144) = uVar5;
        *(undefined8 *)(puVar7 + -0x14c) = uVar10;
        uVar6 = *(undefined8 *)(param_6 + 0x23);
        uVar5 = *(undefined8 *)(param_6 + 0x21);
        uVar10 = *(undefined8 *)(param_6 + 0x1f);
        *(undefined8 *)(puVar7 + -0x11c) = *(undefined8 *)(param_6 + 0x25);
        *(undefined8 *)(puVar7 + -0x124) = uVar6;
        *(undefined8 *)(puVar7 + -300) = uVar5;
        *(undefined8 *)(puVar7 + -0x134) = uVar10;
        puVar7[-0x150] = 1;
      }
      puVar7[-0x114] = 0;
      if (*(char *)(param_6 + 0x27) != '\0') {
        puVar7[-0x110] = *(undefined1 *)(param_6 + 0x28);
        puVar7[-0x10c] = 0;
        if (*(char *)(param_6 + 0x29) != '\0') {
          uVar10 = *(undefined8 *)(param_6 + 0x2a);
          uVar5 = *(undefined8 *)(param_6 + 0x2e);
          uVar1 = param_6[0x30];
          *(undefined8 *)(puVar7 + -0x100) = *(undefined8 *)(param_6 + 0x2c);
          *(undefined8 *)(puVar7 + -0xf8) = uVar5;
          *(undefined4 *)(puVar7 + -0xf0) = uVar1;
          *(undefined8 *)(puVar7 + -0x108) = uVar10;
          puVar7[-0x10c] = 1;
        }
        *(undefined8 *)(puVar7 + -0xec) = *(undefined8 *)(param_6 + 0x31);
        uVar10 = *(undefined8 *)(param_6 + 0x33);
        uVar5 = *(undefined8 *)(param_6 + 0x35);
        uVar6 = *(undefined8 *)(param_6 + 0x37);
        *(undefined8 *)(puVar7 + -0xcf) = *(undefined8 *)((long)param_6 + 0xe1);
        *(undefined8 *)(puVar7 + -0xd4) = uVar6;
        *(undefined8 *)(puVar7 + -0xdc) = uVar5;
        *(undefined8 *)(puVar7 + -0xe4) = uVar10;
        puVar7[-0x114] = 1;
      }
      puVar7[-0xc0] = 0;
      if (*(char *)(param_6 + 0x3c) != '\0') {
        memcpy(puVar7 + -0xb0,param_6 + 0x40,0xb0);
        puVar7[-0xc0] = 1;
      }
      *puVar7 = 0;
      if (*(char *)(param_6 + 0x6c) != '\0') {
        uVar10 = *(undefined8 *)(param_6 + 0x6d);
        *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(param_6 + 0x6f);
        *(undefined8 *)(puVar7 + 4) = uVar10;
        uVar5 = *(undefined8 *)(param_6 + 0x71);
        uVar6 = *(undefined8 *)(param_6 + 0x73);
        uVar10 = *(undefined8 *)(param_6 + 0x75);
        *(undefined8 *)(puVar7 + 0x2c) = *(undefined8 *)(param_6 + 0x77);
        *(undefined8 *)(puVar7 + 0x24) = uVar10;
        *(undefined8 *)(puVar7 + 0x1c) = uVar6;
        *(undefined8 *)(puVar7 + 0x14) = uVar5;
        uVar10 = *(undefined8 *)(param_6 + 0x79);
        uVar5 = *(undefined8 *)(param_6 + 0x7b);
        uVar6 = *(undefined8 *)(param_6 + 0x7d);
        *(undefined4 *)(puVar7 + 0x4c) = param_6[0x7f];
        *(undefined8 *)(puVar7 + 0x44) = uVar6;
        *(undefined8 *)(puVar7 + 0x3c) = uVar5;
        *(undefined8 *)(puVar7 + 0x34) = uVar10;
        *puVar7 = 1;
      }
      puVar7[0x50] = 0;
      lVar9 = lVar9 + -1;
      if (*(char *)(param_6 + 0x80) != '\0') {
        *(undefined8 *)(puVar7 + 0x58) = *(undefined8 *)(param_6 + 0x82);
        uVar10 = *(undefined8 *)(param_6 + 0x84);
        uVar5 = *(undefined8 *)(param_6 + 0x86);
        uVar6 = *(undefined8 *)(param_6 + 0x8a);
        *(undefined8 *)(puVar7 + 0x70) = *(undefined8 *)(param_6 + 0x88);
        *(undefined8 *)(puVar7 + 0x78) = uVar6;
        puVar7[0x50] = 1;
        *(undefined8 *)(puVar7 + 0x60) = uVar10;
        *(undefined8 *)(puVar7 + 0x68) = uVar5;
      }
      *(undefined8 *)(puVar7 + 0x80) = *(undefined8 *)(param_6 + 0x8c);
      uVar10 = *(undefined8 *)(param_6 + 0x8e);
      uVar5 = *(undefined8 *)(param_6 + 0x90);
      uVar6 = *(undefined8 *)(param_6 + 0x92);
      *(undefined4 *)(puVar7 + 0xa0) = param_6[0x94];
      *(undefined8 *)(puVar7 + 0x90) = uVar5;
      *(undefined8 *)(puVar7 + 0x98) = uVar6;
      *(undefined8 *)(puVar7 + 0x88) = uVar10;
      param_6 = param_6 + 0x98;
      puVar7 = puVar7 + 0x260;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar9 != 0);
  }
  local_68 = local_68 + param_5 * 0x260;
  if (lVar8 != 0) {
    local_68 = FUN_012127c0(param_1,param_4,lVar8 + param_1[9] * 0x260,local_68);
    lVar9 = param_1[9];
    if (lVar9 != 0) {
      pcVar4 = (char *)(lVar8 + 0x1b0);
      do {
        if (pcVar4[0x50] != '\0') {
          pcVar4[0x50] = '\0';
        }
        if (*pcVar4 != '\0') {
          *pcVar4 = '\0';
        }
        if (pcVar4[-0xc0] != '\0') {
          pcVar4[-0xc0] = '\0';
        }
        if (pcVar4[-0x114] != '\0') {
          if (pcVar4[-0x10c] != '\0') {
            pcVar4[-0x10c] = '\0';
          }
          pcVar4[-0x114] = '\0';
        }
        if (pcVar4[-0x150] != '\0') {
          pcVar4[-0x150] = '\0';
        }
        if (pcVar4[-0x164] != '\0') {
          pcVar4[-0x164] = '\0';
        }
        if (pcVar4[-0x188] != '\0') {
          pcVar4[-0x188] = '\0';
        }
        if (pcVar4[-0x198] != '\0') {
          pcVar4[-0x198] = '\0';
        }
        lVar9 = lVar9 + -1;
        if (pcVar4[-0x1a0] != '\0') {
          pcVar4[-0x1a0] = '\0';
        }
        pcVar4 = pcVar4 + 0x260;
      } while (lVar9 != 0);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x260,0x10);
  }
  param_1[8] = param_2;
  param_1[9] = (local_68 - param_2 >> 5) * -0x79435e50d79435e5;
  param_1[10] = param_3;
  return;
}


