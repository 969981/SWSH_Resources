/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e69f0; name: FUN_009e69f0
 */


undefined8 FUN_009e69f0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_28;
  
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
    uVar1 = FUN_008d46b0(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    if ((uVar1 & 1) != 0) goto LAB_009e6ac0;
    break;
  case 1:
    uVar1 = FUN_008d4a10(*(undefined8 *)(param_1 + 0x58));
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    goto LAB_009e6ac0;
  case 2:
    FUN_008d54b0(*(undefined8 *)(param_1 + 0x68),param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    local_28 = *(long *)(param_1 + 0x68);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_008d4aa0(uVar2,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    goto LAB_009e6ac0;
  case 3:
    uVar1 = FUN_008d4b40(*(undefined8 *)(param_1 + 0x58));
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    FUN_008d4b80(*(undefined8 *)(param_1 + 0x58),param_1 + 0xac);
LAB_009e6ac0:
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    return 0;
  case 4:
    FUN_008d4620(*(undefined8 *)(param_1 + 0x58));
  }
  return 1;
}


