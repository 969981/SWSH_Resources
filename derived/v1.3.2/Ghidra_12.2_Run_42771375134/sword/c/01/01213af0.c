/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01213af0; name: FUN_01213af0
 */


uint FUN_01213af0(long param_1,long param_2)

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
    if (*(char *)(param_2 + 0x74) != '\0') {
LAB_01213b70:
      *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x78);
      *(undefined1 *)(param_1 + 0x94) = 0;
      if (*(char *)(param_2 + 0x7c) != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0x88);
        uVar5 = *(undefined8 *)(param_2 + 0x90);
        uVar1 = *(undefined4 *)(param_2 + 0x98);
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x80);
        *(undefined4 *)(param_1 + 0xb0) = uVar1;
        *(undefined8 *)(param_1 + 0xa0) = uVar4;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x9c);
      uVar4 = *(undefined8 *)(param_2 + 0xa4);
      uVar5 = *(undefined8 *)(param_2 + 0xac);
      uVar6 = *(undefined8 *)(param_2 + 0xb4);
      uVar7 = *(undefined8 *)(param_2 + 0xb9);
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      *(undefined8 *)(param_1 + 0xd1) = uVar7;
      *(undefined8 *)(param_1 + 0xcc) = uVar6;
      *(undefined8 *)(param_1 + 0xc4) = uVar5;
      *(undefined8 *)(param_1 + 0xbc) = uVar4;
      goto LAB_01213c54;
    }
LAB_01213bd8:
    uVar8 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x74) == '\0') {
LAB_01213be0:
      if (*(char *)(param_1 + 0x94) != '\0') {
        *(undefined1 *)(param_1 + 0x94) = 0;
      }
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    else {
      uVar3 = FUN_0121b9e0(param_1 + 0x90,param_2 + 0x78);
      if ((uVar3 & 1) != 0) goto LAB_01213bd8;
      if (*(char *)(param_1 + 0x8c) == '\0') {
        if (*(char *)(param_2 + 0x74) != '\0') goto LAB_01213b70;
      }
      else {
        if (*(char *)(param_2 + 0x74) == '\0') goto LAB_01213be0;
        *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x78);
        if (*(char *)(param_1 + 0x94) == '\0') {
          if (*(char *)(param_2 + 0x7c) != '\0') {
            uVar4 = *(undefined8 *)(param_2 + 0x88);
            uVar5 = *(undefined8 *)(param_2 + 0x90);
            uVar1 = *(undefined4 *)(param_2 + 0x98);
            *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x80);
            *(undefined4 *)(param_1 + 0xb0) = uVar1;
            *(undefined8 *)(param_1 + 0xa0) = uVar4;
            *(undefined8 *)(param_1 + 0xa8) = uVar5;
            *(undefined1 *)(param_1 + 0x94) = 1;
          }
        }
        else if (*(char *)(param_2 + 0x7c) == '\0') {
          *(undefined1 *)(param_1 + 0x94) = 0;
        }
        else {
          uVar4 = *(undefined8 *)(param_2 + 0x80);
          uVar5 = *(undefined8 *)(param_2 + 0x88);
          uVar6 = *(undefined8 *)(param_2 + 0x90);
          *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0x98);
          *(undefined8 *)(param_1 + 0x98) = uVar4;
          *(undefined8 *)(param_1 + 0xa0) = uVar5;
          *(undefined8 *)(param_1 + 0xa8) = uVar6;
        }
        *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0x9c);
        uVar4 = *(undefined8 *)(param_2 + 0xa4);
        uVar5 = *(undefined8 *)(param_2 + 0xac);
        uVar6 = *(undefined8 *)(param_2 + 0xb4);
        *(undefined8 *)(param_1 + 0xd1) = *(undefined8 *)(param_2 + 0xb9);
        *(undefined8 *)(param_1 + 0xcc) = uVar6;
        *(undefined8 *)(param_1 + 0xc4) = uVar5;
        *(undefined8 *)(param_1 + 0xbc) = uVar4;
      }
    }
    uVar8 = 1;
  }
LAB_01213c54:
  uVar2 = FUN_01213c80(param_1,param_2);
  return uVar8 | uVar2 & 1;
}


