/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e14ce0; name: FUN_00e14ce0
 */


void FUN_00e14ce0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_00db1810(param_1 + 0x180);
  lVar4 = *(long *)PTR_DAT_0271efa0;
  lVar2 = *(long *)(lVar4 + 0xd8);
  if (lVar2 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0xd0);
    puVar6 = puVar5 + lVar2;
    puVar1 = puVar5 + 1;
    puVar3 = puVar5;
    do {
      puVar7 = puVar1;
      if (puVar1 != puVar6) {
        puVar3 = puVar1;
        do {
          if (puVar3[-1] != 0) {
            (**(code **)(*(long *)(puVar3[-1] + 0x48) + 0x18))();
            puVar3[-1] = 0;
          }
          puVar3[-1] = *puVar3;
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        } while (puVar6 != puVar3);
        puVar3 = *(undefined8 **)(lVar4 + 0xd0);
        lVar2 = *(long *)(lVar4 + 0xd8);
        puVar7 = puVar3 + lVar2;
      }
      if (puVar7[-1] != 0) {
        (**(code **)(*(long *)(puVar7[-1] + 0x48) + 0x18))();
        puVar7[-1] = 0;
        puVar3 = *(undefined8 **)(lVar4 + 0xd0);
        lVar2 = *(long *)(lVar4 + 0xd8);
      }
      lVar2 = lVar2 + -1;
      puVar6 = puVar3 + lVar2;
      *(long *)(lVar4 + 0xd8) = lVar2;
    } while (puVar5 != puVar6);
  }
  return;
}


