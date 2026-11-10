/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00904670; name: FUN_00904670
 */


undefined8 FUN_00904670(long param_1,undefined8 param_2,int param_3,undefined4 param_4,long param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_3 == 0x2a4) && (uVar3 = FUN_008e1810(param_2,0xf), (uVar3 & 1) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar2 = FUN_008e0a00(param_2);
    uVar2 = FUN_008f9470(uVar5,uVar4,uVar2);
    uVar3 = FUN_008f9440(*(undefined8 *)(param_1 + 0x58),uVar2,param_4);
    if ((uVar3 & 1) != 0) {
      if (param_5 != 0) {
        FUN_009c7ca0(param_5,2,0x4b4);
        uVar1 = FUN_008e0a00(param_2);
        FUN_009c7cd0(param_5,uVar1);
        FUN_009c7cd0(param_5,0x2a4);
      }
      return 1;
    }
  }
  return 0;
}


