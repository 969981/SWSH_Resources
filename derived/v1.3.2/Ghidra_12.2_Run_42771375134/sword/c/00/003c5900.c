/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5900; name: FUN_003c5900
 */


void FUN_003c5900(long param_1,ushort *param_2,ushort *param_3)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  
  uVar2 = *param_3;
  *(uint *)(param_1 + 0x48) = (uint)uVar2;
  if ((uVar2 & 6) != 0 && (*param_2 & 6) == 0) {
    lVar3 = *(long *)(param_1 + 0x78);
    lVar1 = *(long *)(param_1 + 0x80);
    if (((lVar3 != 0) && (*(long *)(lVar3 + 200) == 0)) ||
       ((lVar1 != 0 && (*(long *)(lVar1 + 200) == 0)))) {
      FUN_003c19e0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x800),param_1);
      return;
    }
    if (lVar3 == 0) {
      FUN_003c16d0(*(undefined8 *)(lVar1 + 200),*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x800));
      return;
    }
    FUN_003c16d0(*(undefined8 *)(lVar3 + 200),*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x800));
    return;
  }
  if (((uVar2 & 6) == 0) && ((*param_2 & 6) != 0)) {
    if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
      FUN_003c1a40(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x800),param_1);
      return;
    }
    if (((*(long *)(param_1 + 0x78) != 0) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 200), lVar3 != 0)) ||
       ((*(long *)(param_1 + 0x80) != 0 &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0x80) + 200), lVar3 != 0)))) {
      FUN_003c2510(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x800),lVar3,0);
      return;
    }
  }
  return;
}


