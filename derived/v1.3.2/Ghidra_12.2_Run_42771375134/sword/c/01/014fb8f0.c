/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fb8f0; name: FUN_014fb8f0
 */


void FUN_014fb8f0(long param_1,ushort param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [12];
  undefined1 local_4c;
  char local_48;
  short local_44;
  
  uVar1 = (uint)param_2;
  if (uVar1 < 0x1f) {
    puVar2 = (undefined1 *)(param_1 + (ulong)uVar1 * 8 + 0x221f0);
  }
  else {
    puVar2 = (undefined1 *)(param_1 + (ulong)(ushort)(param_2 - 0x27) * 8 + 0x22328);
    if (uVar1 < 0x27) {
      puVar2 = (undefined1 *)(param_1 + (ulong)(ushort)(param_2 - 0x1f) * 8 + 0x222e8);
    }
  }
  *puVar2 = 1;
  FUN_0102ad30(auStack_58);
  *(short *)(puVar2 + 2) = local_44 + 0x76c;
  puVar2[4] = local_48 + '\x01';
  puVar2[5] = local_4c;
  puVar2[6] = 0;
  return;
}


