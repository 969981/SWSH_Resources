/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7af00; name: FUN_00a7af00
 */


void FUN_00a7af00(long param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  undefined1 auStack_70 [12];
  char local_64;
  
  *(undefined8 *)(param_1 + 0x1704) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x170c) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x1714) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x171c) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x16fc) = 0xff000000ff;
  *(undefined4 *)(param_1 + 0x1724) = 0xff;
  *(undefined8 *)(param_1 + 0x1740) = 0x400000004;
  *(undefined8 *)(param_1 + 0x1748) = 0x400000004;
  *(undefined2 *)(param_1 + 0x1731) = 0;
  *(undefined1 *)(param_1 + 0x1733) = 0;
  if (0 < (int)param_3) {
    bVar1 = false;
    iVar9 = 0;
    uVar10 = (ulong)param_3;
    do {
      if (*param_2 == 0xff) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = *(long **)(param_1 + (ulong)*param_2 * 8 + 0x548);
        if (plVar6 != (long *)0x0) {
          (**(code **)(plVar6[9] + 0x10))();
        }
      }
      uVar4 = (**(code **)(*plVar6 + 400))(plVar6);
      if ((uVar4 & 1) == 0) {
        bVar2 = false;
      }
      else {
        if (*param_2 == 0xff) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = *(long **)(param_1 + (ulong)*param_2 * 8 + 0x548);
          if (plVar8 != (long *)0x0) {
            (**(code **)(plVar8[9] + 0x10))();
          }
        }
        (**(code **)(*plVar8 + 0x220))(auStack_70,plVar8);
        bVar2 = local_64 != '\0';
        if (plVar8 != (long *)0x0) {
          (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
        }
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(plVar6[9] + 0x18))(plVar6 + 9);
      }
      if (bVar2) {
        lVar7 = param_1 + (long)iVar9 * 4;
        iVar9 = iVar9 + 1;
        *(uint *)(lVar7 + 0x1704) = *param_2;
        *(uint *)(lVar7 + 0x16fc) = *param_2;
        if ((*param_2 == 0xff) ||
           (lVar7 = *(long *)(param_1 + (ulong)*param_2 * 8 + 0x548), lVar7 == 0)) {
          cVar3 = FUN_00ad59f0(0);
        }
        else {
          plVar6 = (long *)(lVar7 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          cVar3 = FUN_00ad59f0(lVar7);
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        bVar1 = (bool)(bVar1 | cVar3 != '\0');
      }
      param_2 = param_2 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (0 < iVar9) {
      uVar5 = 0xe9;
      if (!bVar1) {
        uVar5 = 2;
      }
      FUN_00a79350(param_1,uVar5,0);
    }
  }
  return;
}


