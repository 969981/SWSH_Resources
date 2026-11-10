/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003224f0; name: FUN_003224f0
 */


void FUN_003224f0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  
  local_90[0] = 0;
  local_8c = 0;
  local_70 = param_2[3];
  local_78 = param_2[2];
  uVar2 = *param_2;
  local_80 = param_2[1];
  local_88 = *param_2;
  lVar4 = *param_1;
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar8 = *puVar5;
  if (uVar8 != 0) {
    lVar9 = *(long *)(lVar4 + 8);
    uVar10 = (ulong)(uVar8 - 1);
    pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
    if (*pbVar11 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar10 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar9 = *(long *)(lVar4 + 8);
        puVar5 = (uint *)(lVar4 + 0x10);
        uVar8 = *puVar5;
        uVar10 = (ulong)(uVar8 - 1);
        pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar10 * 0x10 + 9) = bVar3;
      *pbVar11 = bVar3;
    }
  }
  local_60 = (ulong)CONCAT61((int6)((ulong)local_60 >> 0x10),(char)param_1[9]) << 8;
  if (uVar8 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = local_60;
    *puVar1 = uVar2;
    *puVar5 = *puVar5 + 1;
    puVar6 = (undefined4 *)param_1[0xc];
    if (puVar6 == (undefined4 *)0x0) {
      local_8c = 0;
      goto LAB_00322604;
    }
  }
  else {
    local_68 = uVar2;
    FUN_00321500(lVar4,&local_68);
    puVar6 = (undefined4 *)param_1[0xc];
    local_8c = 0;
    if (puVar6 == (undefined4 *)0x0) goto LAB_00322604;
  }
  local_8c = *puVar6;
LAB_00322604:
  local_90[0] = 1;
  piVar7 = (int *)param_1[0xb];
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_002172c0(&local_68);
  local_24 = 0xe8;
  puVar6 = &local_24;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)param_1[0xb];
  }
  FUN_00322cf0(param_1,puVar6,local_90,&local_68);
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    return;
  }
  uVar8 = *(int *)(lVar4 + 0x10) - 1;
  if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
     (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
    (**(code **)(*(long *)param_1[5] + 0x50))();
    lVar4 = *param_1;
    uVar8 = *(int *)(lVar4 + 0x10) - 1;
  }
  *(uint *)(lVar4 + 0x10) = uVar8;
  *(undefined1 *)(param_1 + 9) = 1;
  if ((uVar8 == 0) || (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


