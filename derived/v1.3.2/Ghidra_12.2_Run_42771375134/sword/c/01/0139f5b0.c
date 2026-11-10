/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139f5b0; name: FUN_0139f5b0
 */


void FUN_0139f5b0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long local_90 [12];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar3 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar3;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715080) {
        puVar6 = puVar6 + -10;
        goto LAB_0139f61c;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_0139f61c:
  uVar3 = FUN_015bee50(puVar6,&local_d0);
  FUN_00794680();
  FUN_007946a0(uVar3,1);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar3 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar3;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715080) {
        puVar6 = puVar6 + -10;
        goto LAB_0139f690;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_0139f690:
  lVar4 = FUN_01380080(puVar6,&local_d0);
  puVar6 = (undefined8 *)FUN_012dc700(param_1);
  *(undefined4 *)(lVar4 + 0x84) = 0x16;
  uVar3 = puVar6[1];
  *(undefined8 *)(lVar4 + 0x90) = *puVar6;
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xb0) = 0x3f00000000000000;
  *(undefined8 *)(lVar4 + 0x98) = uVar3;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined1 *)(lVar4 + 0x80) = 1;
  local_b0 = &LAB_013a0670;
  local_a8 = FUN_013a0680;
  local_a0 = FUN_013a0690;
  local_98 = &LAB_013a06a0;
  pcVar5 = *(code **)(lVar4 + 200);
  local_90[0] = param_1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0xd0) = 0;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    (*pcVar5)(lVar4 + 0xe0);
    if (local_a0 == (code *)0x0) goto LAB_0139f74c;
  }
  (*local_a0)(local_90,lVar4 + 0xe0);
  *(undefined1 **)(lVar4 + 0xd8) = local_98;
  *(code **)(lVar4 + 200) = local_a8;
  *(code **)(lVar4 + 0xd0) = local_a0;
  *(undefined8 *)(lVar4 + 0xc0) = local_b0;
LAB_0139f74c:
  pcVar5 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar5)(local_90);
  }
  local_d0 = 0x1d10c94e5671942b;
  local_c8 = "Play_Camp_Cooking_MaterialIntoPot";
  local_c0 = 0x21;
  local_b8 = 0;
  FUN_012d6d40(&local_d0);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  return;
}


