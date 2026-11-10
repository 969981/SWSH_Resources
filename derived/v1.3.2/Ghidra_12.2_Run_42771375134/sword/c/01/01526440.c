/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01526440; name: FUN_01526440
 */


void FUN_01526440(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0xac2) != '\0') {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar1 == 0) {
      FUN_0100a950(0,0,1);
    }
    else {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0100a950(lVar1,0,1);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    *(undefined1 *)(param_1 + 0xac2) = 0;
  }
  if (*(char *)(param_1 + 0x152a) != '\0') {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar1 == 0) {
      FUN_0100a950(0,1,1);
    }
    else {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0100a950(lVar1,1,1);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    *(char *)(param_1 + 0x152a) = '\0';
  }
  if (*(char *)(param_1 + 0x1f92) != '\0') {
    lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar1 == 0) {
      FUN_0100a950(0,2,1);
    }
    else {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0100a950(lVar1,2,1);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    *(undefined1 *)(param_1 + 0x1f92) = 0;
  }
  return;
}


