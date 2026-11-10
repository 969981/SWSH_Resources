/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d9dc0; name: FUN_014d9dc0
 */


void FUN_014d9dc0(long param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  FUN_014d3530(*(undefined8 *)(param_1 + 0x78));
  FUN_014d33f0(*(undefined8 *)(param_1 + 0x78));
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 == (undefined8 *)0x0) goto LAB_014d9e2c;
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    lVar3 = FUN_014d0760();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar7 = puVar7 + -10;
        goto LAB_014d9e2c;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_014d9e2c:
  lVar3 = FUN_014cda50(puVar7);
  *(int *)(lVar3 + 0x80) = param_2;
  if (param_2 == 1) {
    plVar2 = *(long **)(lVar3 + 0x68);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,400,0x10);
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    FUN_009fe380(lVar5,plVar2);
    *(long **)(lVar5 + 8) = plVar2;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 400;
    *(undefined8 *)(lVar5 + 0x20) = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar3 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 0x78) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 0x78) = 0;
    }
    *(long *)(lVar3 + 0x78) = lVar5;
    uVar1 = FUN_014d3ee0(*(undefined8 *)(param_1 + 0x78));
    puVar6 = (undefined4 *)FUN_014cdf60(puVar7,uVar1);
    *(undefined4 *)(lVar3 + 0x70) = *puVar6;
    FUN_009fe9b0(*(undefined8 *)(lVar3 + 0x78),*(undefined8 *)(puVar6 + 2));
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x78);
    *(undefined4 *)(lVar3 + 0x70) = 0;
    *(undefined8 *)(lVar3 + 0x78) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
  }
  FUN_014cda70(puVar7,3);
  return;
}


