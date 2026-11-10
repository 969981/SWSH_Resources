/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e8190; name: FUN_006e8190
 */


int FUN_006e8190(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 local_28 [2];
  
  local_28[0] = 0;
  iVar2 = nn::fs::WriteFile(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),param_2,
                            param_3,local_28);
  if (iVar2 == 0) {
    param_3 = *(long *)(param_1 + 0xa0) + param_3;
    if (*(char *)(param_1 + 0xa8) == '\0') {
      lVar1 = *(long *)(param_1 + 0x98);
      if (param_3 <= *(long *)(param_1 + 0x98)) {
        lVar1 = param_3;
      }
      *(long *)(param_1 + 0xa0) = lVar1;
    }
    else {
      *(long *)(param_1 + 0xa0) = param_3;
      if (*(long *)(param_1 + 0x98) < param_3) {
        *(long *)(param_1 + 0x98) = param_3;
      }
    }
  }
  return iVar2;
}


