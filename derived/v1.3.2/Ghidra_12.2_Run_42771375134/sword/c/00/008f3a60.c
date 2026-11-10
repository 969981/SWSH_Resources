/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f3a60; name: FUN_008f3a60
 */


void FUN_008f3a60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x138);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x110);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x118);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x118) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x120);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x128);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x130);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
                    /* WARNING: Could not recover jumptable at 0x008f3b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


