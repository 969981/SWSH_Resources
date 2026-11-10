/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139d340; name: FUN_0139d340
 */


void FUN_0139d340(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long local_a0 [13];
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715078), iVar2 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_02715080) {
        puVar7 = puVar7 + -10;
        goto LAB_0139d3b4;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_0139d3b4:
  lVar4 = FUN_01380080(puVar7,auStack_38);
  *(undefined4 *)(lVar4 + 0x7c) = param_1;
  puVar7 = (undefined8 *)FUN_012dc700(param_2);
  *(undefined4 *)(lVar4 + 0x84) = 5;
  uVar5 = *puVar7;
  uVar1 = puVar7[1];
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xb0) = 0x3e4ccccd00000000;
  *(undefined1 *)(lVar4 + 0x80) = 1;
  *(undefined8 *)(lVar4 + 0x90) = uVar5;
  *(undefined8 *)(lVar4 + 0x98) = uVar1;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  pcVar6 = *(code **)(lVar4 + 200);
  local_a0[0] = param_2;
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0xd0) = 0;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    (*pcVar6)(lVar4 + 0xe0);
  }
  FUN_0139e0b0(local_a0,lVar4 + 0xe0);
  *(undefined1 **)(lVar4 + 0xd8) = &LAB_0139e0c0;
  *(code **)(lVar4 + 200) = FUN_0139e0a0;
  *(code **)(lVar4 + 0xd0) = FUN_0139e0b0;
  *(undefined8 *)(lVar4 + 0xc0) = &LAB_0139dfb0;
  FUN_0139e0a0(local_a0);
  return;
}


