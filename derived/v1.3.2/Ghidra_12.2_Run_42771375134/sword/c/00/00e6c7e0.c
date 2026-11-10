/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6c7e0; name: FUN_00e6c7e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e6c7e0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  FUN_00e36b10();
  param_1[0xac] = 0;
  puVar3 = PTR_DAT_0271fda0;
  *(undefined4 *)(param_1 + 0xad) = 0x3f000000;
  lVar2 = _UNK_01d4a138;
  lVar1 = _DAT_01d4a130;
  param_1[9] = (long)(puVar3 + 0x250);
  param_1[10] = (long)(puVar3 + 0x290);
  param_1[0xb1] = 0x408000003f800000;
  param_1[0xb4] = 0x44160000442f0000;
  param_1[0xb5] = 0x3fc000003f800000;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0xb0] = 0x42c8000042200000;
  param_1[0xaf] = lVar2;
  param_1[0xae] = lVar1;
  param_1[0xb3] = lVar2;
  param_1[0xb2] = lVar1;
  param_1[0xb6] = 0x40a0000040000000;
  param_1[0xb8] = 0x41f0000000000000;
  param_1[0xb9] = 0x3d088889;
  *(undefined4 *)(param_1 + 0xba) = 0;
  return;
}


