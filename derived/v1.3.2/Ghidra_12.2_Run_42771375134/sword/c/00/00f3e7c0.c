/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3e7c0; name: FUN_00f3e7c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3e7c0(long param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  FUN_00f35130();
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0x60) + 0x610);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN_00faccf0(&local_38,lVar1,param_1 + 0x18,param_2,0xcbf29ce484222645,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(long *)(param_1 + 0x20) = local_38;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  lVar3 = *(long *)(local_38 + 0x60);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x28) = _DAT_00000140;
  }
  else {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + 0x140);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if ((param_3 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
    if (lVar3 == 0) {
      _DAT_00000140 = 0xb5;
    }
    else {
      plVar2 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      *(undefined4 *)(lVar3 + 0x140) = 0xb5;
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  FUN_01679b10(*(undefined8 *)(lVar3 + 0x68));
  *(undefined1 *)(lVar3 + 0x88) = 1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


