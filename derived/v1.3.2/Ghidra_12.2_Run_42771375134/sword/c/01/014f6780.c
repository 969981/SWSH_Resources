/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f6780; name: FUN_014f6780
 */


void FUN_014f6780(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  uVar1 = FUN_00c89870(*(long *)(param_1 + 0x458),*(undefined8 *)(*(long *)(param_1 + 0x458) + 8),
                       param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x460) = uVar1;
  local_38 = 8;
  FUN_00727220(uVar1,*param_2,&local_38);
  local_38 = 0;
  FUN_007273c0(*(undefined8 *)(param_1 + 0x460),0,&local_38);
  lVar3 = *(long *)(param_1 + 0x458);
  lVar2 = FUN_00c89a80(&local_38,*(undefined8 *)(lVar3 + 8),param_1 + 0x460);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_38 = lVar2;
  FUN_006d9640(lVar3,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x468);
  *(long *)(param_1 + 0x468) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    lVar2 = *(long *)(param_1 + 0x468);
  }
  FUN_0069ae40(lVar2,*(undefined8 *)(param_1 + 0x440),param_1 + 0x330,1);
  return;
}


