/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b32b0; name: FUN_012b32b0
 */


void FUN_012b32b0(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x68))();
  uVar2 = FUN_00787110(param_1[0x4b],uVar1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  FUN_00787070(param_1[0x4b],uVar1);
  return;
}


