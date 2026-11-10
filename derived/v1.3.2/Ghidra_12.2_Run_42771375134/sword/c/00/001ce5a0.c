/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ce5a0; name: FUN_001ce5a0
 */


void FUN_001ce5a0(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  char local_2c [4];
  long *local_28;
  
  *param_2 = param_1;
  uVar1 = *(uint *)(param_2 + 1);
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    *(uint *)(param_2 + 1) = uVar1 & 0xfffffff | 0x80000000;
    lVar2 = FUN_001d9bc0(param_2);
    FUN_003dfca0(param_1 + 0x10,param_2 + 3,lVar2 + 0x20);
    return;
  }
  local_28 = param_2;
  if (uVar1 >> 0x1e < 3) {
    *(uint *)(param_2 + 1) = uVar1 & 0x3fffffff | 0x40000000;
    puVar3 = (undefined8 *)FUN_001d67d0(param_3,&local_28,local_2c);
    if (local_2c[0] == '\0') {
      *puVar3 = local_28;
      return;
    }
  }
  else {
    *(uint *)(param_2 + 1) = uVar1 & 0x3fffffff | 0x80000000;
    if ((uVar1 >> 0x1c & 1) == 0) {
      FUN_001d6940(param_3,&local_28);
      return;
    }
  }
  return;
}


