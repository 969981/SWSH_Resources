/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb0b00; name: FUN_00fb0b00
 */


void FUN_00fb0b00(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_006d8b50();
  puVar4 = PTR_DAT_02722e80;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  puVar3 = PTR_DAT_027152c0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[9] = (long)(puVar4 + 0x58);
  param_1[10] = (long)(puVar4 + 0x98);
  lVar1 = *(long *)puVar3;
  lVar2 = *(long *)(puVar3 + 8);
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  param_1[0x38] = lVar1;
  param_1[0x39] = lVar2;
  param_1[0x31] = 0;
  param_1[0x32] = param_2;
  return;
}


