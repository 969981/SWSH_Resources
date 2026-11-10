/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fade0; name: FUN_008fade0
 */


bool FUN_008fade0(long param_1,byte param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_008efa90(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_2);
  bVar1 = false;
  if ((param_2 < 5) && ((uVar3 & 1) != 0)) {
    bVar1 = false;
    if (*(long *)(param_1 + (ulong)param_2 * 0x70 + 0x1f0) != 0) {
      iVar2 = FUN_0077d480();
      bVar1 = iVar2 != 0;
    }
  }
  return bVar1;
}


