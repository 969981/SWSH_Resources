/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c5c9c0; name: FUN_00c5c9c0
 */


void FUN_00c5c9c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0271be98;
  if (*(char *)(param_1 + 8) != '\0') {
    lVar2 = *(long *)PTR_DAT_0271be98;
    if (*(undefined8 **)(lVar2 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar2 + 8))();
      *(undefined8 *)(lVar2 + 8) = 0;
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))
                (*(long **)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                 *(undefined8 *)(lVar2 + 0x20),8);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    FUN_008d4290(&local_40);
    *(undefined8 *)(param_1 + 0xf8) = local_40;
    *(undefined8 *)(param_1 + 0x100) = uStack_38;
    lVar2 = *(long *)puVar1;
    if (*(undefined8 **)(lVar2 + 0x28) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar2 + 0x28))();
      *(undefined8 *)(lVar2 + 0x28) = 0;
      (**(code **)(**(long **)(lVar2 + 0x30) + 0x18))
                (*(long **)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38),
                 *(undefined8 *)(lVar2 + 0x40),8);
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
    }
    FUN_008d4290(&local_40);
    *(undefined8 *)(param_1 + 0x108) = local_40;
    *(undefined8 *)(param_1 + 0x110) = uStack_38;
    lVar2 = *(long *)puVar1;
    if (*(undefined8 **)(lVar2 + 0x48) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar2 + 0x48))();
      *(undefined8 *)(lVar2 + 0x48) = 0;
      (**(code **)(**(long **)(lVar2 + 0x50) + 0x18))
                (*(long **)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58),
                 *(undefined8 *)(lVar2 + 0x60),8);
      *(undefined8 *)(lVar2 + 0x58) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
    FUN_008d4290(&local_40);
    *(undefined8 *)(param_1 + 0x118) = local_40;
    *(undefined8 *)(param_1 + 0x120) = uStack_38;
    lVar2 = *(long *)puVar1;
    if (*(undefined8 **)(lVar2 + 0x68) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar2 + 0x68))();
      *(undefined8 *)(lVar2 + 0x68) = 0;
      (**(code **)(**(long **)(lVar2 + 0x70) + 0x18))
                (*(long **)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x78),
                 *(undefined8 *)(lVar2 + 0x80),8);
      *(undefined8 *)(lVar2 + 0x78) = 0;
      *(undefined8 *)(lVar2 + 0x80) = 0;
      *(undefined8 *)(lVar2 + 0x70) = 0;
    }
    FUN_008d4290(&local_40);
    *(undefined8 *)(param_1 + 0x128) = local_40;
    *(undefined8 *)(param_1 + 0x130) = uStack_38;
    lVar2 = *(long *)puVar1;
    if (*(undefined8 **)(lVar2 + 0x88) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar2 + 0x88))();
      *(undefined8 *)(lVar2 + 0x88) = 0;
      (**(code **)(**(long **)(lVar2 + 0x90) + 0x18))
                (*(long **)(lVar2 + 0x90),*(undefined8 *)(lVar2 + 0x98),
                 *(undefined8 *)(lVar2 + 0xa0),8);
      *(undefined8 *)(lVar2 + 0x98) = 0;
      *(undefined8 *)(lVar2 + 0xa0) = 0;
      *(undefined8 *)(lVar2 + 0x90) = 0;
    }
    FUN_008d4290(&local_40);
    *(undefined8 *)(param_1 + 0x138) = local_40;
    *(undefined8 *)(param_1 + 0x140) = uStack_38;
    lVar2 = *(long *)puVar1;
    if (*(undefined8 **)(lVar2 + 0xa8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar2 + 0xa8))();
      *(undefined8 *)(lVar2 + 0xa8) = 0;
      (**(code **)(**(long **)(lVar2 + 0xb0) + 0x18))
                (*(long **)(lVar2 + 0xb0),*(undefined8 *)(lVar2 + 0xb8),
                 *(undefined8 *)(lVar2 + 0xc0),8);
      *(undefined8 *)(lVar2 + 0xb8) = 0;
      *(undefined8 *)(lVar2 + 0xc0) = 0;
      *(undefined8 *)(lVar2 + 0xb0) = 0;
    }
    FUN_008d4290(&local_40);
    *(undefined8 *)(param_1 + 0x148) = local_40;
    *(undefined8 *)(param_1 + 0x150) = uStack_38;
    lVar2 = *(long *)puVar1;
    if (*(undefined8 **)(lVar2 + 200) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar2 + 200))();
      *(undefined8 *)(lVar2 + 200) = 0;
      (**(code **)(**(long **)(lVar2 + 0xd0) + 0x18))
                (*(long **)(lVar2 + 0xd0),*(undefined8 *)(lVar2 + 0xd8),
                 *(undefined8 *)(lVar2 + 0xe0),8);
      *(undefined8 *)(lVar2 + 0xd8) = 0;
      *(undefined8 *)(lVar2 + 0xe0) = 0;
      *(undefined8 *)(lVar2 + 0xd0) = 0;
    }
    FUN_008d4290(&local_40);
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x158) = local_40;
    *(undefined8 *)(param_1 + 0x160) = uStack_38;
  }
  return;
}


