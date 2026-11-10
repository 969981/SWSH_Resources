/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00beeb80; name: FUN_00beeb80
 */


void FUN_00beeb80(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong local_18;
  
  bVar1 = *param_2;
  if (bVar1 != 0) {
    uVar3 = 0xcbf29ce484222645;
    do {
      param_2 = param_2 + 1;
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *param_2;
    } while (bVar1 != 0);
    if ((uVar3 != 0xcbf29ce484222645 && uVar3 != 0) &&
       (local_18 = uVar3, lVar2 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_18),
       lVar2 != 0)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


