/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c5e280; name: FUN_00c5e280
 */


void FUN_00c5e280(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0271bef8;
  if (*(char *)(param_1 + 8) != '\0') {
    lVar2 = *(long *)PTR_DAT_0271bef8;
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
    *(undefined8 *)(param_1 + 0x98) = local_40;
    *(undefined8 *)(param_1 + 0xa0) = uStack_38;
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
    *(undefined8 *)(param_1 + 0xa8) = local_40;
    *(undefined8 *)(param_1 + 0xb0) = uStack_38;
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
    *(undefined8 *)(param_1 + 0xb8) = local_40;
    *(undefined8 *)(param_1 + 0xc0) = uStack_38;
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
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 200) = local_40;
    *(undefined8 *)(param_1 + 0xd0) = uStack_38;
  }
  return;
}


