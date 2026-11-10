/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007bd630; name: FUN_007bd630
 */


void FUN_007bd630(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_50;
  long local_48;
  
  lVar1 = *(long *)PTR_DAT_027104b0;
  if (lVar1 != 0) {
    if (param_1 == 0) {
      local_50 = 0;
      local_48 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x58);
      if (lVar3 == 0) {
        local_48 = param_1 + 0x60;
        local_50 = 0;
      }
      else {
        plVar2 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        local_50 = lVar3;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        local_48 = param_1 + 0x60;
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    FUN_007b59f0(lVar1,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_007cdac0();
    lVar1 = *(long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (lVar1 != 0) {
      FUN_007cd940(lVar1);
      (**(code **)(**(long **)(param_1 + 0x170) + 0x18))
                (*(long **)(param_1 + 0x170),lVar1,*(undefined8 *)(param_1 + 0x178),
                 *(undefined8 *)(param_1 + 0x180));
    }
  }
  return;
}


