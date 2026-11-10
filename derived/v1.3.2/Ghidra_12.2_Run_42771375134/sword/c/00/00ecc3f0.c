/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecc3f0; name: FUN_00ecc3f0
 */


void FUN_00ecc3f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  FUN_00ecc490();
  lVar4 = 0;
  puVar1 = PTR_DAT_027175d0 + 0x10;
  do {
    lVar2 = param_1 + lVar4;
    if (*(long *)(lVar2 + 0x58) != 0) {
      FUN_00895d70();
      plVar3 = *(long **)(lVar2 + 0x58);
      *(undefined8 *)(lVar2 + 0x58) = 0;
      if (plVar3 != (long *)0x0) {
        *plVar3 = (long)puVar1;
        if (plVar3[1] != 0) {
          (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
          plVar3[1] = 0;
        }
        (**(code **)(**(long **)(lVar2 + 0x60) + 0x18))
                  (*(long **)(lVar2 + 0x60),plVar3,*(undefined8 *)(lVar2 + 0x68),
                   *(undefined8 *)(lVar2 + 0x70));
      }
    }
    lVar4 = lVar4 + 0x70;
  } while (lVar4 != 0x460);
  return;
}


