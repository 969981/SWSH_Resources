/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01067440; name: FUN_01067440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01067440(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    lVar3 = *(long *)(*(long *)(lVar2 + 400) + 0x1a8);
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    uVar1 = _DAT_01d4a310;
    lVar2 = *(long *)(*(long *)(lVar2 + 400) + 0x1a8);
    *(undefined8 *)(lVar2 + 0xe8) = _UNK_01d4a318;
    *(undefined8 *)(lVar2 + 0xe0) = uVar1;
  }
  return;
}


