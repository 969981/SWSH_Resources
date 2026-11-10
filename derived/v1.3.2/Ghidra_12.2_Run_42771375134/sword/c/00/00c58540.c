/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c58540; name: FUN_00c58540
 */


void FUN_00c58540(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long local_60;
  long lStack_58;
  
  *param_1 = (long)(PTR_DAT_0271be28 + 0x10);
  FUN_00c62820(param_1 + 0x6f2);
  param_1[0x68f] = (long)(PTR_DAT_0271bf48 + 0x10);
  puVar2 = PTR_DAT_0271bf50;
  if ((char)param_1[0x690] != '\0') {
    lVar3 = 0;
    plVar4 = param_1 + 0x6d2;
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *plVar4 = local_60;
      plVar4[1] = lStack_58;
      plVar4 = plVar4 + 2;
    } while (lVar3 != 0x200);
    *(undefined1 *)(param_1 + 0x690) = 0;
  }
  FUN_00c62430(param_1 + 0x691);
  param_1[0x614] = (long)(PTR_DAT_0271bf58 + 0x10);
  puVar2 = PTR_DAT_0271bf60;
  if ((char)param_1[0x615] != '\0') {
    lVar3 = 0;
    plVar4 = param_1 + 0x667;
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *plVar4 = local_60;
      plVar4[1] = lStack_58;
      plVar4 = plVar4 + 2;
    } while (lVar3 != 0x280);
    *(undefined1 *)(param_1 + 0x615) = 0;
  }
  FUN_00c61a40(param_1 + 0x616);
  param_1[0x599] = (long)(PTR_DAT_0271bf68 + 0x10);
  puVar2 = PTR_DAT_0271bf70;
  if ((char)param_1[0x59a] != '\0') {
    lVar3 = 0;
    plVar4 = param_1 + 0x5ec;
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *plVar4 = local_60;
      plVar4[1] = lStack_58;
      plVar4 = plVar4 + 2;
    } while (lVar3 != 0x280);
    *(undefined1 *)(param_1 + 0x59a) = 0;
  }
  FUN_00c61010(param_1 + 0x59b);
  param_1[0x536] = (long)(PTR_DAT_0271bf78 + 0x10);
  puVar2 = PTR_DAT_0271bf80;
  if ((char)param_1[0x537] != '\0') {
    lVar3 = 0;
    plVar4 = param_1 + 0x579;
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *plVar4 = local_60;
      plVar4[1] = lStack_58;
      plVar4 = plVar4 + 2;
    } while (lVar3 != 0x200);
    *(undefined1 *)(param_1 + 0x537) = 0;
  }
  FUN_00c606c0(param_1 + 0x538);
  param_1[0x4bb] = (long)(PTR_DAT_0271bf88 + 0x10);
  puVar2 = PTR_DAT_0271bf90;
  if ((char)param_1[0x4bc] != '\0') {
    lVar3 = 0;
    plVar4 = param_1 + 0x50e;
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *plVar4 = local_60;
      plVar4[1] = lStack_58;
      plVar4 = plVar4 + 2;
    } while (lVar3 != 0x280);
    *(undefined1 *)(param_1 + 0x4bc) = 0;
  }
  FUN_00c5fcd0(param_1 + 0x4bd);
  param_1[0x440] = (long)(PTR_DAT_0271bf98 + 0x10);
  puVar2 = PTR_DAT_0271bfa0;
  if ((char)param_1[0x441] != '\0') {
    lVar3 = 0;
    plVar4 = param_1 + 0x493;
    do {
      lVar1 = *(long *)puVar2 + lVar3;
      if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar1 + 8))();
        *(undefined8 *)(lVar1 + 8) = 0;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
                  (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                   *(undefined8 *)(lVar1 + 0x20),8);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      FUN_008d4290(&local_60);
      lVar3 = lVar3 + 0x20;
      *plVar4 = local_60;
      plVar4[1] = lStack_58;
      plVar4 = plVar4 + 2;
    } while (lVar3 != 0x280);
    *(undefined1 *)(param_1 + 0x441) = 0;
  }
  FUN_00c5f2a0(param_1 + 0x442);
  FUN_00c5e8f0(param_1 + 0x428);
  FUN_00c5e4a0(param_1 + 0x413);
  FUN_00c5dfc0(param_1 + 0x3f8);
  FUN_00c5dae0(param_1 + 0x3dd);
  param_1[0x3b0] = (long)(PTR_DAT_0271beb8 + 0x10);
  FUN_00c5d5c0(param_1 + 0x3b0);
  FUN_00c5d900(param_1 + 0x3b2);
  param_1[899] = (long)(PTR_DAT_0271bea0 + 0x10);
  FUN_00c5cfc0(param_1 + 899);
  FUN_00c5d300(param_1 + 0x385);
  param_1[0x356] = (long)(PTR_DAT_0271be88 + 0x10);
  FUN_00c5c9c0(param_1 + 0x356);
  FUN_00c5cd00(param_1 + 0x358);
  FUN_00c5c330(param_1 + 0x2ab);
  FUN_00c5bc80(param_1 + 0x200);
  param_1[0x1cd] = (long)(PTR_DAT_0271be70 + 0x10);
  FUN_00c5b5e0(param_1 + 0x1cd);
  FUN_00c5b970(param_1 + 0x1cf);
  param_1[0x19a] = (long)(PTR_DAT_0271be58 + 0x10);
  FUN_00c5af60(param_1 + 0x19a);
  FUN_00c5b2f0(param_1 + 0x19c);
  FUN_00c5a8d0(param_1 + 0xef);
  FUN_00c5a220(param_1 + 0x44);
  param_1[0xb] = (long)(PTR_DAT_0271be48 + 0x10);
  FUN_00c59ae0(param_1 + 0xb);
  FUN_00c59ed0(param_1 + 0xd);
  FUN_00c59680(param_1 + 2);
  return;
}


