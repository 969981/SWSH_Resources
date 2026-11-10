/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01213860; name: FUN_01213860
 */


uint FUN_01213860(long param_1,long param_2)

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
    if (*(char *)(param_2 + 400) == '\0') {
LAB_01213a08:
      uVar8 = 0;
      cVar1 = *(char *)(param_1 + 0xe0);
      cVar4 = *(char *)(param_2 + 0xd0);
      goto joined_r0x01213a14;
    }
LAB_01213958:
    uVar5 = *(undefined8 *)(param_2 + 0x194);
    *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_2 + 0x19c);
    *(undefined8 *)(param_1 + 0x1a4) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1ac);
    uVar6 = *(undefined8 *)(param_2 + 0x1b4);
    uVar7 = *(undefined8 *)(param_2 + 0x1a4);
    *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0x1bc);
    *(undefined8 *)(param_1 + 0x1c4) = uVar6;
    *(undefined8 *)(param_1 + 0x1bc) = uVar5;
    *(undefined8 *)(param_1 + 0x1b4) = uVar7;
    uVar5 = *(undefined8 *)(param_2 + 0x1c4);
    uVar7 = *(undefined8 *)(param_2 + 0x1d4);
    uVar6 = *(undefined8 *)(param_2 + 0x1cc);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1dc);
    *(undefined8 *)(param_1 + 0x1e4) = uVar7;
    *(undefined8 *)(param_1 + 0x1dc) = uVar6;
    *(undefined8 *)(param_1 + 0x1d4) = uVar5;
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    cVar1 = *(char *)(param_1 + 0xe0);
    cVar4 = *(char *)(param_2 + 0xd0);
joined_r0x01213a00:
    uVar8 = 1;
    if (cVar1 != '\0') goto LAB_01213a18;
LAB_01213a68:
    if (cVar4 == '\0') {
LAB_01213a88:
      uVar9 = 0;
      goto LAB_01213a98;
    }
  }
  else {
    if (*(char *)(param_2 + 400) == '\0') {
LAB_01213a54:
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      cVar1 = *(char *)(param_1 + 0xe0);
      cVar4 = *(char *)(param_2 + 0xd0);
    }
    else {
      uVar3 = FUN_0121d130(param_1 + 0x1a4,param_2 + 0x194);
      if ((uVar3 & 1) != 0) goto LAB_01213a08;
      if (*(char *)(param_1 + 0x1a0) != '\0') {
        if (*(char *)(param_2 + 400) != '\0') {
          uVar5 = *(undefined8 *)(param_2 + 0x194);
          *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_2 + 0x19c);
          *(undefined8 *)(param_1 + 0x1a4) = uVar5;
          uVar5 = *(undefined8 *)(param_2 + 0x1ac);
          uVar6 = *(undefined8 *)(param_2 + 0x1b4);
          uVar7 = *(undefined8 *)(param_2 + 0x1a4);
          *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0x1bc);
          *(undefined8 *)(param_1 + 0x1c4) = uVar6;
          *(undefined8 *)(param_1 + 0x1bc) = uVar5;
          *(undefined8 *)(param_1 + 0x1b4) = uVar7;
          uVar6 = *(undefined8 *)(param_2 + 0x1d4);
          uVar7 = *(undefined8 *)(param_2 + 0x1c4);
          uVar5 = *(undefined8 *)(param_2 + 0x1cc);
          *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1dc);
          *(undefined8 *)(param_1 + 0x1e4) = uVar6;
          *(undefined8 *)(param_1 + 0x1dc) = uVar5;
          *(undefined8 *)(param_1 + 0x1d4) = uVar7;
          cVar1 = *(char *)(param_1 + 0xe0);
          cVar4 = *(char *)(param_2 + 0xd0);
          goto joined_r0x01213a00;
        }
        goto LAB_01213a54;
      }
      if (*(char *)(param_2 + 400) != '\0') goto LAB_01213958;
      cVar1 = *(char *)(param_1 + 0xe0);
      cVar4 = *(char *)(param_2 + 0xd0);
    }
    uVar8 = 1;
joined_r0x01213a14:
    if (cVar1 == '\0') goto LAB_01213a68;
LAB_01213a18:
    if (cVar4 == '\0') {
LAB_01213a90:
      *(undefined1 *)(param_1 + 0xe0) = 0;
      uVar9 = 1;
      goto LAB_01213a98;
    }
    uVar3 = FUN_01223930(param_1 + 0xf0,param_2 + 0xe0);
    if ((uVar3 & 1) != 0) goto LAB_01213a88;
    if (*(char *)(param_1 + 0xe0) != '\0') {
      if (*(char *)(param_2 + 0xd0) != '\0') {
        memcpy((void *)(param_1 + 0xf0),(void *)(param_2 + 0xe0),0xa1);
        uVar9 = 1;
        goto LAB_01213a98;
      }
      goto LAB_01213a90;
    }
    if (*(char *)(param_2 + 0xd0) == '\0') {
      uVar9 = 1;
      goto LAB_01213a98;
    }
  }
  memcpy((void *)(param_1 + 0xf0),(void *)(param_2 + 0xe0),0xb0);
  uVar9 = 1;
  *(undefined1 *)(param_1 + 0xe0) = 1;
LAB_01213a98:
  uVar2 = FUN_01213af0(param_1,param_2);
  return uVar8 | uVar9 | uVar2 & 1;
}


