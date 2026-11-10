/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c64c50; name: FUN_00c64c50
 */


void FUN_00c64c50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_0271bf50;
  if (*(char *)(param_1 + 0x3480) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x3690);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x200);
    *(char *)(param_1 + 0x3480) = '\0';
  }
  puVar2 = PTR_DAT_0271bf60;
  if (*(char *)(param_1 + 0x30a8) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x3338);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x280);
    *(undefined1 *)(param_1 + 0x30a8) = 0;
  }
  puVar2 = PTR_DAT_0271bf70;
  if (*(char *)(param_1 + 0x2cd0) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x2f60);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x280);
    *(undefined1 *)(param_1 + 0x2cd0) = 0;
  }
  puVar2 = PTR_DAT_0271bf80;
  if (*(char *)(param_1 + 0x29b8) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x2bc8);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x200);
    *(undefined1 *)(param_1 + 0x29b8) = 0;
  }
  puVar2 = PTR_DAT_0271bf90;
  if (*(char *)(param_1 + 0x25e0) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x2870);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x280);
    *(undefined1 *)(param_1 + 0x25e0) = 0;
  }
  puVar2 = PTR_DAT_0271bfa0;
  if (*(char *)(param_1 + 0x2208) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x2498);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x280);
    *(char *)(param_1 + 0x2208) = '\0';
  }
  puVar2 = PTR_DAT_0271bfe0;
  if (*(char *)(param_1 + 0x780) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0xb10);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x380);
    *(undefined1 *)(param_1 + 0x780) = 0;
  }
  puVar2 = PTR_DAT_0271bfd0;
  if (*(char *)(param_1 + 0x228) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x5b8);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x380);
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_00c5b5e0(param_1 + 0xe68);
  FUN_00c5af60(param_1 + 0xcd0);
  puVar2 = PTR_DAT_0271c000;
  if (*(char *)(param_1 + 0x1560) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x18f0);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x380);
    *(undefined1 *)(param_1 + 0x1560) = 0;
  }
  puVar2 = PTR_DAT_0271bff0;
  if (*(char *)(param_1 + 0x1008) != '\0') {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x1398);
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      puVar4 = puVar4 + 2;
    } while (lVar3 != 0x380);
    *(char *)(param_1 + 0x1008) = '\0';
  }
  FUN_00c5cfc0(param_1 + 0x1c18);
  FUN_00c5c9c0(param_1 + 0x1ab0);
  FUN_00c5e280(param_1 + 0x1fc0);
  FUN_00c5dda0(param_1 + 0x1ee8);
  FUN_00c5eb70(param_1 + 0x2140);
  FUN_00c5e720(param_1 + 0x2098);
  FUN_00c59ae0(param_1 + 0x58);
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar3 = *(long *)PTR_DAT_0271be40;
    if (*(undefined8 **)(lVar3 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar3 + 8))();
      *(undefined8 *)(lVar3 + 8) = 0;
      (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))
                (*(long **)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),
                 *(undefined8 *)(lVar3 + 0x20),8);
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    FUN_008d4290(&local_60);
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x48) = local_60;
    *(undefined8 *)(param_1 + 0x50) = uStack_58;
  }
  return;
}


