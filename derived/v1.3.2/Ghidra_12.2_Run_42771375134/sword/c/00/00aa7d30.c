/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa7d30; name: FUN_00aa7d30
 */


uint FUN_00aa7d30(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = FUN_009c6000(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_008f97f0(uVar4,param_2);
  uVar1 = FUN_008f96b0(uVar4,uVar1);
  uVar2 = FUN_008f98a0(uVar4);
  uVar5 = FUN_008f9460(uVar4,uVar1,uVar2);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00aa7dc0(param_1,param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3 & 1;
}


