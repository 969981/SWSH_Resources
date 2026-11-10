/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01215440; name: FUN_01215440
 */


byte FUN_01215440(long param_1,char *param_2)

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
    if (param_2[0x34] == '\0') {
LAB_01215518:
      bVar8 = 0;
      cVar1 = *(char *)(param_1 + 0x18);
      cVar3 = param_2[0x10];
      goto joined_r0x01215524;
    }
LAB_012154d4:
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x5c) = uVar6;
    *(undefined8 *)(param_1 + 0x54) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x7c) = uVar6;
    *(undefined8 *)(param_1 + 0x74) = uVar7;
    *(undefined8 *)(param_1 + 0x6c) = uVar5;
    *(undefined1 *)(param_1 + 0x50) = 1;
    cVar1 = *(char *)(param_1 + 0x18);
    cVar3 = param_2[0x10];
joined_r0x01215510:
    bVar8 = 1;
    if (cVar1 == '\0') goto LAB_01215594;
LAB_01215528:
    if (cVar3 == '\0') {
LAB_01215604:
      *(undefined1 *)(param_1 + 0x18) = 0;
      bVar9 = 1;
      cVar1 = *(char *)(param_1 + 8);
      cVar3 = *param_2;
    }
    else {
      uVar2 = FUN_011f5190(param_1 + 0x1a,param_2 + 0x12);
      if ((uVar2 & 1) == 0) {
        if (*(char *)(param_1 + 0x18) != '\0') {
          if (param_2[0x10] != '\0') {
            uVar5 = *(undefined8 *)(param_2 + 0x12);
            uVar6 = *(undefined8 *)(param_2 + 0x1a);
            uVar7 = *(undefined8 *)(param_2 + 0x22);
            *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x2a);
            *(undefined8 *)(param_1 + 0x2a) = uVar7;
            *(undefined8 *)(param_1 + 0x22) = uVar6;
            *(undefined8 *)(param_1 + 0x1a) = uVar5;
            cVar1 = *(char *)(param_1 + 8);
            cVar3 = *param_2;
            goto joined_r0x01215578;
          }
          goto LAB_01215604;
        }
        if (param_2[0x10] != '\0') goto LAB_01215598;
        bVar9 = 1;
        cVar1 = *(char *)(param_1 + 8);
        cVar3 = *param_2;
      }
      else {
LAB_012155d0:
        bVar9 = 0;
        cVar1 = *(char *)(param_1 + 8);
        cVar3 = *param_2;
      }
    }
    if (cVar1 != '\0') goto LAB_012155e0;
LAB_01215618:
    bVar4 = 0;
    if (cVar3 == '\0') goto LAB_01215658;
LAB_01215620:
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
    bVar4 = 1;
    *(undefined1 *)(param_1 + 8) = 1;
    goto LAB_01215658;
  }
  if (param_2[0x34] == '\0') {
LAB_01215580:
    *(undefined1 *)(param_1 + 0x50) = 0;
    cVar1 = *(char *)(param_1 + 0x18);
    cVar3 = param_2[0x10];
  }
  else {
    uVar2 = FUN_0121c430(param_1 + 0x54,param_2 + 0x38);
    if ((uVar2 & 1) != 0) goto LAB_01215518;
    if (*(char *)(param_1 + 0x50) != '\0') {
      if (param_2[0x34] != '\0') {
        uVar5 = *(undefined8 *)(param_2 + 0x38);
        uVar6 = *(undefined8 *)(param_2 + 0x40);
        *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(param_1 + 0x5c) = uVar6;
        *(undefined8 *)(param_1 + 0x54) = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 0x50);
        uVar6 = *(undefined8 *)(param_2 + 0x58);
        uVar7 = *(undefined8 *)(param_2 + 0x60);
        *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x66);
        *(undefined8 *)(param_1 + 0x7c) = uVar7;
        *(undefined8 *)(param_1 + 0x74) = uVar6;
        *(undefined8 *)(param_1 + 0x6c) = uVar5;
        cVar1 = *(char *)(param_1 + 0x18);
        cVar3 = param_2[0x10];
        goto joined_r0x01215510;
      }
      goto LAB_01215580;
    }
    if (param_2[0x34] != '\0') goto LAB_012154d4;
    cVar1 = *(char *)(param_1 + 0x18);
    cVar3 = param_2[0x10];
  }
  bVar8 = 1;
joined_r0x01215524:
  if (cVar1 != '\0') goto LAB_01215528;
LAB_01215594:
  if (cVar3 == '\0') goto LAB_012155d0;
LAB_01215598:
  uVar5 = *(undefined8 *)(param_2 + 0x12);
  uVar6 = *(undefined8 *)(param_2 + 0x1a);
  uVar7 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2a) = uVar7;
  *(undefined8 *)(param_1 + 0x22) = uVar6;
  *(undefined8 *)(param_1 + 0x1a) = uVar5;
  *(undefined1 *)(param_1 + 0x18) = 1;
  cVar1 = *(char *)(param_1 + 8);
  cVar3 = *param_2;
joined_r0x01215578:
  bVar9 = 1;
  if (cVar1 == '\0') goto LAB_01215618;
LAB_012155e0:
  if (cVar3 == '\0') {
LAB_01215650:
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    uVar2 = FUN_0121ac60((undefined8 *)(param_1 + 0x10),param_2 + 8);
    if ((uVar2 & 1) != 0) {
      bVar4 = 0;
      goto LAB_01215658;
    }
    if (*(char *)(param_1 + 8) == '\0') {
      if (*param_2 != '\0') goto LAB_01215620;
    }
    else {
      if (*param_2 == '\0') goto LAB_01215650;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
    }
  }
  bVar4 = 1;
LAB_01215658:
  return bVar8 | bVar9 | bVar4;
}


