/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01216240; name: FUN_01216240
 */


byte FUN_01216240(long param_1,char *param_2)

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
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    if (param_2[0x120] == '\0') {
LAB_012162f8:
      bVar8 = 0;
      cVar1 = *(char *)(param_1 + 0x1a0);
      cVar3 = param_2[0xc0];
      goto joined_r0x01216304;
    }
LAB_012162c0:
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
    cVar3 = param_2[0xc0];
joined_r0x012162f0:
    bVar8 = 1;
    if (cVar1 == '\0') goto LAB_012163cc;
LAB_01216308:
    if (cVar3 == '\0') {
LAB_0121648c:
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      bVar9 = 1;
      cVar1 = *(char *)(param_1 + 0xe0);
      cVar3 = *param_2;
    }
    else {
      uVar2 = FUN_0121d130(param_1 + 0x1a4,param_2 + 0xc4);
      if ((uVar2 & 1) == 0) {
        if (*(char *)(param_1 + 0x1a0) != '\0') {
          if (param_2[0xc0] != '\0') {
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
            cVar1 = *(char *)(param_1 + 0xe0);
            cVar3 = *param_2;
            goto joined_r0x012163b0;
          }
          goto LAB_0121648c;
        }
        if (param_2[0xc0] != '\0') goto LAB_012163d0;
        bVar9 = 1;
        cVar1 = *(char *)(param_1 + 0xe0);
        cVar3 = *param_2;
      }
      else {
LAB_01216460:
        bVar9 = 0;
        cVar1 = *(char *)(param_1 + 0xe0);
        cVar3 = *param_2;
      }
    }
    if (cVar1 != '\0') goto LAB_01216470;
LAB_012164a0:
    bVar4 = 0;
    if (cVar3 == '\0') goto LAB_012164ec;
LAB_012164a4:
    memcpy((void *)(param_1 + 0xf0),param_2 + 0x10,0xb0);
    bVar4 = 1;
    *(undefined1 *)(param_1 + 0xe0) = 1;
    goto LAB_012164ec;
  }
  if (param_2[0x120] == '\0') {
LAB_012163b8:
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    cVar1 = *(char *)(param_1 + 0x1a0);
    cVar3 = param_2[0xc0];
  }
  else {
    uVar2 = FUN_0121ae60(param_1 + 0x1f8,param_2 + 0x128);
    if ((uVar2 & 1) != 0) goto LAB_012162f8;
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      if (param_2[0x120] != '\0') {
        *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x128);
        uVar5 = *(undefined8 *)(param_2 + 0x130);
        uVar7 = *(undefined8 *)(param_2 + 0x138);
        uVar6 = *(undefined8 *)(param_2 + 0x140);
        *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x148);
        *(undefined8 *)(param_1 + 0x210) = uVar6;
        *(undefined8 *)(param_1 + 0x208) = uVar7;
        *(undefined8 *)(param_1 + 0x200) = uVar5;
        cVar1 = *(char *)(param_1 + 0x1a0);
        cVar3 = param_2[0xc0];
        goto joined_r0x012162f0;
      }
      goto LAB_012163b8;
    }
    if (param_2[0x120] != '\0') goto LAB_012162c0;
    cVar1 = *(char *)(param_1 + 0x1a0);
    cVar3 = param_2[0xc0];
  }
  bVar8 = 1;
joined_r0x01216304:
  if (cVar1 != '\0') goto LAB_01216308;
LAB_012163cc:
  if (cVar3 == '\0') goto LAB_01216460;
LAB_012163d0:
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
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  cVar1 = *(char *)(param_1 + 0xe0);
  cVar3 = *param_2;
joined_r0x012163b0:
  bVar9 = 1;
  if (cVar1 == '\0') goto LAB_012164a0;
LAB_01216470:
  if (cVar3 == '\0') {
LAB_012164e4:
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  else {
    uVar2 = FUN_01223930(param_1 + 0xf0,param_2 + 0x10);
    if ((uVar2 & 1) != 0) {
      bVar4 = 0;
      goto LAB_012164ec;
    }
    if (*(char *)(param_1 + 0xe0) == '\0') {
      if (*param_2 != '\0') goto LAB_012164a4;
    }
    else {
      if (*param_2 == '\0') goto LAB_012164e4;
      memcpy((void *)(param_1 + 0xf0),param_2 + 0x10,0xa1);
    }
  }
  bVar4 = 1;
LAB_012164ec:
  return bVar8 | bVar9 | bVar4;
}


