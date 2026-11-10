/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940ce0; name: FUN_00940ce0
 */


undefined8 FUN_00940ce0(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_008db610(param_1[6],2);
  uVar2 = FUN_008f9ff0(*param_1,uVar1,param_2);
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_008db590(param_1[6],0x59,1), (uVar2 & 1) == 0)) {
    return 0;
  }
  return 1;
}


