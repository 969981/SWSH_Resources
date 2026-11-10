/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fc1c0; name: FUN_012fc1c0
 */


undefined8 FUN_012fc1c0(long param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
LAB_012fc31c:
  while (pbVar8 = (byte *)*param_2, (byte *)param_2[1] <= pbVar8) {
    uVar2 = 0;
LAB_012fc2b0:
    uVar2 = FUN_0080d8c0(param_2,uVar2);
    *(uint *)(param_2 + 4) = uVar2;
    if (uVar2 - 1 < 0x7f) goto LAB_012fc34c;
switchD_012fc364_caseD_2:
    if (uVar2 == 0) {
      return 1;
    }
    if ((uVar2 & 7) == 4) {
      return 1;
    }
LAB_012fc2e8:
    uVar4 = FUN_008148c0(param_2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = (uint)*pbVar8;
  if ((char)*pbVar8 < '\x01') goto LAB_012fc2b0;
  *(uint *)(param_2 + 4) = uVar2;
  *param_2 = (ulong)(pbVar8 + 1);
LAB_012fc34c:
  switch(uVar2 >> 3) {
  case 1:
    if (uVar2 != 8) {
LAB_012fc608:
      if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
        return 1;
      }
      goto LAB_012fc2e8;
    }
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) {
      uVar2 = (uint)*pbVar8;
      if ((char)*pbVar8 < '\0') goto LAB_012fc2fc;
      *param_2 = (ulong)(pbVar8 + 1);
      *(uint *)(param_1 + 0x14) = uVar2;
      pbVar8 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar8) goto LAB_012fc31c;
    }
    else {
      uVar2 = 0;
LAB_012fc2fc:
      lVar3 = FUN_0080d5d0(param_2,uVar2);
      if (lVar3 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x14) = (int)lVar3;
      pbVar8 = (byte *)*param_2;
      pbVar5 = (byte *)param_2[1];
      if (pbVar5 <= pbVar8) goto LAB_012fc31c;
    }
    if (*pbVar8 == 0x18) {
      pbVar8 = pbVar8 + 1;
      *param_2 = (ulong)pbVar8;
      if (pbVar5 <= pbVar8) goto LAB_012fc3bc;
LAB_012fc3d8:
      uVar2 = (uint)*pbVar8;
      if ((char)*pbVar8 < '\0') goto LAB_012fc288;
      *(uint *)(param_1 + 0x18) = uVar2;
      pbVar8 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar8;
      pbVar5 = (byte *)param_2[1];
      if (pbVar8 < pbVar5) goto LAB_012fc400;
    }
    goto LAB_012fc31c;
  default:
    goto switchD_012fc364_caseD_2;
  case 3:
    if (uVar2 != 0x18) goto LAB_012fc608;
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) goto LAB_012fc3d8;
LAB_012fc3bc:
    uVar2 = 0;
LAB_012fc288:
    lVar3 = FUN_0080d5d0(param_2,uVar2);
    *(int *)(param_1 + 0x18) = (int)lVar3;
    if (lVar3 < 0) {
      return 0;
    }
    pbVar8 = (byte *)*param_2;
    pbVar5 = (byte *)param_2[1];
    if (pbVar5 <= pbVar8) goto LAB_012fc31c;
LAB_012fc400:
    if (*pbVar8 != 0x20) goto LAB_012fc31c;
    pbVar8 = pbVar8 + 1;
    *param_2 = (ulong)pbVar8;
    if (pbVar5 <= pbVar8) goto LAB_012fc41c;
LAB_012fc438:
    uVar2 = (uint)*pbVar8;
    if ((char)*pbVar8 < '\0') goto LAB_012fc264;
    *(uint *)(param_1 + 0x1c) = uVar2;
    pbVar8 = (byte *)(*param_2 + 1);
    *param_2 = (ulong)pbVar8;
    pbVar5 = (byte *)param_2[1];
    if (pbVar5 <= pbVar8) goto LAB_012fc31c;
    break;
  case 4:
    if (uVar2 != 0x20) goto LAB_012fc608;
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) goto LAB_012fc438;
LAB_012fc41c:
    uVar2 = 0;
