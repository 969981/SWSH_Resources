/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047af60; name: FUN_0047af60
 */


void FUN_0047af60(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712e28;
    if (((*(long *)(lVar3 + 0x48) == 0) &&
        (((*(long *)(lVar3 + 0x70) == 0 || (*(long *)(*(long *)(lVar3 + 0x70) + 0x80) == 0)) &&
         (lVar2 = FUN_0047d760(lVar3 + 0x70), lVar2 != 0)))) &&
       ((*(long *)(lVar2 + 0x118) == lVar3 || (*(long *)(lVar2 + 0x118) == 0)))) {
      *(undefined1 *)(lVar2 + 0x124) = 0;
      *(undefined8 *)(lVar2 + 0x118) = 0;
    }
    FUN_004d43c0(lVar3);
    FUN_00404870(uVar1,lVar3);
  }
  *(undefined1 *)(param_1 + 0x124) = 1;
  return;
}


