/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a84f30; name: FUN_00a84f30
 */


void FUN_00a84f30(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x5c0);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x108) != 0)) {
    puVar3 = *(undefined8 **)(lVar2 + 0x100);
    lVar2 = *(long *)(lVar2 + 0x108) << 3;
    do {
      uVar1 = (**(code **)(*(long *)*puVar3 + 0x40))();
      if ((uVar1 & 1) == 0) {
        FUN_00dce9b0(*puVar3,param_2);
      }
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}


