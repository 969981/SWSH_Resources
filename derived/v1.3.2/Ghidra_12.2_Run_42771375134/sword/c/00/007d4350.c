/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d4350; name: FUN_007d4350
 */


void FUN_007d4350(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    plVar2 = *(long **)(param_1 + 0x40);
    plVar3 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar3 == plVar2) goto LAB_007d43dc;
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x168) = 0;
    lVar1 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    plVar2 = *(long **)(param_1 + 0x40);
    plVar3 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar3 == plVar2) goto LAB_007d43dc;
  }
  do {
    plVar4 = plVar3 + -1;
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      plVar3[-1] = 0;
    }
    plVar3 = plVar4;
  } while (plVar2 != plVar4);
LAB_007d43dc:
  *(long **)(param_1 + 0x48) = plVar2;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0xb0) == 0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    lVar1 = *(long *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  else {
    FUN_007cdac0();
    lVar1 = *(long *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (lVar1 != 0) {
      FUN_007cd940(lVar1);
      (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
                (*(long **)(param_1 + 0xb8),lVar1,*(undefined8 *)(param_1 + 0xc0),
                 *(undefined8 *)(param_1 + 200));
    }
    lVar1 = *(long *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (lVar1 != 0) {
    FUN_007d9cc0(lVar1);
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
              (*(long **)(param_1 + 0xd8),lVar1,*(undefined8 *)(param_1 + 0xe0),
               *(undefined8 *)(param_1 + 0xe8));
  }
  lVar1 = *(long *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (lVar1 != 0) {
    FUN_007d29f0(lVar1);
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))
              (*(long **)(param_1 + 0xf8),lVar1,*(undefined8 *)(param_1 + 0x100),
               *(undefined8 *)(param_1 + 0x108));
  }
  lVar1 = *(long *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_007d79a0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x007d44ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x118) + 0x18))
            (*(long **)(param_1 + 0x118),lVar1,*(undefined8 *)(param_1 + 0x120),
             *(undefined8 *)(param_1 + 0x128));
  return;
}


