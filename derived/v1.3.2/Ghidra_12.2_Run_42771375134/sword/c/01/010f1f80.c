/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f1f80; name: FUN_010f1f80
 */


int FUN_010f1f80(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  iVar1 = FUN_010f2140();
  if (iVar1 == 0) {
    FUN_010f2730(param_1,param_2);
    iVar1 = (uint)((*(long **)(param_1 + 0x60))[1] == **(long **)(param_1 + 0x60)) << 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar5 = (long *)*puVar4;
    if (plVar5 != (long *)0x0) {
      if ((long *)puVar4[1] == plVar5) {
        plVar2 = plVar5;
      }
      else {
        plVar2 = (long *)puVar4[1];
        do {
          plVar6 = plVar2 + -1;
          if (*plVar6 != 0) {
            (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
            plVar2[-1] = 0;
          }
          plVar2 = plVar6;
        } while (plVar5 != plVar6);
        plVar2 = (long *)*puVar4;
      }
      puVar4[1] = plVar5;
      (**(code **)(*(long *)puVar4[3] + 0x18))((long *)puVar4[3],plVar2,puVar4[2] - (long)plVar2,8);
    }
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),puVar4,*(undefined8 *)(param_1 + 0x90),
               *(undefined8 *)(param_1 + 0x98));
  }
  puVar4 = *(undefined8 **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar5 = (long *)*puVar4;
    if (plVar5 != (long *)0x0) {
      if ((long *)puVar4[1] == plVar5) {
        plVar2 = plVar5;
      }
      else {
        plVar2 = (long *)puVar4[1];
        do {
          plVar6 = plVar2 + -1;
          if (*plVar6 != 0) {
            (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
            plVar2[-1] = 0;
          }
          plVar2 = plVar6;
        } while (plVar5 != plVar6);
        plVar2 = (long *)*puVar4;
      }
      puVar4[1] = plVar5;
      (**(code **)(*(long *)puVar4[3] + 0x18))((long *)puVar4[3],plVar2,puVar4[2] - (long)plVar2,8);
    }
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
              (*(long **)(param_1 + 0xa8),puVar4,*(undefined8 *)(param_1 + 0xb0),
               *(undefined8 *)(param_1 + 0xb8));
  }
  plVar5 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      plVar5[1] = lVar3;
      (**(code **)(*(long *)plVar5[3] + 0x18))((long *)plVar5[3],lVar3,plVar5[2] - lVar3,2);
    }
    (**(code **)(**(long **)(param_1 + 200) + 0x18))
              (*(long **)(param_1 + 200),plVar5,*(undefined8 *)(param_1 + 0xd0),
               *(undefined8 *)(param_1 + 0xd8));
  }
  return iVar1;
}


