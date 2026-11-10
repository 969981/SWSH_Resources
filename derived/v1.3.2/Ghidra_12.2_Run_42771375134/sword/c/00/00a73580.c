/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a73580; name: FUN_00a73580
 */


undefined8 FUN_00a73580(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_18 [8];
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x448) != 0) {
    lVar1 = FUN_00706c40(*(long *)(param_1 + 0x448),auStack_18);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x78);
    }
  }
  return uVar2;
}


