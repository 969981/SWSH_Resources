/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041d590; name: FUN_0041d590
 */


void FUN_0041d590(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined4 local_34;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if ((*(byte *)(param_1 + 0x5a) >> 1 & 1) != 0) {
    if (*(int *)(param_1 + 0x54) != -1) {
      param_3 = *(int *)(param_1 + 0x54);
    }
  }
  FUN_0041d650(param_1,param_2,param_3);
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
    do {
      lVar1 = plVar3[1];
      uVar2 = *(undefined4 *)(*plVar3 + 4);
      local_34 = 0;
      FUN_0042e770((float)((param_3 + param_2) - (int)plVar3[2]),*plVar3 + 8,0,&local_34);
      FUN_0040d3b0(lVar1,uVar2);
      plVar3 = (long *)plVar3[3];
    } while (plVar3 != (long *)0x0);
  }
  FUN_00408b50(param_1);
  return;
}


