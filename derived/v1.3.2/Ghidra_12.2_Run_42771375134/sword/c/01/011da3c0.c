/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011da3c0; name: FUN_011da3c0
 */


void FUN_011da3c0(long *param_1,long param_2,long *param_3,byte param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02725a68 + 0x48;
  *param_1 = (long)(PTR_DAT_02725a68 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  lVar2 = *param_3;
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(byte *)((long)param_1 + 0x59) = param_4 & 1;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}


