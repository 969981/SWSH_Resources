/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f044c0; name: FUN_00f044c0
 */


void FUN_00f044c0(long *param_1,byte param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long local_38;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar1 == 0) {
    FUN_00f043a0(&local_38,0);
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00f043a0(&local_38,lVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (local_38 == 0) {
    DAT_00000088 = param_2 & 1;
    *param_1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(local_38 + 0x60);
    plVar3 = (long *)(**(code **)*puVar2)(puVar2);
    lVar1 = FUN_00f04600();
    for (; plVar3 != (long *)lVar1; plVar3 = (long *)*plVar3) {
    }
    *(byte *)(puVar2 + 7) = param_2 & 1;
    *param_1 = local_38;
    if ((local_38 != 0) && ((**(code **)(*(long *)(local_38 + 0x48) + 0x10))(), local_38 != 0)) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


