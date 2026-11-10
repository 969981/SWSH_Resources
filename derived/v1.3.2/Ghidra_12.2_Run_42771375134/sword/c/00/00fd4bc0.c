/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd4bc0; name: FUN_00fd4bc0
 */


void FUN_00fd4bc0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = 0;
  local_50 = 0xcbf29ce484222645;
  puStack_48 = &DAT_01d38550;
  FUN_016bbf30(*(undefined8 *)(param_1 + 0x5e0),2,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_016b7c30(*(undefined8 *)(param_1 + 0x5f0));
  FUN_016b7de0(*(undefined8 *)(param_1 + 0x5f0));
  local_50 = 0xc0b802cc3afa6c58;
  lVar1 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_50);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  lVar2 = *(long *)(param_1 + 0x608);
  lVar1 = *(long *)(lVar2 + 0x138);
  *(undefined8 *)(lVar2 + 0x120) = 0xcbf29ce484222645;
  *(undefined1 **)(lVar2 + 0x128) = &DAT_01d38550;
  *(undefined8 *)(lVar2 + 0x130) = 0;
  *(undefined8 *)(lVar2 + 0x138) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  return;
}


