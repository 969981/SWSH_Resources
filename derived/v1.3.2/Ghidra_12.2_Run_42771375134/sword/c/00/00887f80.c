/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00887f80; name: FUN_00887f80
 */


undefined2 FUN_00887f80(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x160);
  if ((param_2 - 1U & 0xff) < (uint)*(byte *)(lVar1 + 0x15)) {
    return *(undefined2 *)
            (lVar1 + (ulong)*(ushort *)(lVar1 + 2) * 2 + (ulong)*(byte *)(lVar1 + 8) * 2 +
             (ulong)(byte)(param_2 - 1U) * 2 + 0x364);
  }
  return 0;
}


