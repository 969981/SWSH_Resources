/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f3470; name: FUN_006f3470
 */


long FUN_006f3470(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  FUN_0199ca90(param_1,PTR_DAT_027155e8);
  plVar4 = *(long **)(param_1 + 0x118);
  if (plVar4 != (long *)0x0) {
    if (*(long **)(param_1 + 0x120) == plVar4) {
      plVar2 = plVar4;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x120);
      do {
        plVar6 = plVar2 + -4;
        lVar1 = *plVar6;
        *plVar6 = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)plVar2[-3] + 0x18))((long *)plVar2[-3],lVar1,plVar2[-2],plVar2[-1]);
        }
        plVar2 = plVar6;
      } while (plVar4 != plVar6);
      plVar2 = *(long **)(param_1 + 0x118);
    }
    *(long **)(param_1 + 0x120) = plVar4;
    (**(code **)(**(long **)(param_1 + 0x130) + 0x18))
              (*(long **)(param_1 + 0x130),plVar2,*(long *)(param_1 + 0x128) - (long)plVar2,8);
  }
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0xf0);
    if (*(long *)(param_1 + 0xf0) == lVar1) {
      lVar3 = lVar1;
    }
    else {
      do {
        lVar5 = lVar3 + -0x20;
        FUN_006f6820(lVar5);
        if (*(long *)(lVar3 + -0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -0x18) = 0;
        }
        lVar3 = lVar5;
      } while (lVar1 != lVar5);
      lVar3 = *(long *)(param_1 + 0xe8);
    }
    *(long *)(param_1 + 0xf0) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))
              (*(long **)(param_1 + 0x100),lVar3,*(long *)(param_1 + 0xf8) - lVar3,8);
  }
  return param_1;
}


