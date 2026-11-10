/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113b550; name: FUN_0113b550
 */


void FUN_0113b550(long param_1)

{
  ulong uVar1;
  long lVar2;
  long local_28;
  
  FUN_01128420(&local_28,*(undefined8 *)(param_1 + 0x80));
  lVar2 = *(long *)(local_28 + 0x3a0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x7c) = 6;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    return;
  }
  lVar2 = *(long *)(param_1 + 0x370);
  if (*(long *)(lVar2 + 0xba0) != 0) {
    uVar1 = FUN_0103d280(*(long *)(lVar2 + 0xba0));
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x7c) = 2;
      return;
    }
    lVar2 = *(long *)(param_1 + 0x370);
  }
  FUN_010364c0(lVar2,0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x370),0);
  *(undefined4 *)(param_1 + 0x7c) = 1;
  return;
}


