/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007364b0; name: FUN_007364b0
 */


void FUN_007364b0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  FUN_00728db0(param_1,param_2,0);
  puVar1 = PTR_DAT_02715c78;
  *(undefined4 *)((long)param_1 + 0x44) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


