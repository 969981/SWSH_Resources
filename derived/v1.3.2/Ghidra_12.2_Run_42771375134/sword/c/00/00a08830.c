/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a08830; name: FUN_00a08830
 */


void FUN_00a08830(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x870))();
  FUN_00a08890(param_1,param_2,param_3 & 1,iVar1 == 2,param_4 & 1);
  return;
}


