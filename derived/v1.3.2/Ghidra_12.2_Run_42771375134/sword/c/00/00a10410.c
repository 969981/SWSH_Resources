/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a10410; name: FUN_00a10410
 */


void FUN_00a10410(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar5 + 0x1b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  iVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x140));
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0xb0);
    if ((lVar3 != -0x340d631b7bddd9bb) && (lVar3 != 0)) {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x158) + 0xf0);
      lVar3 = *(long *)(lVar4 + 0x2e8);
      if (lVar3 == 0) {
        FUN_0077d4d0(0,*(undefined8 *)(param_1 + 0x140));
        lVar3 = *(long *)(lVar4 + 0x2e0);
        if (lVar3 == 0) goto LAB_00a10560;
LAB_00a104c0:
        plVar6 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_014ca220(lVar3,0,uVar1,4,0,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar3 = *(long *)(lVar4 + 0x2e0);
        if (lVar3 != 0) goto LAB_00a10508;
LAB_00a10584:
        FUN_014ca220(0,1,*(undefined4 *)(param_1 + 0x1c0),4,0,1);
      }
      else {
        plVar6 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0077d4d0(lVar3,*(undefined8 *)(param_1 + 0x140));
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar3 = *(long *)(lVar4 + 0x2e0);
        if (lVar3 != 0) goto LAB_00a104c0;
LAB_00a10560:
        FUN_014ca220(0,0,uVar1,4,0,1);
        lVar3 = *(long *)(lVar4 + 0x2e0);
        if (lVar3 == 0) goto LAB_00a10584;
LAB_00a10508:
        plVar6 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_014ca220(lVar3,1,*(undefined4 *)(param_1 + 0x1c0),4,0,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      FUN_0167cce0(lVar4,(long *)(param_1 + 0xb0),10);
    }
  }
  if ((*(int *)(*(long *)(param_1 + 0x158) + 0xf0) != 0) || (*(char *)(param_1 + 0x1a9) != '\0'))
  goto LAB_00a10650;
  if ((*(long *)(param_1 + 0x198) == 0) || (*(long *)(param_1 + 0x1a0) == 0)) {
LAB_00a10628:
    lVar3 = *(long *)(param_1 + 0x1b0);
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x430);
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_016a6bf0(lVar3,6,*(undefined8 *)(param_1 + 0x1a0),0,0);
      *(byte *)(*(long *)(param_1 + 0x198) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x198) + 0x58) | 1;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      goto LAB_00a10628;
    }
    FUN_016a6bf0(0,6,*(long *)(param_1 + 0x1a0),0,0);
    *(byte *)(*(long *)(param_1 + 0x198) + 0x58) = *(byte *)(*(long *)(param_1 + 0x198) + 0x58) | 1;
    lVar3 = *(long *)(param_1 + 0x1b0);
  }
  if (lVar3 != 0) {
    FUN_00ffd510(0x40c00000,lVar5,param_1 + 0x1b8);
    *(byte *)(*(long *)(param_1 + 0x1b0) + 0x58) = *(byte *)(*(long *)(param_1 + 0x1b0) + 0x58) | 1;
  }
LAB_00a10650:
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a10674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


