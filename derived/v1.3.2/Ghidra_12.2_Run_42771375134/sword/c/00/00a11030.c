/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a11030; name: FUN_00a11030
 */


void FUN_00a11030(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e8);
  if (lVar1 == 0) {
    FUN_0077d4d0(0,param_3);
    lVar1 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e0);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077d4d0(lVar1,param_3);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x2e0);
  }
  if (lVar1 == 0) {
    FUN_014c93c0(0,param_4,param_5);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_014c93c0(lVar1,param_4,param_5);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x1b0),param_2,10);
  return;
}


