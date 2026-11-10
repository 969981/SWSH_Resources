/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01346ef0; name: FUN_01346ef0
 */


void FUN_01346ef0(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_01311d00();
  uVar2 = FUN_00d3fea0(lVar1 + 0x50);
  if ((uVar2 & 1) == 0) {
    lVar1 = 0;
  }
  FUN_012e5190(lVar1);
  return;
}


