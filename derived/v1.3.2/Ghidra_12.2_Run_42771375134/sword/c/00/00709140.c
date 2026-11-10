/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00709140; name: FUN_00709140
 */


void FUN_00709140(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00708690(param_1,param_2,1);
  puVar1 = PTR_DAT_027159d8 + 0xb0;
  puVar2 = PTR_DAT_027159d8 + 0xf0;
  *param_1 = (long)(PTR_DAT_027159d8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  return;
}


