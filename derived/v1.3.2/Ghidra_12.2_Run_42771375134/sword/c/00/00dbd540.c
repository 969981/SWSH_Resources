/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbd540; name: FUN_00dbd540
 */


undefined8 FUN_00dbd540(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00db5e90();
  if ((uVar2 & 1) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x3a8);
    puVar1 = *(undefined8 **)(param_1 + 0x3a0);
    do {
      if (puVar1 == puVar4) {
        lVar3 = *(long *)(param_1 + 0x458);
        if (lVar3 == *(long *)(param_1 + 0x460)) {
          return 1;
        }
        while( true ) {
          if (*(long *)(lVar3 + 0x18) == 0) {
            return 0;
          }
          if (*(char *)(*(long *)(lVar3 + 0x18) + 0x170) == '\0') break;
          lVar3 = lVar3 + 0x180;
          if (*(long *)(param_1 + 0x460) == lVar3) {
            return 1;
          }
        }
        return 0;
      }
      uVar2 = (**(code **)(*(long *)*puVar1 + 0x20))();
      puVar1 = puVar1 + 4;
    } while ((uVar2 & 1) != 0);
  }
  return 0;
}


