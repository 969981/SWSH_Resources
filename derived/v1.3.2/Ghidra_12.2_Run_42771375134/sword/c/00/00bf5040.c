/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf5040; name: FUN_00bf5040
 */


void FUN_00bf5040(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0xa0) < 2) {
    FUN_00c0f490(*(undefined8 *)(param_1 + 0x100),1);
    bVar1 = *(byte *)(param_1 + 0xa0);
    FUN_00befe70(*(undefined8 *)(param_1 + 0x100),(ulong)bVar1);
    lVar2 = (ulong)bVar1 * 0x2c;
    FUN_00bfbf40(*(undefined8 *)(param_1 + 0x100),*(long *)(param_1 + 0x90) + lVar2 + 0x1a0);
    FUN_00c0ffc0(*(undefined8 *)(param_1 + 0x100),
                 *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar2 + 0x1c0));
    FUN_00c10200(*(undefined8 *)(param_1 + 0x100),
                 *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar2 + 0x1c4));
    FUN_00c10440(*(undefined8 *)(param_1 + 0x100),
                 *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar2 + 0x1c8));
    return;
  }
  if (*(uint *)(param_1 + 0xa0) == 2) {
    FUN_00c0f490(*(undefined8 *)(param_1 + 0x100),0);
    return;
  }
  return;
}


