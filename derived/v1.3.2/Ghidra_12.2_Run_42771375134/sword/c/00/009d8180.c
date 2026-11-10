/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d8180; name: FUN_009d8180
 */


undefined8 FUN_009d8180(long param_1,ulong *param_2)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  puVar4 = PTR_DAT_02716d10;
  plVar1 = (long *)(param_1 + 0x20);
LAB_009d82c4:
  while (pbVar10 = (byte *)*param_2, (byte *)param_2[1] <= pbVar10) {
    uVar5 = 0;
LAB_009d8258:
    uVar5 = FUN_0080d8c0(param_2,uVar5);
    *(uint *)(param_2 + 4) = uVar5;
    if (uVar5 - 1 < 0x7f) goto LAB_009d82f4;
LAB_009d827c:
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      return 1;
    }
LAB_009d8290:
    uVar6 = FUN_008148c0(param_2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  uVar5 = (uint)*pbVar10;
  if ((char)*pbVar10 < '\x01') goto LAB_009d8258;
  *(uint *)(param_2 + 4) = uVar5;
  *param_2 = (ulong)(pbVar10 + 1);
LAB_009d82f4:
  uVar3 = uVar5 >> 3;
  if (uVar3 == 3) {
    if (uVar5 != 0x1a) {
LAB_009d83c4:
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        return 1;
      }
      goto LAB_009d8290;
    }
    lVar7 = *(long *)puVar4;
    if (*plVar1 != lVar7) goto LAB_009d8388;
LAB_009d8210:
    FUN_009b58d0(plVar1,lVar7);
    uVar6 = FUN_008160d0(param_2,*plVar1);
  }
  else {
    if (uVar3 == 2) {
      if (uVar5 != 0x10) goto LAB_009d83c4;
      pbVar10 = (byte *)*param_2;
      if (pbVar10 < (byte *)param_2[1]) goto LAB_009d81c4;
LAB_009d8368:
      uVar5 = 0;
LAB_009d8230:
      lVar7 = FUN_0080d5d0(param_2,uVar5);
      *(int *)(param_1 + 0x18) = (int)lVar7;
      if (lVar7 < 0) {
        return 0;
      }
      pcVar8 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar8) goto LAB_009d82c4;
    }
    else {
      if (uVar3 != 1) goto LAB_009d827c;
      if (uVar5 != 8) goto LAB_009d83c4;
      if ((byte *)*param_2 < (byte *)param_2[1]) {
        bVar2 = *(byte *)*param_2;
        uVar5 = (uint)bVar2;
        if ((char)bVar2 < '\0') goto LAB_009d82a4;
        *(uint *)(param_1 + 0x14) = uVar5;
        pbVar10 = (byte *)(*param_2 + 1);
        *param_2 = (ulong)pbVar10;
        pbVar9 = (byte *)param_2[1];
        if (pbVar9 <= pbVar10) goto LAB_009d82c4;
      }
      else {
        uVar5 = 0;
LAB_009d82a4:
        lVar7 = FUN_0080d5d0(param_2,uVar5);
        *(int *)(param_1 + 0x14) = (int)lVar7;
        if (lVar7 < 0) {
          return 0;
        }
        pbVar10 = (byte *)*param_2;
        pbVar9 = (byte *)param_2[1];
        if (pbVar9 <= pbVar10) goto LAB_009d82c4;
      }
      if (*pbVar10 != 0x10) goto LAB_009d82c4;
      pbVar10 = pbVar10 + 1;
      *param_2 = (ulong)pbVar10;
      if (pbVar9 <= pbVar10) goto LAB_009d8368;
LAB_009d81c4:
      uVar5 = (uint)*pbVar10;
      if ((char)*pbVar10 < '\0') goto LAB_009d8230;
      *(uint *)(param_1 + 0x18) = uVar5;
      pcVar8 = (char *)(*param_2 + 1);
      *param_2 = (ulong)pcVar8;
      if ((char *)param_2[1] <= pcVar8) goto LAB_009d82c4;
    }
    if (*pcVar8 != '\x1a') goto LAB_009d82c4;
    *param_2 = (ulong)(pcVar8 + 1);
    lVar7 = *(long *)puVar4;
    if (*plVar1 == lVar7) goto LAB_009d8210;
LAB_009d8388:
    uVar6 = FUN_008160d0(param_2);
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_009d82c4;
}


