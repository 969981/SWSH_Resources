/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01217340; name: FUN_01217340
 */


uint FUN_01217340(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    if (*(char *)(param_2 + 0x1a0) == '\0') {
LAB_012174e8:
      uVar8 = 0;
      cVar1 = *(char *)(param_1 + 0xe0);
      cVar4 = *(char *)(param_2 + 0xe0);
      goto joined_r0x012174f4;
    }
LAB_01217438:
    uVar5 = *(undefined8 *)(param_2 + 0x1a4);
    *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_2 + 0x1ac);
    *(undefined8 *)(param_1 + 0x1a4) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1bc);
    uVar6 = *(undefined8 *)(param_2 + 0x1c4);
    uVar7 = *(undefined8 *)(param_2 + 0x1b4);
    *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0x1cc);
    *(undefined8 *)(param_1 + 0x1c4) = uVar6;
    *(undefined8 *)(param_1 + 0x1bc) = uVar5;
    *(undefined8 *)(param_1 + 0x1b4) = uVar7;
    uVar5 = *(undefined8 *)(param_2 + 0x1d4);
    uVar7 = *(undefined8 *)(param_2 + 0x1e4);
    uVar6 = *(undefined8 *)(param_2 + 0x1dc);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
    *(undefined8 *)(param_1 + 0x1e4) = uVar7;
    *(undefined8 *)(param_1 + 0x1dc) = uVar6;
    *(undefined8 *)(param_1 + 0x1d4) = uVar5;
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    cVar1 = *(char *)(param_1 + 0xe0);
    cVar4 = *(char *)(param_2 + 0xe0);
joined_r0x012174e0:
    uVar8 = 1;
    if (cVar1 != '\0') goto LAB_012174f8;
LAB_01217548:
    if (cVar4 == '\0') {
LAB_01217568:
      uVar9 = 0;
      goto LAB_01217578;
    }
  }
  else {
    if (*(char *)(param_2 + 0x1a0) == '\0') {
LAB_01217534:
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      cVar1 = *(char *)(param_1 + 0xe0);
      cVar4 = *(char *)(param_2 + 0xe0);
    }
    else {
      uVar3 = FUN_0121d130(param_1 + 0x1a4,param_2 + 0x1a4);
      if ((uVar3 & 1) != 0) goto LAB_012174e8;
      if (*(char *)(param_1 + 0x1a0) != '\0') {
        if (*(char *)(param_2 + 0x1a0) != '\0') {
          uVar5 = *(undefined8 *)(param_2 + 0x1a4);
          *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_2 + 0x1ac);
          *(undefined8 *)(param_1 + 0x1a4) = uVar5;
          uVar5 = *(undefined8 *)(param_2 + 0x1bc);
          uVar6 = *(undefined8 *)(param_2 + 0x1c4);
          uVar7 = *(undefined8 *)(param_2 + 0x1b4);
          *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0x1cc);
          *(undefined8 *)(param_1 + 0x1c4) = uVar6;
          *(undefined8 *)(param_1 + 0x1bc) = uVar5;
          *(undefined8 *)(param_1 + 0x1b4) = uVar7;
          uVar6 = *(undefined8 *)(param_2 + 0x1e4);
          uVar7 = *(undefined8 *)(param_2 + 0x1d4);
          uVar5 = *(undefined8 *)(param_2 + 0x1dc);
          *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
          *(undefined8 *)(param_1 + 0x1e4) = uVar6;
          *(undefined8 *)(param_1 + 0x1dc) = uVar5;
          *(undefined8 *)(param_1 + 0x1d4) = uVar7;
          cVar1 = *(char *)(param_1 + 0xe0);
          cVar4 = *(char *)(param_2 + 0xe0);
          goto joined_r0x012174e0;
        }
        goto LAB_01217534;
      }
      if (*(char *)(param_2 + 0x1a0) != '\0') goto LAB_01217438;
      cVar1 = *(char *)(param_1 + 0xe0);
      cVar4 = *(char *)(param_2 + 0xe0);
    }
    uVar8 = 1;
joined_r0x012174f4:
    if (cVar1 == '\0') goto LAB_01217548;
LAB_012174f8:
    if (cVar4 == '\0') {
LAB_01217570:
      *(undefined1 *)(param_1 + 0xe0) = 0;
      uVar9 = 1;
      goto LAB_01217578;
    }
    uVar3 = FUN_01223930(param_1 + 0xf0,param_2 + 0xf0);
    if ((uVar3 & 1) != 0) goto LAB_01217568;
    if (*(char *)(param_1 + 0xe0) != '\0') {
      if (*(char *)(param_2 + 0xe0) != '\0') {
        memcpy((void *)(param_1 + 0xf0),(void *)(param_2 + 0xf0),0xa1);
        uVar9 = 1;
        goto LAB_01217578;
      }
      goto LAB_01217570;
    }
    if (*(char *)(param_2 + 0xe0) == '\0') {
      uVar9 = 1;
      goto LAB_01217578;
    }
  }
  memcpy((void *)(param_1 + 0xf0),(void *)(param_2 + 0xf0),0xb0);
  uVar9 = 1;
  *(undefined1 *)(param_1 + 0xe0) = 1;
LAB_01217578:
  uVar2 = FUN_012175d0(param_1,param_2);
  return uVar8 | uVar9 | uVar2 & 1;
}


