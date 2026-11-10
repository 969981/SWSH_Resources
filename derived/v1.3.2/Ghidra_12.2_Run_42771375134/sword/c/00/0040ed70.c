/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ed70; name: FUN_0040ed70
 */


undefined8 FUN_0040ed70(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
    do {
      puVar4 = puVar3 + 1;
      uVar1 = FUN_00414850(*puVar3,param_2,param_3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)
                       (*(long *)(param_1 + 0xb8) + (ulong)*(uint *)(param_1 + 0xc0) * 8));
  }
  uVar2 = FUN_004872c0(param_1,param_2,param_3,0);
  return uVar2;
}


