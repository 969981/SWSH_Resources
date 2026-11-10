/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa7dc0; name: FUN_00aa7dc0
 */


undefined8 FUN_00aa7dc0(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = FUN_009c6000(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_008f97f0(uVar4,param_2);
  uVar1 = FUN_008f96b0(uVar4,uVar1);
  uVar2 = FUN_008f9f90(uVar4,uVar1);
  uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x830))(*(long **)(param_1 + 8),uVar1);
  uVar3 = FUN_009141c0();
  if ((uVar2 & 0xff) < (uVar3 & 0xff)) {
    do {
      FUN_00914330(uVar4,uVar2);
      uVar5 = FUN_008e18d0();
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xff) < (uVar3 & 0xff));
  }
  return 0;
}


