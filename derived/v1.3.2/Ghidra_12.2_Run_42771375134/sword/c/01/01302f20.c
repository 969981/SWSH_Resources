/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01302f20; name: FUN_01302f20
 */


undefined8 FUN_01302f20(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  
LAB_013030a0:
  while (pbVar4 = (byte *)*param_2, (byte *)param_2[1] <= pbVar4) {
    uVar1 = 0;
LAB_01303034:
    uVar1 = FUN_0080d8c0(param_2,uVar1);
    *(uint *)(param_2 + 4) = uVar1;
    if (uVar1 - 1 < 0x7f) goto LAB_013030d0;
switchD_013030e8_default:
    if (uVar1 == 0) {
      return 1;
    }
    if ((uVar1 & 7) == 4) {
      return 1;
    }
LAB_0130306c:
    uVar3 = FUN_008148c0(param_2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = (uint)*pbVar4;
  if ((char)*pbVar4 < '\x01') goto LAB_01303034;
  *(uint *)(param_2 + 4) = uVar1;
  *param_2 = (ulong)(pbVar4 + 1);
LAB_013030d0:
  switch(uVar1 >> 3) {
  case 1:
    if (uVar1 != 8) {
LAB_013032d0:
      if ((uVar1 == 0) || ((uVar1 & 7) == 4)) {
        return 1;
      }
      goto LAB_0130306c;
    }
    pbVar4 = (byte *)*param_2;
    if (pbVar4 < (byte *)param_2[1]) {
      uVar1 = (uint)*pbVar4;
      if ((char)*pbVar4 < '\0') goto LAB_01303080;
      *param_2 = (ulong)(pbVar4 + 1);
      *(uint *)(param_1 + 0x14) = uVar1;
      pbVar4 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar4) goto LAB_013030a0;
    }
    else {
      uVar1 = 0;
LAB_01303080:
      lVar2 = FUN_0080d5d0(param_2,uVar1);
      if (lVar2 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x14) = (int)lVar2;
      pbVar4 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar4) goto LAB_013030a0;
    }
    if (*pbVar4 == 0x10) {
      pbVar4 = pbVar4 + 1;
      *param_2 = (ulong)pbVar4;
      if (pbVar4 < pbVar5) {
LAB_01303140:
        if ((char)*pbVar4 < '\0') goto LAB_0130316c;
        uVar3 = (ulong)*pbVar4;
        *param_2 = (ulong)(pbVar4 + 1);
      }
      else {
LAB_0130316c:
        auVar6 = FUN_0080d3e0(param_2);
        uVar3 = auVar6._0_8_;
        if ((auVar6._8_8_ & 1) == 0) {
          return 0;
        }
      }
      *(bool *)(param_1 + 0x18) = uVar3 != 0;
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (*pbVar4 == 0x18)) {
        pbVar4 = pbVar4 + 1;
        *param_2 = (ulong)pbVar4;
        if (pbVar4 < (byte *)param_2[1]) goto LAB_013031c8;
LAB_013031ac:
        uVar1 = 0;
        goto LAB_0130300c;
      }
    }
    goto LAB_013030a0;
  case 2:
    if (uVar1 != 0x10) goto LAB_013032d0;
    pbVar4 = (byte *)*param_2;
    if (pbVar4 < (byte *)param_2[1]) goto LAB_01303140;
    goto LAB_0130316c;
  case 3:
    if (uVar1 != 0x18) goto LAB_013032d0;
    pbVar4 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar4) goto LAB_013031ac;
LAB_013031c8:
    uVar1 = (uint)*pbVar4;
    if ((char)*pbVar4 < '\0') {
LAB_0130300c:
      lVar2 = FUN_0080d5d0(param_2,uVar1);
      if (lVar2 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x1c) = (int)lVar2;
      pbVar4 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar4) goto LAB_013030a0;
    }
    else {
      *param_2 = (ulong)(pbVar4 + 1);
      *(uint *)(param_1 + 0x1c) = uVar1;
      pbVar4 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar4) goto LAB_013030a0;
    }
    if (*pbVar4 != 0x20) goto LAB_013030a0;
    pbVar4 = pbVar4 + 1;
    *param_2 = (ulong)pbVar4;
    if (pbVar4 < pbVar5) goto LAB_01303224;
LAB_01303208:
    uVar1 = 0;
LAB_01302fe8:
    lVar2 = FUN_0080d5d0(param_2,uVar1);
    if (lVar2 < 0) {
      return 0;
    }
    *(int *)(param_1 + 0x20) = (int)lVar2;
    pbVar4 = (byte *)*param_2;
    pbVar5 = (byte *)param_2[1];
    if (pbVar5 <= pbVar4) goto LAB_013030a0;
    break;
  case 4:
    if (uVar1 != 0x20) goto LAB_013032d0;
    pbVar4 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar4) goto LAB_01303208;
LAB_01303224:
    uVar1 = (uint)*pbVar4;
    if ((char)*pbVar4 < '\0') goto LAB_01302fe8;
    *param_2 = (ulong)(pbVar4 + 1);
    *(uint *)(param_1 + 0x20) = uVar1;
    pbVar4 = (byte *)*param_2;
    pbVar5 = (byte *)param_2[1];
    if (pbVar5 <= pbVar4) goto LAB_013030a0;
    break;
  case 5:
    if (uVar1 != 0x28) goto LAB_013032d0;
    pbVar4 = (byte *)*param_2;
    if (pbVar4 < (byte *)param_2[1]) goto LAB_01303280;
    goto LAB_01303264;
  case 6:
    if (uVar1 != 0x30) goto LAB_013032d0;
    pbVar4 = (byte *)*param_2;
    if (pbVar4 < (byte *)param_2[1]) goto LAB_01302f60;
    goto LAB_013032c0;
  default:
    goto switchD_013030e8_default;
  }
  if (*pbVar4 == 0x28) {
    pbVar4 = pbVar4 + 1;
    *param_2 = (ulong)pbVar4;
    if (pbVar4 < pbVar5) {
LAB_01303280:
      uVar1 = (uint)*pbVar4;
      if ((char)*pbVar4 < '\0') goto LAB_01302fc4;
      *param_2 = (ulong)(pbVar4 + 1);
      *(uint *)(param_1 + 0x24) = uVar1;
      pbVar4 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar4) goto LAB_013030a0;
    }
    else {
LAB_01303264:
      uVar1 = 0;
LAB_01302fc4:
      lVar2 = FUN_0080d5d0(param_2,uVar1);
      if (lVar2 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x24) = (int)lVar2;
      pbVar4 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar4) goto LAB_013030a0;
    }
    if (*pbVar4 == 0x30) {
      pbVar4 = pbVar4 + 1;
      *param_2 = (ulong)pbVar4;
      if (pbVar4 < pbVar5) {
LAB_01302f60:
        uVar1 = (uint)*pbVar4;
        if ((char)*pbVar4 < '\0') goto LAB_01302fa0;
        *param_2 = (ulong)(pbVar4 + 1);
        *(uint *)(param_1 + 0x28) = uVar1;
        if (*param_2 != param_2[1]) goto LAB_013030a0;
      }
      else {
LAB_013032c0:
        uVar1 = 0;
LAB_01302fa0:
        lVar2 = FUN_0080d5d0(param_2,uVar1);
        if (lVar2 < 0) {
          return 0;
        }
        *(int *)(param_1 + 0x28) = (int)lVar2;
        if (*param_2 != param_2[1]) goto LAB_013030a0;
      }
      if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((long)param_2 + 0x24) = 1;
        return 1;
      }
    }
  }
  goto LAB_013030a0;
}


