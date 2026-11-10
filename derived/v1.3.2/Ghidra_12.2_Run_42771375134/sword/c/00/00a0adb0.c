/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0adb0; name: FUN_00a0adb0
 */


undefined8 FUN_00a0adb0(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xd1) == '\0') {
    return 0;
  }
  if (param_2 != (undefined1 *)0x0) {
    lVar1 = *(long *)(param_1 + 0x10);
    *param_2 = *(undefined1 *)(lVar1 + 0x368);
    param_2[1] = *(undefined1 *)(lVar1 + 0x369);
    param_2[2] = *(undefined1 *)(lVar1 + 0x36a);
    param_2[3] = *(undefined1 *)(lVar1 + 0x36b);
    param_2[4] = *(undefined1 *)(lVar1 + 0x36c);
    param_2[5] = *(undefined1 *)(lVar1 + 0x36d);
    param_2[6] = *(undefined1 *)(lVar1 + 0x36e);
  }
  return 1;
}


