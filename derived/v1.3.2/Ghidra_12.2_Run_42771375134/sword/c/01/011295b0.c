/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011295b0; name: FUN_011295b0
 */


void FUN_011295b0(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
  }
  if ((param_3 & 1) != 0) {
    uVar1 = param_1[1];
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = uVar1;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  return;
}


