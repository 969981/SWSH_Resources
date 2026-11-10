/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ffff0; name: FUN_006ffff0
 */


void FUN_006ffff0(long *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_006d4a90(param_1,param_2,param_3 & 1);
  puVar1 = PTR_DAT_027158e0 + 0x68;
  puVar2 = PTR_DAT_027158e0 + 0xa8;
  *param_1 = (long)(PTR_DAT_027158e0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  return;
}


