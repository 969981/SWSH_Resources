/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01330180; name: FUN_01330180
 */


void FUN_01330180(long param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_2f0 [148];
  undefined1 local_25c;
  undefined1 local_25b;
  undefined4 local_258;
  undefined4 local_254;
  
  lVar2 = *(long *)(param_1 + 0x340);
  if (lVar2 == 0) {
    pvVar1 = (void *)FUN_01052d00(0);
    memcpy(auStack_2f0,pvVar1,0x2c0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    pvVar1 = (void *)FUN_01052d00(lVar2);
    memcpy(auStack_2f0,pvVar1,0x2c0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  local_25c = *(undefined1 *)(param_1 + 0x6e4);
  local_25b = *(undefined1 *)(param_1 + 0x6e5);
  local_254 = *(undefined4 *)(param_1 + 0x6ec);
  local_258 = *(undefined4 *)(param_1 + 0x6e8);
  lVar2 = *(long *)(param_1 + 0x340);
  if (lVar2 == 0) {
    FUN_01052cc0(0,auStack_2f0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_01052cc0(lVar2,auStack_2f0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


