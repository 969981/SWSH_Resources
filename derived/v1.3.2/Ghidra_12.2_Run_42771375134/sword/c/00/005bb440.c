/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bb440; name: FUN_005bb440
 */


void FUN_005bb440(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  size_t *psVar1;
  size_t *__s;
  
  if (param_5 == 0) {
    return;
  }
  psVar1 = (size_t *)
           FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,param_5 + 9,
                        "C:/workspace/YEBIS_draft/src/UT/ppfxLicense.cpp",0x9d,0);
  __s = psVar1;
  if (psVar1 != (size_t *)0x0) {
    __s = psVar1 + 1;
    *psVar1 = param_5 + 1U;
  }
  *param_2 = __s;
                    /* WARNING: Subroutine does not return */
  memset(__s,0,param_5 + 1U);
}


