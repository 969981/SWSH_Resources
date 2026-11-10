/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009416b0; name: FUN_009416b0
 */


undefined4 FUN_009416b0(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_009319a0(param_1[1]);
  uVar1 = FUN_00913e70(uVar2,param_2);
  uVar3 = FUN_008f8d70(*param_1,uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = 5;
  }
  return uVar1;
}


