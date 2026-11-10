/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00455240; name: FUN_00455240
 */


undefined4
FUN_00455240(undefined4 param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  for (plVar3 = *(long **)(param_2 + 0xd8); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (*(int *)(plVar3 + 1) == param_3) goto LAB_00455308;
  }
  puVar5 = (undefined8 *)(param_2 + 0xe8);
  puVar2 = (undefined8 *)*puVar5;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
    if (puVar2 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar2 = *puVar5;
    *puVar5 = puVar2;
    puVar4 = *(undefined8 **)(param_2 + 0xe0);
  }
  else {
    puVar4 = *(undefined8 **)(param_2 + 0xe0);
  }
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0xd8) = puVar2;
  }
  else {
    *puVar4 = puVar2;
    puVar2 = (undefined8 *)*puVar5;
  }
  *(undefined8 **)(param_2 + 0xe0) = puVar2;
  *(undefined8 *)(param_2 + 0xe8) = *puVar2;
  *puVar2 = 0;
  *(int *)(param_2 + 0xfc) = *(int *)(param_2 + 0xfc) + 1;
  plVar3 = *(long **)(param_2 + 0xe0);
  *(int *)((long)plVar3 + 8) = param_3;
LAB_00455308:
  *(undefined4 *)((long)plVar3 + 0xc) = param_1;
  *(undefined4 *)((long)plVar3 + 0x10) = param_4;
  *(undefined4 *)((long)plVar3 + 0x14) = param_5;
  *(undefined4 *)((long)plVar3 + 0x18) = param_6;
  *(uint *)((long)plVar3 + 0x1c) = param_7;
  plVar3 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_3,1);
  if (plVar3 == (long *)0x0) {
    return 1;
  }
  uVar1 = FUN_004a4970(plVar3 + 0x2a,*(undefined4 *)(PTR_DAT_02712b48 + (ulong)param_7 * 4));
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return uVar1;
}


