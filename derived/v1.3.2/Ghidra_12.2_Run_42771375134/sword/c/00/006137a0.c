/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006137a0; name: FUN_006137a0
 */


undefined8 FUN_006137a0(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  
  if (*(ulong *)(param_2 + 0x140) < param_1 + 4U) {
    FUN_00603300(param_2,8);
  }
  uVar1 = CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if (uVar1 < 0x106 || *(ulong *)(param_2 + 0x140) < param_1 + (ulong)uVar1) {
    FUN_00603300(param_2,8);
  }
  if (*(int *)(param_2 + 0x148) != 0) {
    lVar2 = 0;
    do {
      if (*(uint *)(param_2 + 0x150) <= (uint)*(byte *)(param_1 + 6 + lVar2)) {
        FUN_00603300(param_2,0x10);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 != 0x100);
  }
  return 0;
}


