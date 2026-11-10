/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012152b0; name: FUN_012152b0
 */


uint FUN_012152b0(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 0x8c) == '\0') {
    if (*(char *)(param_2 + 0x70) != '\0') {
LAB_01215334:
      *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x74);
      *(undefined1 *)(param_1 + 0x94) = 0;
      if (*(char *)(param_2 + 0x78) != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0x84);
        uVar5 = *(undefined8 *)(param_2 + 0x8c);
        uVar1 = *(undefined4 *)(param_2 + 0x94);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x7c);
        *(undefined4 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x98);
      uVar6 = *(undefined8 *)(param_2 + 0xb0);
      uVar4 = *(undefined8 *)(param_2 + 0xa0);
      uVar5 = *(undefined8 *)(param_2 + 0xa8);
      uVar7 = *(undefined8 *)(param_2 + 0xb5);
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      *(undefined8 *)(param_1 + 0xd1) = uVar7;
      *(undefined8 *)(param_1 + 0xcc) = uVar6;
      *(undefined8 *)(param_1 + 0xc4) = uVar5;
      *(undefined8 *)(param_1 + 0xbc) = uVar4;
      goto LAB_01215418;
    }
LAB_0121539c:
    uVar8 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x70) == '\0') {
LAB_012153a4:
      if (*(char *)(param_1 + 0x94) != '\0') {
        *(undefined1 *)(param_1 + 0x94) = 0;
      }
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    else {
      uVar3 = FUN_0121b9e0(param_1 + 0x90,param_2 + 0x74);
      if ((uVar3 & 1) != 0) goto LAB_0121539c;
      if (*(char *)(param_1 + 0x8c) == '\0') {
        if (*(char *)(param_2 + 0x70) != '\0') goto LAB_01215334;
      }
      else {
        if (*(char *)(param_2 + 0x70) == '\0') goto LAB_012153a4;
        *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x74);
        if (*(char *)(param_1 + 0x94) == '\0') {
          if (*(char *)(param_2 + 0x78) != '\0') {
            uVar4 = *(undefined8 *)(param_2 + 0x84);
            uVar5 = *(undefined8 *)(param_2 + 0x8c);
            uVar1 = *(undefined4 *)(param_2 + 0x94);
            *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x7c);
            *(undefined4 *)(param_1 + 0xb0) = uVar1;
            *(undefined8 *)(param_1 + 0xa0) = uVar4;
            *(undefined8 *)(param_1 + 0xa8) = uVar5;
            *(undefined1 *)(param_1 + 0x94) = 1;
          }
        }
        else if (*(char *)(param_2 + 0x78) == '\0') {
          *(undefined1 *)(param_1 + 0x94) = 0;
        }
        else {
          uVar4 = *(undefined8 *)(param_2 + 0x7c);
          uVar5 = *(undefined8 *)(param_2 + 0x84);
          uVar6 = *(undefined8 *)(param_2 + 0x8c);
          *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0x94);
          *(undefined8 *)(param_1 + 0x98) = uVar4;
          *(undefined8 *)(param_1 + 0xa0) = uVar5;
          *(undefined8 *)(param_1 + 0xa8) = uVar6;
        }
        *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x98);
        uVar6 = *(undefined8 *)(param_2 + 0xb0);
        uVar4 = *(undefined8 *)(param_2 + 0xa0);
        uVar5 = *(undefined8 *)(param_2 + 0xa8);
        *(undefined8 *)(param_1 + 0xd1) = *(undefined8 *)(param_2 + 0xb5);
        *(undefined8 *)(param_1 + 0xcc) = uVar6;
        *(undefined8 *)(param_1 + 0xc4) = uVar5;
        *(undefined8 *)(param_1 + 0xbc) = uVar4;
      }
    }
    uVar8 = 1;
  }
LAB_01215418:
  uVar2 = FUN_01215440(param_1,param_2);
  return uVar8 | uVar2 & 1;
}


