/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7ea00; name: FUN_00d7ea00
 */


void FUN_00d7ea00(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 local_30;
  byte local_24 [4];
  
  param_1 = param_1 + 0x100;
  local_24[0] = 0;
  do {
    bVar1 = FUN_00d705e0(param_2);
    if (bVar1 == local_24[0]) {
      lVar2 = FUN_00d70870(local_24);
      local_30 = *(undefined8 *)(lVar2 + 0x10);
      FUN_00ffd010(param_1,&local_30);
      lVar2 = FUN_00d70870(local_24);
      local_30 = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = FUN_00d70870(local_24);
      local_38 = *(undefined8 *)(lVar2 + 0x10);
    }
    else {
      lVar2 = FUN_00d70870(local_24);
      local_30 = *(undefined8 *)(lVar2 + 0x18);
      FUN_00ffd010(param_1,&local_30);
      lVar2 = FUN_00d70870(local_24);
      local_30 = *(undefined8 *)(lVar2 + 0x18);
      lVar2 = FUN_00d70870(local_24);
      local_38 = *(undefined8 *)(lVar2 + 0x18);
    }
    FUN_00ffd600(param_1,&local_38);
    FUN_00ffd510(param_1,&local_30);
    bVar1 = local_24[0] + 1;
    local_24[0] = local_24[0] + 1;
  } while (bVar1 < 0xb);
  return;
}


