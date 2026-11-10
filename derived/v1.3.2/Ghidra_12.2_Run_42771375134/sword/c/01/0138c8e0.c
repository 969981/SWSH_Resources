/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138c8e0; name: FUN_0138c8e0
 */


void FUN_0138c8e0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_28 [8];
  
  lVar7 = param_1 + (long)*(char *)(param_1 + 0x94) * 0x18;
  uVar6 = *(undefined8 *)(lVar7 + 0xb0);
  uVar1 = *(undefined8 *)(lVar7 + 0xb8);
  *(undefined8 *)(param_1 + 0x8e) = *(undefined8 *)(lVar7 + 0xbe);
  *(undefined1 *)(param_1 + 0x95) = 1;
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x84) = 4;
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar6 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar6;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_02715080) {
          puVar4 = puVar8 + -10;
          goto LAB_0138c978;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_0138c978:
  plVar5 = (long *)FUN_01378f50(puVar4,auStack_28);
  (**(code **)(*plVar5 + 0xe0))(plVar5,param_1 + 0x80);
  return;
}


