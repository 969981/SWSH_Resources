/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00949410; name: FUN_00949410
 */


void FUN_00949410(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_008e18d0(*param_3);
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_008e1890(*param_3), (uVar1 & 1) != 0)) {
    *param_2 = 1;
  }
  return;
}


