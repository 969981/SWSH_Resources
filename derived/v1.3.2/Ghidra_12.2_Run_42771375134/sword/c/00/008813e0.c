/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008813e0; name: FUN_008813e0
 */


void FUN_008813e0(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = 0x33b;
  puVar2 = PTR_DAT_027173f8;
  do {
    while (*(long *)(puVar2 + 8) == 0) {
      *(undefined8 *)(puVar2 + 8) = 0;
      puVar2 = puVar2 + 0x110;
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) {
        return;
      }
    }
    FUN_006e2100(*(long *)(puVar2 + 8),puVar2);
    lVar1 = *(long *)(puVar2 + 8);
    *(undefined8 *)(puVar2 + 8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    puVar2 = puVar2 + 0x110;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}


