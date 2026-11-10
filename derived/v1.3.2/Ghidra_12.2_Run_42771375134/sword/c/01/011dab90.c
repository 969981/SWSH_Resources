/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011dab90; name: FUN_011dab90
 */


uint FUN_011dab90(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_011da440();
  if ((uVar1 & 1) != 0) {
    FUN_006eccd0(*(undefined8 *)(param_1 + 0x20),param_4);
    FUN_006eccd0(*(undefined8 *)(param_1 + 0x28),param_5);
    lVar3 = *param_2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar3 = *param_3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar3;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  return uVar1 & 1;
}


