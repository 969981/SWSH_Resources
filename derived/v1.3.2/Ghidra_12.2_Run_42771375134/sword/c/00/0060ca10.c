/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060ca10; name: FUN_0060ca10
 */


undefined8 FUN_0060ca10(undefined8 *param_1)

{
  void *__ptr;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  __ptr = (void *)*param_1;
  FUN_00605cf0();
  free(__ptr);
  return 0;
}


