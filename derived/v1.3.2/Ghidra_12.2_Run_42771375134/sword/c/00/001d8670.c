/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d8670; name: FUN_001d8670
 */


long * FUN_001d8670(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_02711088;
  plVar7 = (long *)*param_1;
  *(undefined2 *)((long)plVar7 + 10) = 2;
  plVar7[5] = 0;
  plVar7[6] = 0;
  *plVar7 = (long)(puVar3 + 0x10);
  *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xf000000;
  *(undefined1 *)((long)plVar7 + 0x5c) = 1;
  plVar7[3] = 0;
  if (plVar7[0x11] != 0) {
    *(uint *)((long)plVar7 + 0x94) = *(uint *)((long)plVar7 + 0x94) | 0x80000000;
  }
  if ((char)plVar7[0x10] == '\0') {
    *param_1 = *param_1 + 0xa8;
    if ((plVar7[0x11] != 0) &&
       (uVar2 = *(uint *)((long)plVar7 + 0x94) & 0x7fffffff, uVar2 != 0 || (int)plVar7[0x12] != 0))
    {
      lVar8 = param_2[1];
      param_2[1] = lVar8 + (ulong)uVar2 * 8;
      plVar7[0x11] = lVar8;
    }
  }
  else {
    plVar7[0x11] = (long)(plVar7 + 0xc);
    *param_1 = *param_1 + 0xa8;
  }
  puVar5 = (uint *)param_2[1] + 1;
  uVar6 = (ulong)*(uint *)param_2[1];
  param_2[1] = puVar5;
  puVar1 = (uint *)0x0;
  if (uVar6 != 0) {
    puVar1 = puVar5;
  }
  plVar7[0x14] = (long)puVar1;
  param_2[1] = param_2[1] + uVar6;
  uVar2 = *(uint *)(plVar7 + 0x12);
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      lVar8 = plVar7[0x11];
      if (*(long *)(lVar8 + uVar6 * 8) != 0) {
        uVar4 = (**(code **)*param_2)(param_2,0x80000000);
        *(undefined8 *)(lVar8 + uVar6 * 8) = uVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  plVar7[0x13] = 0;
  return plVar7;
}


