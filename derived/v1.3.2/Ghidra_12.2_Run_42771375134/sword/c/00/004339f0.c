/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004339f0; name: FUN_004339f0
 */


void FUN_004339f0(void)

{
  int iVar1;
  
  FUN_004a58b0(*(undefined4 *)(PTR_DAT_02712e50 + 0x88));
  FUN_004a5940(*(undefined4 *)(PTR_DAT_02712b90 + 0x24));
  nn::os::InitializeEvent(PTR_DAT_02712e60,0,1);
  iVar1 = FUN_004c53a0();
  if (iVar1 == 2) {
    return;
  }
  FUN_00434150(PTR_DAT_02712e68);
  return;
}


