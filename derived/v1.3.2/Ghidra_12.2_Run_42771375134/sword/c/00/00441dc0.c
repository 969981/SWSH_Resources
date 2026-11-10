/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441dc0; name: FUN_00441dc0
 */


void FUN_00441dc0(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar1 = FUN_004bd840(), (uVar1 & 1) != 0)) {
    if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
      FUN_004be250(*(undefined8 *)PTR_DAT_02712b18);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}


