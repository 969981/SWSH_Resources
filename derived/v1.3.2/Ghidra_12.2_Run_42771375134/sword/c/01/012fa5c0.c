/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fa5c0; name: FUN_012fa5c0
 */


undefined8 FUN_012fa5c0(long param_1,ulong *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
LAB_012fa764:
  while (pbVar6 = (byte *)*param_2, (byte *)param_2[1] <= pbVar6) {
    uVar2 = 0;
LAB_012fa6f8:
    uVar2 = FUN_0080d8c0(param_2,uVar2);
    *(uint *)(param_2 + 4) = uVar2;
    if (uVar2 - 1 < 0x7f) goto LAB_012fa794;
switchD_012fa7ac_default:
    if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
      return 1;
    }
LAB_012fa730:
    uVar4 = FUN_008148c0(param_2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = (uint)*pbVar6;
  if ((char)*pbVar6 < '\x01') goto LAB_012fa6f8;
  *(uint *)(param_2 + 4) = uVar2;
  *param_2 = (ulong)(pbVar6 + 1);
LAB_012fa794:
  switch(uVar2 >> 3) {
  case 1:
    if (uVar2 != 8) {
LAB_012fa988:
      if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
        return 1;
      }
      goto LAB_012fa730;
    }
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar1 = *(byte *)*param_2;
      uVar2 = (uint)bVar1;
      if ((char)bVar1 < '\0') goto LAB_012fa744;
      *(uint *)(param_1 + 0x14) = uVar2;
      pbVar6 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar6;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fa764;
    }
    else {
      uVar2 = 0;
LAB_012fa744:
      lVar3 = FUN_0080d5d0(param_2,uVar2);
      *(int *)(param_1 + 0x14) = (int)lVar3;
      if (lVar3 < 0) {
        return 0;
      }
      pbVar6 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fa764;
    }
    if (*pbVar6 == 0x10) {
      pbVar6 = pbVar6 + 1;
      *param_2 = (ulong)pbVar6;
      if (pbVar6 < pbVar5) goto LAB_012fa824;
LAB_012fa808:
      uVar2 = 0;
      goto LAB_012fa6d0;
    }
    goto LAB_012fa764;
  case 2:
    if (uVar2 != 0x10) goto LAB_012fa988;
    pbVar6 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar6) goto LAB_012fa808;
LAB_012fa824:
    uVar2 = (uint)*pbVar6;
    if ((char)*pbVar6 < '\0') {
LAB_012fa6d0:
      lVar3 = FUN_0080d5d0(param_2,uVar2);
      if (lVar3 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x18) = (int)lVar3;
      pbVar6 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fa764;
    }
    else {
      *param_2 = (ulong)(pbVar6 + 1);
      *(uint *)(param_1 + 0x18) = uVar2;
      pbVar6 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fa764;
    }
    if (*pbVar6 != 0x18) goto LAB_012fa764;
    pbVar6 = pbVar6 + 1;
    *param_2 = (ulong)pbVar6;
    if (pbVar6 < pbVar5) goto LAB_012fa880;
LAB_012fa864:
    uVar2 = 0;
LAB_012fa6ac:
    lVar3 = FUN_0080d5d0(param_2,uVar2);
    if (lVar3 < 0) {
      return 0;
    }
    *(int *)(param_1 + 0x1c) = (int)lVar3;
    pbVar6 = (byte *)*param_2;
    pbVar5 = (byte *)param_2[1];
    if (pbVar5 <= pbVar6) goto LAB_012fa764;
    break;
  case 3:
    if (uVar2 != 0x18) goto LAB_012fa988;
    pbVar6 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar6) goto LAB_012fa864;
