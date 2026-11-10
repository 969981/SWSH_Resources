/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01577980; name: FUN_01577980
 */


void FUN_01577980(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long alStack_50 [4];
  long *local_30;
  
  local_30 = alStack_50;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    local_30 = (long *)0x0;
  }
  else if (param_2 == plVar1) {
    (**(code **)(*plVar1 + 0x18))(plVar1,alStack_50);
  }
  else {
    local_30 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  FUN_01578050(alStack_50,param_1 + 0x80);
  if (alStack_50 == local_30) {
    pcVar2 = *(code **)(*local_30 + 0x20);
  }
  else {
    if (local_30 == (long *)0x0) {
      return;
    }
    pcVar2 = *(code **)(*local_30 + 0x28);
  }
  (*pcVar2)();
  return;
}


