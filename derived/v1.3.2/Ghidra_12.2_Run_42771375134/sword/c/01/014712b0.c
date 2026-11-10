/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014712b0; name: FUN_014712b0
 */


void FUN_014712b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 uStack_30;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x5d8) + 0x58))
            (*(long **)(param_1 + 0x5d8),*(undefined4 *)(*(long *)(param_1 + 0x5d0) + 0x10));
  uVar1 = FUN_008787d0();
  if ((uVar1 & 1) == 0) {
    local_40 = 0xcbf29ce484222645;
    local_38 = &DAT_01d38550;
    uStack_30 = 0;
    local_28 = 0;
    FUN_016bbf30(*(undefined8 *)(param_1 + 0x608),1,&local_40);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    FUN_016b7c30(*(undefined8 *)(param_1 + 0x600));
    FUN_016b7de0(*(undefined8 *)(param_1 + 0x600));
    local_40 = 0x21d084562a383b64;
    lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_40);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_016d2080();
    }
  }
  return;
}


