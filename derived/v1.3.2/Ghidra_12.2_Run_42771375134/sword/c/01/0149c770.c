/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149c770; name: FUN_0149c770
 */


void FUN_0149c770(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x100;
  uVar1 = FUN_00ffda40(param_1,&DAT_0216f610);
  param_2 = param_2 & 1;
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0216f6d0);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0216f790);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0216f850);
  FUN_016b2d70(uVar1,param_2);
  return;
}


