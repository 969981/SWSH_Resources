/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00738550; name: FUN_00738550
 */


void FUN_00738550(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_00728db0(param_1,param_2,0);
  puVar4 = PTR_LAB_02715b50;
  puVar3 = PTR_LAB_02715b48;
  puVar2 = PTR_FUN_02715b40;
  puVar1 = PTR_LAB_02715b38;
  param_1[0xe] = (long)PTR_FUN_02715cb8;
  param_1[10] = (long)puVar1;
  param_1[0xb] = (long)puVar2;
  puVar1 = PTR_DAT_02715cc0;
  param_1[0xc] = (long)puVar3;
  param_1[0xd] = (long)puVar4;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


