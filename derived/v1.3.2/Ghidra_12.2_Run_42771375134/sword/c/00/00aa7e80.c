/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa7e80; name: FUN_00aa7e80
 */


bool FUN_00aa7e80(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = FUN_009c6000(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_008f97f0(uVar4,param_2);
  uVar2 = FUN_008f96b0(uVar4,uVar2);
  uVar3 = FUN_008f98a0(uVar4);
  uVar5 = FUN_008f9460(uVar4,uVar2,uVar3);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  uVar4 = FUN_009c6000(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_008f97f0(uVar4,param_2);
  uVar2 = FUN_008f96b0(uVar4,uVar2);
  (**(code **)(**(long **)(param_1 + 8) + 0x830))(*(long **)(param_1 + 8),uVar2);
  bVar1 = FUN_009141d0();
  return 1 < bVar1;
}


