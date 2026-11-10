/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b99e0; name: FUN_007b99e0
 */


void FUN_007b99e0(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  *param_1 = (long)(PTR_DAT_02716a50 + 0x10);
  if (param_1[0x9a] != 0) {
    (**(code **)(*(long *)param_1[0x90] + 0x18))
              ((long *)param_1[0x90],param_1[0x98],param_1[0x9a] << 4,8);
  }
  plVar1 = (long *)param_1[0x96];
  if (param_1 + 0x92 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_007b9a4c:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_007b9a4c;
  }
  plVar1 = (long *)param_1[0x8e];
  if (param_1 + 0x8a == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_007b9a78:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_007b9a78;
  }
  if (param_1[0x86] != 0) {
    (**(code **)(*(long *)(param_1[0x86] + 0x48) + 0x18))();
    param_1[0x86] = 0;
  }
  if (param_1[0x85] != 0) {
    (**(code **)(*(long *)(param_1[0x85] + 0x48) + 0x18))();
    param_1[0x85] = 0;
  }
  if ((char)param_1[0x81] != '\0') {
    *(undefined1 *)(param_1 + 0x81) = 0;
  }
  if (param_1[0x80] != 0) {
    (**(code **)(*(long *)(param_1[0x80] + 0x48) + 0x18))();
    param_1[0x80] = 0;
  }
  if (*(char *)((long)param_1 + 0x264) != '\0') {
    if (*(char *)((long)param_1 + 0x26c) != '\0') {
      *(undefined1 *)((long)param_1 + 0x26c) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x264) = 0;
  }
  if ((char)param_1[0x4a] != '\0') {
    if ((char)param_1[0x4b] != '\0') {
      *(undefined1 *)(param_1 + 0x4b) = 0;
    }
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  if (*(char *)((long)param_1 + 0x23c) != '\0') {
    if (*(char *)((long)param_1 + 0x244) != '\0') {
      *(undefined1 *)((long)param_1 + 0x244) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x23c) = 0;
  }
  if ((char)param_1[0x45] != '\0') {
    if ((char)param_1[0x46] != '\0') {
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  if (*(char *)((long)param_1 + 0x214) != '\0') {
    if (*(char *)((long)param_1 + 0x21c) != '\0') {
      *(undefined1 *)((long)param_1 + 0x21c) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x214) = 0;
  }
  if ((char)param_1[0x40] != '\0') {
    if ((char)param_1[0x41] != '\0') {
      *(undefined1 *)(param_1 + 0x41) = 0;
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if (param_1[0x20] != 0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],param_1[0x1e],param_1[0x20] << 3,8);
  }
  plVar1 = (long *)param_1[0x1c];
  if (param_1 + 0x18 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_007b9bac:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_007b9bac;
  }
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)param_1[10] + 0x18))
              ((long *)param_1[10],param_1[0x12],param_1[0x14] << 3,8);
  }
  plVar1 = (long *)param_1[0x10];
  if (param_1 + 0xc == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_007b9c00;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_007b9c00:
  plVar1 = (long *)param_1[8];
  if (param_1 + 4 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x007b9c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007b9c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}


