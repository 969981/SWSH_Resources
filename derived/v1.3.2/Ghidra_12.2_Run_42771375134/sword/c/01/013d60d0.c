/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d60d0; name: FUN_013d60d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013d60d0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_0132d9a0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar6 = puVar4 + -10;
        lVar2 = puVar4[0x6e];
        if (lVar2 == 0) goto LAB_013d6144;
        goto LAB_013d6134;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
  lVar2 = _DAT_000003c0;
  if (_DAT_000003c0 != 0) {
LAB_013d6134:
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
LAB_013d6144:
  lVar3 = FUN_00ad95d0(&local_50,*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x560) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x560) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x560) = 0;
  }
  *(long *)(param_1 + 0x560) = lVar3;
  lVar5 = 0x220;
  if (*(char *)((long)puVar6 + 0x1ec) != '\0') {
    lVar5 = 0x330;
  }
  lVar3 = FUN_00adc640(lVar3,*(undefined8 *)(lVar3 + 8),*(long *)(lVar2 + 0x418) + lVar5 + 0x10);
  lVar5 = *(long *)(lVar2 + 400);
  if (lVar5 == 0) {
    local_50 = 8;
    FUN_00727220(lVar3,0,&local_50);
  }
  else {
    plVar1 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    local_50 = 8;
    FUN_00727220(lVar3,lVar5,&local_50);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  uStack_48 = uRam0000000002a726d8;
  local_50 = _DAT_02a726d0;
  FUN_0075e340(lVar3 + 0xc0,&local_50);
  *(undefined1 *)(lVar3 + 0xf0) = 1;
  uStack_48 = uRam0000000002a726e8;
  local_50 = _DAT_02a726e0;
  FUN_0075e320(lVar3 + 0xc0,&local_50);
  *(undefined1 *)(lVar3 + 0xf0) = 1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


