/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01213c80; name: FUN_01213c80
 */


byte FUN_01213c80(long param_1,char *param_2)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (param_2[0x38] == '\0') {
LAB_01213d68:
      bVar8 = 0;
      cVar1 = *(char *)(param_1 + 0x3c);
      cVar3 = param_2[0x24];
      goto joined_r0x01213d74;
    }
LAB_01213d18:
    uVar5 = *(undefined8 *)(param_2 + 0x3c);
    uVar6 = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x5c) = uVar6;
    *(undefined8 *)(param_1 + 0x54) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x54);
    uVar6 = *(undefined8 *)(param_2 + 0x5c);
    uVar7 = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x6c);
    *(undefined8 *)(param_1 + 0x7c) = uVar7;
    *(undefined8 *)(param_1 + 0x74) = uVar6;
    *(undefined8 *)(param_1 + 0x6c) = uVar5;
    *(undefined1 *)(param_1 + 0x50) = 1;
    cVar1 = *(char *)(param_1 + 0x3c);
    cVar3 = param_2[0x24];
joined_r0x01213d60:
    bVar8 = 1;
    if (cVar1 == '\0') goto LAB_01213dd4;
LAB_01213d78:
    if (cVar3 == '\0') {
LAB_01213e24:
      *(undefined1 *)(param_1 + 0x3c) = 0;
      bVar9 = 1;
      cVar1 = *(char *)(param_1 + 0x18);
      cVar3 = *param_2;
    }
    else {
      uVar2 = FUN_0121b360(param_1 + 0x40,param_2 + 0x28);
      if ((uVar2 & 1) == 0) {
        if (*(char *)(param_1 + 0x3c) != '\0') {
          if (param_2[0x24] != '\0') {
            uVar5 = *(undefined8 *)(param_2 + 0x28);
            *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x2e);
            *(undefined8 *)(param_1 + 0x40) = uVar5;
            cVar1 = *(char *)(param_1 + 0x18);
            cVar3 = *param_2;
            goto joined_r0x01213db8;
          }
          goto LAB_01213e24;
        }
        if (param_2[0x24] != '\0') goto LAB_01213dd8;
        bVar9 = 1;
        cVar1 = *(char *)(param_1 + 0x18);
        cVar3 = *param_2;
      }
      else {
LAB_01213df8:
        bVar9 = 0;
        cVar1 = *(char *)(param_1 + 0x18);
        cVar3 = *param_2;
      }
    }
    if (cVar1 != '\0') goto LAB_01213e08;
LAB_01213e38:
    bVar4 = 0;
    if (cVar3 == '\0') goto LAB_01213ea4;
LAB_01213e3c:
    uVar5 = *(undefined8 *)(param_2 + 10);
    uVar6 = *(undefined8 *)(param_2 + 0x12);
    uVar7 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 2);
    bVar4 = 1;
    *(undefined8 *)(param_1 + 0x32) = uVar7;
    *(undefined8 *)(param_1 + 0x2a) = uVar6;
    *(undefined8 *)(param_1 + 0x22) = uVar5;
    *(undefined1 *)(param_1 + 0x18) = 1;
    goto LAB_01213ea4;
  }
  if (param_2[0x38] == '\0') {
LAB_01213dc0:
    *(undefined1 *)(param_1 + 0x50) = 0;
    cVar1 = *(char *)(param_1 + 0x3c);
    cVar3 = param_2[0x24];
  }
  else {
    uVar2 = FUN_0121c430(param_1 + 0x54,param_2 + 0x3c);
    if ((uVar2 & 1) != 0) goto LAB_01213d68;
    if (*(char *)(param_1 + 0x50) != '\0') {
      if (param_2[0x38] != '\0') {
        uVar5 = *(undefined8 *)(param_2 + 0x3c);
        uVar6 = *(undefined8 *)(param_2 + 0x44);
        *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x4c);
        *(undefined8 *)(param_1 + 0x5c) = uVar6;
        *(undefined8 *)(param_1 + 0x54) = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 0x54);
        uVar6 = *(undefined8 *)(param_2 + 0x5c);
        uVar7 = *(undefined8 *)(param_2 + 100);
        *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x6a);
        *(undefined8 *)(param_1 + 0x7c) = uVar7;
        *(undefined8 *)(param_1 + 0x74) = uVar6;
        *(undefined8 *)(param_1 + 0x6c) = uVar5;
        cVar1 = *(char *)(param_1 + 0x3c);
        cVar3 = param_2[0x24];
        goto joined_r0x01213d60;
      }
      goto LAB_01213dc0;
    }
    if (param_2[0x38] != '\0') goto LAB_01213d18;
    cVar1 = *(char *)(param_1 + 0x3c);
    cVar3 = param_2[0x24];
  }
  bVar8 = 1;
joined_r0x01213d74:
  if (cVar1 != '\0') goto LAB_01213d78;
LAB_01213dd4:
  if (cVar3 == '\0') goto LAB_01213df8;
LAB_01213dd8:
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  cVar1 = *(char *)(param_1 + 0x18);
  cVar3 = *param_2;
joined_r0x01213db8:
  bVar9 = 1;
  if (cVar1 == '\0') goto LAB_01213e38;
LAB_01213e08:
  if (cVar3 == '\0') {
LAB_01213e9c:
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar2 = FUN_011f5190(param_1 + 0x1a,param_2 + 2);
    if ((uVar2 & 1) != 0) {
      bVar4 = 0;
      goto LAB_01213ea4;
    }
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (*param_2 != '\0') goto LAB_01213e3c;
    }
    else {
      if (*param_2 == '\0') goto LAB_01213e9c;
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar6 = *(undefined8 *)(param_2 + 10);
      uVar7 = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x1a);
      *(undefined8 *)(param_1 + 0x2a) = uVar7;
      *(undefined8 *)(param_1 + 0x22) = uVar6;
      *(undefined8 *)(param_1 + 0x1a) = uVar5;
    }
  }
  bVar4 = 1;
LAB_01213ea4:
  return bVar8 | bVar9 | bVar4;
}


