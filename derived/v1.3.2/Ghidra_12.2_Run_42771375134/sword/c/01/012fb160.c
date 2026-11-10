/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fb160; name: FUN_012fb160
 */


undefined8 FUN_012fb160(long param_1,ulong *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  
LAB_012fb29c:
  while (pbVar6 = (byte *)*param_2, (byte *)param_2[1] <= pbVar6) {
    uVar2 = 0;
LAB_012fb230:
    uVar2 = FUN_0080d8c0(param_2,uVar2);
    *(uint *)(param_2 + 4) = uVar2;
    if (uVar2 - 1 < 0x7f) goto LAB_012fb2cc;
switchD_012fb2e4_default:
    if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
      return 1;
    }
LAB_012fb268:
    uVar4 = FUN_008148c0(param_2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = (uint)*pbVar6;
  if ((char)*pbVar6 < '\x01') goto LAB_012fb230;
  *(uint *)(param_2 + 4) = uVar2;
  *param_2 = (ulong)(pbVar6 + 1);
LAB_012fb2cc:
  switch(uVar2 >> 3) {
  case 1:
    if (uVar2 != 8) {
LAB_012fb428:
      if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
        return 1;
      }
      goto LAB_012fb268;
    }
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar1 = *(byte *)*param_2;
      uVar2 = (uint)bVar1;
      if ((char)bVar1 < '\0') goto LAB_012fb27c;
      *(uint *)(param_1 + 0x20) = uVar2;
      pbVar6 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar6;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fb29c;
    }
    else {
      uVar2 = 0;
LAB_012fb27c:
      lVar3 = FUN_0080d5d0(param_2,uVar2);
      *(int *)(param_1 + 0x20) = (int)lVar3;
      if (lVar3 < 0) {
        return 0;
      }
      pbVar6 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fb29c;
    }
    if (*pbVar6 == 0x10) {
      pbVar6 = pbVar6 + 1;
      *param_2 = (ulong)pbVar6;
      if (pbVar6 < pbVar5) {
LAB_012fb340:
        if ((char)*pbVar6 < '\0') goto LAB_012fb3a0;
        *(ulong *)(param_1 + 0x18) = (ulong)*pbVar6;
        pbVar6 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar6;
        pbVar5 = (byte *)param_2[1];
        if (pbVar5 <= pbVar6) goto LAB_012fb29c;
      }
      else {
LAB_012fb3a0:
        auVar7 = FUN_0080d3e0(param_2);
        *(long *)(param_1 + 0x18) = auVar7._0_8_;
        if ((auVar7._8_8_ & 1) == 0) {
          return 0;
        }
        pbVar6 = (byte *)*param_2;
        pbVar5 = (byte *)param_2[1];
        if (pbVar5 <= pbVar6) goto LAB_012fb29c;
      }
      if (*pbVar6 == 0x18) {
        pbVar6 = pbVar6 + 1;
        *param_2 = (ulong)pbVar6;
        if (pbVar6 < pbVar5) goto LAB_012fb3d8;
LAB_012fb384:
        uVar2 = 0;
        goto LAB_012fb208;
      }
    }
    goto LAB_012fb29c;
  case 2:
    if (uVar2 != 0x10) goto LAB_012fb428;
    pbVar6 = (byte *)*param_2;
    if (pbVar6 < (byte *)param_2[1]) goto LAB_012fb340;
    goto LAB_012fb3a0;
  case 3:
    if (uVar2 != 0x18) goto LAB_012fb428;
    pbVar6 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar6) goto LAB_012fb384;
LAB_012fb3d8:
    uVar2 = (uint)*pbVar6;
    if ((char)*pbVar6 < '\0') {
LAB_012fb208:
      lVar3 = FUN_0080d5d0(param_2,uVar2);
      if (lVar3 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x24) = (int)lVar3;
      pbVar6 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fb29c;
    }
    else {
      *param_2 = (ulong)(pbVar6 + 1);
      *(uint *)(param_1 + 0x24) = uVar2;
      pbVar6 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar6) goto LAB_012fb29c;
    }
    if (*pbVar6 != 0x20) goto LAB_012fb29c;
    pbVar6 = pbVar6 + 1;
    *param_2 = (ulong)pbVar6;
    if (pbVar6 < pbVar5) goto LAB_012fb1a0;
LAB_012fb418:
    uVar2 = 0;
LAB_012fb1e4:
    lVar3 = FUN_0080d5d0(param_2,uVar2);
    *(int *)(param_1 + 0x28) = (int)lVar3;
    if (lVar3 < 0) {
      return 0;
    }
    if (*param_2 != param_2[1]) goto LAB_012fb29c;
    break;
  case 4:
    if (uVar2 != 0x20) goto LAB_012fb428;
    pbVar6 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar6) goto LAB_012fb418;
LAB_012fb1a0:
    uVar2 = (uint)*pbVar6;
    if ((char)*pbVar6 < '\0') goto LAB_012fb1e4;
    *(uint *)(param_1 + 0x28) = uVar2;
    uVar4 = *param_2;
    *param_2 = uVar4 + 1;
    if (uVar4 + 1 != param_2[1]) goto LAB_012fb29c;
    break;
  default:
    goto switchD_012fb2e4_default;
  }
  if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_012fb29c;
}


