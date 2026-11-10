/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de5580; name: thunk_FUN_00db5fa0
 */


void thunk_FUN_00db5fa0(long *param_1)

{
  code *pcVar1;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long *aplStack_80 [12];
  
  if ((char)param_1[0x39] != '\0') {
    *(undefined1 *)(param_1 + 0x39) = 0;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if ((((char)param_1[0x71] != '\0') &&
      (*(undefined1 *)(param_1 + 0x71) = 0, *(char *)((long)param_1 + 0x219) == '\0')) &&
     ((char)param_1[0x43] != '\0')) {
    (**(code **)(*param_1 + 0xd8))(param_1,1);
  }
  if ((int)param_1[0x70] != *(int *)((long)param_1 + 900)) {
    *(int *)(param_1 + 0x70) = *(int *)((long)param_1 + 900);
    puStack_a0 = &LAB_00db8c00;
    pcStack_98 = FUN_00db8c20;
    puStack_90 = &LAB_00db8c30;
    puStack_88 = &LAB_00db8c40;
    aplStack_80[0] = param_1;
    (**(code **)(*param_1 + 0x100))(param_1,&puStack_a0);
    pcVar1 = pcStack_98;
    if (pcStack_98 != (code *)0x0) {
      puStack_90 = (undefined1 *)0x0;
      puStack_88 = (undefined1 *)0x0;
      puStack_a0 = (undefined1 *)0x0;
      pcStack_98 = (code *)0x0;
      (*pcVar1)(aplStack_80);
    }
  }
  FUN_00db60a0(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0x6a) = 1;
  return;
}


