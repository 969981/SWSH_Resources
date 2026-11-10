/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a47a0; name: FUN_004a47a0
 */


void FUN_004a47a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_28;
  
  for (lVar3 = DAT_02739028; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
    lVar2 = *(long *)(lVar3 + 0x40);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0x30;
    }
    if ((lVar1 == param_1) && (local_28 = 0xffffffffffffffff, lVar2 != 0)) {
      FUN_00486c70(lVar2,lVar3,&local_28,1);
      *(undefined8 *)(lVar3 + 0x40) = 0;
    }
  }
  return;
}


