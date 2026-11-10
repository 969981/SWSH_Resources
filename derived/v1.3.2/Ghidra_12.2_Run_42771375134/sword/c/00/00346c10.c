/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00346c10; name: FUN_00346c10
 */


void FUN_00346c10(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined6 uStack_26;
  
  local_58[0] = 0;
  local_54 = 0;
  local_38 = param_2[3];
  local_40 = param_2[2];
  uVar2 = *param_2;
  local_48 = param_2[1];
  local_50 = *param_2;
  lVar4 = *param_1;
  puVar5 = (uint *)(lVar4 + 0x10);
  uVar6 = *puVar5;
  if (uVar6 != 0) {
    lVar7 = *(long *)(lVar4 + 8);
    uVar8 = (ulong)(uVar6 - 1);
    pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
    if (*pbVar9 == 0) {
      bVar3 = 0;
      if ((char)param_1[9] != '\0') {
        bVar3 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar7 + uVar8 * 0x10));
        bVar3 = bVar3 & 1;
        lVar4 = *param_1;
        *(byte *)(param_1 + 9) = bVar3;
        lVar7 = *(long *)(lVar4 + 8);
        puVar5 = (uint *)(lVar4 + 0x10);
        uVar6 = *puVar5;
        uVar8 = (ulong)(uVar6 - 1);
        pbVar9 = (byte *)(lVar7 + uVar8 * 0x10 + 8);
      }
      *(byte *)(lVar7 + uVar8 * 0x10 + 9) = bVar3;
      *pbVar9 = bVar3;
    }
  }
  uStack_27 = (undefined1)param_1[9];
  local_28 = 0;
  local_30 = uVar2;
  if (uVar6 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_26,uStack_27) << 8;
    *puVar1 = uVar2;
    *puVar5 = *puVar5 + 1;
  }
  else {
    FUN_00321500(lVar4,&local_30);
  }
  FUN_003473f0(param_1,local_58);
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    return;
  }
  uVar6 = *(int *)(lVar4 + 0x10) - 1;
  if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10 + 8) != '\0') &&
     (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar6 * 0x10 + 9) != '\0')) {
    (**(code **)(*(long *)param_1[5] + 0x50))();
    lVar4 = *param_1;
    uVar6 = *(int *)(lVar4 + 0x10) - 1;
  }
  *(uint *)(lVar4 + 0x10) = uVar6;
  *(undefined1 *)(param_1 + 9) = 1;
  if ((uVar6 == 0) || (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar6 - 1) * 0x10 + 9) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


