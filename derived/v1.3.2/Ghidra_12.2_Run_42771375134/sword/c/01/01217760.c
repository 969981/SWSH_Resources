/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01217760; name: FUN_01217760
 */


uint FUN_01217760(long param_1,long param_2)

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
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (*(char *)(param_2 + 0x50) == '\0') {
LAB_01217848:
      uVar8 = 0;
      cVar1 = *(char *)(param_1 + 0x3c);
      cVar4 = *(char *)(param_2 + 0x3c);
      goto joined_r0x01217854;
    }
LAB_012177f8:
    uVar5 = *(undefined8 *)(param_2 + 0x54);
    uVar6 = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)(param_1 + 0x5c) = uVar6;
    *(undefined8 *)(param_1 + 0x54) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x6c);
    uVar6 = *(undefined8 *)(param_2 + 0x74);
    uVar7 = *(undefined8 *)(param_2 + 0x7c);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
    *(undefined8 *)(param_1 + 0x7c) = uVar7;
    *(undefined8 *)(param_1 + 0x74) = uVar6;
    *(undefined8 *)(param_1 + 0x6c) = uVar5;
    *(undefined1 *)(param_1 + 0x50) = 1;
    cVar1 = *(char *)(param_1 + 0x3c);
    cVar4 = *(char *)(param_2 + 0x3c);
joined_r0x01217840:
    uVar8 = 1;
    if (cVar1 != '\0') goto LAB_01217858;
LAB_012178a8:
    if (cVar4 == '\0') {
LAB_012178c0:
      uVar9 = 0;
      goto LAB_012178d0;
    }
  }
  else {
    if (*(char *)(param_2 + 0x50) == '\0') {
LAB_01217894:
      *(undefined1 *)(param_1 + 0x50) = 0;
      cVar1 = *(char *)(param_1 + 0x3c);
      cVar4 = *(char *)(param_2 + 0x3c);
    }
    else {
      uVar3 = FUN_0121c430(param_1 + 0x54,param_2 + 0x54);
      if ((uVar3 & 1) != 0) goto LAB_01217848;
      if (*(char *)(param_1 + 0x50) != '\0') {
        if (*(char *)(param_2 + 0x50) != '\0') {
          uVar5 = *(undefined8 *)(param_2 + 0x54);
          uVar6 = *(undefined8 *)(param_2 + 0x5c);
          *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
          *(undefined8 *)(param_1 + 0x5c) = uVar6;
          *(undefined8 *)(param_1 + 0x54) = uVar5;
          uVar5 = *(undefined8 *)(param_2 + 0x6c);
          uVar6 = *(undefined8 *)(param_2 + 0x74);
          uVar7 = *(undefined8 *)(param_2 + 0x7c);
          *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x82);
          *(undefined8 *)(param_1 + 0x7c) = uVar7;
          *(undefined8 *)(param_1 + 0x74) = uVar6;
          *(undefined8 *)(param_1 + 0x6c) = uVar5;
          cVar1 = *(char *)(param_1 + 0x3c);
          cVar4 = *(char *)(param_2 + 0x3c);
          goto joined_r0x01217840;
        }
        goto LAB_01217894;
      }
      if (*(char *)(param_2 + 0x50) != '\0') goto LAB_012177f8;
      cVar1 = *(char *)(param_1 + 0x3c);
      cVar4 = *(char *)(param_2 + 0x3c);
    }
    uVar8 = 1;
joined_r0x01217854:
    if (cVar1 == '\0') goto LAB_012178a8;
LAB_01217858:
    if (cVar4 == '\0') {
LAB_012178c8:
      *(undefined1 *)(param_1 + 0x3c) = 0;
      uVar9 = 1;
      goto LAB_012178d0;
    }
    uVar3 = FUN_0121b360(param_1 + 0x40,param_2 + 0x40);
    if ((uVar3 & 1) != 0) goto LAB_012178c0;
    if (*(char *)(param_1 + 0x3c) != '\0') {
      if (*(char *)(param_2 + 0x3c) != '\0') {
        uVar5 = *(undefined8 *)(param_2 + 0x40);
        *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
        *(undefined8 *)(param_1 + 0x40) = uVar5;
        uVar9 = 1;
        goto LAB_012178d0;
      }
      goto LAB_012178c8;
    }
    if (*(char *)(param_2 + 0x3c) == '\0') {
      uVar9 = 1;
      goto LAB_012178d0;
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uVar9 = 1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined1 *)(param_1 + 0x3c) = 1;
LAB_012178d0:
  uVar2 = FUN_01217920(param_1,param_2);
  return uVar8 | uVar9 | uVar2 & 1;
}


