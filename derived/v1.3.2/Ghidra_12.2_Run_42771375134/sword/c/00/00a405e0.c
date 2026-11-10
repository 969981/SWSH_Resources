/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a405e0; name: FUN_00a405e0
 */


void FUN_00a405e0(long param_1)

{
  int extraout_var;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    FUN_016b8190(*(undefined8 *)(param_1 + 0xa8));
    if (extraout_var == 2) {
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      uVar2 = 0;
    }
    else {
      if (extraout_var != 0) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x80);
      uVar2 = 1;
    }
    FUN_00a41380(uVar1,uVar2);
    (**(code **)(**(long **)(*(long *)(param_1 + 0x80) + 0xa0) + 0x50))();
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}


