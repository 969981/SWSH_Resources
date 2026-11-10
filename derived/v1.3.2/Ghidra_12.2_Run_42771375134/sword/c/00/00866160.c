/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00866160; name: FUN_00866160
 */


void FUN_00866160(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long local_40;
  long *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = FUN_0087ec90();
  FUN_00867530(&local_40,param_2,uVar2);
  lVar1 = local_40;
  local_40 = 0;
  lVar3 = *(long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar1;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x88) = local_30;
    *(undefined8 *)(param_1 + 0x90) = local_28;
    *(long **)(param_1 + 0x80) = local_38;
    local_40 = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar3,*(undefined8 *)(param_1 + 0x88),
               *(undefined8 *)(param_1 + 0x90));
    lVar1 = local_40;
    *(long **)(param_1 + 0x80) = local_38;
    *(undefined8 *)(param_1 + 0x88) = local_30;
    *(undefined8 *)(param_1 + 0x90) = local_28;
    local_40 = 0;
    if (lVar1 != 0) {
      (**(code **)(*local_38 + 0x18))(local_38,lVar1,local_30,local_28);
    }
  }
  FUN_008679a0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x78));
  return;
}


