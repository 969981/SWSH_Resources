/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f9b10; name: FUN_009f9b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_009f9b10(long param_1)

{
  ulong uVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_009f0030();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar10 = puVar7 + -10;
        plVar3 = *(long **)(puVar7[2] + 8);
        goto joined_r0x009f9dac;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
  plVar3 = *(long **)(_DAT_00000060 + 8);
joined_r0x009f9dac:
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  plVar9 = *(long **)(param_1 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar9;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x90,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
  }
  FUN_00883c20(plVar5,plVar9);
  plVar5[1] = (long)plVar9;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x90;
  plVar5[4] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  uVar8 = 0;
  lVar4 = puVar10[0xc];
  cVar2 = *(char *)(lVar4 + 0x84);
  while (cVar2 != -1) {
    if (*(char *)(lVar4 + 0x85) == -1) {
      if (uVar8 != 0) break;
    }
    else if (*(char *)(lVar4 + 0x86) == -1) {
      if (1 < uVar8) break;
    }
    else if (*(char *)(lVar4 + 0x87) == -1) {
      if (2 < uVar8) break;
    }
    else if (*(char *)(lVar4 + 0x88) == -1) {
      if (3 < uVar8) break;
    }
    else {
      uVar1 = 5;
      if (*(char *)(lVar4 + 0x89) != -1) {
        uVar1 = 6;
      }
      if (uVar1 <= uVar8) break;
    }
    uVar6 = (**(code **)(*plVar3 + 0x58))(plVar3,(long)*(char *)(lVar4 + uVar8 + 0x84));
    (**(code **)(*plVar5 + 0x28))(plVar5,uVar6);
    uVar8 = uVar8 + 1;
    lVar4 = puVar10[0xc];
    cVar2 = *(char *)(lVar4 + 0x84);
  }
  local_38 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
  }
  cVar2 = FUN_009fc970(puVar10 + 0xf,&local_38);
  if (local_38 != (long *)0x0) {
    (**(code **)(local_38[9] + 0x18))();
    local_38 = (long *)0x0;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  }
  return cVar2 != '\x03';
}


