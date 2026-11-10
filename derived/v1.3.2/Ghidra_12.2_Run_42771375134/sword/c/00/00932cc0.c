/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932cc0; name: FUN_00932cc0
 */


undefined8
FUN_00932cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar3 = FUN_008e0a00(param_4);
  uVar1 = *(uint *)(param_1 + 0x164);
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(param_1 + 0xcc + uVar6 * 4);
      uVar4 = FUN_008f9ff0(param_2,uVar3,uVar2);
      if ((uVar4 & 1) == 0) {
        uVar5 = FUN_008df3f0(param_3,uVar2);
        uVar4 = FUN_008e2850(uVar5,param_5);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return 0;
}


