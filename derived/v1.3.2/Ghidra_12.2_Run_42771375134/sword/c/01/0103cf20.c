/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103cf20; name: FUN_0103cf20
 */


long FUN_0103cf20(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_0103ce40(auStack_20);
  uVar1 = FUN_012b4090(auStack_20);
  if ((uVar1 & 1) == 0) {
    return -0x340d631b7bddd9bb;
  }
  local_48 = 0x2651d5ef7b32db44;
  local_40 = "message";
  local_38 = 7;
  FUN_012b4250(auStack_30,auStack_20,&local_48);
  local_50 = 0;
  lVar2 = FUN_012b4b40(auStack_30,&local_50);
  if (lVar2 == -0x5098ffb379f8bd48) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return lVar2;
}


