/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01505af0; name: FUN_01505af0
 */


void FUN_01505af0(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_60;
  undefined4 local_54;
  
  local_54 = 0;
  lVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_54);
  local_60 = 0x50a00;
  cVar1 = FUN_01508b90(lVar2,PTR_DAT_0272a7b8,param_1 + 0x60,&local_60);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,PTR_DAT_0272a7b8);
  }
  plVar3 = *(long **)(param_1 + 8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,0xb8,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_00866220(lVar4,plVar3,0,0,0);
  *(long **)(lVar4 + 8) = plVar3;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0xb8;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  plVar3 = (long *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  lVar2 = 0;
  param_1 = param_1 + 0x60;
  do {
    if (lVar4 == 0) {
      lVar7 = 0x1e;
      lVar6 = param_1;
      do {
        FUN_008664b0(0,lVar6);
        uVar5 = FUN_008787d0(0);
        if ((uVar5 & 1) == 0) {
          FUN_008664b0(0,lVar6);
          uVar5 = FUN_014aebf0(0);
          if ((uVar5 & 1) != 0) {
            FUN_008664a0(0,lVar6);
          }
        }
        lVar6 = lVar6 + 0x158;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    else {
      lVar7 = 0x1e;
      lVar6 = param_1;
      do {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar3);
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar3);
        FUN_008664b0(lVar4,lVar6);
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar3);
        uVar5 = FUN_008787d0(lVar4);
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar3);
        if ((uVar5 & 1) == 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar3);
          FUN_008664b0(lVar4,lVar6);
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar3);
          uVar5 = FUN_014aebf0(lVar4);
          if ((uVar5 & 1) != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar3);
            FUN_008664a0(lVar4,lVar6);
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar3);
          }
        }
        lVar6 = lVar6 + 0x158;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lVar2 = lVar2 + 1;
    param_1 = param_1 + 0x2850;
  } while (lVar2 != 0x20);
  if (lVar4 != 0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


