/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00934070; name: FUN_00934070
 */


void FUN_00934070(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    lVar1 = param_1 + lVar3;
    puVar2 = *(undefined8 **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                (*(long **)(lVar1 + 0x10),puVar2,*(undefined8 *)(lVar1 + 0x18),
                 *(undefined8 *)(lVar1 + 0x20));
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar1 + 0x30) + 0x18))
                (*(long **)(lVar1 + 0x30),puVar2,*(undefined8 *)(lVar1 + 0x38),
                 *(undefined8 *)(lVar1 + 0x40));
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar1 + 0x50) + 0x18))
                (*(long **)(lVar1 + 0x50),puVar2,*(undefined8 *)(lVar1 + 0x58),
                 *(undefined8 *)(lVar1 + 0x60));
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar1 + 0x70) + 0x18))
                (*(long **)(lVar1 + 0x70),puVar2,*(undefined8 *)(lVar1 + 0x78),
                 *(undefined8 *)(lVar1 + 0x80));
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar1 + 0x90) + 0x18))
                (*(long **)(lVar1 + 0x90),puVar2,*(undefined8 *)(lVar1 + 0x98),
                 *(undefined8 *)(lVar1 + 0xa0));
    }
    lVar3 = lVar3 + 0xa0;
  } while (lVar3 != 0x3c0);
  return;
}


