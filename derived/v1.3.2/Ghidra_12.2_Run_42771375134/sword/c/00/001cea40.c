/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cea40; name: FUN_001cea40
 */


void FUN_001cea40(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char local_24 [4];
  undefined8 *local_18;
  
  if (*(char *)(param_1 + 0x1fb9) == '\0') {
    FUN_003ea410(param_1 + 0x10,*(undefined4 *)(param_2 + 4));
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xfffffff;
    *param_2 = 0;
    return;
  }
  uVar1 = *(uint *)(param_2 + 1);
  local_18 = param_2;
  if (uVar1 >> 0x1e == 2) {
    *(uint *)(param_2 + 1) = uVar1 | 0xc0000000;
    if ((uVar1 >> 0x1c & 1) == 0) {
      puVar2 = (undefined8 *)FUN_001d67d0(param_1 + 0x21a0,&local_18,local_24);
      if (local_24[0] == '\0') {
        *puVar2 = local_18;
        return;
      }
    }
  }
  else if (uVar1 >> 0x1e == 1) {
    *(uint *)(param_2 + 1) = uVar1 & 0x3fffffff;
    FUN_001d6940(param_1 + 0x21a0,&local_18);
    return;
  }
  return;
}


