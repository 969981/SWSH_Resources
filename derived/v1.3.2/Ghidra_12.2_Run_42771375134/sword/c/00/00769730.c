/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00769730; name: FUN_00769730
 */


void FUN_00769730(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined1 *)(param_1 + 0x1d1) = 0;
  FUN_019a4d10(param_1 + 0x68,PTR_DAT_027155e8);
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_019a49c0(param_1 + 0x68);
  (**(code **)(*plVar3 + 0x18))(plVar3,uVar1,0,0);
  if (*(long *)(param_1 + 0xb8) == 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0xb8),param_1 + 0xb0);
    lVar2 = *(long *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}