LAB_012fa880:
    uVar2 = (uint)*pbVar6;
    if ((char)*pbVar6 < '\0') goto LAB_012fa6ac;
    *param_2 = (ulong)(pbVar6 + 1);
    *(uint *)(param_1 + 0x1c) = uVar2;
    pbVar6 = (byte *)*param_2;
    pbVar5 = (byte *)param_2[1];
    if (pbVar5 <= pbVar6) goto LAB_012fa764;
    break;
  case 4:
    if (uVar2 != 0x20) goto LAB_012fa988;
    pbVar6 = (byte *)*param_2;
    if (pbVar6 < (byte *)param_2[1]) goto LAB_012fa8dc;
    goto LAB_012fa8c0;
  case 5:
    if (uVar2 != 0x28) goto LAB_012fa988;
    pbVar6 = (byte *)*param_2;
    if (pbVar6 < (byte *)param_2[1]) goto LAB_012fa938;
    goto LAB_012fa91c;
  case 6:
    if (uVar2 != 0x30) goto LAB_012fa988;
    pbVar6 = (byte *)*param_2;
    if (pbVar6 < (byte *)param_2[1]) goto LAB_012fa600;
    goto LAB_012fa978;
  default:
    goto switchD_012fa7ac_default;
  }
  if (*pbVar6 == 0x20) {
    pbVar6 = pbVar6 + 1;
    *param_2 = (ulong)pbVar6;
    if (pbVar6 < pbVar5) {
LAB_012fa8dc:
      uVar2 = (uint)*pbVar6;
      if ((char)*pbVar6 < '\0') goto LAB_012fa688;
      *param_2 = (ulong)(pbVar6 + 1);
      *(uint *)(param_1 + 0x20) = uVar2;
      pbVar6 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fa764;
    }
    else {
LAB_012fa8c0:
      uVar2 = 0;
LAB_012fa688:
      lVar3 = FUN_0080d5d0(param_2,uVar2);
      if (lVar3 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x20) = (int)lVar3;
      pbVar6 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fa764;
    }
    if (*pbVar6 == 0x28) {
      pbVar6 = pbVar6 + 1;
      *param_2 = (ulong)pbVar6;
      if (pbVar6 < pbVar5) {
LAB_012fa938:
        uVar2 = (uint)*pbVar6;
        if ((char)*pbVar6 < '\0') goto LAB_012fa664;
        *param_2 = (ulong)(pbVar6 + 1);
        *(uint *)(param_1 + 0x24) = uVar2;
        pbVar6 = (byte *)*param_2;
        pbVar5 = (byte *)param_2[1];
        if (pbVar5 <= pbVar6) goto LAB_012fa764;
      }
      else {
LAB_012fa91c:
        uVar2 = 0;
LAB_012fa664:
        lVar3 = FUN_0080d5d0(param_2,uVar2);
        if (lVar3 < 0) {
          return 0;
        }
        *(int *)(param_1 + 0x24) = (int)lVar3;
        pbVar6 = (byte *)*param_2;
        pbVar5 = (byte *)param_2[1];
        if (pbVar5 <= pbVar6) goto LAB_012fa764;
      }
      if (*pbVar6 == 0x30) {
        pbVar6 = pbVar6 + 1;
        *param_2 = (ulong)pbVar6;
        if (pbVar6 < pbVar5) {
LAB_012fa600:
          uVar2 = (uint)*pbVar6;
          if ((char)*pbVar6 < '\0') goto LAB_012fa640;
          *param_2 = (ulong)(pbVar6 + 1);
          *(uint *)(param_1 + 0x28) = uVar2;
          if (*param_2 != param_2[1]) goto LAB_012fa764;
        }
        else {
LAB_012fa978:
          uVar2 = 0;
LAB_012fa640:
          lVar3 = FUN_0080d5d0(param_2,uVar2);
          if (lVar3 < 0) {
            return 0;
          }
          *(int *)(param_1 + 0x28) = (int)lVar3;
          if (*param_2 != param_2[1]) goto LAB_012fa764;
        }
        if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
          *(undefined4 *)(param_2 + 4) = 0;
          *(undefined1 *)((long)param_2 + 0x24) = 1;
          return 1;
        }
      }
    }
  }
  goto LAB_012fa764;
}


