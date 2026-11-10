/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066cf10; name: FUN_0066cf10
 */


long * FUN_0066cf10(long param_1,long *param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_60 [16];
  
  FUN_006966f0(auStack_60,param_1 + 0xc28,1);
  plVar6 = (long *)0x0;
  if ((param_4 < 0) || (*(long *)(param_1 + 0xbe8) == 0)) goto LAB_0066d0c8;
  switch(param_3) {
  case 1:
    lVar1 = param_1 + 0xc58;
    lVar4 = *(long *)(param_1 + 0xbf8);
    break;
  case 2:
    lVar1 = param_1 + 0xca8;
    lVar4 = *(long *)(param_1 + 0xc00);
    break;
  case 3:
    lVar1 = param_1 + 0xcf8;
    lVar4 = *(long *)(param_1 + 0xc08);
    break;
  case 4:
    lVar1 = param_1 + 0xd98;
    lVar4 = *(long *)(param_1 + 0xc18);
    break;
  case 5:
    lVar1 = param_1 + 0xd48;
    lVar4 = *(long *)(param_1 + 0xc10);
    break;
  case 6:
    lVar1 = param_1 + 0xde8;
    lVar4 = *(long *)(param_1 + 0xc20);
    break;
  default:
    goto switchD_0066cf78_default;
  }
  if ((lVar4 != 0) && (param_4 < *(int *)(lVar1 + 0x10))) {
    plVar6 = *(long **)(*(long *)(lVar1 + 0x28) + (long)param_4 * 8);
    if (plVar6 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar6 + 0x28))(plVar6);
      if (plVar2 != param_2) {
        plVar6 = (long *)0x0;
      }
      goto LAB_0066d0c8;
    }
    plVar2 = (long *)(lVar4 + (long)param_4 * 0x10);
    lVar4 = *plVar2;
    if ((-1 < lVar4) && (lVar4 < *(long *)(param_1 + 0x108))) {
      lVar5 = plVar2[1];
      plVar6 = (long *)0x0;
      if ((lVar5 < 0) || (*(long *)(param_1 + 0x108) < lVar5 + lVar4)) goto LAB_0066d0c8;
      plVar6 = (long *)(**(code **)(*param_2 + 0x150))(param_2,param_3,0,0,0);
      uVar3 = (**(code **)(*plVar6 + 0x90))(plVar6,plVar2[1],*(long *)(param_1 + 0xbe8) + *plVar2,0)
      ;
      if ((uVar3 & 1) != 0) {
        *(long **)(*(long *)(lVar1 + 0x28) + (long)param_4 * 8) = plVar6;
        goto LAB_0066d0c8;
      }
      if (plVar6 == (long *)0x0) goto LAB_0066d0c8;
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
switchD_0066cf78_default:
  plVar6 = (long *)0x0;
LAB_0066d0c8:
  FUN_00696730(auStack_60);
  return plVar6;
}


