/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c7a10; name: FUN_014c7a10
 */


void FUN_014c7a10(long param_1,uint param_2,undefined8 param_3,uint param_4,int param_5)

{
  long lVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) =
         (ulong)(uint)(param_5 << 0x12) & 0x1c0000 | (ulong)(param_4 & 3);
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),param_3);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar1 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar1 + 0x12) = *(ushort *)(lVar1 + 0x12) & 0xfffe;
  }
  return;
}


