/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141d800; name: FUN_0141d800
 */


undefined8 FUN_0141d800(long param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long local_a0 [12];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_01410b60();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_0140ce50(puVar8 + -10);
        uVar5 = FUN_01416720();
        goto joined_r0x0141dad0;
      }
    }
  }
  FUN_0140ce50(0);
  uVar5 = FUN_01416720();
joined_r0x0141dad0:
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  FUN_0141db50(param_1 + 0x80,param_2);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_01410b60();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar8 = puVar8 + -10;
        goto LAB_0141d8bc;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_0141d8bc:
  puVar6 = (undefined1 *)FUN_0140ce50(puVar8);
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar7 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar3 != (long *)PTR_DAT_02717530; plVar3 = (long *)*plVar3) {
  }
  FUN_00ff86a0(&local_c0,puVar8[0xd],2);
  FUN_014160a0(puVar6,&local_c0);
  if (local_c0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = (undefined1 *)0x0;
  }
  FUN_01416510(DAT_01d4c14c,0,puVar6);
  if ((undefined1 *)*param_2 == (undefined1 *)0xcbf29ce484222645) {
    if (*(float *)(param_1 + 0x3b0) <= 0.0) goto LAB_0141da28;
    FUN_01416ab0(puVar6);
    if (*(long *)(param_1 + 0xa0) != 0) goto LAB_0141da30;
LAB_0141d988:
    if (*(long *)(param_1 + 0x2a0) == 0) goto LAB_0141da88;
    local_c0 = &LAB_014200f0;
    local_b8 = FUN_01420120;
    local_b0 = &LAB_01420130;
    local_a8 = &LAB_01420140;
  }
  else {
    local_c0 = (undefined1 *)*param_2;
    FUN_01416460(puVar6,&local_c0);
    local_c0 = (undefined1 *)param_2[1];
    if (local_c0 != (undefined1 *)0xcbf29ce484222645) {
      FUN_01416460(puVar6,&local_c0);
      local_c0 = (undefined1 *)param_2[2];
      if (local_c0 != (undefined1 *)0xcbf29ce484222645) {
        FUN_01416460(puVar6,&local_c0);
        local_c0 = (undefined1 *)param_2[3];
        if (local_c0 != (undefined1 *)0xcbf29ce484222645) {
          FUN_01416460(puVar6,&local_c0);
        }
      }
    }
LAB_0141da28:
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0141d988;
LAB_0141da30:
    local_c0 = &LAB_01420030;
    local_b8 = (code *)&LAB_014200c0;
    local_b0 = &LAB_014200d0;
    local_a8 = &LAB_014200e0;
  }
  local_a0[0] = param_1;
  FUN_01416b60(puVar6,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(local_a0);
  }
LAB_0141da88:
  if ((code *)*param_3 != (code *)0x0) {
    local_c0 = puVar6;
    (*(code *)*param_3)(param_3 + 4,&local_c0);
  }
  local_c0 = *(undefined1 **)(param_1 + 800);
  FUN_01416100(puVar6,&local_c0);
  FUN_01416760(puVar6);
  return 1;
}


