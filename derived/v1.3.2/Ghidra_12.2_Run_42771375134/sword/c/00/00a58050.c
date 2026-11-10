/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a58050; name: FUN_00a58050
 */


void FUN_00a58050(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    puVar1 = (undefined8 *)(param_1 + 0x28);
    break;
  case 1:
  case 2:
  case 3:
    puVar1 = (undefined8 *)(param_1 + 0x30);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = *puVar1;
  FUN_00ffa3d0(uVar2,0);
  FUN_00a5a750(uVar2,param_3);
  return;
}


