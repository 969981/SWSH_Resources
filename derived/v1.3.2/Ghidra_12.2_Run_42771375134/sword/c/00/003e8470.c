/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e8470; name: FUN_003e8470
 */


void FUN_003e8470(long param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  
  piVar4 = *(int **)(param_1 + 0x1138);
  lVar6 = *(long *)(piVar4 + 4);
  iVar1 = piVar4[1];
  uVar2 = (ulong)(uint)piVar4[2];
  puVar8 = (undefined8 *)(lVar6 + uVar2 * 0x18 + 8);
  puVar10 = (undefined8 *)*puVar8;
  if (puVar10 == (undefined8 *)0x0) {
    piVar9 = (int *)(lVar6 + uVar2 * 0x18 + 0x10);
    iVar3 = *piVar9;
    if (iVar3 != *piVar4) {
      *piVar9 = iVar3 + 1;
      puVar10 = (undefined8 *)(*(long *)(lVar6 + uVar2 * 0x18) + (ulong)(uint)(iVar3 * iVar1));
      if (puVar10 != (undefined8 *)0x0) goto LAB_003e84b8;
    }
    puVar10 = (undefined8 *)FUN_003f1aa0();
    if (puVar10 == (undefined8 *)0x0) goto LAB_003e84c8;
  }
  else {
    *puVar8 = *puVar10;
  }
LAB_003e84b8:
  FUN_003fc5c0(puVar10,param_2,param_3);
LAB_003e84c8:
  lVar6 = param_1 + (long)*(int *)(param_3 + 0x48) * 4;
  *(int *)(lVar6 + 0x1298) = *(int *)(lVar6 + 0x1298) + 1;
  (**(code **)(**(long **)(param_1 + 0x760) + 0x20))
            (*(long **)(param_1 + 0x760),puVar10 + 4,*(undefined4 *)(puVar10 + 9));
  if (param_4 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)
             (*(long *)(*(long *)(param_1 + 0x808) + 8) +
             ((ulong)*(uint *)(puVar10 + 3) & 0x1fffffff) * 0x18);
    *param_4 = *puVar7;
    param_4[1] = puVar7[1];
    param_4[2] = puVar7[2];
    param_4[3] = puVar7[3];
    param_4[4] = puVar7[4];
    param_4[5] = puVar7[5];
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x720) + 0x6e8);
                    /* WARNING: Could not recover jumptable at 0x003e8564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5,param_3 + 0x20);
  return;
}


