/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2b40; name: FUN_004e2b40
 */


bool FUN_004e2b40(long param_1)

{
  long lVar1;
  int local_2c;
  undefined1 local_28 [4];
  char local_24 [4];
  
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_00414aa0(*(undefined8 *)(param_1 + 0xc0),local_24,&local_2c,local_28);
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x78);
  if (lVar1 != 0 && local_24[0] == '\0') {
    do {
      FUN_0040ac70(lVar1,local_24,&local_2c,local_28);
      lVar1 = *(long *)(lVar1 + 0x78);
      if (lVar1 == 0) break;
    } while (local_24[0] == '\0');
  }
  *(undefined1 *)(param_1 + 0x48) = local_28[0];
  *(int *)(param_1 + 0x3c) = local_2c;
  if (local_2c == 0) {
    lVar1 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    lVar1 = FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8);
    *(long *)(param_1 + 0x40) = lVar1;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  return lVar1 != 0;
}


