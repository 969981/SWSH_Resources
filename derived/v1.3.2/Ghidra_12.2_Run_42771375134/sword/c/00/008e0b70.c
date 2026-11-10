/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e0b70; name: FUN_008e0b70
 */


void FUN_008e0b70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_0087bfb0(lVar1,0,*(undefined4 *)(param_1 + 0x2c8));
  FUN_0087b860(lVar1,0,*(undefined1 *)(param_1 + 0x2ce));
  FUN_0087b5b0(lVar1,0,*(undefined1 *)(param_1 + 0x2cc));
  FUN_0087bfb0(lVar1,1,*(undefined4 *)(param_1 + 0x2e4));
  FUN_0087b860(lVar1,1,*(undefined1 *)(param_1 + 0x2ea));
  FUN_0087b5b0(lVar1,1,*(undefined1 *)(param_1 + 0x2e8));
  FUN_0087bfb0(lVar1,2,*(undefined4 *)(param_1 + 0x300));
  FUN_0087b860(lVar1,2,*(undefined1 *)(param_1 + 0x306));
  FUN_0087b5b0(lVar1,2,*(undefined1 *)(param_1 + 0x304));
  FUN_0087bfb0(lVar1,3,*(undefined4 *)(param_1 + 0x31c));
  FUN_0087b860(lVar1,3,*(undefined1 *)(param_1 + 0x322));
  FUN_0087b5b0(lVar1,3,*(undefined1 *)(param_1 + 800));
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008e0c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


