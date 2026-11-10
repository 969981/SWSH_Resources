/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a71ee0; name: FUN_00a71ee0
 */


void FUN_00a71ee0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x548);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(lVar2 + 0x4d5) != '\0') {
      *(undefined1 *)(lVar2 + 0x4d5) = 0;
      *(undefined8 *)(lVar2 + 1000) = 0;
      *(undefined8 *)(lVar2 + 0x3e0) = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x550);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(lVar2 + 0x4d5) != '\0') {
      *(undefined1 *)(lVar2 + 0x4d5) = 0;
      *(undefined8 *)(lVar2 + 1000) = 0;
      *(undefined8 *)(lVar2 + 0x3e0) = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x558);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(lVar2 + 0x4d5) != '\0') {
      *(undefined1 *)(lVar2 + 0x4d5) = 0;
      *(undefined8 *)(lVar2 + 1000) = 0;
      *(undefined8 *)(lVar2 + 0x3e0) = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x560);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(lVar2 + 0x4d5) != '\0') {
      *(undefined1 *)(lVar2 + 0x4d5) = 0;
      *(undefined8 *)(lVar2 + 1000) = 0;
      *(undefined8 *)(lVar2 + 0x3e0) = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x568);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(lVar2 + 0x4d5) != '\0') {
      *(undefined1 *)(lVar2 + 0x4d5) = 0;
      *(undefined8 *)(lVar2 + 1000) = 0;
      *(undefined8 *)(lVar2 + 0x3e0) = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x570);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(lVar2 + 0x4d5) != '\0') {
      *(undefined1 *)(lVar2 + 0x4d5) = 0;
      *(undefined8 *)(lVar2 + 1000) = 0;
      *(undefined8 *)(lVar2 + 0x3e0) = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar2 = *(long *)(param_1 + 0x578);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = (long *)(lVar2 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (*(char *)(lVar2 + 0x4d5) != '\0') {
    *(undefined1 *)(lVar2 + 0x4d5) = 0;
    *(undefined8 *)(lVar2 + 1000) = 0;
    *(undefined8 *)(lVar2 + 0x3e0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00a720bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


