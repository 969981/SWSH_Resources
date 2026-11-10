/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fd920; name: FUN_009fd920
 */


undefined8 FUN_009fd920(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  iVar1 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),4);
  if (iVar1 != 0) {
    iVar1 = FUN_00884820(*param_2);
    if (iVar1 == 0) {
      FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),4);
    }
    else {
      uVar5 = 0;
      uVar7 = 0;
      do {
        lVar6 = (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,uVar5);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        uVar2 = FUN_008783b0(lVar6);
        uVar3 = FUN_008783c0(lVar6);
        uVar4 = FUN_009fc280(uVar2,uVar3);
        uVar7 = uVar7 + (uVar4 & 1);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        uVar5 = uVar5 + 1 & 0xff;
        uVar4 = FUN_00884820(*param_2);
      } while (uVar5 < uVar4);
      uVar5 = FUN_009fe1a0(*(undefined8 *)(param_1 + 0x10),4);
      if (uVar5 < (uVar7 & 0xff)) {
        return 1;
      }
    }
  }
  return 0;
}


