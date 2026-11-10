/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f39b10; name: FUN_00f39b10
 */


void FUN_00f39b10(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_02710a48;
  *(undefined **)(param_1 + 0x640) = PTR_DAT_02710a48 + 0x10;
  if (*(long *)(param_1 + 0x648) == 0) {
    *(undefined8 *)(param_1 + 0x648) = 0;
    pcVar5 = *(code **)(param_1 + 0x6d8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x648),param_1 + 0x640);
    lVar4 = *(long *)(param_1 + 0x648);
    *(undefined8 *)(param_1 + 0x648) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = *(code **)(param_1 + 0x6d8);
  }
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + 0x6d8) = 0;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    (*pcVar5)(param_1 + 0x6f0);
  }
  pcVar5 = *(code **)(param_1 + 0x658);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    (*pcVar5)(param_1 + 0x670);
  }
  if (*(long *)(param_1 + 0x648) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x648) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x648) = 0;
  }
  *(undefined **)(param_1 + 0x530) = puVar3 + 0x10;
  if (*(long *)(param_1 + 0x538) == 0) {
    *(undefined8 *)(param_1 + 0x538) = 0;
    pcVar5 = *(code **)(param_1 + 0x5c8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x538),param_1 + 0x530);
    lVar4 = *(long *)(param_1 + 0x538);
    *(undefined8 *)(param_1 + 0x538) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = *(code **)(param_1 + 0x5c8);
  }
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    *(undefined8 *)(param_1 + 0x5c8) = 0;
    *(undefined8 *)(param_1 + 0x5c0) = 0;
    (*pcVar5)(param_1 + 0x5e0);
  }
  pcVar5 = *(code **)(param_1 + 0x548);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x558) = 0;
    *(undefined8 *)(param_1 + 0x550) = 0;
    *(undefined8 *)(param_1 + 0x548) = 0;
    *(undefined8 *)(param_1 + 0x540) = 0;
    (*pcVar5)(param_1 + 0x560);
  }
  if (*(long *)(param_1 + 0x538) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x538) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x538) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x508) = 0;
  if (lVar4 != 0) {
    FUN_00f39dd0(param_1 + 0x510);
  }
  FUN_00f35130(param_1 + 0x420);
  if (*(long *)(param_1 + 0x440) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x440) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x440) = 0;
  }
  FUN_00f39810(param_1 + 0x1e0);
  if (*(long *)(param_1 + 0xe8) != 0) {
    lVar4 = *(long *)(param_1 + 0xd8);
    plVar1 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = *plVar1;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    while (plVar1 != (long *)(param_1 + 0xd8)) {
      plVar6 = (long *)plVar1[1];
      if (plVar1[4] != 0) {
        lVar4 = plVar1[2];
        plVar2 = (long *)plVar1[3];
        *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar4 + 8);
        **(long **)(lVar4 + 8) = *plVar2;
        plVar1[4] = 0;
        while (plVar2 != plVar1 + 2) {
          plVar7 = (long *)plVar2[1];
          (**(code **)(*(long *)plVar1[5] + 0x18))((long *)plVar1[5],plVar2,0x18,8);
          plVar2 = plVar7;
        }
      }
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x18))(*(long **)(param_1 + 0xf0),plVar1,0x40,8);
      plVar1 = plVar6;
    }
  }
  FUN_00f39ec0(param_1 + 0xa8,*(undefined8 *)(param_1 + 0xb0));
  FUN_00f39f90(param_1 + 0x78,*(undefined8 *)(param_1 + 0x80));
  FUN_00f3a010(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  FUN_00f3a0b0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  return;
}


