/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905990; name: FUN_00905990
 */


void FUN_00905990(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *(undefined1 *)(param_2 + 0x15) = 1;
  uVar8 = FUN_00931aa0(*(undefined8 *)(param_1 + 0x70));
  iVar5 = FUN_00930550(uVar8,0);
  if (iVar5 == 0) {
LAB_009059ec:
    *(undefined4 *)(param_2 + 0x10) = 0x101;
    return;
  }
  if (*(int *)(param_1 + 0x1068) != 0) {
    uVar8 = FUN_00931aa0(*(undefined8 *)(param_1 + 0x70));
    iVar5 = FUN_00930550(uVar8,0);
    if ((uint)(iVar5 - *(int *)(param_1 + 0x1068)) < 3) goto LAB_009059ec;
  }
  iVar5 = FUN_008ed5b0(param_1 + 0x128,2);
  uVar8 = FUN_00931aa0(*(undefined8 *)(param_1 + 0x70));
  iVar6 = FUN_00930550(uVar8,0);
  bVar2 = iVar5 == 0 || iVar6 == 1;
  bVar3 = iVar5 != 0;
  bVar4 = iVar6 != 1;
  bVar1 = bVar3 && bVar4;
  *(bool *)(param_2 + 0x10) = bVar1;
  *(bool *)(param_2 + 0x11) = bVar1;
  *(bool *)(param_2 + 0x12) = bVar2;
  *(bool *)(param_2 + 0x13) = bVar2;
  if (!bVar3 || !bVar4) {
    uVar8 = FUN_00931aa0(*(undefined8 *)(param_1 + 0x70));
    uVar7 = FUN_00930550(uVar8,0);
    *(undefined4 *)(param_1 + 0x1068) = uVar7;
  }
  return;
}


