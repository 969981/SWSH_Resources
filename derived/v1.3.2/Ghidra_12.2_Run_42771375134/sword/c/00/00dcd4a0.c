/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcd4a0; name: FUN_00dcd4a0
 */


void FUN_00dcd4a0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined4 local_34;
  
  lVar1 = *(long *)(param_1 + 0xb58);
  if (*(long *)(param_1 + 0xb60) != lVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      local_48 = *(undefined8 *)(lVar1 + lVar2);
      local_34 = (undefined4)uVar3;
      (*(code *)*param_2)(param_2 + 4,&local_34,&local_48);
      lVar1 = *(long *)(param_1 + 0xb58);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < (ulong)(*(long *)(param_1 + 0xb60) - lVar1 >> 4));
  }
  return;
}


