/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010adf80; name: FUN_010adf80
 */


void FUN_010adf80(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_02724350;
  param_1 = param_1 + 0x100;
  if (param_2 == 0) {
    local_28 = *(undefined8 *)(PTR_DAT_02724350 + 0x18);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0x48);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0x78);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0xa8);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0xd8);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0x108);
  }
  else {
    local_28 = *(undefined8 *)(PTR_DAT_02724350 + 0x20);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0x50);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0x80);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0xb0);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0xe0);
    FUN_00ffd010(param_1,&local_28);
    local_28 = *(undefined8 *)(puVar1 + 0x110);
  }
  FUN_00ffd010(param_1,&local_28);
  return;
}


