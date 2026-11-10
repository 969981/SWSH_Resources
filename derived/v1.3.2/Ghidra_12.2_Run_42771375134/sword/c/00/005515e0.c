/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005515e0; name: FUN_005515e0
 */


int * FUN_005515e0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = (int)param_2;
  if (iVar1 != iVar2) {
    FUN_005513d0(param_1,param_2,1);
    if (iVar1 <= iVar2) {
                    /* WARNING: Subroutine does not return */
      memset((void *)(*(long *)(param_1 + 2) + (long)*param_1),0x20,(long)iVar2 - (long)*param_1);
    }
    *param_1 = iVar2;
    if (param_1[1] != 0) {
      *(undefined1 *)(*(long *)(param_1 + 2) + (long)iVar2) = 0;
    }
  }
  return param_1;
}


