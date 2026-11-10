/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01304220; name: FUN_01304220
 */


undefined8 FUN_01304220(long param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 local_24;
  
LAB_0130427c:
  while (pbVar1 = (byte *)*param_2, (byte *)param_2[1] <= pbVar1) {
    uVar6 = 0;
LAB_013043a8:
    uVar4 = FUN_0080d8c0(param_2,uVar6);
    bVar3 = uVar4 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar4;
    uVar6 = (ulong)CONCAT14(bVar3,uVar4);
    if (bVar3) goto LAB_013042ac;
LAB_013043cc:
    if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
      return 1;
    }
LAB_01304248:
    uVar6 = FUN_008148c0(param_2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  bVar2 = *pbVar1;
  uVar6 = (ulong)(uint)bVar2;
  if ((char)bVar2 < '\x01') goto LAB_013043a8;
  *(uint *)(param_2 + 4) = (uint)bVar2;
  *param_2 = (ulong)(pbVar1 + 1);
LAB_013042ac:
  uVar7 = (uint)(uVar6 >> 3) & 0x1fffffff;
  uVar4 = (uint)uVar6;
  if (uVar7 == 2) {
    if (uVar4 != 0x15) {
LAB_01304348:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        return 1;
      }
      goto LAB_01304248;
    }
    pcVar9 = (char *)*param_2;
    if (3 < (int)param_2[1] - (int)pcVar9) goto LAB_0130436c;
LAB_01304318:
    uVar6 = FUN_0080d200(param_2,&local_24);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x18) = local_24;
    if (*param_2 != param_2[1]) goto LAB_0130427c;
  }
  else {
    if (uVar7 != 1) goto LAB_013043cc;
    if (uVar4 != 8) goto LAB_01304348;
    pbVar1 = (byte *)*param_2;
    if (pbVar1 < (byte *)param_2[1]) {
      uVar4 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_0130425c;
      *param_2 = (ulong)(pbVar1 + 1);
      *(uint *)(param_1 + 0x14) = uVar4;
      pcVar9 = (char *)*param_2;
      pcVar8 = (char *)param_2[1];
      if (pcVar8 <= pcVar9) goto LAB_0130427c;
    }
    else {
      uVar4 = 0;
LAB_0130425c:
      lVar5 = FUN_0080d5d0(param_2,uVar4);
      if (lVar5 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x14) = (int)lVar5;
      pcVar9 = (char *)*param_2;
      pcVar8 = (char *)param_2[1];
      if (pcVar8 <= pcVar9) goto LAB_0130427c;
    }
    if (*pcVar9 != '\x15') goto LAB_0130427c;
    pcVar9 = pcVar9 + 1;
    *param_2 = (ulong)pcVar9;
    if ((int)pcVar8 - (int)pcVar9 < 4) goto LAB_01304318;
LAB_0130436c:
    local_24 = *(undefined4 *)pcVar9;
    *param_2 = (ulong)(pcVar9 + 4);
    *(undefined4 *)(param_1 + 0x18) = local_24;
    if (*param_2 != param_2[1]) goto LAB_0130427c;
  }
  if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_0130427c;
}


