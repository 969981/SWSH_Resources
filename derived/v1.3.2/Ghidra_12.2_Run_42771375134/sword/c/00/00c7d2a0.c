/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7d2a0; name: FUN_00c7d2a0
 */


void FUN_00c7d2a0(long param_1,undefined8 *param_2,long *param_3,undefined4 *param_4,long *param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uStack_6c;
  
  plVar2 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_3;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *(undefined8 *)((long)plVar2 + 0x1e) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[5] = 0;
  puVar1 = PTR_DAT_0271c378;
  *(undefined4 *)(plVar2 + 6) = 0;
  *(undefined2 *)((long)plVar2 + 0x34) = 0;
  *(undefined4 *)(plVar2 + 7) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)plVar2 + 0x3c) = 0;
  plVar2[8] = 0;
  puVar1 = PTR_DAT_0271c2f8;
  *(undefined4 *)(plVar2 + 9) = 0xffffffff;
  lVar4 = *(long *)puVar1;
  *(undefined1 *)(plVar2 + 0xf) = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[10] = lVar4;
  *(undefined4 *)(plVar2 + 1) = 0x12;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar7 = (undefined8 *)*param_2;
  *param_2 = plVar2;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*(long *)param_2[1] + 0x18))((long *)param_2[1],puVar7,param_2[2],param_2[3]);
    plVar2 = (long *)*param_2;
  }
  param_2[1] = param_3;
  param_2[2] = 0x80;
  param_2[3] = 8;
  lVar4 = *(long *)puVar1;
  lVar3 = plVar2[3];
  *(undefined4 *)(plVar2 + 1) = 0x12;
  *(undefined4 *)((long)plVar2 + 0x14) = 0;
  *(ulong *)((long)plVar2 + 0xc) = (ulong)uStack_6c;
  plVar2[3] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined4 *)(plVar2 + 6) = 0;
  lVar3 = plVar2[0xb];
  plVar2[10] = lVar4;
  plVar2[0xb] = 0;
  *(undefined2 *)((long)plVar2 + 0x24) = 0;
  *(undefined4 *)(plVar2 + 4) = 0;
  plVar2[5] = 0;
  *(undefined2 *)((long)plVar2 + 0x34) = 0;
  *(undefined4 *)(plVar2 + 7) = 0;
  *(undefined2 *)((long)plVar2 + 0x3c) = 0;
  plVar2[8] = 0;
  *(undefined4 *)(plVar2 + 9) = 0xffffffff;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  plVar6 = plVar2 + 0xc;
  *plVar6 = 0;
  lVar3 = plVar2[0xe];
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined1 *)(plVar2 + 0xf) = 0;
  *(undefined4 *)(plVar2 + 4) = *param_4;
  plVar2[2] = *(long *)(param_4 + 2);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = plVar2[3];
  plVar2[3] = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  plVar2[5] = param_1;
  lVar3 = *param_5;
  lVar4 = param_5[1];
  lVar5 = param_5[2];
  *(int *)(plVar2 + 9) = (int)param_5[3];
  plVar2[7] = lVar4;
  plVar2[8] = lVar5;
  plVar2[6] = lVar3;
  plVar2[10] = *(long *)(param_4 + 0xc);
  *(bool *)(plVar2 + 0xf) = param_4[0x16] == 1;
  if (param_4[0xe] == 1) {
    lVar3 = *(long *)(param_4 + 0x10);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = plVar2[0xb];
    plVar2[0xb] = lVar3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar3 = *(long *)(param_4 + 0x14);
    *plVar6 = *(long *)(param_4 + 0x12);
    plVar2[0xd] = lVar3;
  }
  else {
    lVar3 = *(long *)(param_4 + 0x14);
    *plVar6 = *(long *)(param_4 + 0x12);
    plVar2[0xd] = lVar3;
    lVar3 = *(long *)(param_4 + 0x10);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = plVar2[0xe];
    plVar2[0xe] = lVar3;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c7d588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


