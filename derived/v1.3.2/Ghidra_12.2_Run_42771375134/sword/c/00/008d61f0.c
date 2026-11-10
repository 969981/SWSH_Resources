/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d61f0; name: FUN_008d61f0
 */


void FUN_008d61f0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x178) + 0x18))
              (*(long **)(param_1 + 0x178),lVar1,*(undefined8 *)(param_1 + 0x180),
               *(undefined8 *)(param_1 + 0x188));
  }
  lVar1 = *(long *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x158) + 0x18))
              (*(long **)(param_1 + 0x158),lVar1,*(undefined8 *)(param_1 + 0x160),
               *(undefined8 *)(param_1 + 0x168));
  }
  lVar1 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (lVar1 != 0) {
    FUN_008d6490(lVar1);
    (**(code **)(**(long **)(param_1 + 0x138) + 0x18))
              (*(long **)(param_1 + 0x138),lVar1,*(undefined8 *)(param_1 + 0x140),
               *(undefined8 *)(param_1 + 0x148));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x118) + 0x18))
              (*(long **)(param_1 + 0x118),puVar2,*(undefined8 *)(param_1 + 0x120),
               *(undefined8 *)(param_1 + 0x128));
  }
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))
              (*(long **)(param_1 + 0xf8),puVar2,*(undefined8 *)(param_1 + 0x100),
               *(undefined8 *)(param_1 + 0x108));
  }
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
              (*(long **)(param_1 + 0xd8),puVar2,*(undefined8 *)(param_1 + 0xe0),
               *(undefined8 *)(param_1 + 0xe8));
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar1 + 0x58) + 0x18))
                (*(long **)(lVar1 + 0x58),puVar2,*(undefined8 *)(lVar1 + 0x60),
                 *(undefined8 *)(lVar1 + 0x68));
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar1 + 0x38) + 0x18))
                (*(long **)(lVar1 + 0x38),puVar2,*(undefined8 *)(lVar1 + 0x40),
                 *(undefined8 *)(lVar1 + 0x48));
    }
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
              (*(long **)(param_1 + 0xb8),lVar1,*(undefined8 *)(param_1 + 0xc0),
               *(undefined8 *)(param_1 + 200));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
              (*(long **)(param_1 + 0x98),puVar2,*(undefined8 *)(param_1 + 0xa0),
               *(undefined8 *)(param_1 + 0xa8));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
              (*(long **)(param_1 + 0x78),puVar2,*(undefined8 *)(param_1 + 0x80),
               *(undefined8 *)(param_1 + 0x88));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),puVar2,*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
  }
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),lVar1,*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48));
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008d647c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
            (*(long **)(param_1 + 0x18),lVar1,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}


