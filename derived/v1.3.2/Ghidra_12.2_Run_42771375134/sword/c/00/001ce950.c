/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ce950; name: FUN_001ce950
 */


void FUN_001ce950(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  char local_24 [4];
  long *local_18;
  
  *param_2 = param_1;
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    uVar2 = FUN_003ea350(param_1 + 0x10,param_2[3],(char)param_2[5]);
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xfffffff | 0x80000000;
    return;
  }
  uVar1 = *(uint *)(param_2 + 1);
  local_18 = param_2;
  if (uVar1 >> 0x1e < 3) {
    *(uint *)(param_2 + 1) = uVar1 & 0x3fffffff | 0x40000000;
    puVar3 = (undefined8 *)FUN_001d67d0(param_1 + 0x21a0,&local_18,local_24);
    if (local_24[0] == '\0') {
      *puVar3 = local_18;
      return;
    }
  }
  else {
    *(uint *)(param_2 + 1) = uVar1 & 0x3fffffff | 0x80000000;
    if ((uVar1 >> 0x1c & 1) == 0) {
      FUN_001d6940(param_1 + 0x21a0,&local_18);
      return;
    }
  }
  return;
}


