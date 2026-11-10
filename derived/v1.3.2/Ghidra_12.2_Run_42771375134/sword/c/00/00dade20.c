/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dade20; name: FUN_00dade20
 */


void FUN_00dade20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *(undefined **)(param_1 + 0xee0) = PTR_DAT_0271e790 + 0x10;
  if (*(long *)(param_1 + 0xee8) == 0) {
    *(undefined8 *)(param_1 + 0xee8) = 0;
    pcVar6 = *(code **)(param_1 + 0xf78);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0xee8),param_1 + 0xee0);
    lVar4 = *(long *)(param_1 + 0xee8);
    *(undefined8 *)(param_1 + 0xee8) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar6 = *(code **)(param_1 + 0xf78);
  }
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xf88) = 0;
    *(undefined8 *)(param_1 + 0xf80) = 0;
    *(undefined8 *)(param_1 + 0xf78) = 0;
    *(undefined8 *)(param_1 + 0xf70) = 0;
    (*pcVar6)(param_1 + 0xf90);
  }
  pcVar6 = *(code **)(param_1 + 0xef8);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xf08) = 0;
    *(undefined8 *)(param_1 + 0xf00) = 0;
    *(undefined8 *)(param_1 + 0xef8) = 0;
    *(undefined8 *)(param_1 + 0xef0) = 0;
    (*pcVar6)(param_1 + 0xf10);
  }
  if (*(long *)(param_1 + 0xee8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xee8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xee8) = 0;
  }
  puVar1 = PTR_DAT_02710a48 + 0x10;
  lVar4 = 0;
  do {
    lVar2 = param_1 + lVar4;
    *(undefined **)(lVar2 + 0xdd0) = puVar1;
    if (*(long *)(lVar2 + 0xdd8) == 0) {
      *(undefined8 *)(lVar2 + 0xdd8) = 0;
      pcVar6 = *(code **)(lVar2 + 0xe68);
    }
    else {
      FUN_006e2100(*(long *)(lVar2 + 0xdd8),lVar2 + 0xdd0);
      lVar5 = *(long *)(lVar2 + 0xdd8);
      *(undefined8 *)(lVar2 + 0xdd8) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      pcVar6 = *(code **)(lVar2 + 0xe68);
    }
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0xe78) = 0;
      *(undefined8 *)(lVar2 + 0xe70) = 0;
      *(undefined8 *)(lVar2 + 0xe68) = 0;
      *(undefined8 *)(lVar2 + 0xe60) = 0;
      (*pcVar6)(lVar2 + 0xe80);
    }
    pcVar6 = *(code **)(lVar2 + 0xde8);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0xdf8) = 0;
      *(undefined8 *)(lVar2 + 0xdf0) = 0;
      *(undefined8 *)(lVar2 + 0xde8) = 0;
      *(undefined8 *)(lVar2 + 0xde0) = 0;
      (*pcVar6)(lVar2 + 0xe00);
    }
    if (*(long *)(lVar2 + 0xdd8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + 0xdd8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + 0xdd8) = 0;
    }
    bVar3 = lVar4 != -0x660;
    lVar4 = lVar4 + -0x110;
  } while (bVar3);
  *(undefined **)(param_1 + 0x660) = PTR_DAT_0271e798 + 0x10;
  if (*(long *)(param_1 + 0x668) == 0) {
    *(undefined8 *)(param_1 + 0x668) = 0;
    pcVar6 = *(code **)(param_1 + 0x6f8);
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x668),param_1 + 0x660);
    lVar4 = *(long *)(param_1 + 0x668);
    *(undefined8 *)(param_1 + 0x668) = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar6 = *(code **)(param_1 + 0x6f8);
  }
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x708) = 0;
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    (*pcVar6)(param_1 + 0x710);
  }
  pcVar6 = *(code **)(param_1 + 0x678);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
    (*pcVar6)(param_1 + 0x690);
  }
  if (*(long *)(param_1 + 0x668) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x668) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x668) = 0;
  }
  FUN_00dae050(param_1 + 0x330);
  FUN_00dae050(param_1);
  return;
}


