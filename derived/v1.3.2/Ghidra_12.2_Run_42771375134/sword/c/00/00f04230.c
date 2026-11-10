/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f04230; name: FUN_00f04230
 */


void FUN_00f04230(long *param_1,undefined4 param_2,byte param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 == 0) {
    FUN_01524f30(0,param_2);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_01524f30(lVar2,param_2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar2 == 0) {
    FUN_00f043a0(&local_38,0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00f043a0(&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (local_38 == 0) {
    DAT_00000088 = param_3 & 1;
    *param_1 = 0;
  }
  else {
    puVar1 = *(undefined8 **)(local_38 + 0x60);
    plVar3 = (long *)(**(code **)*puVar1)(puVar1);
    lVar2 = FUN_00f04600();
    for (; plVar3 != (long *)lVar2; plVar3 = (long *)*plVar3) {
    }
    *(byte *)(puVar1 + 7) = param_3 & 1;
    *param_1 = local_38;
    if ((local_38 != 0) && ((**(code **)(*(long *)(local_38 + 0x48) + 0x10))(), local_38 != 0)) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


