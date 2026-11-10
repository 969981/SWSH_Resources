/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00353a50; name: FUN_00353a50
 */


void FUN_00353a50(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  char *local_30;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined6 uStack_26;
  
  lVar3 = *param_1;
  puVar4 = (uint *)(lVar3 + 0x10);
  uVar5 = *puVar4;
  if (uVar5 != 0) {
    lVar6 = *(long *)(lVar3 + 8);
    uVar7 = (ulong)(uVar5 - 1);
    pbVar8 = (byte *)(lVar6 + uVar7 * 0x10 + 8);
    if (*pbVar8 == 0) {
      bVar2 = 0;
      if ((char)param_1[9] != '\0') {
        bVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar6 + uVar7 * 0x10));
        bVar2 = bVar2 & 1;
        lVar3 = *param_1;
        *(byte *)(param_1 + 9) = bVar2;
        lVar6 = *(long *)(lVar3 + 8);
        puVar4 = (uint *)(lVar3 + 0x10);
        uVar5 = *puVar4;
        uVar7 = (ulong)(uVar5 - 1);
        pbVar8 = (byte *)(lVar6 + uVar7 * 0x10 + 8);
      }
      *(byte *)(lVar6 + uVar7 * 0x10 + 9) = bVar2;
      *pbVar8 = bVar2;
    }
  }
  uStack_27 = (undefined1)param_1[9];
  local_30 = "Shapes";
  local_28 = 0;
  if (uVar5 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_26,uStack_27) << 8;
    *puVar1 = "Shapes";
    *puVar4 = *puVar4 + 1;
  }
  else {
    FUN_00321500(lVar3,&local_30);
  }
  FUN_00353ce0(param_1,param_1[6],param_2,0);
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
    return;
  }
  uVar5 = *(int *)(lVar3 + 0x10) - 1;
  if ((*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10 + 8) != '\0') &&
     (*(char *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10 + 9) != '\0')) {
    (**(code **)(*(long *)param_1[5] + 0x50))();
    lVar3 = *param_1;
    uVar5 = *(int *)(lVar3 + 0x10) - 1;
  }
  *(uint *)(lVar3 + 0x10) = uVar5;
  *(undefined1 *)(param_1 + 9) = 1;
  if ((uVar5 == 0) || (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 9) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


