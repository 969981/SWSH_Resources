/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e2400; name: FUN_001e2400
 */


void FUN_001e2400(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x10011;
  puVar1 = PTR_DAT_027110c8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_003bab00(param_1 + 5,param_3,param_5);
  param_1[0x1c] = param_2;
  param_1[0x1d] = param_4;
  *(uint *)(param_1 + 3) =
       *(uint *)(param_1 + 3) & 0xf0000000 | *(uint *)(param_1 + 3) & 0xffffff | 0x9000000;
  return;
}


