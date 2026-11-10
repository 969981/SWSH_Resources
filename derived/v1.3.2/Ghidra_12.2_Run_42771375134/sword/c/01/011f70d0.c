/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f70d0; name: FUN_011f70d0
 */


void FUN_011f70d0(long param_1,ulong param_2,void *param_3)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(long *)(param_1 + 0x10) - lVar1;
  uVar3 = uVar2 / 300;
  if (uVar2 % 300 != 0) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 <= param_2) {
    return;
  }
  if (param_2 + 1 == uVar3) {
    __n = (*(long *)(param_1 + 0x10) + param_2 * -300) - lVar1;
  }
  else {
    __n = 300;
  }
  memcpy((void *)(lVar1 + param_2 * 300),param_3,__n);
  return;
}


