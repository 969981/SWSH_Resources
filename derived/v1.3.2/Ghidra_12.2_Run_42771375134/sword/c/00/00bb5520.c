/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb5520; name: FUN_00bb5520
 */


void FUN_00bb5520(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x100;
  uVar1 = FUN_00ffda40(param_1,&DAT_0215a188);
  param_2 = param_2 & 1;
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0215a190);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0215a198);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0215a1a0);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0215a1a8);
  FUN_016b2d70(uVar1,param_2);
  uVar1 = FUN_00ffda40(param_1,&DAT_0215a1b0);
  FUN_016b2d70(uVar1,param_2);
  return;
}


