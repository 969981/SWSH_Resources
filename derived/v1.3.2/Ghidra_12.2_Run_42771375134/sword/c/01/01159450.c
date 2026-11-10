/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01159450; name: FUN_01159450
 */


void FUN_01159450(long param_1)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long alStack_c0 [13];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  uVar5 = 0;
  piVar7 = (int *)(param_1 + 0x600);
  do {
    plVar1 = *(long **)(piVar7 + 0xc);
    if (plVar1 != (long *)0x0) {
      local_38 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))((long *)(local_38 + 0x48));
        plVar1 = *(long **)(piVar7 + 0xc);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      iVar2 = *piVar7;
      if (iVar2 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x700);
        local_40 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar4,3,0,&local_40);
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
          local_40 = 0;
        }
        iVar2 = *piVar7;
      }
      if (iVar2 == 2) {
        uVar4 = *(undefined8 *)(param_1 + 0x700);
        local_48 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar4,2,2,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
      iVar2 = *piVar7;
      if (iVar2 == 3) {
        uVar4 = *(undefined8 *)(param_1 + 0x700);
        local_50 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar4,1,3,&local_50);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        iVar2 = *piVar7;
      }
      if (iVar2 == 1) {
        uVar4 = *(undefined8 *)(param_1 + 0x700);
        local_58 = *(long *)(*(long *)(param_1 + 0x5e0) + 0x2e8);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
        }
        FUN_016bb930(uVar4,0,1,&local_58);
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
      }
    }
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 0x10;
  } while (uVar5 < 4);
  lVar6 = *(long *)(param_1 + 0x700);
  pcVar3 = *(code **)(lVar6 + 0x168);
  alStack_c0[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x170) = 0;
    *(undefined8 *)(lVar6 + 0x178) = 0;
    *(undefined8 *)(lVar6 + 0x160) = 0;
    *(undefined8 *)(lVar6 + 0x168) = 0;
    (*pcVar3)(lVar6 + 0x180);
  }
  FUN_01159a10(alStack_c0,lVar6 + 0x180);
  *(undefined1 **)(lVar6 + 0x178) = &LAB_01159a20;
  *(code **)(lVar6 + 0x168) = FUN_01159a00;
  *(code **)(lVar6 + 0x170) = FUN_01159a10;
  *(undefined8 *)(lVar6 + 0x160) = &LAB_01159960;
  FUN_01159a00(alStack_c0);
  return;
}


