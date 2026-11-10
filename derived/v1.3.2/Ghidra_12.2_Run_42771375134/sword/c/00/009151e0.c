/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009151e0; name: FUN_009151e0
 */


void FUN_009151e0(long param_1,undefined2 *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  
  uVar3 = param_2[2];
  bVar1 = *(byte *)(param_2 + 3);
  bVar2 = *(byte *)(param_2 + 1);
  *(undefined2 *)(param_1 + 8) = *param_2;
  *(ushort *)(param_1 + 0xe) = (ushort)bVar1;
  *(ushort *)(param_1 + 10) = (ushort)bVar2;
  *(ushort *)(param_1 + 0xc) = uVar3;
  memcpy((void *)(param_1 + 0x10),param_2 + 4,(ulong)uVar3);
  return;
}


