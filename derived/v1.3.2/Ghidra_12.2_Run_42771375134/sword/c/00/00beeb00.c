/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00beeb00; name: FUN_00beeb00
 */


void FUN_00beeb00(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong local_18;
  
  local_18 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_18 = (local_18 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


