/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007947f0; name: FUN_007947f0
 */


void FUN_007947f0(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x270) + 0xe0);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_1 + 0x270) + 0xe8) == *(int *)(lVar3 + 0x2c))) {
    lVar3 = FUN_0078d120();
    lVar3 = *(long *)(*(long *)(lVar3 + 0x238) + 0x10);
    uVar2 = *(ushort *)(lVar3 + 0x54);
    uVar1 = uVar2 | 1;
    if ((param_2 & 1) == 0) {
      uVar1 = uVar2 & 0xfffe;
    }
    *(ushort *)(lVar3 + 0x54) = uVar1;
  }
  return;
}


