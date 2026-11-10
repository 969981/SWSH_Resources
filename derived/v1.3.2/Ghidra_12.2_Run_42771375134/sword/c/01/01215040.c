/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01215040; name: FUN_01215040
 */


uint FUN_01215040(long param_1,long param_2)

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
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    if (*(char *)(param_2 + 0x120) == '\0') {
LAB_012150f8:
      uVar8 = 0;
      cVar1 = *(char *)(param_1 + 0x1a0);
      cVar4 = *(char *)(param_2 + 0xc0);
      goto joined_r0x01215104;
    }
LAB_012150c0:
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x128);
    uVar5 = *(undefined8 *)(param_2 + 0x130);
    uVar7 = *(undefined8 *)(param_2 + 0x138);
    uVar6 = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_1 + 0x210) = uVar6;
    *(undefined8 *)(param_1 + 0x208) = uVar7;
    *(undefined8 *)(param_1 + 0x200) = uVar5;
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    cVar1 = *(char *)(param_1 + 0x1a0);
    cVar4 = *(char *)(param_2 + 0xc0);
joined_r0x012150f0:
    uVar8 = 1;
    if (cVar1 != '\0') goto LAB_01215108;
LAB_012151c0:
    if (cVar4 == '\0') {
LAB_01215248:
      uVar9 = 0;
      goto LAB_01215258;
    }
  }
  else {
    if (*(char *)(param_2 + 0x120) == '\0') {
LAB_012151ac:
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      cVar1 = *(char *)(param_1 + 0x1a0);
      cVar4 = *(char *)(param_2 + 0xc0);
    }
    else {
      uVar3 = FUN_0121ae60(param_1 + 0x1f8,param_2 + 0x128);
      if ((uVar3 & 1) != 0) goto LAB_012150f8;
      if (*(char *)(param_1 + 0x1f0) != '\0') {
        if (*(char *)(param_2 + 0x120) != '\0') {
          *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x128);
          uVar5 = *(undefined8 *)(param_2 + 0x130);
          uVar7 = *(undefined8 *)(param_2 + 0x138);
          uVar6 = *(undefined8 *)(param_2 + 0x140);
          *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x148);
          *(undefined8 *)(param_1 + 0x210) = uVar6;
          *(undefined8 *)(param_1 + 0x208) = uVar7;
          *(undefined8 *)(param_1 + 0x200) = uVar5;
          cVar1 = *(char *)(param_1 + 0x1a0);
          cVar4 = *(char *)(param_2 + 0xc0);
          goto joined_r0x012150f0;
        }
        goto LAB_012151ac;
      }
      if (*(char *)(param_2 + 0x120) != '\0') goto LAB_012150c0;
      cVar1 = *(char *)(param_1 + 0x1a0);
      cVar4 = *(char *)(param_2 + 0xc0);
    }
    uVar8 = 1;
joined_r0x01215104:
    if (cVar1 == '\0') goto LAB_012151c0;
LAB_01215108:
    if (cVar4 == '\0') {
LAB_01215250:
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      uVar9 = 1;
      goto LAB_01215258;
    }
    uVar3 = FUN_0121d130(param_1 + 0x1a4,param_2 + 0xc4);
    if ((uVar3 & 1) != 0) goto LAB_01215248;
    if (*(char *)(param_1 + 0x1a0) != '\0') {
      if (*(char *)(param_2 + 0xc0) != '\0') {
        uVar5 = *(undefined8 *)(param_2 + 0xc4);
        *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_2 + 0xcc);
        *(undefined8 *)(param_1 + 0x1a4) = uVar5;
        uVar7 = *(undefined8 *)(param_2 + 0xe4);
        uVar5 = *(undefined8 *)(param_2 + 0xd4);
        uVar6 = *(undefined8 *)(param_2 + 0xdc);
        *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0xec);
        *(undefined8 *)(param_1 + 0x1c4) = uVar7;
        *(undefined8 *)(param_1 + 0x1bc) = uVar6;
        *(undefined8 *)(param_1 + 0x1b4) = uVar5;
        uVar7 = *(undefined8 *)(param_2 + 0x104);
        uVar5 = *(undefined8 *)(param_2 + 0xf4);
        uVar6 = *(undefined8 *)(param_2 + 0xfc);
        *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x10c);
        *(undefined8 *)(param_1 + 0x1e4) = uVar7;
        *(undefined8 *)(param_1 + 0x1dc) = uVar6;
        *(undefined8 *)(param_1 + 0x1d4) = uVar5;
        uVar9 = 1;
        goto LAB_01215258;
      }
      goto LAB_01215250;
    }
    if (*(char *)(param_2 + 0xc0) == '\0') {
      uVar9 = 1;
      goto LAB_01215258;
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0x1a4) = uVar5;
  uVar7 = *(undefined8 *)(param_2 + 0xe4);
  uVar5 = *(undefined8 *)(param_2 + 0xd4);
  uVar6 = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0x1c4) = uVar7;
  *(undefined8 *)(param_1 + 0x1bc) = uVar6;
  *(undefined8 *)(param_1 + 0x1b4) = uVar5;
  uVar7 = *(undefined8 *)(param_2 + 0x104);
  uVar5 = *(undefined8 *)(param_2 + 0xf4);
  uVar6 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x1e4) = uVar7;
  uVar9 = 1;
  *(undefined8 *)(param_1 + 0x1dc) = uVar6;
  *(undefined8 *)(param_1 + 0x1d4) = uVar5;
  *(undefined1 *)(param_1 + 0x1a0) = 1;
LAB_01215258:
  uVar2 = FUN_012152b0(param_1,param_2);
  return uVar8 | uVar9 | uVar2 & 1;
}