LAB_012fc264:
    lVar3 = FUN_0080d5d0(param_2,uVar2);
    *(int *)(param_1 + 0x1c) = (int)lVar3;
    if (lVar3 < 0) {
      return 0;
    }
    pbVar8 = (byte *)*param_2;
    pbVar5 = (byte *)param_2[1];
    if (pbVar5 <= pbVar8) goto LAB_012fc31c;
    break;
  case 5:
    if (uVar2 != 0x28) goto LAB_012fc608;
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) goto LAB_012fc498;
    goto LAB_012fc47c;
  case 6:
    if (uVar2 != 0x35) goto LAB_012fc608;
    pcVar7 = (char *)*param_2;
    iVar1 = (int)param_2[1] - (int)pcVar7;
    goto joined_r0x012fc51c;
  case 7:
    if (uVar2 != 0x3d) goto LAB_012fc608;
    pcVar7 = (char *)*param_2;
    iVar1 = (int)param_2[1] - (int)pcVar7;
    goto joined_r0x012fc598;
  case 8:
    if (uVar2 != 0x45) goto LAB_012fc608;
    pcVar7 = (char *)*param_2;
    iVar1 = (int)param_2[1] - (int)pcVar7;
    goto joined_r0x012fc204;
  }
  if (*pbVar8 == 0x28) {
    pbVar8 = pbVar8 + 1;
    *param_2 = (ulong)pbVar8;
    if (pbVar8 < pbVar5) {
LAB_012fc498:
      uVar2 = (uint)*pbVar8;
      if ((char)*pbVar8 < '\0') goto LAB_012fc240;
      *(uint *)(param_1 + 0x20) = uVar2;
      pcVar7 = (char *)(*param_2 + 1);
      *param_2 = (ulong)pcVar7;
      pcVar6 = (char *)param_2[1];
      if (pcVar6 <= pcVar7) goto LAB_012fc31c;
    }
    else {
LAB_012fc47c:
      uVar2 = 0;
LAB_012fc240:
      lVar3 = FUN_0080d5d0(param_2,uVar2);
      *(int *)(param_1 + 0x20) = (int)lVar3;
      if (lVar3 < 0) {
        return 0;
      }
      pcVar7 = (char *)*param_2;
      pcVar6 = (char *)param_2[1];
      if (pcVar6 <= pcVar7) goto LAB_012fc31c;
    }
    if (*pcVar7 == '5') {
      pcVar7 = pcVar7 + 1;
      *param_2 = (ulong)pcVar7;
      iVar1 = (int)pcVar6 - (int)pcVar7;
joined_r0x012fc51c:
      if (iVar1 < 4) {
        uVar4 = FUN_0080d200(param_2,&local_24);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x24) = local_24;
        pcVar7 = (char *)*param_2;
        pcVar6 = (char *)param_2[1];
        if (pcVar6 <= pcVar7) goto LAB_012fc31c;
      }
      else {
        local_24 = *(undefined4 *)pcVar7;
        *param_2 = (ulong)(pcVar7 + 4);
        *(undefined4 *)(param_1 + 0x24) = local_24;
        pcVar7 = (char *)*param_2;
        pcVar6 = (char *)param_2[1];
        if (pcVar6 <= pcVar7) goto LAB_012fc31c;
      }
      if (*pcVar7 == '=') {
        pcVar7 = pcVar7 + 1;
        *param_2 = (ulong)pcVar7;
        iVar1 = (int)pcVar6 - (int)pcVar7;
joined_r0x012fc598:
        if (iVar1 < 4) {
          uVar4 = FUN_0080d200(param_2,&local_28);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0x28) = local_28;
          pcVar7 = (char *)*param_2;
          pcVar6 = (char *)param_2[1];
          if (pcVar6 <= pcVar7) goto LAB_012fc31c;
        }
        else {
          local_28 = *(undefined4 *)pcVar7;
          *param_2 = (ulong)(pcVar7 + 4);
          *(undefined4 *)(param_1 + 0x28) = local_28;
          pcVar7 = (char *)*param_2;
          pcVar6 = (char *)param_2[1];
          if (pcVar6 <= pcVar7) goto LAB_012fc31c;
        }
        if (*pcVar7 == 'E') {
          pcVar7 = pcVar7 + 1;
          *param_2 = (ulong)pcVar7;
          iVar1 = (int)pcVar6 - (int)pcVar7;
joined_r0x012fc204:
          if (iVar1 < 4) {
            uVar4 = FUN_0080d200(param_2,&local_34);
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            *(undefined4 *)(param_1 + 0x2c) = local_34;
            if (*param_2 != param_2[1]) goto LAB_012fc31c;
          }
          else {
            local_34 = *(undefined4 *)pcVar7;
            *param_2 = (ulong)(pcVar7 + 4);
            *(undefined4 *)(param_1 + 0x2c) = local_34;
            if (*param_2 != param_2[1]) goto LAB_012fc31c;
          }
          if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
            *(undefined4 *)(param_2 + 4) = 0;
            *(undefined1 *)((long)param_2 + 0x24) = 1;
            return 1;
          }
        }
      }
    }
  }
  goto LAB_012fc31c;
}


