/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01472660; name: FUN_01472660
 */


void FUN_01472660(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + (long)param_2 * 4 + 0x68) =
       *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x10);
  if ((param_2 == 1) && (*(int *)(*(long *)(param_1 + 0x60) + 0x14) != 2)) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    uVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(param_1 + 0x68));
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 8);
    uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(param_1 + 0x6c));
    uVar1 = FUN_008787f0(uVar4);
    uVar2 = FUN_008787f0(uVar5);
    FUN_00878810(uVar4,uVar2);
    FUN_00878810(uVar5,uVar1);
    return;
  }
  return;
}


