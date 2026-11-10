/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bd600; name: FUN_005bd600
 */


void FUN_005bd600(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (0 < *(long *)(param_1 + 0x88)) {
    FUN_005bd6c0(param_1,0,1);
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xd0);
    do {
      puVar3 = (undefined8 *)*puVar1;
      if (puVar3 == (undefined8 *)0x0) break;
      puVar4 = (undefined8 *)puVar3[1];
      if (puVar4 == (undefined8 *)0x0) {
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
      else {
        *puVar4 = 0;
        *puVar1 = puVar4;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar2 = *(long *)(param_1 + 0xe0) + -1;
      *(long *)(param_1 + 0xe0) = lVar2;
    } while (lVar2 != 0);
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xf8);
    do {
      puVar3 = (undefined8 *)*puVar1;
      if (puVar3 == (undefined8 *)0x0) break;
      puVar4 = (undefined8 *)puVar3[1];
      if (puVar4 == (undefined8 *)0x0) {
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
      }
      else {
        *puVar4 = 0;
        *puVar1 = puVar4;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar2 = *(long *)(param_1 + 0x108) + -1;
      *(long *)(param_1 + 0x108) = lVar2;
    } while (lVar2 != 0);
  }
  FUN_005bd890(param_1 + 0x110);
  return;
}


