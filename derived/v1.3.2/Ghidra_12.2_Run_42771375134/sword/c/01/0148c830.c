/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148c830; name: FUN_0148c830
 */


void FUN_0148c830(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar2 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5e0));
  FUN_008789b0(uVar2,&local_38);
  puVar1 = PTR_DAT_0272a140;
  local_40 = *(undefined8 *)(PTR_DAT_0272a140 + (long)local_38 * 8);
  param_1 = param_1 + 0x100;
  FUN_00ffd010(param_1,&local_40);
  local_40 = *(undefined8 *)(puVar1 + (long)local_34 * 8 + 0x18);
  FUN_00ffd010(param_1,&local_40);
  local_40 = *(undefined8 *)(puVar1 + (long)local_30 * 8 + 0x30);
  FUN_00ffd010(param_1,&local_40);
  local_40 = *(undefined8 *)(puVar1 + (long)local_2c * 8 + 0x48);
  FUN_00ffd010(param_1,&local_40);
  local_40 = *(undefined8 *)(puVar1 + (long)local_28 * 8 + 0x60);
  FUN_00ffd010(param_1,&local_40);
  local_40 = *(undefined8 *)(puVar1 + (long)local_24 * 8 + 0x78);
  FUN_00ffd010(param_1,&local_40);
  return;
}


