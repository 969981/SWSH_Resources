/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d3fe0; name: FUN_009d3fe0
 */


undefined8 FUN_009d3fe0(long param_1,ulong *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  puVar3 = PTR_DAT_02716d10;
  plVar1 = (long *)(param_1 + 0x20);
LAB_009d4130:
  while (pbVar9 = (byte *)*param_2, (byte *)param_2[1] <= pbVar9) {
    uVar4 = 0;
LAB_009d40c4:
    uVar4 = FUN_0080d8c0(param_2,uVar4);
    *(uint *)(param_2 + 4) = uVar4;
    if (uVar4 - 1 < 0x7f) goto LAB_009d4160;
switchD_009d4178_default:
    if (uVar4 == 0) {
      return 1;
    }
    if ((uVar4 & 7) == 4) {
      return 1;
    }
LAB_009d40fc:
    uVar5 = FUN_008148c0(param_2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  uVar4 = (uint)*pbVar9;
  if ((char)*pbVar9 < '\x01') goto LAB_009d40c4;
  *(uint *)(param_2 + 4) = uVar4;
  *param_2 = (ulong)(pbVar9 + 1);
LAB_009d4160:
  switch(uVar4 >> 3) {
  case 1:
    if (uVar4 != 8) {
LAB_009d4298:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        return 1;
      }
      goto LAB_009d40fc;
    }
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar2 = *(byte *)*param_2;
      uVar4 = (uint)bVar2;
      if ((char)bVar2 < '\0') goto LAB_009d4110;
      *(uint *)(param_1 + 0x14) = uVar4;
      pbVar9 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar9;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar9) goto LAB_009d4130;
    }
    else {
      uVar4 = 0;
LAB_009d4110:
      lVar6 = FUN_0080d5d0(param_2,uVar4);
      *(int *)(param_1 + 0x14) = (int)lVar6;
      if (lVar6 < 0) {
        return 0;
      }
      pbVar9 = (byte *)*param_2;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar9) goto LAB_009d4130;
    }
    if (*pbVar9 == 0x10) {
      pbVar9 = pbVar9 + 1;
      *param_2 = (ulong)pbVar9;
      if (pbVar8 <= pbVar9) goto LAB_009d41d4;
LAB_009d41f0:
      uVar4 = (uint)*pbVar9;
      if ((char)*pbVar9 < '\0') goto LAB_009d409c;
      *(uint *)(param_1 + 0x18) = uVar4;
      pbVar9 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar9;
      pbVar8 = (byte *)param_2[1];
      if (pbVar9 < pbVar8) goto LAB_009d4218;
    }
    goto LAB_009d4130;
  case 2:
    if (uVar4 != 0x10) goto LAB_009d4298;
    pbVar9 = (byte *)*param_2;
    if (pbVar9 < (byte *)param_2[1]) goto LAB_009d41f0;
LAB_009d41d4:
    uVar4 = 0;
LAB_009d409c:
    lVar6 = FUN_0080d5d0(param_2,uVar4);
    *(int *)(param_1 + 0x18) = (int)lVar6;
    if (lVar6 < 0) {
      return 0;
    }
    pbVar9 = (byte *)*param_2;
    pbVar8 = (byte *)param_2[1];
    if (pbVar8 <= pbVar9) goto LAB_009d4130;
LAB_009d4218:
    if (*pbVar9 != 0x18) goto LAB_009d4130;
    pbVar9 = pbVar9 + 1;
    *param_2 = (ulong)pbVar9;
    if (pbVar8 <= pbVar9) goto LAB_009d4234;
LAB_009d4250:
    uVar4 = (uint)*pbVar9;
    if ((char)*pbVar9 < '\0') goto LAB_009d4078;
    *(uint *)(param_1 + 0x28) = uVar4;
    pcVar7 = (char *)(*param_2 + 1);
    *param_2 = (ulong)pcVar7;
    if ((char *)param_2[1] <= pcVar7) goto LAB_009d4130;
    break;
  case 3:
    if (uVar4 != 0x18) goto LAB_009d4298;
    pbVar9 = (byte *)*param_2;
    if (pbVar9 < (byte *)param_2[1]) goto LAB_009d4250;
LAB_009d4234:
    uVar4 = 0;
LAB_009d4078:
    lVar6 = FUN_0080d5d0(param_2,uVar4);
    *(int *)(param_1 + 0x28) = (int)lVar6;
    if (lVar6 < 0) {
      return 0;
    }
    pcVar7 = (char *)*param_2;
    if ((char *)param_2[1] <= pcVar7) goto LAB_009d4130;
    break;
  case 4:
    if (uVar4 != 0x22) goto LAB_009d4298;
    goto LAB_009d4024;
  default:
    goto switchD_009d4178_default;
  }
  if (*pcVar7 == '\"') {
    *param_2 = (ulong)(pcVar7 + 1);
LAB_009d4024:
    lVar6 = *plVar1;
    if (lVar6 == *(long *)puVar3) {
      FUN_009b58d0(plVar1,*(long *)puVar3);
      lVar6 = *plVar1;
    }
    uVar5 = FUN_008160d0(param_2,lVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((*param_2 == param_2[1]) &&
       ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  }
  goto LAB_009d4130;
}


