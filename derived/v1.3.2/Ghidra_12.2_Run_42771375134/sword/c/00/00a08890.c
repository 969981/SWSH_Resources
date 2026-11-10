/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a08890; name: FUN_00a08890
 */


void FUN_00a08890(long param_1,undefined4 param_2,byte param_3,byte param_4,byte param_5)

{
  int iVar1;
  ulong uVar2;
  uint local_4c;
  byte local_48;
  byte local_47;
  byte local_46;
  
  uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x8b0))();
  if ((uVar2 & 1) == 0) {
    local_4c = (uint)(CONCAT12(param_3 & param_5,CONCAT11(param_4,param_3)) & 0x10101);
    FUN_00a243b0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x380),
                 param_2,&local_4c);
    iVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x870))();
    if (iVar1 == 2) {
      FUN_00a0dbb0(*(undefined8 *)(param_1 + 0x28),param_2,param_3 & 1);
    }
  }
  else {
    local_48 = param_3 & 1;
    local_47 = param_4 & 1;
    local_46 = param_3 & 1;
    FUN_00a19250(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x380),
                 param_2,&local_48);
  }
  return;
}


