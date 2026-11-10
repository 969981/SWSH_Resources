/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2360; name: FUN_004e2360
 */


undefined4 FUN_004e2360(long param_1)

{
  long lVar1;
  char local_2c [4];
  int local_28;
  undefined4 local_24;
  
  local_24 = 0;
  FUN_00414b20(*(undefined8 *)(param_1 + 0xc0),local_2c,&local_28);
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x78);
  if (lVar1 != 0 && local_2c[0] == '\0') {
    do {
      FUN_0040acf0(lVar1,local_2c,&local_28);
      lVar1 = *(long *)(lVar1 + 0x78);
      if (lVar1 == 0) break;
    } while (local_2c[0] == '\0');
  }
  if (local_28 == 0) {
    local_2c[0] = '\0';
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x78);
    if (lVar1 != 0) {
      do {
        FUN_0040ad60(lVar1,local_2c,&local_24);
        lVar1 = *(long *)(lVar1 + 0x78);
        if (lVar1 == 0) {
          return local_24;
        }
      } while (local_2c[0] == '\0');
    }
  }
  return local_24;
}


