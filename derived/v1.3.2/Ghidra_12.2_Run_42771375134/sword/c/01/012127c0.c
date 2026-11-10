/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012127c0; name: FUN_012127c0
 */


long FUN_012127c0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_02710860;
  if (param_2 != param_3) {
    lVar8 = 0;
    do {
      uVar7 = *param_1;
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      puVar1 = (undefined4 *)((long)param_2 + lVar8);
      puVar2 = (undefined4 *)(param_4 + lVar8);
      *puVar2 = *puVar1;
      *(undefined1 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
      *(undefined1 *)(puVar2 + 6) = 0;
      if (*(char *)(puVar1 + 6) != '\0') {
        *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
        *(undefined1 *)(puVar2 + 6) = 1;
      }
      *(undefined1 *)(puVar2 + 10) = 0;
      if (*(char *)(puVar1 + 10) != '\0') {
        uVar7 = *(undefined8 *)((long)puVar1 + 0x2a);
        uVar5 = *(undefined8 *)((long)puVar1 + 0x32);
        uVar6 = *(undefined8 *)((long)puVar1 + 0x3a);
        *(undefined8 *)((long)puVar2 + 0x42) = *(undefined8 *)((long)puVar1 + 0x42);
        *(undefined8 *)((long)puVar2 + 0x3a) = uVar6;
        *(undefined8 *)((long)puVar2 + 0x32) = uVar5;
        *(undefined8 *)((long)puVar2 + 0x2a) = uVar7;
        *(undefined1 *)(puVar2 + 10) = 1;
      }
      *(undefined1 *)(puVar2 + 0x13) = 0;
      if (*(char *)(puVar1 + 0x13) != '\0') {
        uVar7 = *(undefined8 *)(puVar1 + 0x14);
        uVar5 = *(undefined8 *)(puVar1 + 0x16);
        *(undefined1 *)(puVar2 + 0x13) = 1;
        *(undefined8 *)(puVar2 + 0x14) = uVar7;
        *(undefined8 *)(puVar2 + 0x16) = uVar5;
      }
      *(undefined1 *)(puVar2 + 0x18) = 0;
      if (*(char *)(puVar1 + 0x18) != '\0') {
        uVar7 = *(undefined8 *)(puVar1 + 0x19);
        uVar5 = *(undefined8 *)(puVar1 + 0x1b);
        *(undefined8 *)(puVar2 + 0x1d) = *(undefined8 *)(puVar1 + 0x1d);
        *(undefined8 *)(puVar2 + 0x1b) = uVar5;
        *(undefined8 *)(puVar2 + 0x19) = uVar7;
        uVar7 = *(undefined8 *)(puVar1 + 0x1f);
        uVar5 = *(undefined8 *)(puVar1 + 0x21);
        uVar6 = *(undefined8 *)(puVar1 + 0x23);
        *(undefined8 *)(puVar2 + 0x25) = *(undefined8 *)(puVar1 + 0x25);
        *(undefined8 *)(puVar2 + 0x23) = uVar6;
        *(undefined8 *)(puVar2 + 0x21) = uVar5;
        *(undefined8 *)(puVar2 + 0x1f) = uVar7;
        *(undefined1 *)(puVar2 + 0x18) = 1;
      }
      *(undefined1 *)(puVar2 + 0x27) = 0;
      if (*(char *)(puVar1 + 0x27) != '\0') {
        *(undefined1 *)(puVar2 + 0x28) = *(undefined1 *)(puVar1 + 0x28);
        *(undefined1 *)(puVar2 + 0x29) = 0;
        if (*(char *)(puVar1 + 0x29) != '\0') {
          uVar7 = *(undefined8 *)(puVar1 + 0x2a);
          uVar5 = *(undefined8 *)(puVar1 + 0x2c);
          uVar6 = *(undefined8 *)(puVar1 + 0x2e);
          puVar2[0x30] = puVar1[0x30];
          *(undefined8 *)(puVar2 + 0x2a) = uVar7;
          *(undefined8 *)(puVar2 + 0x2c) = uVar5;
          *(undefined8 *)(puVar2 + 0x2e) = uVar6;
          *(undefined1 *)(puVar2 + 0x29) = 1;
        }
        *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(puVar1 + 0x31);
        uVar7 = *(undefined8 *)(puVar1 + 0x33);
        uVar5 = *(undefined8 *)(puVar1 + 0x35);
        uVar6 = *(undefined8 *)(puVar1 + 0x37);
        *(undefined8 *)((long)puVar2 + 0xe1) = *(undefined8 *)((long)puVar1 + 0xe1);
        *(undefined8 *)(puVar2 + 0x37) = uVar6;
        *(undefined8 *)(puVar2 + 0x35) = uVar5;
        *(undefined8 *)(puVar2 + 0x33) = uVar7;
        *(undefined1 *)(puVar2 + 0x27) = 1;
      }
      *(undefined1 *)(puVar2 + 0x3c) = 0;
      if (*(char *)(puVar1 + 0x3c) != '\0') {
        memcpy(puVar2 + 0x40,puVar1 + 0x40,0xb0);
        *(undefined1 *)(puVar2 + 0x3c) = 1;
      }
      *(undefined1 *)(puVar2 + 0x6c) = 0;
      if (*(char *)(puVar1 + 0x6c) != '\0') {
        uVar7 = *(undefined8 *)(puVar1 + 0x6d);
        *(undefined8 *)(puVar2 + 0x6f) = *(undefined8 *)(puVar1 + 0x6f);
        *(undefined8 *)(puVar2 + 0x6d) = uVar7;
        uVar7 = *(undefined8 *)(puVar1 + 0x73);
        uVar5 = *(undefined8 *)(puVar1 + 0x75);
        uVar6 = *(undefined8 *)(puVar1 + 0x71);
        *(undefined8 *)(puVar2 + 0x77) = *(undefined8 *)(puVar1 + 0x77);
        *(undefined8 *)(puVar2 + 0x75) = uVar5;
        *(undefined8 *)(puVar2 + 0x73) = uVar7;
        *(undefined8 *)(puVar2 + 0x71) = uVar6;
        uVar7 = *(undefined8 *)(puVar1 + 0x79);
        uVar6 = *(undefined8 *)(puVar1 + 0x7d);
        uVar5 = *(undefined8 *)(puVar1 + 0x7b);
        puVar2[0x7f] = puVar1[0x7f];
        *(undefined8 *)(puVar2 + 0x7d) = uVar6;
        *(undefined8 *)(puVar2 + 0x7b) = uVar5;
        *(undefined8 *)(puVar2 + 0x79) = uVar7;
        *(undefined1 *)(puVar2 + 0x6c) = 1;
      }
      *(undefined1 *)(puVar2 + 0x80) = 0;
      if (*(char *)(puVar1 + 0x80) != '\0') {
        *(undefined8 *)(puVar2 + 0x82) = *(undefined8 *)(puVar1 + 0x82);
        uVar7 = *(undefined8 *)(puVar1 + 0x84);
        uVar5 = *(undefined8 *)(puVar1 + 0x86);
        uVar6 = *(undefined8 *)(puVar1 + 0x88);
        *(undefined8 *)(puVar2 + 0x8a) = *(undefined8 *)(puVar1 + 0x8a);
        *(undefined8 *)(puVar2 + 0x88) = uVar6;
        *(undefined8 *)(puVar2 + 0x86) = uVar5;
        *(undefined8 *)(puVar2 + 0x84) = uVar7;
        *(undefined1 *)(puVar2 + 0x80) = 1;
      }
      *(undefined8 *)(puVar2 + 0x8c) = *(undefined8 *)(puVar1 + 0x8c);
      uVar7 = *(undefined8 *)(puVar1 + 0x8e);
      uVar5 = *(undefined8 *)(puVar1 + 0x90);
      uVar6 = *(undefined8 *)(puVar1 + 0x92);
      puVar2[0x94] = puVar1[0x94];
      *(undefined8 *)(puVar2 + 0x92) = uVar6;
      *(undefined8 *)(puVar2 + 0x90) = uVar5;
      *(undefined8 *)(puVar2 + 0x8e) = uVar7;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar8 = lVar8 + 0x260;
    } while (puVar1 + 0x98 != param_3);
    param_4 = param_4 + lVar8;
  }
  return param_4;
}


