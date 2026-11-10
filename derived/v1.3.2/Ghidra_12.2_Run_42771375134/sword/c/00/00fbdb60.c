/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbdb60; name: FUN_00fbdb60
 */


void FUN_00fbdb60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar8 = *(undefined4 **)(param_1 + 0x68);
  puVar7 = *(undefined4 **)(param_1 + 0x70);
  if (puVar8 != puVar7) {
    uVar1 = FUN_01225e50(puVar8);
    uVar2 = FUN_0121ae60(uVar1,param_2);
    if ((uVar2 & 1) == 0) {
      do {
        puVar8 = puVar8 + 0xa4;
        if (puVar7 == puVar8) {
          if (*(undefined4 **)(param_1 + 0x70) == puVar7) {
            return;
          }
          goto LAB_00fbdbd0;
        }
        uVar1 = FUN_01225e50(puVar8);
        uVar2 = FUN_0121ae60(uVar1,param_2);
      } while ((uVar2 & 1) == 0);
    }
  }
  puVar7 = puVar8;
  if (*(undefined4 **)(param_1 + 0x70) == puVar8) {
    return;
  }
LAB_00fbdbd0:
  FUN_00fbdff0(param_1,puVar7);
  puVar5 = *(undefined4 **)(param_1 + 0x70);
  puVar8 = puVar7 + 0xa4;
  if (puVar8 != puVar5) {
    do {
      *puVar7 = puVar7[0xa4];
      FUN_00fc1090(puVar7 + 4,puVar7 + 0xa8);
      if (*(char *)(puVar7 + 0x3c) == '\0') {
        if (*(char *)(puVar7 + 0xe0) != '\0') {
          memcpy(puVar7 + 0x40,puVar7 + 0xe4,0xb0);
          *(undefined1 *)(puVar7 + 0x3c) = 1;
        }
        cVar4 = *(char *)(puVar7 + 0x6c);
        cVar3 = *(char *)(puVar7 + 0x110);
joined_r0x00fbdc60:
        if (cVar4 != '\0') goto LAB_00fbdc64;
LAB_00fbdd20:
        if (cVar3 != '\0') {
          puVar7[0x7f] = puVar7[0x123];
          *(undefined8 *)(puVar7 + 0x6f) = *(undefined8 *)(puVar7 + 0x113);
          *(undefined8 *)(puVar7 + 0x6d) = *(undefined8 *)(puVar7 + 0x111);
          *(undefined8 *)(puVar7 + 0x77) = *(undefined8 *)(puVar7 + 0x11b);
          *(undefined8 *)(puVar7 + 0x75) = *(undefined8 *)(puVar7 + 0x119);
          *(undefined8 *)(puVar7 + 0x73) = *(undefined8 *)(puVar7 + 0x117);
          *(undefined8 *)(puVar7 + 0x71) = *(undefined8 *)(puVar7 + 0x115);
          *(undefined8 *)(puVar7 + 0x7d) = *(undefined8 *)(puVar7 + 0x121);
          *(undefined8 *)(puVar7 + 0x7b) = *(undefined8 *)(puVar7 + 0x11f);
          *(undefined8 *)(puVar7 + 0x79) = *(undefined8 *)(puVar7 + 0x11d);
          *(undefined1 *)(puVar7 + 0x6c) = 1;
        }
        cVar3 = *(char *)(puVar7 + 0x80);
        cVar4 = *(char *)(puVar7 + 0x124);
joined_r0x00fbddc8:
        if (cVar3 != '\0') goto LAB_00fbddcc;
LAB_00fbde0c:
        if (cVar4 != '\0') {
          *(undefined8 *)(puVar7 + 0x82) = *(undefined8 *)(puVar7 + 0x126);
          *(undefined8 *)(puVar7 + 0x8a) = *(undefined8 *)(puVar7 + 0x12e);
          *(undefined8 *)(puVar7 + 0x88) = *(undefined8 *)(puVar7 + 300);
          *(undefined8 *)(puVar7 + 0x86) = *(undefined8 *)(puVar7 + 0x12a);
          *(undefined8 *)(puVar7 + 0x84) = *(undefined8 *)(puVar7 + 0x128);
          *(undefined1 *)(puVar7 + 0x80) = 1;
        }
      }
      else {
        if (*(char *)(puVar7 + 0xe0) == '\0') {
          *(undefined1 *)(puVar7 + 0x3c) = 0;
          cVar4 = *(char *)(puVar7 + 0x6c);
          cVar3 = *(char *)(puVar7 + 0x110);
          goto joined_r0x00fbdc60;
        }
        memcpy(puVar7 + 0x40,puVar7 + 0xe4,0xa1);
        cVar3 = *(char *)(puVar7 + 0x110);
        if (*(char *)(puVar7 + 0x6c) == '\0') goto LAB_00fbdd20;
LAB_00fbdc64:
        if (cVar3 != '\0') {
          puVar7[0x7f] = puVar7[0x123];
          *(undefined8 *)(puVar7 + 0x6f) = *(undefined8 *)(puVar7 + 0x113);
          *(undefined8 *)(puVar7 + 0x6d) = *(undefined8 *)(puVar7 + 0x111);
          *(undefined8 *)(puVar7 + 0x77) = *(undefined8 *)(puVar7 + 0x11b);
          *(undefined8 *)(puVar7 + 0x75) = *(undefined8 *)(puVar7 + 0x119);
          *(undefined8 *)(puVar7 + 0x73) = *(undefined8 *)(puVar7 + 0x117);
          *(undefined8 *)(puVar7 + 0x71) = *(undefined8 *)(puVar7 + 0x115);
          *(undefined8 *)(puVar7 + 0x7d) = *(undefined8 *)(puVar7 + 0x121);
          *(undefined8 *)(puVar7 + 0x7b) = *(undefined8 *)(puVar7 + 0x11f);
          *(undefined8 *)(puVar7 + 0x79) = *(undefined8 *)(puVar7 + 0x11d);
          cVar3 = *(char *)(puVar7 + 0x80);
          cVar4 = *(char *)(puVar7 + 0x124);
          goto joined_r0x00fbddc8;
        }
        *(undefined1 *)(puVar7 + 0x6c) = 0;
        cVar4 = *(char *)(puVar7 + 0x124);
        if (*(char *)(puVar7 + 0x80) == '\0') goto LAB_00fbde0c;
LAB_00fbddcc:
        if (cVar4 == '\0') {
          *(undefined1 *)(puVar7 + 0x80) = 0;
        }
        else {
          *(undefined8 *)(puVar7 + 0x82) = *(undefined8 *)(puVar7 + 0x126);
          *(undefined8 *)(puVar7 + 0x8a) = *(undefined8 *)(puVar7 + 0x12e);
          *(undefined8 *)(puVar7 + 0x88) = *(undefined8 *)(puVar7 + 300);
          *(undefined8 *)(puVar7 + 0x86) = *(undefined8 *)(puVar7 + 0x12a);
          *(undefined8 *)(puVar7 + 0x84) = *(undefined8 *)(puVar7 + 0x128);
        }
      }
      *(undefined8 *)(puVar7 + 0x8c) = *(undefined8 *)(puVar7 + 0x130);
      puVar7[0x94] = puVar7[0x138];
      *(undefined8 *)(puVar7 + 0x92) = *(undefined8 *)(puVar7 + 0x136);
      *(undefined8 *)(puVar7 + 0x90) = *(undefined8 *)(puVar7 + 0x134);
      *(undefined8 *)(puVar7 + 0x8e) = *(undefined8 *)(puVar7 + 0x132);
      *(undefined8 *)(puVar7 + 0x9e) = *(undefined8 *)(puVar7 + 0x142);
      *(undefined8 *)(puVar7 + 0x9c) = *(undefined8 *)(puVar7 + 0x140);
      *(undefined8 *)(puVar7 + 0x9a) = *(undefined8 *)(puVar7 + 0x13e);
      *(undefined8 *)(puVar7 + 0x98) = *(undefined8 *)(puVar7 + 0x13c);
      if (*(long *)(puVar7 + 0xa0) != 0) {
        (**(code **)(*(long *)(*(long *)(puVar7 + 0xa0) + 0x48) + 0x18))();
        *(undefined8 *)(puVar7 + 0xa0) = 0;
      }
      uVar1 = *(undefined8 *)(puVar7 + 0x144);
      *(undefined8 *)(puVar7 + 0x144) = 0;
      *(undefined8 *)(puVar7 + 0xa0) = uVar1;
      if (*(long *)(puVar7 + 0xa2) != 0) {
        (**(code **)(*(long *)(*(long *)(puVar7 + 0xa2) + 0x48) + 0x18))();
        *(undefined8 *)(puVar7 + 0xa2) = 0;
      }
      uVar1 = *(undefined8 *)(puVar7 + 0x146);
      *(undefined8 *)(puVar7 + 0x146) = 0;
      *(undefined8 *)(puVar7 + 0xa2) = uVar1;
      puVar7 = puVar7 + 0xa4;
    } while (puVar5 + -0xa4 != puVar7);
    puVar8 = *(undefined4 **)(param_1 + 0x70);
    if (puVar8 == puVar7) goto LAB_00fbdfc4;
  }
  do {
    if (*(long *)(puVar8 + -2) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar8 + -2) + 0x48) + 0x18))();
      *(undefined8 *)(puVar8 + -2) = 0;
    }
    if (*(long *)(puVar8 + -4) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar8 + -4) + 0x48) + 0x18))();
      *(undefined8 *)(puVar8 + -4) = 0;
    }
    if (*(char *)(puVar8 + -0x24) != '\0') {
      *(undefined1 *)(puVar8 + -0x24) = 0;
    }
    if (*(char *)(puVar8 + -0x38) != '\0') {
      *(undefined1 *)(puVar8 + -0x38) = 0;
    }
    if (*(char *)(puVar8 + -0x68) != '\0') {
      *(char *)(puVar8 + -0x68) = '\0';
    }
    if (*(char *)(puVar8 + -0x7d) != '\0') {
      if (*(char *)(puVar8 + -0x7b) != '\0') {
        *(char *)(puVar8 + -0x7b) = '\0';
      }
      *(char *)(puVar8 + -0x7d) = '\0';
    }
    if (*(char *)(puVar8 + -0x8c) != '\0') {
      *(char *)(puVar8 + -0x8c) = '\0';
    }
    if (*(char *)(puVar8 + -0x91) != '\0') {
      *(char *)(puVar8 + -0x91) = '\0';
    }
    if (*(char *)(puVar8 + -0x9a) != '\0') {
      *(char *)(puVar8 + -0x9a) = '\0';
    }
    if (*(char *)(puVar8 + -0x9e) != '\0') {
      *(char *)(puVar8 + -0x9e) = '\0';
    }
    pcVar6 = (char *)(puVar8 + -0xa0);
    puVar8 = puVar8 + -0xa4;
    if (*pcVar6 != '\0') {
      *pcVar6 = '\0';
    }
  } while (puVar7 != puVar8);
LAB_00fbdfc4:
  *(undefined4 **)(param_1 + 0x70) = puVar7;
  return;
}


