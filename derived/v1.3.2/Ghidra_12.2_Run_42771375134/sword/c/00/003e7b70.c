/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e7b70; name: FUN_003e7b70
 */


void FUN_003e7b70(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  piVar4 = *(int **)(param_1 + 0x1140);
  lVar5 = *(long *)(piVar4 + 4);
  iVar1 = piVar4[1];
  uVar2 = (ulong)(uint)piVar4[2];
  puVar6 = (undefined8 *)(lVar5 + uVar2 * 0x18 + 8);
  puVar8 = (undefined8 *)*puVar6;
  if (puVar8 == (undefined8 *)0x0) {
    piVar7 = (int *)(lVar5 + uVar2 * 0x18 + 0x10);
    iVar3 = *piVar7;
    if (iVar3 != *piVar4) {
      *piVar7 = iVar3 + 1;
      puVar8 = (undefined8 *)(*(long *)(lVar5 + uVar2 * 0x18) + (ulong)(uint)(iVar3 * iVar1));
      if (puVar8 != (undefined8 *)0x0) goto LAB_003e7bc4;
    }
    puVar8 = (undefined8 *)FUN_003f1aa0();
    if (puVar8 == (undefined8 *)0x0) goto LAB_003e7bd4;
  }
  else {
    *puVar6 = *puVar8;
  }
LAB_003e7bc4:
  FUN_003ff020(puVar8,param_1,param_2);
LAB_003e7bd4:
  *(int *)(param_1 + 0x1290) = *(int *)(param_1 + 0x1290) + 1;
  FUN_003e7690(param_1,param_3,param_4,param_5,puVar8,param_6);
  return;
}


