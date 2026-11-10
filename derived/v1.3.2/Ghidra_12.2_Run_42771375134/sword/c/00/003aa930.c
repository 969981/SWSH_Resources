/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa930; name: FUN_003aa930
 */


void FUN_003aa930(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x40);
  uVar1 = FUN_003fcf10(param_3);
  uVar2 = FUN_003fcf00(param_3);
  if ((uVar1 & 1) != 0) {
    FUN_00191450(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 0x8a0) + 8),uVar2);
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 0x50))
            (*(long **)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x50),lVar3 + 0x20,uVar2,uVar1 & 1
             ,param_4 & 1,param_5 != 0);
  *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + -1;
  return;
}


