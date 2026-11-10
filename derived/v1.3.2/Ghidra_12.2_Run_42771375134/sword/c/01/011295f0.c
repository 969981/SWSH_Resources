/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011295f0; name: FUN_011295f0
 */


void FUN_011295f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (*(char *)((long)param_1 + 0x1c) == '\0') {
      return;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    if (*(char *)(param_1 + 2) == '\0') {
      *(undefined8 *)((long)param_1 + 0x14) = param_1[4];
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)((long)param_1 + 0x24);
    }
  }
  else {
    uVar1 = param_1[1];
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = uVar1;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (*(char *)((long)param_1 + 0x1c) == '\0') {
      return;
    }
  }
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}


