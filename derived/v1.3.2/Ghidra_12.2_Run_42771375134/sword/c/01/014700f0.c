/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014700f0; name: FUN_014700f0
 */


void FUN_014700f0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x100;
  uVar1 = FUN_00ffda40(param_1,&DAT_0216d378);
  param_2 = param_2 & 1;
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0216d3b8);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0216d3f8);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0216d438);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0216d478);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0216d4b8);
  FUN_016b2d70(uVar1,param_2);
  return;
}


