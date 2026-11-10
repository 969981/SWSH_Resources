/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd9a20; name: FUN_00bd9a20
 */


void FUN_00bd9a20(long param_1)

{
  long lVar1;
  undefined1 auStack_838 [2056];
  
  if (*(char *)(param_1 + 0x70) != '\0') {
    if (*(long *)(param_1 + 0x90) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_838,0,0x808);
}


