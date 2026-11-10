/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ac120; name: FUN_007ac120
 */


undefined8 FUN_007ac120(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    plVar3 = *(long **)(param_1 + 0x80);
    lVar4 = *(long *)PTR_DAT_027167c8;
    *(long **)(lVar4 + 0x10) = plVar3;
    *(undefined8 *)(lVar4 + 0x20) = 0x219000;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x219000,8);
    *(long **)(lVar4 + 0x18) = plVar3;
    if (plVar3 == (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + 0x10) + 0xb8))();
      plVar3 = *(long **)(lVar4 + 0x18);
    }
    FUN_00760770(plVar3,plVar3 + 0x17,0x218f48,0);
    *(long **)(lVar4 + 8) = plVar3;
    *(long **)(param_1 + 0x78) = plVar3;
    puVar1 = PTR_DAT_027167d8;
    if (plVar3 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      *(undefined1 **)PTR_DAT_027167d0 = &LAB_007ac2e0;
      *(undefined1 **)puVar1 = &LAB_007ac3a0;
      if (*(long *)(param_1 + 0x88) == 0) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,0x19000,8);
        if (lVar4 == 0) {
          if (*(long *)(param_1 + 0x88) != 0) {
            (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
                      (*(long **)(param_1 + 0x78),*(long *)(param_1 + 0x88),0,8);
            *(undefined8 *)(param_1 + 0x88) = 0;
          }
          lVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                            (*(long **)(param_1 + 0x78),0x19000,8);
          if (((*(long *)(param_1 + 0x128) != 0) &&
              (*(int *)(*(long *)(param_1 + 0x128) + 0x54) != 0)) &&
             (*(undefined8 **)(param_1 + 0x130) != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)(param_1 + 0x130))();
          }
        }
        *(long *)(param_1 + 0x88) = lVar4;
      }
      FUN_017d41c0();
      FUN_017cdd60(0);
      *(undefined4 *)PTR_DAT_027167e0 = param_2;
      lVar4 = FUN_017cd750(0x2a8);
      if (lVar4 != 0) {
        FUN_017ae540(lVar4);
      }
      uVar2 = 1;
      *(long *)(param_1 + 0xb0) = lVar4;
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


