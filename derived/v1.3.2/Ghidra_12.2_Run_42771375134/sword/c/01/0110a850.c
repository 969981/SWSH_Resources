/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0110a850; name: FUN_0110a850
 */


void FUN_0110a850(long param_1)

{
  undefined8 *puVar1;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52;
  ushort local_50;
  ushort local_4e;
  ushort local_4c;
  ushort local_4a;
  ushort local_48;
  ushort local_46;
  ushort local_44;
  ushort local_42;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  uint local_24;
  
  puVar1 = *(undefined8 **)(param_1 + 0x5e0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,&local_58);
    param_1 = param_1 + 0x100;
    local_24 = (uint)local_58;
    FUN_00ffd700(param_1,&DAT_021651d0,&local_24,10);
    local_24 = (uint)local_56;
    FUN_00ffd700(param_1,&DAT_021651d8,&local_24,10);
    local_24 = (uint)local_54;
    FUN_00ffd700(param_1,&DAT_021651e0,&local_24,10);
    local_24 = (uint)local_52;
    FUN_00ffd700(param_1,&DAT_021651e8,&local_24,10);
    local_24 = (uint)local_50;
    FUN_00ffd700(param_1,&DAT_021651f0,&local_24,10);
    local_24 = (uint)local_4e;
    FUN_00ffd700(param_1,&DAT_021651f8,&local_24,10);
    local_24 = (uint)local_4c;
    FUN_00ffd700(param_1,&DAT_02165200,&local_24,10);
    local_24 = (uint)local_4a;
    FUN_00ffd700(param_1,&DAT_02165208,&local_24,10);
    local_24 = (uint)local_48;
    FUN_00ffd700(param_1,&DAT_02165210,&local_24,10);
    local_24 = (uint)local_46;
    FUN_00ffd700(param_1,&DAT_02165218,&local_24,10);
    local_24 = (uint)local_44;
    FUN_00ffd700(param_1,&DAT_02165220,&local_24,10);
    local_24 = (uint)local_42;
    FUN_00ffd700(param_1,&DAT_02165228,&local_24,10);
    local_24 = (uint)local_40;
    FUN_00ffd700(param_1,&DAT_02165230,&local_24,10);
    local_24 = (uint)local_3e;
    FUN_00ffd700(param_1,&DAT_02165238,&local_24,10);
    local_24 = (uint)local_3c;
    FUN_00ffd700(param_1,&DAT_02165240,&local_24,10);
    local_24 = (uint)local_3a;
    FUN_00ffd700(param_1,&DAT_02165248,&local_24,10);
  }
  return;
}


