/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faafe0; name: FUN_00faafe0
 */


void FUN_00faafe0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_28;
  
  if ((*(int *)(param_1 + 0x90) != 0) &&
     (uVar1 = FUN_014bc9b0(*(undefined8 *)(param_1 + 0x70)), (uVar1 & 1) != 0)) {
    if (*(int *)(param_1 + 0x90) == 1) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 0x60);
      if (lVar2 == 0) {
        FUN_0077e740(0,*(undefined4 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
      }
      else {
        plVar3 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_0077e740(lVar2,*(undefined4 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    else if (*(int *)(param_1 + 0x90) == 2) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 0x60);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      local_28 = *(undefined8 *)(param_1 + 0x98);
      FUN_0077eb10(lVar2,&local_28,*(undefined8 *)(param_1 + 0xa0));
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      }
    }
    (**(code **)(**(long **)(param_1 + 0x68) + 0x50))
              (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}


