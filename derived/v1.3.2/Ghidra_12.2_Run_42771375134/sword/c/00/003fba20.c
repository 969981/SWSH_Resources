/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fba20; name: FUN_003fba20
 */


undefined8 FUN_003fba20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(uint *)(param_1 + 0x40) & 0x1dc) != 0 && (*(uint *)(param_1 + 0x40) & 0x400000) != 0) {
    FUN_003d0480(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x1048),param_1);
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xffbfffff;
  }
  lVar1 = FUN_003fc7b0(*(undefined8 *)(param_1 + 0x28));
  lVar2 = FUN_003fc7b0(*(undefined8 *)(param_1 + 0x30));
  lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x748) + 0x328);
  if (((*(byte *)(lVar3 + (ulong)(*(uint *)(lVar1 + 0xb0) >> 6) * 0x20 + 4) >> 1 & 1) == 0) &&
     ((lVar2 == 0 ||
      ((*(byte *)(lVar3 + (ulong)(*(uint *)(lVar2 + 0xb0) >> 6) * 0x20 + 4) >> 1 & 1) == 0)))) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x58) == 0) &&
     (FUN_003fb710(param_1,param_2), *(long *)(param_1 + 0x58) == 0)) {
    return 0;
  }
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 0x40;
  return 1;
}


