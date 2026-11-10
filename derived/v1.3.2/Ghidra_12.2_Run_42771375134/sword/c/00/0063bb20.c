/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063bb20; name: FUN_0063bb20
 */


void FUN_0063bb20(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x3e20)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x3e38) + lVar2);
      FUN_00642a00(*puVar1,puVar1 + 2,0);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x60;
    } while (lVar3 < *(int *)(param_1 + 0x3e20));
  }
  if (0 < *(int *)(param_1 + 0x3e70)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x3e88) + lVar2);
      FUN_00642a00(*puVar1,puVar1 + 2,0);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x60;
    } while (lVar3 < *(int *)(param_1 + 0x3e70));
  }
  if (0 < *(int *)(param_1 + 0x3ec0)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x3ed8) + lVar2);
      FUN_00642a00(*puVar1,puVar1 + 2,0);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x60;
    } while (lVar3 < *(int *)(param_1 + 0x3ec0));
  }
  return;
}


