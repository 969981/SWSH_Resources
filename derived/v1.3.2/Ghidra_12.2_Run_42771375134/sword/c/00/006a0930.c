/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a0930; name: FUN_006a0930
 */


void FUN_006a0930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_150 [288];
  
  uVar2 = FUN_006a9880(param_1 + 0x10);
  lVar1 = param_1 + 0x130;
  (**(code **)(**(long **)(param_1 + 0x150) + 0x18))(*(long **)(param_1 + 0x150),lVar1,uVar2);
  (**(code **)(**(long **)(param_1 + 0x170) + 0x18))(*(long **)(param_1 + 0x170),lVar1,uVar2);
  (**(code **)(**(long **)(param_1 + 400) + 0x18))(*(long **)(param_1 + 400),lVar1,uVar2);
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x18))(*(long **)(param_1 + 0x1b0),lVar1,uVar2);
  (**(code **)(**(long **)(param_1 + 0x1d0) + 0x18))(*(long **)(param_1 + 0x1d0),lVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  memset(auStack_150,0,0x120);
}


