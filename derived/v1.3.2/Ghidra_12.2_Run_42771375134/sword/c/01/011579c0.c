/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011579c0; name: FUN_011579c0
 */


void FUN_011579c0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 < 0x2b) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x79ff800bfefU) != 0) goto LAB_011579f8;
    if ((ulong)uVar1 == 4) {
      FUN_01158d20(*(undefined8 *)(param_1 + 0x88));
      FUN_0115ce50(*(undefined8 *)(param_1 + 0x90));
      thunk_FUN_01159350(*(undefined8 *)(param_1 + 0x98));
      FUN_0115b420(*(undefined8 *)(param_1 + 0xa8));
      FUN_0115f480(*(undefined8 *)(param_1 + 0xa0));
      FUN_01160c70(*(undefined8 *)(param_1 + 0xb0));
      if ((*(byte *)(*(long *)(param_1 + 0xd8) + 0x58) & 1) == 0) {
        return;
      }
      FUN_01037030(*(undefined8 *)(param_1 + 0xd0));
      return;
    }
  }
  FUN_0115b420(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(uint *)(param_1 + 0x78);
LAB_011579f8:
  if (uVar1 < 0x1b && (1 << (ulong)(uVar1 & 0x1f) & 0x778000eU) != 0) {
    uVar1 = *(uint *)(param_1 + 0x7c);
  }
  else {
    FUN_0115f480(*(undefined8 *)(param_1 + 0xa0));
    uVar1 = *(uint *)(param_1 + 0x7c);
  }
  if ((uVar1 < 0x25) && ((1L << ((ulong)uVar1 & 0x3f) & 0x14f0010401U) != 0)) {
    FUN_011608d0(*(undefined8 *)(param_1 + 0xb0),1);
    return;
  }
  return;
}


