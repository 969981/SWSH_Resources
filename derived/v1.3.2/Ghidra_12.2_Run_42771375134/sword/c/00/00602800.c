/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00602800; name: FUN_00602800
 */


undefined8 FUN_00602800(long param_1,size_t param_2,undefined4 *param_3)

{
  void *__s;
  undefined4 uVar1;
  
  if ((long)param_2 < 1) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = 6;
    }
  }
  else {
    __s = (void *)(**(code **)(param_1 + 8))();
    if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,param_2);
    }
    uVar1 = 0x40;
  }
  *param_3 = uVar1;
  return 0;
}


