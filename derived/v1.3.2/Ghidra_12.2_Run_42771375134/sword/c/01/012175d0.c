/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012175d0; name: FUN_012175d0
 */


uint FUN_012175d0(long param_1,long param_2)

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
    if (*(char *)(param_2 + 0x8c) != '\0') {
LAB_01217650:
      *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
      *(undefined1 *)(param_1 + 0x94) = 0;
      if (*(char *)(param_2 + 0x94) != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0xa0);
        uVar5 = *(undefined8 *)(param_2 + 0xa8);
        uVar1 = *(undefined4 *)(param_2 + 0xb0);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
        *(undefined4 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
      uVar4 = *(undefined8 *)(param_2 + 0xbc);
      uVar5 = *(undefined8 *)(param_2 + 0xc4);
      uVar6 = *(undefined8 *)(param_2 + 0xcc);
      uVar7 = *(undefined8 *)(param_2 + 0xd1);
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      *(undefined8 *)(param_1 + 0xd1) = uVar7;
      *(undefined8 *)(param_1 + 0xcc) = uVar6;
      *(undefined8 *)(param_1 + 0xc4) = uVar5;
      *(undefined8 *)(param_1 + 0xbc) = uVar4;
      goto LAB_01217734;
    }
LAB_012176b8:
    uVar8 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x8c) == '\0') {
LAB_012176c0:
      if (*(char *)(param_1 + 0x94) != '\0') {
        *(undefined1 *)(param_1 + 0x94) = 0;
      }
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    else {
      uVar3 = FUN_0121b9e0(param_1 + 0x90,param_2 + 0x90);
      if ((uVar3 & 1) != 0) goto LAB_012176b8;
      if (*(char *)(param_1 + 0x8c) == '\0') {
        if (*(char *)(param_2 + 0x8c) != '\0') goto LAB_01217650;
      }
      else {
        if (*(char *)(param_2 + 0x8c) == '\0') goto LAB_012176c0;
        *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
        if (*(char *)(param_1 + 0x94) == '\0') {
          if (*(char *)(param_2 + 0x94) != '\0') {
            uVar4 = *(undefined8 *)(param_2 + 0xa0);
            uVar5 = *(undefined8 *)(param_2 + 0xa8);
            uVar1 = *(undefined4 *)(param_2 + 0xb0);
            *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
            *(undefined4 *)(param_1 + 0xb0) = uVar1;
            *(undefined8 *)(param_1 + 0xa0) = uVar4;
            *(undefined8 *)(param_1 + 0xa8) = uVar5;
            *(undefined1 *)(param_1 + 0x94) = 1;
          }
        }
        else if (*(char *)(param_2 + 0x94) == '\0') {
          *(undefined1 *)(param_1 + 0x94) = 0;
        }
        else {
          uVar4 = *(undefined8 *)(param_2 + 0x98);
          uVar5 = *(undefined8 *)(param_2 + 0xa0);
          uVar6 = *(undefined8 *)(param_2 + 0xa8);
          *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
          *(undefined8 *)(param_1 + 0x98) = uVar4;
          *(undefined8 *)(param_1 + 0xa0) = uVar5;
          *(undefined8 *)(param_1 + 0xa8) = uVar6;
        }
        *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
        uVar4 = *(undefined8 *)(param_2 + 0xbc);
        uVar5 = *(undefined8 *)(param_2 + 0xc4);
        uVar6 = *(undefined8 *)(param_2 + 0xcc);
        *(undefined8 *)(param_1 + 0xd1) = *(undefined8 *)(param_2 + 0xd1);
        *(undefined8 *)(param_1 + 0xcc) = uVar6;
        *(undefined8 *)(param_1 + 0xc4) = uVar5;
        *(undefined8 *)(param_1 + 0xbc) = uVar4;
      }
    }
    uVar8 = 1;
  }
LAB_01217734:
  uVar2 = FUN_01217760(param_1,param_2);
  return uVar8 | uVar2 & 1;
}


