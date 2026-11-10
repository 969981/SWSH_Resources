/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109a3f0; name: FUN_0109a3f0
 */


undefined8 FUN_0109a3f0(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long local_58 [2];
  char *local_48;
  undefined8 local_40;
  long local_38;
  undefined4 local_24;
  
  do {
    while( true ) {
      plVar3 = *(long **)(*(long *)(param_1 + 0x98) + 0x40);
      uVar4 = (**(code **)(*plVar3 + 0x50))
                        (plVar3,*(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x158));
      uVar4 = FUN_0087c9f0(uVar4,*(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x160),
                           *(long *)(param_1 + 0x1d8) + 0x164,&local_24,0);
      iVar1 = (int)uVar4;
      if (iVar1 != 3) break;
      plVar3 = *(long **)(*(long *)(param_1 + 0x98) + 0x40);
      iVar1 = *(int *)(*(long *)(param_1 + 0x1d8) + 0x160);
      (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x158));
      iVar2 = FUN_0087a5f0();
      if (iVar1 == iVar2) {
        return 0;
      }
      *(int *)(*(long *)(param_1 + 0x1d8) + 0x160) =
           *(int *)(*(long *)(param_1 + 0x1d8) + 0x160) + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x164) = 0;
    }
    if (iVar1 == 1) {
      *param_2 = local_24;
      return uVar4;
    }
  } while (iVar1 != 0);
  *param_2 = local_24;
  local_58[1] = 0xea89adefc6ba7fa7;
  local_48 = "LEARN_SKILL";
  local_40 = 0xb;
  local_38 = 0;
  plVar3 = *(long **)(*(long *)(param_1 + 0x98) + 0x40);
  local_58[0] = (**(code **)(*plVar3 + 0x50))
                          (plVar3,*(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x158));
  if (local_58[0] != 0) {
    (**(code **)(*(long *)(local_58[0] + 0x48) + 0x10))();
  }
  FUN_014af7f0(local_58 + 1,local_24,local_58);
  if (local_58[0] != 0) {
    (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
    local_58[0] = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return 2;
}


