/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01164730; name: FUN_01164730
 */


void FUN_01164730(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  if (*(char *)(param_2 + 0x90) != '\0') {
    uVar3 = *(undefined1 *)(param_2 + 0x93);
    *(undefined2 *)((long)param_1 + 0x11) = *(undefined2 *)(param_2 + 0x91);
    *(undefined1 *)((long)param_1 + 0x13) = uVar3;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}


