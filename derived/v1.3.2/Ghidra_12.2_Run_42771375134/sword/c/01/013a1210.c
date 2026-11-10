/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a1210; name: FUN_013a1210
 */


void FUN_013a1210(long param_1,long *param_2,long *param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long local_50;
  long *local_48;
  
  local_48 = (long *)*param_2;
  if (local_48 == (long *)0x0) {
    FUN_013a13f0(param_1,&local_48);
    local_50 = *param_3;
  }
  else {
    lVar13 = local_48[0xb];
    if (*(long *)(lVar13 + 0x58) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x60))();
      *(undefined8 *)(lVar13 + 0x58) = uVar10;
    }
    plVar9 = local_48;
    piVar1 = (int *)(lVar13 + 0x54);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    FUN_013a13f0(param_1,&local_48);
    if (plVar9 != (long *)0x0) {
      lVar13 = plVar9[0xb];
      piVar1 = (int *)(lVar13 + 0x54);
      do {
        iVar4 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x60) = 0;
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      local_48 = (long *)0x0;
    }
    local_50 = *param_3;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN_013a1c40(param_1,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar13 = 0;
  do {
    lVar2 = param_4 + lVar13;
    lVar14 = *(long *)(lVar2 + 8);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    lVar3 = param_1 + lVar13;
    lVar11 = *(long *)(lVar3 + 0x98);
    *(long *)(lVar3 + 0x98) = lVar14;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
    }
    pcVar12 = *(code **)(lVar3 + 0xa8);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0xb0) = 0;
      *(undefined8 *)(lVar3 + 0xb8) = 0;
      *(undefined8 *)(lVar3 + 0xa0) = 0;
      *(undefined8 *)(lVar3 + 0xa8) = 0;
      (*pcVar12)(lVar3 + 0xc0);
    }
    if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
      (**(code **)(lVar2 + 0x20))(lVar2 + 0x30,lVar3 + 0xc0);
      uVar10 = *(undefined8 *)(lVar2 + 0x10);
      uVar5 = *(undefined8 *)(lVar2 + 0x18);
      uVar6 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar3 + 0xb8) = uVar6;
      *(undefined8 *)(lVar3 + 0xa0) = uVar10;
      *(undefined8 *)(lVar3 + 0xa8) = uVar5;
    }
    pcVar12 = *(code **)(lVar3 + 0x128);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(lVar3 + 0x130) = 0;
      *(undefined8 *)(lVar3 + 0x138) = 0;
      *(undefined8 *)(lVar3 + 0x120) = 0;
      *(undefined8 *)(lVar3 + 0x128) = 0;
      (*pcVar12)(lVar3 + 0x140);
    }
    if (*(code **)(lVar2 + 0xa0) != (code *)0x0) {
      (**(code **)(lVar2 + 0xa0))(lVar2 + 0xb0,lVar3 + 0x140);
      uVar10 = *(undefined8 *)(lVar2 + 0x90);
      uVar5 = *(undefined8 *)(lVar2 + 0x98);
      uVar6 = *(undefined8 *)(lVar2 + 0xa8);
      *(undefined8 *)(lVar3 + 0x130) = *(undefined8 *)(lVar2 + 0xa0);
      *(undefined8 *)(lVar3 + 0x138) = uVar6;
      *(undefined8 *)(lVar3 + 0x120) = uVar10;
      *(undefined8 *)(lVar3 + 0x128) = uVar5;
    }
    lVar13 = lVar13 + 0x110;
  } while (lVar13 != 0x550);
  return;
}


