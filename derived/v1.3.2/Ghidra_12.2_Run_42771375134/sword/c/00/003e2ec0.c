/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e2ec0; name: FUN_003e2ec0
 */


void FUN_003e2ec0(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
  lVar1 = param_1 + 0x18b8;
  *(undefined4 *)(param_1 + 0x18d8) = 1;
  *(long **)(param_1 + 0x18d0) = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(*(long *)(param_1 + 0x18d0) + 0x10);
  }
  *(undefined4 *)(param_1 + 0x1910) = 1;
  *(long *)(param_1 + 0x1908) = lVar1;
  (**(code **)(*(long *)(param_1 + 0x18b8) + 0x20))(lVar1);
  plVar2 = *(long **)(*(long *)(param_1 + 0x1908) + 0x10);
  *(long **)(param_1 + 0x1900) = plVar2;
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_1 + 0x18f0);
  *(undefined4 *)(param_1 + 0x1948) = 1;
  *(long **)(param_1 + 0x1940) = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x1938);
  }
  else {
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar2 = *(long **)(*(long *)(param_1 + 0x1940) + 0x10);
    *(long **)(param_1 + 0x1938) = plVar2;
  }
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_1 + 0x1928);
  iVar3 = *(int *)(*(long *)(param_1 + 0x728) + 400);
  if (iVar3 != 0) {
    plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x728) + 0x188) + 0x10);
    do {
      while( true ) {
        iVar3 = iVar3 + -1;
        if ((*plVar2 != 0) && (*(char *)(*plVar2 + 0x24) == '\0')) break;
        plVar2 = plVar2 + 3;
        if (iVar3 == 0) goto LAB_003e2fd4;
      }
      FUN_003f9440();
      plVar2 = plVar2 + 3;
    } while (iVar3 != 0);
  }
LAB_003e2fd4:
                    /* WARNING: Could not recover jumptable at 0x003e2ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18c8) + 0xa0))(*(long **)(param_1 + 0x18c8),lVar1);
  return;
}


