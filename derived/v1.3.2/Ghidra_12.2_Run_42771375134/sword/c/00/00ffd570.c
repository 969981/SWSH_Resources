/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd570; name: FUN_00ffd570
 */


undefined1  [16] FUN_00ffd570(long param_1,byte *param_2)

{
  byte bVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
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
  if (*(long *)(param_1 + 0x1b0) == 0) {
    return ZEXT816(0);
  }
  FUN_0167bf30(*(long *)(param_1 + 0x1b0),&local_18);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


