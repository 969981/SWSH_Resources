/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b2aa0; name: FUN_010b2aa0
 */


void FUN_010b2aa0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_02724378;
  param_1 = param_1 + 0x100;
  uVar2 = FUN_00ffda40(param_1,PTR_DAT_02724378);
  param_2 = param_2 & 1;
  FUN_016b2d70(uVar2,param_2);
  uVar2 = FUN_00ffda40(param_1,puVar1 + 8);
  FUN_016b2d70(uVar2,param_2);
  uVar2 = FUN_00ffda40(param_1,puVar1 + 0x10);
  FUN_016b2d70(uVar2,param_2);
  uVar2 = FUN_00ffda40(param_1,puVar1 + 0x18);
  FUN_016b2d70(uVar2,param_2);
  uVar2 = FUN_00ffda40(param_1,puVar1 + 0x20);
  FUN_016b2d70(uVar2,param_2);
  return;
}


