/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564c60; name: FUN_01564c60
 */


void FUN_01564c60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_0272af18 + 0x88;
  puVar2 = PTR_DAT_0272af18 + 200;
  *param_1 = (long)(PTR_DAT_0272af18 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  FUN_0076c6a0();
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (param_1[0x55] != 0) {
    (**(code **)(*(long *)(param_1[0x55] + 0x48) + 0x18))();
    param_1[0x55] = 0;
  }
  FUN_0076c5f0(param_1);
  return;
}


