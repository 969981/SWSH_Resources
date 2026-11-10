/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01217920; name: FUN_01217920
 */


byte FUN_01217920(char *param_1,char *param_2)

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
  
  if (param_1[0x18] == '\0') {
    if (param_2[0x18] == '\0') {
LAB_012179dc:
      bVar9 = 0;
      cVar1 = param_1[8];
      cVar3 = param_2[8];
      goto joined_r0x012179e8;
    }
LAB_012179a4:
    uVar5 = *(undefined8 *)(param_2 + 0x1a);
    uVar6 = *(undefined8 *)(param_2 + 0x22);
    uVar7 = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
    *(undefined8 *)(param_1 + 0x2a) = uVar7;
    *(undefined8 *)(param_1 + 0x22) = uVar6;
    *(undefined8 *)(param_1 + 0x1a) = uVar5;
    param_1[0x18] = '\x01';
    cVar1 = param_1[8];
    cVar3 = param_2[8];
joined_r0x012179d4:
    bVar9 = 1;
    if (cVar1 == '\0') goto LAB_01217a48;
LAB_012179ec:
    if (cVar3 == '\0') {
LAB_01217a9c:
      param_1[8] = '\0';
      bVar8 = 1;
      cVar1 = *param_1;
      cVar3 = *param_2;
    }
    else {
      uVar2 = FUN_0121ac60(param_1 + 0x10,param_2 + 0x10);
      if ((uVar2 & 1) == 0) {
        if (param_1[8] != '\0') {
          if (param_2[8] != '\0') {
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
            cVar1 = *param_1;
            cVar3 = *param_2;
            goto joined_r0x01217a2c;
          }
          goto LAB_01217a9c;
        }
        if (param_2[8] != '\0') goto LAB_01217a50;
        bVar8 = 1;
        cVar1 = *param_1;
        cVar3 = *param_2;
      }
      else {
LAB_01217a70:
        bVar8 = 0;
        cVar1 = *param_1;
        cVar3 = *param_2;
      }
    }
    if (cVar1 != '\0') goto LAB_01217a80;
LAB_01217ab0:
    bVar4 = 0;
    if (cVar3 == '\0') goto LAB_01217ad8;
LAB_01217ab4:
    bVar4 = 1;
    *param_1 = '\x01';
    goto LAB_01217ad8;
  }
  if (param_2[0x18] == '\0') {
LAB_01217a34:
    param_1[0x18] = '\0';
    cVar1 = param_1[8];
    cVar3 = param_2[8];
  }
  else {
    uVar2 = FUN_011f5190(param_1 + 0x1a,param_2 + 0x1a);
    if ((uVar2 & 1) != 0) goto LAB_012179dc;
    if (param_1[0x18] != '\0') {
      if (param_2[0x18] != '\0') {
        uVar5 = *(undefined8 *)(param_2 + 0x1a);
        uVar6 = *(undefined8 *)(param_2 + 0x22);
        uVar7 = *(undefined8 *)(param_2 + 0x2a);
        *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
        *(undefined8 *)(param_1 + 0x2a) = uVar7;
        *(undefined8 *)(param_1 + 0x22) = uVar6;
        *(undefined8 *)(param_1 + 0x1a) = uVar5;
        cVar1 = param_1[8];
        cVar3 = param_2[8];
        goto joined_r0x012179d4;
      }
      goto LAB_01217a34;
    }
    if (param_2[0x18] != '\0') goto LAB_012179a4;
    cVar1 = param_1[8];
    cVar3 = param_2[8];
  }
  bVar9 = 1;
joined_r0x012179e8:
  if (cVar1 != '\0') goto LAB_012179ec;
LAB_01217a48:
  if (cVar3 == '\0') goto LAB_01217a70;
LAB_01217a50:
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  param_1[8] = '\x01';
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  cVar1 = *param_1;
  cVar3 = *param_2;
joined_r0x01217a2c:
  bVar8 = 1;
  if (cVar1 == '\0') goto LAB_01217ab0;
LAB_01217a80:
  if (cVar3 == '\0') {
LAB_01217ad0:
    *param_1 = '\0';
  }
  else {
    uVar2 = FUN_0121ace0(param_1 + 1,param_2 + 1);
    if ((uVar2 & 1) != 0) {
      bVar4 = 0;
      goto LAB_01217ad8;
    }
    if (*param_1 == '\0') {
      if (*param_2 != '\0') goto LAB_01217ab4;
    }
    else if (*param_2 == '\0') goto LAB_01217ad0;
  }
  bVar4 = 1;
LAB_01217ad8:
  return bVar9 | bVar8 | bVar4;
}


