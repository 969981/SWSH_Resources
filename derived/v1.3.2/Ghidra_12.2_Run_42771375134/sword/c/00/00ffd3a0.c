/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd3a0; name: FUN_00ffd3a0
 */


bool FUN_00ffd3a0(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong local_18;
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_18 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_18 = (local_18 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  lVar2 = *(long *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    FUN_0167bb70(lVar2,&local_18);
  }
  return lVar2 != 0;
}


