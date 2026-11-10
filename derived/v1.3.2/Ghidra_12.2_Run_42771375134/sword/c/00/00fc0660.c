/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc0660; name: FUN_00fc0660
 */


void FUN_00fc0660(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x290;
    if (*(long *)(lVar2 + -8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + -8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + -8) = 0;
    }
    if (*(long *)(lVar2 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + -0x10) = 0;
    }
    if (*(char *)(lVar2 + -0x90) != '\0') {
      *(undefined1 *)(lVar2 + -0x90) = 0;
    }
    if (*(char *)(lVar2 + -0xe0) != '\0') {
      *(undefined1 *)(lVar2 + -0xe0) = 0;
    }
    if (*(char *)(lVar2 + -0x1a0) != '\0') {
      *(char *)(lVar2 + -0x1a0) = '\0';
    }
    if (*(char *)(lVar2 + -500) != '\0') {
      if (*(char *)(lVar2 + -0x1ec) != '\0') {
        *(char *)(lVar2 + -0x1ec) = '\0';
      }
      *(char *)(lVar2 + -500) = '\0';
    }
    if (*(char *)(lVar2 + -0x230) != '\0') {
      *(char *)(lVar2 + -0x230) = '\0';
    }
    if (*(char *)(lVar2 + -0x244) != '\0') {
      *(char *)(lVar2 + -0x244) = '\0';
    }
    if (*(char *)(lVar2 + -0x268) != '\0') {
      *(char *)(lVar2 + -0x268) = '\0';
    }
    if (*(char *)(lVar2 + -0x278) != '\0') {
      *(char *)(lVar2 + -0x278) = '\0';
    }
    if (*(char *)(lVar2 + -0x280) != '\0') {
      *(char *)(lVar2 + -0x280) = '\0';
    }
    lVar2 = param_1[2];
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fc0790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar1,param_1[3] - lVar1,0x10);
  return;
}


