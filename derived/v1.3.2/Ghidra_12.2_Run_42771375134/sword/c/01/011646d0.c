/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011646d0; name: FUN_011646d0
 */


void FUN_011646d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  if (*(char *)(param_1 + 0x90) == '\0') {
    if (*(char *)(param_2 + 2) != '\0') {
      uVar2 = *(undefined1 *)((long)param_2 + 0x13);
      *(undefined2 *)(param_1 + 0x91) = *(undefined2 *)((long)param_2 + 0x11);
      *(undefined1 *)(param_1 + 0x93) = uVar2;
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    return;
  }
  if (*(char *)(param_2 + 2) == '\0') {
    *(undefined1 *)(param_1 + 0x90) = 0;
    return;
  }
  uVar3 = *(undefined2 *)((long)param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined2 *)(param_1 + 0x91) = uVar3;
  return;
}


