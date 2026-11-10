/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e3790; name: FUN_009e3790
 */


void FUN_009e3790(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long local_48;
  
  puVar1 = PTR_DAT_02718ad8;
  lVar2 = *(long *)(*(long *)(PTR_DAT_02718ad8 + 0x48) + 0x60);
  if (lVar2 == 0) {
    FUN_0077e740(0,param_2,*(undefined8 *)(PTR_DAT_02718ad8 + 0x18));
    local_48 = *(long *)(puVar1 + 0x18);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077e740(lVar2,param_2,*(undefined8 *)(puVar1 + 0x18));
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_48 = *(long *)(puVar1 + 0x18);
  }
  if (local_48 == 0) {
    FUN_009e1d60(&local_48,param_3);
  }
  else {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_009e1d60(&local_48,param_3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_48 = 0;
  }
  FUN_014c62d0(*(undefined8 *)(puVar1 + 0x10),param_1,*(undefined8 *)(puVar1 + 0x18));
  return;
}


