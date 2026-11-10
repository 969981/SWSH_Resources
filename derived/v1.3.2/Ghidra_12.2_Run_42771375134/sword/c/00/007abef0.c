/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007abef0; name: FUN_007abef0
 */


void FUN_007abef0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 200);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 200) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0xd0);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0xe0);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0xa8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_017cd7a0(puVar3);
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    iVar2 = FUN_017d44e0();
    if (iVar2 != 0) {
      do {
        FUN_017d43b0();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_017b5440();
    if (*(long *)(param_1 + 0x88) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
                (*(long **)(param_1 + 0x78),*(long *)(param_1 + 0x88),0,8);
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    puVar1 = PTR_DAT_027167d8;
    *(undefined8 *)PTR_DAT_027167d0 = 0;
    *(undefined8 *)puVar1 = 0;
    if (*(long **)(param_1 + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0xb8))();
      lVar4 = *(long *)PTR_DAT_027167c8;
      (**(code **)**(undefined8 **)(lVar4 + 8))();
      *(undefined8 *)(lVar4 + 8) = 0;
      (**(code **)(**(long **)(lVar4 + 0x10) + 0x18))
                (*(long **)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                 *(undefined8 *)(lVar4 + 0x20),8);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}


