/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01377130; name: FUN_01377130
 */


void FUN_01377130(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  
  if (*(long *)(param_1 + 0x610) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x610) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x610) = 0;
  }
  puVar5 = PTR_DAT_027164e0;
  *(undefined **)(param_1 + 0x500) = PTR_DAT_027164e0 + 0x10;
  if (*(long *)(param_1 + 0x508) == 0) {
    *(undefined8 *)(param_1 + 0x508) = 0;
    pcVar8 = *(code **)(param_1 + 0x598);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x508),param_1 + 0x500);
    lVar6 = *(long *)(param_1 + 0x508);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    pcVar8 = *(code **)(param_1 + 0x598);
  }
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5a8) = 0;
    *(undefined8 *)(param_1 + 0x5a0) = 0;
    *(undefined8 *)(param_1 + 0x598) = 0;
    *(undefined8 *)(param_1 + 0x590) = 0;
    (*pcVar8)(param_1 + 0x5b0);
  }
  pcVar8 = *(code **)(param_1 + 0x518);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined8 *)(param_1 + 0x520) = 0;
    *(undefined8 *)(param_1 + 0x518) = 0;
    *(undefined8 *)(param_1 + 0x510) = 0;
    (*pcVar8)(param_1 + 0x530);
  }
  if (*(long *)(param_1 + 0x508) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x508) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x508) = 0;
  }
  *(undefined **)(param_1 + 0x3f0) = puVar5 + 0x10;
  if (*(long *)(param_1 + 0x3f8) == 0) {
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    pcVar8 = *(code **)(param_1 + 0x488);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x3f8),param_1 + 0x3f0);
    lVar6 = *(long *)(param_1 + 0x3f8);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    pcVar8 = *(code **)(param_1 + 0x488);
  }
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x480) = 0;
    (*pcVar8)(param_1 + 0x4a0);
  }
  pcVar8 = *(code **)(param_1 + 0x408);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    (*pcVar8)(param_1 + 0x420);
  }
  if (*(long *)(param_1 + 0x3f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  if (*(long *)(param_1 + 0x3e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3e0) = 0;
  }
  *(undefined **)(param_1 + 0x2d0) = PTR_DAT_02715af8 + 0x10;
  if (*(long *)(param_1 + 0x2d8) == 0) {
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    pcVar8 = *(code **)(param_1 + 0x368);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x2d8),param_1 + 0x2d0);
    lVar6 = *(long *)(param_1 + 0x2d8);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    pcVar8 = *(code **)(param_1 + 0x368);
  }
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    (*pcVar8)(param_1 + 0x380);
  }
  pcVar8 = *(code **)(param_1 + 0x2e8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    (*pcVar8)(param_1 + 0x300);
  }
  if (*(long *)(param_1 + 0x2d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  plVar7 = *(long **)(param_1 + 0x2b0);
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0xb];
    piVar1 = (int *)(lVar6 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  return;
}


