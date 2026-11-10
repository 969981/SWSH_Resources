/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008662a0; name: FUN_008662a0
 */


void FUN_008662a0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  FUN_00877f40();
  puVar1 = PTR_DAT_02717360 + 0x50;
  *param_1 = (long)(PTR_DAT_02717360 + 0x10);
  param_1[9] = (long)puVar1;
  FUN_00866160(param_1,param_2);
  uVar2 = FUN_0087f070(param_1);
  FUN_00867a70(param_1[0x13]);
  FUN_00879500(param_1,1);
  FUN_00878370(param_1);
  FUN_0087f0c0(param_1,uVar2 & 1);
  return;
}


