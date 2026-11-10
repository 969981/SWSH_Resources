/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dc4e0; name: FUN_003dc4e0
 */


void FUN_003dc4e0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10f0) + (ulong)(param_3 & 0xff) * 8);
  if (((param_2 != 0) && (*(long *)(lVar2 + 0x48) == 0)) && (*(int *)(param_1 + 0x10ac) != 0)) {
    lVar4 = *(long *)(param_1 + 0x1080);
    uVar3 = 0;
    do {
      lVar1 = FUN_003bd8a0(*(undefined8 *)(lVar4 + uVar3 * 8));
      *(ushort *)(lVar1 + 0xb4) = *(ushort *)(lVar1 + 0xb4) | 0x40;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x10ac));
  }
  *(long *)(lVar2 + 0x48) = param_2;
  return;
}


