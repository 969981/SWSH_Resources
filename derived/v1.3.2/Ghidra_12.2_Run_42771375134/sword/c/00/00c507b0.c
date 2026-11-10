/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c507b0; name: FUN_00c507b0
 */


void FUN_00c507b0(long param_1,char *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar4 = (char *)(param_1 + 0x70);
  if (*pcVar4 == '\0') {
    if (*param_2 != '\0') {
      FUN_00c51300(pcVar4,param_2 + 0x10);
      return;
    }
  }
  else {
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x10);
      FUN_00c515a0(param_1 + 0x90,param_2 + 0x20);
      if (*(char *)(param_1 + 0x170) == '\0') {
        if (param_2[0x100] != '\0') {
          memcpy((void *)(param_1 + 0x180),param_2 + 0x110,0xb0);
          *(undefined1 *)(param_1 + 0x170) = 1;
        }
        cVar2 = *(char *)(param_1 + 0x230);
        cVar3 = param_2[0x1c0];
      }
      else if (param_2[0x100] == '\0') {
        *(undefined1 *)(param_1 + 0x170) = 0;
        cVar2 = *(char *)(param_1 + 0x230);
        cVar3 = param_2[0x1c0];
      }
      else {
        memcpy((void *)(param_1 + 0x180),param_2 + 0x110,0xa1);
        cVar2 = *(char *)(param_1 + 0x230);
        cVar3 = param_2[0x1c0];
      }
      if (cVar2 == '\0') {
        if (cVar3 != '\0') {
          uVar5 = *(undefined8 *)(param_2 + 0x1c4);
          *(undefined8 *)(param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x1cc);
          *(undefined8 *)(param_1 + 0x234) = uVar5;
          uVar5 = *(undefined8 *)(param_2 + 0x1dc);
          uVar6 = *(undefined8 *)(param_2 + 0x1e4);
          uVar7 = *(undefined8 *)(param_2 + 0x1d4);
          *(undefined8 *)(param_1 + 0x25c) = *(undefined8 *)(param_2 + 0x1ec);
          *(undefined8 *)(param_1 + 0x254) = uVar6;
          *(undefined8 *)(param_1 + 0x24c) = uVar5;
          *(undefined8 *)(param_1 + 0x244) = uVar7;
          uVar5 = *(undefined8 *)(param_2 + 500);
          uVar7 = *(undefined8 *)(param_2 + 0x204);
          uVar6 = *(undefined8 *)(param_2 + 0x1fc);
          *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x20c);
          *(undefined8 *)(param_1 + 0x274) = uVar7;
          *(undefined8 *)(param_1 + 0x264) = uVar5;
          *(undefined8 *)(param_1 + 0x26c) = uVar6;
          *(undefined1 *)(param_1 + 0x230) = 1;
        }
        cVar2 = *(char *)(param_1 + 0x280);
        cVar3 = param_2[0x210];
      }
      else if (cVar3 == '\0') {
        *(undefined1 *)(param_1 + 0x230) = 0;
        cVar2 = *(char *)(param_1 + 0x280);
        cVar3 = param_2[0x210];
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0x1c4);
        *(undefined8 *)(param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x1cc);
        *(undefined8 *)(param_1 + 0x234) = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 0x1dc);
        uVar6 = *(undefined8 *)(param_2 + 0x1e4);
        uVar7 = *(undefined8 *)(param_2 + 0x1d4);
        *(undefined8 *)(param_1 + 0x25c) = *(undefined8 *)(param_2 + 0x1ec);
        *(undefined8 *)(param_1 + 0x254) = uVar6;
        *(undefined8 *)(param_1 + 0x24c) = uVar5;
        *(undefined8 *)(param_1 + 0x244) = uVar7;
        uVar5 = *(undefined8 *)(param_2 + 500);
        uVar6 = *(undefined8 *)(param_2 + 0x1fc);
        uVar7 = *(undefined8 *)(param_2 + 0x204);
        *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x20c);
        *(undefined8 *)(param_1 + 0x26c) = uVar6;
        *(undefined8 *)(param_1 + 0x274) = uVar7;
        *(undefined8 *)(param_1 + 0x264) = uVar5;
        cVar2 = *(char *)(param_1 + 0x280);
        cVar3 = param_2[0x210];
      }
      if (cVar2 == '\0') {
        if (cVar3 != '\0') {
          *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x218);
          uVar5 = *(undefined8 *)(param_2 + 0x228);
          uVar6 = *(undefined8 *)(param_2 + 0x230);
          uVar7 = *(undefined8 *)(param_2 + 0x238);
          *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x220);
          *(undefined8 *)(param_1 + 0x2a8) = uVar7;
          *(undefined8 *)(param_1 + 0x2a0) = uVar6;
          *(undefined8 *)(param_1 + 0x298) = uVar5;
          *(undefined1 *)(param_1 + 0x280) = 1;
        }
      }
      else if (cVar3 == '\0') {
        *(undefined1 *)(param_1 + 0x280) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x218);
        uVar5 = *(undefined8 *)(param_2 + 0x220);
        uVar6 = *(undefined8 *)(param_2 + 0x228);
        uVar7 = *(undefined8 *)(param_2 + 0x230);
        *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x238);
        *(undefined8 *)(param_1 + 0x2a0) = uVar7;
        *(undefined8 *)(param_1 + 0x298) = uVar6;
        *(undefined8 *)(param_1 + 0x290) = uVar5;
      }
      uVar5 = *(undefined8 *)(param_2 + 0x248);
      uVar1 = *(undefined4 *)(param_2 + 0x260);
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 600);
      *(undefined8 *)(param_1 + 0x2b8) = uVar5;
      *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x240);
      uVar5 = *(undefined8 *)(param_2 + 0x250);
      *(undefined4 *)(param_1 + 0x2d0) = uVar1;
      *(undefined8 *)(param_1 + 0x2c0) = uVar5;
      return;
    }
    if (*(char *)(param_1 + 0x280) != '\0') {
      *(undefined1 *)(param_1 + 0x280) = 0;
    }
    if (*(char *)(param_1 + 0x230) != '\0') {
      *(undefined1 *)(param_1 + 0x230) = 0;
    }
    if (*(char *)(param_1 + 0x170) != '\0') {
      *(undefined1 *)(param_1 + 0x170) = 0;
    }
    if (*(char *)(param_1 + 0x11c) != '\0') {
      if (*(char *)(param_1 + 0x124) != '\0') {
        *(undefined1 *)(param_1 + 0x124) = 0;
      }
      *(undefined1 *)(param_1 + 0x11c) = 0;
    }
    if (*(char *)(param_1 + 0xe0) != '\0') {
      *(undefined1 *)(param_1 + 0xe0) = 0;
    }
    if (*(char *)(param_1 + 0xcc) != '\0') {
      *(undefined1 *)(param_1 + 0xcc) = 0;
    }
    if (*(char *)(param_1 + 0xa8) != '\0') {
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    if (*(char *)(param_1 + 0x90) != '\0') {
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
    *pcVar4 = '\0';
  }
  return;
}


