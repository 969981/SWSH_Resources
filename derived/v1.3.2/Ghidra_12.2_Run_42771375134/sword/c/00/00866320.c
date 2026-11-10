/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00866320; name: FUN_00866320
 */


void FUN_00866320(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_00877a30();
  puVar1 = PTR_DAT_02717360 + 0x50;
  *param_1 = (long)(PTR_DAT_02717360 + 0x10);
  param_1[9] = (long)puVar1;
  FUN_00866160(param_1,param_2);
  puVar1 = PTR_DAT_02717368;
  FUN_00867cb0(*(undefined8 *)(param_3 + 0x98),PTR_DAT_02717368);
  FUN_00867e00(param_1[0x13],puVar1);
  return;
}


