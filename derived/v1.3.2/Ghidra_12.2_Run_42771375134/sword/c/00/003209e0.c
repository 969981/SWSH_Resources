/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003209e0; name: FUN_003209e0
 */


void FUN_003209e0(undefined8 *param_1,uint param_2)

{
  int iVar1;
  void *__s;
  
  if ((param_2 == 0) || ((param_2 - 1 & param_2) != 0)) {
    param_2 = param_2 | param_2 >> 1;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 | param_2 >> 0x10) + 1;
  }
  iVar1 = param_2 * 4 + (int)(*(float *)(param_1 + 6) * (float)param_2) * 4;
  __s = (void *)(**(code **)(**(long **)*param_1 + 0x10))
                          (*(long **)*param_1,
                           (-iVar1 & 0xcU) + iVar1 +
                           (int)(*(float *)(param_1 + 6) * (float)param_2) * 0x10,
                           "<no allocation names in this config>",
                           "./../../../../PxShared/src/foundation/include/PsHashInternals.h",0x174);
                    /* WARNING: Subroutine does not return */
  memset(__s,-1,(ulong)(param_2 * 4));
}


