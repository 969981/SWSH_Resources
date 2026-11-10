/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9d30; name: FUN_003e9d30
 */


void FUN_003e9d30(long param_1,long param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_28;
  char local_14 [4];
  
  if (*(long *)(**(long **)(param_1 + 0x10f0) + 0x48) != 0) {
    uVar1 = *(ushort *)(param_2 + 0xb4);
    uVar3 = (uint)uVar1;
    if ((uVar1 >> 6 & 1) != 0) {
      uVar3 = uVar1 & 0xffffffbf;
      *(short *)(param_2 + 0xb4) = (short)uVar3;
      *(undefined1 *)(param_1 + 0x10e9) = 0;
    }
    *(ushort *)(param_2 + 0xb4) = (ushort)uVar3 | 0x80;
    if ((uVar3 >> 5 & 1) == 0) {
      local_28 = *(undefined8 *)(param_2 + 0x50);
      puVar2 = (undefined8 *)FUN_003f7480(param_1 + 0x10b0,&local_28,local_14);
      if (local_14[0] == '\0') {
        *puVar2 = local_28;
      }
      *(ushort *)(param_2 + 0xb4) = *(ushort *)(param_2 + 0xb4) | 0x20;
    }
  }
  return;
}


