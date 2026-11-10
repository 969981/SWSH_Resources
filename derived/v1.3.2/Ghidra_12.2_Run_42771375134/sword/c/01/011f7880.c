/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7880; name: FUN_011f7880
 */


void FUN_011f7880(undefined8 *param_1,ulong param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  void *__s;
  size_t __n;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (long *)*param_4;
  param_1[2] = 0;
  param_1[3] = plVar3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_2 == 0) {
    return;
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = (param_2 - 1 >> 6) + 1;
  __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,lVar1 * 8,1);
  if (__s == (void *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  *param_1 = __s;
  param_1[1] = 0;
  param_1[2] = lVar1;
  cVar2 = *param_3;
  __n = (param_2 >> 6) << 3;
  param_1[1] = param_2;
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,__n);
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0xff,__n);
}


